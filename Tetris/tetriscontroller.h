#ifndef TETRISCONTROLLER_H
#define TETRISCONTROLLER_H
/* Подключаем библиотеки.
 * */
#include <QObject>
#include <QTimer>

/* Создаем два класса без класса-родителя.
 * */
class TetrisModel;
class TetrisView;

/* Создаем класс-наследник.
 * */
class TetrisController : QObject {
    Q_OBJECT
    /* const - используется для указания, что переменная не может быть изменена
     * */
    static const int STEP_TIME_INTERVAL = 33;

public:
    /* Создается публичная функция, принимающая 3 ссылки от объектов разных классов.
     * */
    TetrisController( TetrisModel* model, TetrisView* view, QObject* parent /* Родитель */ = 0 );

    /* Создаются публичные слоты.
     * */
public slots:
    void onStart();                                               // Cтарт.
    void onPause();                                               // Пауза.
    void onResume();                                              // Продолжение.
    void onStep();                                                // Шаг.

    void onMoveLeft();                                            // Двигать налево.
    void onMoveRight();                                           // Двигать направо.
    void onRotate();                                              // Вращать.

    void onDropEnabled( bool enabled );                           // Падение включено.

    void onTogglePause();                                         // Переключение паузы.

private:
    /* Оператор " :: " - это оператор расширения области видимости.
     * */
    void onAction( void ( TetrisModel::*action )() );

private:
    /* Создаются указатели на объекты класса.
     * */
    TetrisModel* m_model;
    TetrisView* m_view;
    /* Создается объект класса.
     * */
    QTimer m_timer;
};

#endif // TETRISCONTROLLER_H

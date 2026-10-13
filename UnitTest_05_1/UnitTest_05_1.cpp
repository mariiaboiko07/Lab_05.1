#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp" // Підключаємо основний файл з функцією k(x, y)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest051
{
    TEST_CLASS(UnitTest051)
    {
    public:

        // Сам юніт-тест вставляється всередину TEST_METHOD
        TEST_METHOD(TestMethod1)
        {
            // 1. Вхідні дані
            double x = 0.0;
            double y = 0.0;

            // 2. Очікуваний результат: k(0,0) = 0/(1+0) + 0/(1+0) = 0
            double expected = 0.0;

            // 3. Фактичний результат виконання вашої функції
            double actual = k(x, y);

            // 4. Перевірка (Assert)
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
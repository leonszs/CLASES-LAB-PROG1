/** \brief Ingreso 2 enteros y los sumo, devolviendo un entero;
 *
 * \param a int
 * \param b int
 * \return int
 *
 */
int suma(int a,int b)
{
    int resultado;
    resultado = a + b;

    return resultado;
}
/** \brief Ingreso 2 enteros y los resto, devolviendo un entero;
 *
 * \param a int
 * \param b int
 * \return int
 *
 */
int resta(int a,int b)
{
    int resultado;
    resultado = a - b;

    return resultado;
}
/** \brief Ingreso 2 enteros y los divido, devolviendo un float, por si el resto da con coma;
 *
 * \param a int
 * \param b int
 * \return int
 *
 */
float division(int a,int b)
{
    float resultado;
    resultado = a / (float) b;

    return resultado;
}
/** \brief Ingreso 2 enteros y los multiplico, devolviendo un entero;
 *
 * \param a int
 * \param b int
 * \return int
 *
 */
int multiplicacion(int a,int b)
{
    int resultado;
    resultado = a * b;

    return resultado;
}

/** \brief Ingreso 1 entero y saco su factorial, devolviendo un entero;
 *
 * \param a int
 * \return int
 *
 */
int factorial1(int a)
{

   int resultado;

    if (a == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = a* factorial1(a-1);
    }
    return resultado;
}

/** \brief Ingreso 1 entero y saco su factorial, devolviendo un entero;
 *
 * \param a int
 * \return int
 *
 */
int factorial2(int b)
{

   int resultado;

    if (b == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = b* factorial2(b-1);
    }
    return resultado;
}





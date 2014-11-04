using System;
using System.Windows.Forms;
using SGQ.View;
using SGQ.Controller;

namespace SGQ
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            
            LoginController controller = new LoginController();
            Application.Run(new LoginView(controller));
        }
    }
}
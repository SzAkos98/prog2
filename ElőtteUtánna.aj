public aspect ELőtteUtánna {
	public pointcut fgvHívás() : call(public void kiir());
	before(): fgvHívás() {
		System.out.println("Előtte");
	}
	after(): fgvHívás() {
		System.out.println("Utánna");
	}
}

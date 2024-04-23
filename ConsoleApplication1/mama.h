class triunghi {
private:
	double V1x, V1y, V2x, V2y, V3x, V3y;
public:
	triunghi(double, double, double, double, double, double);
	void setV1(double, double);
	void setV2(double, double);
	void setV3(double, double);
	double arie();
	double isDreptunghic();
	double getV1x();
	double getV1y();
	double getV2x();
	double getV2y();
	double getV3x();
	double getV3y();
};
/*
 * Recognizer.h
 *
 *  Created on: Aug 8, 2017
 *      Author: yildbs
 */

#ifndef RECOGNIZER_H_
#define RECOGNIZER_H_

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

namespace ylpr{

class Recognizer {
public:
	Recognizer();
	virtual ~Recognizer();
};

}

#endif /* RECOGNIZER_H_ */

/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GOF_VISITOR_IEMPLOYEE_H
#define GOF_VISITOR_IEMPLOYEE_H

namespace GoF {

    namespace Visitor {

        class IEmployeeVisitor;
        class IEmployee {
        public:
            virtual ~IEmployee()
            { }

            virtual void print() const = 0;
            virtual void setEarnings(double) = 0;
            virtual double getEarnings() const = 0;

            virtual void accept(IEmployeeVisitor *) = 0;

        };

    }

}

#endif

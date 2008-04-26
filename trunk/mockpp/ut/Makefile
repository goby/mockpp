

RM = rm -f
TARGET = ut

INCLUDE = -I. -I/usr/local/include 
CXXFLAGS = -g
DEFS = -DMOCKPP_ENABLE_DEFAULT_FORMATTER
LIBS = -L/usr/local/lib -lmockpp -lcppunit -ldl
OBJS = $(patsubst %.cpp, %.o, $(shell ls Test*.cpp))

all: $(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS)

$(TARGET) : $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LIBS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(DEFS) $(INCLUDE) -o $@ -c $<

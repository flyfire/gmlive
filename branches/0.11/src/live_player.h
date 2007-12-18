/*
 * =====================================================================================
 * 
 *       Filename:  live_player.h
 * 
 *    Description:  管理播放的父类
 * 
 *        Version:  1.0
 *        Created:  2007年12月03日 16时13分21秒 CST
 *       Revision:  none
 *       Compiler:  gcc
 * 
 *         Author:  wind (xihe), xihels@gmail.com
 *        Company:  cyclone
 * 
 * =====================================================================================
 */

#ifndef _LIVE_PLAYER_H_
#define _LIVE_PLAYER_H_

#include "gmplayer.h"

class LivePlayer {
	public:
		LivePlayer(GMplayer& gmp_): gmp(gmp_) {}
		virtual ~LivePlayer() {}
		virtual void play() = 0;
		virtual void stop() = 0;

		typedef sigc::signal<void, int> type_signal_status;
		type_signal_status signal_status()
		{ return signal_status_; }
		
	protected:
		type_signal_status  			signal_status_;

		GMplayer& gmp;
};
#endif // _LIVE_PLAYER_H_

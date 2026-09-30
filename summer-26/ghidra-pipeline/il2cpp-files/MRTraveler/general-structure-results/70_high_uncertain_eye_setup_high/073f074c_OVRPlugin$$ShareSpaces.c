/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 073f074c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16],
               float param_8)

{
  long in_x9;
  long in_x10;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_5._0_8_;
                    /* try { // try from 073f0758 to 074f0763 has its CatchHandler @ 073f07ec */
  uVar2 = param_3._0_8_;
  while( true ) {
    if (in_x9 == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38(uVar2,param_3._0_4_,uVar3);
    }
    lVar1 = *(long *)(in_x10 + param_1);
    if (lVar1 == 0) break;
    if (param_8 < *(float *)(lVar1 + 0x18)) {
                    /* try { // try from 073f0780 to 074f078f has its CatchHandler @ 073f07e8 */
      uVar2 = CONCAT44((param_3._4_4_ + (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20)) * 0.5
                       ,(param_3._0_4_ + (float)*(undefined8 *)(lVar1 + 0x20)) * 0.5);
      uVar3 = (ulong)(uint)((param_5._0_4_ + *(float *)(lVar1 + 0x28)) * 0.5);
      param_8 = *(float *)(lVar1 + 0x18);
    }
    param_1 = param_1 + 8;
    if (param_1 == 0x20) {
                    /* try { // try from 073f07a8 to 074f07bb has its CatchHandler @ 073f07f4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 03682c64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetAppCpuStartToGpuEndTime(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  uint unaff_w21;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03682c88:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
        return unaff_w21 & 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01eed990();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_03682c88;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}



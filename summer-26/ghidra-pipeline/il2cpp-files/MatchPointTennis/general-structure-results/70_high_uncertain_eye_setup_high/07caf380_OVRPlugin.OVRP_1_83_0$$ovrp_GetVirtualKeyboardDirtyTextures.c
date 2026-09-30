/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 07caf380
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardDirtyTextures
               (long param_1,float param_2,float param_3)

{
  ulong in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  ulong uVar1;
  long unaff_x19;
  
  while( true ) {
    *(float *)(in_x13 + in_x12 * 4) =
         param_2 * *(float *)(in_x13 + in_x12 * 4) + param_3 * *(float *)(param_1 + in_x12 * 4);
    if (in_x10 <= in_x12 + -7) break;
    if ((in_x11 == 0) || (in_x13 = *(long *)(in_x11 + 0x18), in_x13 == 0)) goto LAB_07caf3e4;
    uVar1 = in_x12 - 7;
    if ((*(uint *)(in_x13 + 0x18) <= uVar1) || (in_x12 = in_x12 + 1, in_x9 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
  FUN_07caf3ec();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
      return;
    }
    FUN_07cae2f4();
    return;
  }
LAB_07caf3e4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



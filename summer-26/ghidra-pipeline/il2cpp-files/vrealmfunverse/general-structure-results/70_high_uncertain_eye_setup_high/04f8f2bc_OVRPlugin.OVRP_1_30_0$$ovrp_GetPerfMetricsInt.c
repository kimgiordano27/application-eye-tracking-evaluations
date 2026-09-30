/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetPerfMetricsInt
ENTRY_POINT: 04f8f2bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetPerfMetricsInt(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  long in_stack_00000008;
  
  while( true ) {
    FUN_05c8cb28(param_1,0,0);
    do {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w20 == 0x1a) {
        *(undefined1 *)(unaff_x19 + 0x80) = 0;
        return;
      }
      uVar1 = FUN_04f8f978();
    } while ((uVar1 & 1) == 0);
    if (in_stack_00000008 == 0) break;
    FUN_05d1d794(in_stack_00000008,0);
    if ((in_stack_00000008 == 0) || (param_1 = FUN_05c89410(in_stack_00000008,0), param_1 == 0))
    break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 07ca1014
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStart(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  long in_stack_00000008;
  
  while( true ) {
    FUN_0952a454(param_1,param_2,param_3);
    do {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w20 == 0x1a) {
        *(undefined1 *)(unaff_x19 + 0x80) = 0;
        return;
      }
      uVar1 = FUN_07ca16c0();
    } while ((uVar1 & 1) == 0);
    if (in_stack_00000008 == 0) break;
    FUN_095bcc94(in_stack_00000008,0);
    if ((in_stack_00000008 == 0) || (param_1 = FUN_095259a0(in_stack_00000008,0), param_1 == 0))
    break;
    param_2 = 0;
    param_3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



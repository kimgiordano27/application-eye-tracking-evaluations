/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 036a480c
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


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((*param_1 != param_3) || (*unaff_x21 = param_1, *param_1 != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_1);
  }
  thunk_FUN_01f51358();
                    /* try { // try from 036a4844 to 037a48e3 has its CatchHandler @ 036a4984 */
  if (*(char *)(unaff_x20 + 0x71) == '\0') {
    return;
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x036a4860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



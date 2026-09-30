/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 04c2f8f4
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsSupported(void)

{
  int in_w8;
  undefined8 *unaff_x22;
  ulong uVar1;
  long unaff_x23;
  undefined8 *puVar2;
  undefined4 in_stack_00000000;
  
  puVar2 = *(undefined8 **)(unaff_x23 + 0x278);
  if (in_w8 == 0) {
                    /* try { // try from 04c2f900 to 04d2f9ff has its CatchHandler @ 04c2f6c0 */
    thunk_FUN_02cd038c();
  }
  uVar1 = (ulong)&stack0x00000000 | 8;
  FUN_042665fc(uVar1,*unaff_x22);
  in_stack_00000000 = 0xffffffff;
  FUN_030ca464(uVar1);
  FUN_04266610(uVar1,*puVar2);
  return;
}



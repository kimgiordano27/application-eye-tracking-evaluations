/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationAdvertisement
ENTRY_POINT: 056a7814
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *unaff_x19;
  
  if (*(int *)(*(long *)PTR_DAT_06a0d468 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_056a4688(param_1,param_2);
  if (iVar1 == 0) {
    *unaff_x19 = 0;
    LeanTween__value();
  }
  thunk_FUN_056a9c0c(&stack0x00000018,0);
  return iVar1 == 0;
}



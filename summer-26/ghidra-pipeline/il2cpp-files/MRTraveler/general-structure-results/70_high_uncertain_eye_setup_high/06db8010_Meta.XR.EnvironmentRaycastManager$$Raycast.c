/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 06db8010
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Raycast(long param_1)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x21;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  uVar1 = thunk_FUN_03cf5234(*unaff_x25);
  FUN_06a4d5f0(uVar1,uVar2,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x40),uVar1);
  uVar1 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_06a4d5c4(uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48),uVar1);
  FUN_07145224();
  return;
}



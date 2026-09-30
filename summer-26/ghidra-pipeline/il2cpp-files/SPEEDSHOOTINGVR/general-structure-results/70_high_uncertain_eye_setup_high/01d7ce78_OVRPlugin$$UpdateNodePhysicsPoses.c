/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 01d7ce78
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0xc0));
  *(undefined1 *)(unaff_x20 + 0x7a6) = 1;
  puVar1 = PTR_DAT_02351078;
  uVar2 = FUN_00fd8574();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x21);
  }
  uVar3 = OVRSimpleJSON_JSONObject_<>c__DisplayClass21_0___ctor(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)puVar1);
  }
  FUN_01c70864(uVar2,uVar3,0);
  return;
}



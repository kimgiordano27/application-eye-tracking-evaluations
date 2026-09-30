/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 06e10444
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__EndInvoke
          (undefined1 param_1 [16])

{
  int in_w8;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1._8_8_;
  uVar1 = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  *(int *)(unaff_x19 + 8) = in_w8 + 1;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  return 0;
}



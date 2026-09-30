/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$BeginInvoke
ENTRY_POINT: 08a3a41c
PROGRAM: Hyper-libil2cpp.so
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
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__BeginInvoke(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    uVar3 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac52de8);
  }
  else {
    uVar3 = *(undefined8 *)PTR_DAT_0ac52df0;
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar1 = thunk_FUN_04983f60(*unaff_x23);
  Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate___ctor(uVar1,uVar2,uVar3);
  return uVar1;
}



/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetSkeletalBoneData$$EndInvoke
ENTRY_POINT: 04f1d680
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRInput__GetSkeletalBoneData__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = System_Converter<IUpdateDriver,_Object>_TypeInfo;
  puVar1 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  if ((DAT_066c989c & 1) == 0) {
    FUN_02b3c81c(System_Converter<IUpdateDriver,_Object>_TypeInfo);
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    DAT_066c989c = 1;
  }
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04dbdb8c(uVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar3);
  return;
}



/*
FUNCTION_NAME: FUN_06ae39d0
ENTRY_POINT: 06ae39d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06ae39d0(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  puVar6 = OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo;
  puVar5 = OVRMicrogestureEventSource_<>c_TypeInfo;
  puVar4 = OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo;
  puVar3 = OVRMesh_IOVRMeshDataProvider_TypeInfo;
  puVar2 = OVRManager_XrApi_TypeInfo;
  puVar1 = OVRManager_SystemHeadsetType_TypeInfo;
  if ((DAT_073ab324 & 1) == 0) {
    FUN_02fe925c(OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
    FUN_02fe925c(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_02fe925c(OVRManager_XrApi_TypeInfo);
    FUN_02fe925c(OVRMicrogestureEventSource_<>c_TypeInfo);
    FUN_02fe925c(OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo);
    FUN_02fe925c(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    DAT_073ab324 = 1;
  }
  local_5c = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_54 = 0;
  local_60 = 0x3f800000;
  local_a8 = FUN_04bc3328(*(undefined8 *)puVar1);
  thunk_FUN_03048534(&local_a8,0);
  local_a0 = FUN_04bc37e8(*(undefined8 *)puVar2);
  thunk_FUN_03048534(&local_a0,0);
  uStack_98 = FUN_04bc3ca8(*(undefined8 *)puVar3);
  thunk_FUN_03048534(&uStack_98,0);
  local_90 = FUN_04bc4168(*(undefined8 *)puVar4);
  thunk_FUN_03048534(&local_90,0);
  local_88 = FUN_04bc4628(*(undefined8 *)puVar5);
  thunk_FUN_03048534(&local_88,0);
  local_80 = FUN_04bc4ae0(*(undefined8 *)puVar6);
  thunk_FUN_03048534(&local_80,0);
  memcpy(param_1,&local_a8,0x58);
  return;
}



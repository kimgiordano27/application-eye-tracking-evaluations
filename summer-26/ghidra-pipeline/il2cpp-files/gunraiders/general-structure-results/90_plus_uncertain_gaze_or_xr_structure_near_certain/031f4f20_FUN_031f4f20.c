/*
FUNCTION_NAME: FUN_031f4f20
ENTRY_POINT: 031f4f20
PROGRAM: gunraiders-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_031f4f20(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo;
  if ((DAT_045326d3 & 1) == 0) {
    FUN_01c5d288(DarkTonic_MasterAudio_MusicSetting_<>c__DisplayClass32_1_TypeInfo);
    FUN_01c5d288(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_01c5d288(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_01c5d288(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_01c5d288(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_01c5d288(OVRPlugin_GUID_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_045326d3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar2 = System_Number_NumberBuffer__get_digits(param_1,param_2);
  *param_3 = lVar2;
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)OVRPermissionsRequester_<>c_TypeInfo);
    FUN_02b6841c(uVar3,0,*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,0)
    ;
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_GUID_TypeInfo);
    FUN_031f529c(uVar4,param_1,0);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)OVRPermissionsRequester_Permission_TypeInfo);
    FUN_02b6cf9c(uVar5,uVar4,*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo,0);
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar2 = FUN_032ec8e8(param_2,uVar3,uVar5,0,0);
    *param_3 = lVar2;
  }
  return;
}



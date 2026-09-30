/*
FUNCTION_NAME: FUN_07de42d8
ENTRY_POINT: 07de42d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_20;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07de42d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar1 = OVRPermissionsRequester_Permission_TypeInfo;
                    /* try { // try from 07de42e8 to 07ee4313 has its CatchHandler @ 07de4368 */
  if ((DAT_0899a184 & 1) == 0) {
    FUN_03a8a718(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_03a8a718(OVRPlugin_<>c_TypeInfo);
                    /* try { // try from 07de4328 to 07ee4347 has its CatchHandler @ 07de436c */
    FUN_03a8a718(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_03a8a718(OVRPlugin_BodyJointSet_TypeInfo);
                    /* try { // try from 07de4348 to 07ee437b has its CatchHandler @ 07de422c */
    FUN_03a8a718(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_03a8a718(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_03a8a718(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_03a8a718(OVRPlugin_GUID_TypeInfo);
    FUN_03a8a718(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_0899a184 = 1;
  }
  puVar10 = OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo;
  puVar9 = OVRPlugin_GUID_TypeInfo;
  puVar8 = OVRPlugin_EyeTextureFormat_TypeInfo;
  puVar7 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  puVar6 = OVRPlugin_BodyJointSet_TypeInfo;
  puVar5 = OVRPlugin_BodyJointLocation_TypeInfo;
  puVar4 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
  puVar3 = OVRPlugin_<>c_TypeInfo;
  puVar2 = UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05d7f9e0(param_1,*(undefined8 *)puVar6);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
  FUN_07de4484();
  FUN_043c5dc4(param_1,uVar11,*(undefined8 *)puVar4);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar8);
  FUN_07de44fc();
  FUN_043c5dc4(param_1,uVar11,*(undefined8 *)puVar3);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar7);
  FUN_07de4574();
  FUN_043c5dc4(param_1,uVar11,*(undefined8 *)puVar2);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar10);
  FUN_07de45ec();
  FUN_043c5dc4(param_1,uVar11,*(undefined8 *)puVar5);
  return;
}



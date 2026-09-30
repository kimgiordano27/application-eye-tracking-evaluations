/*
FUNCTION_NAME: FUN_06391a28
ENTRY_POINT: 06391a28
PROGRAM: Untangled-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_16;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_6;functionality_possible_biometrics_hits_4
*/


void FUN_06391a28(void)

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
  undefined4 uVar11;
  
  puVar10 = OVRPassthroughLayer_SerializedSurfaceGeometry_var;
  puVar9 = OVRPassthroughLayer_DeferredPassthroughMeshAddition_var;
  puVar8 = OVROverlay_LayerTexture_var;
  puVar7 = OVRNativeList_CapacityHelper_var;
  puVar6 = OVRLocatable_TrackingSpacePose_var;
  puVar5 = OVRGLTFAccessor_GLTFAccessor_var;
  puVar4 = OVRFaceExpressions_FaceExpression_var;
  puVar3 = OVRAnchor_FetchTaskData_var;
  puVar2 = OVRAnchor_FetchOptions_var;
  puVar1 = PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var;
  if ((DAT_071cd43e & 1) == 0) {
    FUN_02f07e70(PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var);
    FUN_02f07e70(PlayFab_ClientModels_GetPlayFabIDsFromNintendoServiceAccountIdsRequest_var);
    FUN_02f07e70(OVRGLTFAccessor_GLTFAccessor_var);
    FUN_02f07e70(OVRPassthroughLayer_Settings_var);
    FUN_02f07e70(OVRPlugin_SpaceQueryResult_var);
    FUN_02f07e70(OVRFaceExpressions_FaceExpression_var);
    FUN_02f07e70(OVRAnchor_FetchOptions_var);
    FUN_02f07e70(OVRPlugin_Vector3f_var);
    FUN_02f07e70(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    FUN_02f07e70(System_Array_var);
    FUN_02f07e70(OVRRaycaster_RaycastHit_var);
    FUN_02f07e70(OVRSceneLoader_SceneInfo_var);
    FUN_02f07e70(OVRNativeList_CapacityHelper_var);
    FUN_02f07e70(OVRSpaceQuery_Options_var);
    FUN_02f07e70(OVRPassthroughLayer_SerializedSurfaceGeometry_var);
    FUN_02f07e70(OVRSpatialAnchor_LoadOptions_var);
    FUN_02f07e70(OVRSpatialAnchor_MultiAnchorDelegatePair_var);
    FUN_02f07e70(OVRPassthroughLayer_DeferredPassthroughMeshAddition_var);
    FUN_02f07e70(System_Xml_Serialization_XmlEnumAttribute_var);
    FUN_02f07e70(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
    FUN_02f07e70(PlayFab_ClientModels_GetSharedGroupDataRequest_var);
    FUN_02f07e70(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
    FUN_02f07e70(
                UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                );
    FUN_02f07e70(UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var);
    FUN_02f07e70(OVROverlay_LayerTexture_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var);
    FUN_02f07e70(PTR_DAT_06d963a0);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_Burst_var);
    FUN_02f07e70(PTR_DAT_06d96398);
    FUN_02f07e70(UnityEngine_ParticleSystem_CollisionModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_ColorBySpeedModule_var);
    FUN_02f07e70(System_Xml_Serialization_XmlIncludeAttribute_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_ColorOverLifetimeModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_CustomDataModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_EmissionModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_ExternalForcesModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_ForceOverLifetimeModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_InheritVelocityModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_LightsModule_var);
    FUN_02f07e70(PTR_DAT_06d96388);
    FUN_02f07e70(UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_var);
    FUN_02f07e70(
                Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                );
    FUN_02f07e70(UnityEngine_ParticleSystem_MainModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_MinMaxCurve_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_MinMaxGradient_var);
    FUN_02f07e70(OVRAnchor_FetchTaskData_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_NoiseModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_RotationBySpeedModule_var);
    FUN_02f07e70(OVRLocatable_TrackingSpacePose_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_RotationOverLifetimeModule_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_ShapeModule_var);
    FUN_02f07e70(PlayFab_GroupsModels_ApplyToGroupResponse_var);
    FUN_02f07e70(UnityEngine_ParticleSystem_SizeBySpeedModule_var);
    DAT_071cd43e = 1;
  }
  uVar11 = FUN_066a0664(*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_CollisionModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_LightsModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRSpatialAnchor_MultiAnchorDelegatePair_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_InheritVelocityModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_NoiseModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_ExternalForcesModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_EmissionModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_ForceOverLifetimeModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_MainModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRPlugin_Vector3f_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRSpaceQuery_Options_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRSpatialAnchor_LoadOptions_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_RotationOverLifetimeModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRPassthroughLayer_Settings_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 100) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_CustomDataModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_MinMaxCurve_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_RotationBySpeedModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_SizeBySpeedModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x74) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRRaycaster_RaycastHit_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x7c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_MinMaxGradient_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x84) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)PlayFab_ClientModels_GetSharedGroupDataRequest_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x8c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_Burst_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRSceneLoader_SceneInfo_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x94) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRPlugin_SpaceQueryResult_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)PlayFab_GroupsModels_ApplyToGroupResponse_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)System_Array_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)PTR_DAT_06d96388,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)PTR_DAT_06d96398,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xac) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)PTR_DAT_06d963a0,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         PlayFab_ClientModels_GetPlayFabIDsFromNintendoServiceAccountIdsRequest_var,
                        0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xbc) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc0) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_ColorBySpeedModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 200) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_ColorOverLifetimeModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xcc) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)UnityEngine_ParticleSystem_ShapeModule_var,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xd0) = uVar11;
  return;
}



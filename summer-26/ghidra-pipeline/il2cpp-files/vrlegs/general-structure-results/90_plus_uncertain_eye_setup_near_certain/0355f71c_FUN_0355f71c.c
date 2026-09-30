/*
FUNCTION_NAME: FUN_0355f71c
ENTRY_POINT: 0355f71c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_0355f71c(void)

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
  
  puVar10 = OVRSceneManager_<>c__DisplayClass45_0_TypeInfo;
  puVar9 = OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo;
  puVar8 = OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
  puVar7 = OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo;
  puVar6 = OVRResources_<>c__DisplayClass2_0_TypeInfo;
  puVar5 = OVRRaycaster_<>c_TypeInfo;
  puVar4 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  puVar3 = OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo;
  puVar2 = OVRPlugin_Vector4s_TypeInfo;
  puVar1 = OVRPlugin_Vector4f_TypeInfo;
  if ((DAT_0412df69 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Vector4s_TypeInfo);
    FUN_01ab69ac(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_<>c__DisplayClass51_0_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_<>c__DisplayClass54_0_TypeInfo);
    FUN_01ab69ac(OVRRaycaster_<>c_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_Classification_TypeInfo);
    FUN_01ab69ac(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Vector4f_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_RoomLayoutInformation_TypeInfo);
    FUN_01ab69ac(OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo);
    FUN_01ab69ac(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
    FUN_01ab69ac(OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo);
    FUN_01ab69ac(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_01ab69ac(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
    FUN_01ab69ac(OVRScreenFade_<Fade>d__25_TypeInfo);
    FUN_01ab69ac(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    FUN_01ab69ac(OVRSkeleton_BoneId_TypeInfo);
    FUN_01ab69ac(OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo);
    FUN_01ab69ac(OVRSkeletonRenderer_BoneVisualization_TypeInfo);
    FUN_01ab69ac(OVRResources_<>c__DisplayClass2_0_TypeInfo);
    DAT_0412df69 = 1;
  }
  uVar11 = FUN_03669658(*(undefined8 *)puVar1,1,0,0,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar4,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo,1,
                        0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSkeleton_BoneId_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneManager_Classification_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass54_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass51_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98) = uVar11;
  return;
}



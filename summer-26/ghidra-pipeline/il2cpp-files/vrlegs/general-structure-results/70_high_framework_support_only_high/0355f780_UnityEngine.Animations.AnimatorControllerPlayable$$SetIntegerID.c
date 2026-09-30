/*
FUNCTION_NAME: UnityEngine.Animations.AnimatorControllerPlayable$$SetIntegerID
ENTRY_POINT: 0355f780
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Animations_AnimatorControllerPlayable__SetIntegerID(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 *puVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xa70);
  puVar2 = *(undefined8 **)(unaff_x21 + 0xa78);
  if ((*(byte *)(unaff_x29 + 0xf69) & 1) == 0) {
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
    *(undefined1 *)(unaff_x29 + 0xf69) = 1;
  }
  uVar1 = FUN_03669658(*unaff_x20,1,0,0,0);
  **(undefined8 **)(*unaff_x19 + 0xb8) = uVar1;
  uVar1 = FUN_03669658(*unaff_x28,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
  uVar1 = FUN_03669658(*unaff_x27,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = uVar1;
  uVar1 = FUN_03669658(*unaff_x26,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = uVar1;
  uVar1 = FUN_03669658(*unaff_x25,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x20) = uVar1;
  uVar1 = FUN_03669658(*unaff_x24,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x28) = uVar1;
  uVar1 = FUN_03669658(*unaff_x23,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x30) = uVar1;
  uVar1 = FUN_03669658(*puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_03669658(*puVar2,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x48) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo,1,0
                       ,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x50) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSkeleton_BoneId_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x58) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x60) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x68) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneManager_Classification_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x70) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x78) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,1,0,0
                       ,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x80) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass54_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x88) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x90) = uVar1;
  uVar1 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass51_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x98) = uVar1;
  return;
}



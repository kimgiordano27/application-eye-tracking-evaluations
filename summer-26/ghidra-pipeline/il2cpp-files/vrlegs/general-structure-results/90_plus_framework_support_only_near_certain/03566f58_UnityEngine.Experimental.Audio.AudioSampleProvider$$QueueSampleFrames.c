/*
FUNCTION_NAME: UnityEngine.Experimental.Audio.AudioSampleProvider$$QueueSampleFrames
ENTRY_POINT: 03566f58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Experimental_Audio_AudioSampleProvider__QueueSampleFrames(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long unaff_x29;
  
  puVar8 = OVRSceneManager_<>c__DisplayClass45_0_TypeInfo;
  puVar7 = OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo;
  puVar6 = OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
  puVar5 = OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo;
  puVar4 = OVRResources_<>c__DisplayClass2_0_TypeInfo;
  puVar3 = OVRRaycaster_<>c_TypeInfo;
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo;
  puVar11 = *(undefined8 **)(unaff_x20 + 0xb38);
  plVar10 = *(long **)(unaff_x19 + 0xb40);
  if ((*(byte *)(unaff_x29 + 0xf9e) & 1) == 0) {
    FUN_01ab69ac(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_01ab69ac(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_01ab69ac(OVRTelemetry_QPLTelemetryClient_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_<>c__DisplayClass51_0_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_<>c__DisplayClass54_0_TypeInfo);
    FUN_01ab69ac(OVRRaycaster_<>c_TypeInfo);
    FUN_01ab69ac(OVRSceneManager_Classification_TypeInfo);
    FUN_01ab69ac(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
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
    *(undefined1 *)(unaff_x29 + 0xf9e) = 1;
  }
  uVar9 = FUN_03669658(*puVar11,1,0,0,0);
  **(undefined8 **)(*plVar10 + 0xb8) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar1,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 8) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar2,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x10) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x18) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar4,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x20) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x28) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x30) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x38) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x40) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x48) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo,1,0
                       ,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x50) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSkeleton_BoneId_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x58) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x60) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x68) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneManager_Classification_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x70) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x78) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,1,0,0
                       ,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x80) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass54_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x88) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x90) = uVar9;
  uVar9 = FUN_03669658(*(undefined8 *)OVRSceneManager_<>c__DisplayClass51_0_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x98) = uVar9;
  return;
}



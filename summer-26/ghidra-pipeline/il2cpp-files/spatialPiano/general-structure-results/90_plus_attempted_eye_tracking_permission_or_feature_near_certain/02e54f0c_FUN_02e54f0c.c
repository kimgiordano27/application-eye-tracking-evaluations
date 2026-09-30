/*
FUNCTION_NAME: FUN_02e54f0c
ENTRY_POINT: 02e54f0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 178
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_3;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_9;functionality_possible_biometrics_hits_2
*/


void FUN_02e54f0c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = OVRGLTFComponentType_TypeInfo;
  puVar7 = OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
  puVar6 = OVRGLTFAnimatinonNode_TypeInfo;
  puVar5 = OVRGLTFAccessor_TypeInfo;
  puVar4 = OVRFaceExpressions_TypeInfo;
  puVar3 = OVREyeGaze_TypeInfo;
  puVar2 = OVRExternalComposition_TypeInfo;
  puVar1 = OVRDynamicObject_TypeInfo;
  if ((DAT_06bbd837 & 1) == 0) {
    FUN_02f08768(OVRGLTFLoader_TypeInfo);
    FUN_02f08768(OVRGLTFType_TypeInfo);
    FUN_02f08768(OVRGazePointer_TypeInfo);
    FUN_02f08768(OVRFaceExpressions_TypeInfo);
    FUN_02f08768(OVRHandSkeletonVersion_TypeInfo);
    FUN_02f08768(OVRHandTest_TypeInfo);
    FUN_02f08768(OVRHaptics_TypeInfo);
    FUN_02f08768(OVRHapticsClip_TypeInfo);
    FUN_02f08768(OVRHumanBodyBonesMappingsInterface_TypeInfo);
    FUN_02f08768(OVRInput_TypeInfo);
    FUN_02f08768(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
    FUN_02f08768(OVRLocatable_TypeInfo);
    FUN_02f08768(OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_02f08768(OVRGLTFComponentType_TypeInfo);
    FUN_02f08768(OVRManager_TypeInfo);
    FUN_02f08768(OVRMarkerPayload_TypeInfo);
    FUN_02f08768(OVRGLTFAccessor_TypeInfo);
    FUN_02f08768(OVRMarkerPayloadType_TypeInfo);
    FUN_02f08768(OVRMeshRenderer_TypeInfo);
    FUN_02f08768(OVRMixedReality_TypeInfo);
    FUN_02f08768(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_02f08768(OVRNativeBuffer_TypeInfo);
    FUN_02f08768(OVRExternalComposition_TypeInfo);
    FUN_02f08768(OVREyeGaze_TypeInfo);
    FUN_02f08768(OVRNodeStateProperties_TypeInfo);
    FUN_02f08768(OVROverlay_TypeInfo);
    FUN_02f08768(OVRDynamicObject_TypeInfo);
    FUN_02f08768(OVROverlayCanvas_TypeInfo);
    FUN_02f08768(OVROverlayCanvasManager_TypeInfo);
    FUN_02f08768(OVROverlayCanvasSettings_TypeInfo);
    FUN_02f08768(OVRGLTFAnimatinonNode_TypeInfo);
    FUN_02f08768(OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_02f08768(OVRPassthroughColorLut_TypeInfo);
    FUN_02f08768(OVRPassthroughLayer_TypeInfo);
    FUN_02f08768(OVRPermissionsRequester_TypeInfo);
    FUN_02f08768(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_02f08768(OVRPlatformMenu_TypeInfo);
    FUN_02f08768(OVRPlugin_TypeInfo);
    FUN_02f08768(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
    FUN_02f08768(Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    FUN_02f08768(OVRPose_TypeInfo);
    FUN_02f08768(OVRProfile_TypeInfo);
    FUN_02f08768(OVRRaycaster_TypeInfo);
    FUN_02f08768(OVRResources_TypeInfo);
    FUN_02f08768(OVRRoomLayout_TypeInfo);
    FUN_02f08768(OVRRuntimeController_TypeInfo);
    FUN_02f08768(OVRRuntimeSettings_TypeInfo);
    DAT_06bbd837 = 1;
  }
  uVar9 = OVRTask<bool>__ContinueWith<object>(*param_1,*(undefined8 *)puVar1);
  uVar10 = *param_1;
  *param_2 = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar10,*(undefined8 *)puVar1);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[1],*(undefined8 *)puVar2);
  uVar11 = param_1[1];
  uVar10 = *(undefined8 *)puVar2;
  param_2[1] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[2],*(undefined8 *)puVar3);
  uVar11 = param_1[2];
  uVar10 = *(undefined8 *)puVar3;
  param_2[2] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[3],*(undefined8 *)puVar4);
  uVar11 = param_1[3];
  uVar10 = *(undefined8 *)puVar4;
  param_2[3] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[4],*(undefined8 *)puVar5);
  uVar11 = param_1[4];
  uVar10 = *(undefined8 *)puVar5;
  param_2[4] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[5],*(undefined8 *)puVar6);
  uVar11 = param_1[5];
  uVar10 = *(undefined8 *)puVar6;
  param_2[5] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[6],*(undefined8 *)puVar7);
  uVar11 = param_1[6];
  uVar10 = *(undefined8 *)puVar7;
  param_2[6] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[7],*(undefined8 *)puVar8);
  uVar11 = param_1[7];
  uVar10 = *(undefined8 *)puVar8;
  param_2[7] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRNativeBuffer_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[8],*(undefined8 *)OVRNativeBuffer_TypeInfo);
  uVar11 = param_1[8];
  uVar10 = *(undefined8 *)puVar1;
  param_2[8] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[9],*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                    );
  uVar11 = param_1[9];
  uVar10 = *(undefined8 *)puVar1;
  param_2[9] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRResources_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[10],*(undefined8 *)OVRResources_TypeInfo);
  uVar11 = param_1[10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[10] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRManager_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0xb],*(undefined8 *)OVRManager_TypeInfo);
  uVar11 = param_1[0xb];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xb] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRRaycaster_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0xc],*(undefined8 *)OVRRaycaster_TypeInfo);
  uVar11 = param_1[0xc];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xc] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVROverlayCanvas_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0xd],*(undefined8 *)OVROverlayCanvas_TypeInfo)
  ;
  uVar11 = param_1[0xd];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xd] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVROverlay_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0xe],*(undefined8 *)OVROverlay_TypeInfo);
  uVar11 = param_1[0xe];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xe] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVROverlayCanvasManager_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0xf],*(undefined8 *)OVROverlayCanvasManager_TypeInfo);
  uVar11 = param_1[0xf];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xf] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVROverlayCanvas_TMPChanged_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x10],*(undefined8 *)OVROverlayCanvas_TMPChanged_TypeInfo);
  uVar11 = param_1[0x10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x10] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRGazePointer_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x11],*(undefined8 *)OVRGazePointer_TypeInfo);
  uVar11 = param_1[0x11];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x11] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPassthroughLayer_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x12],*(undefined8 *)OVRPassthroughLayer_TypeInfo);
  uVar11 = param_1[0x12];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x12] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRInput_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x13],*(undefined8 *)OVRInput_TypeInfo);
  uVar11 = param_1[0x13];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x13] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPassthroughColorLut_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x14],*(undefined8 *)OVRPassthroughColorLut_TypeInfo);
  uVar11 = param_1[0x14];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x14] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x15],
                     *(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
  uVar11 = param_1[0x15];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x15] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRHaptics_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x16],*(undefined8 *)OVRHaptics_TypeInfo);
  uVar11 = param_1[0x16];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x16] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRMarkerPayloadType_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x17],*(undefined8 *)OVRMarkerPayloadType_TypeInfo);
  uVar11 = param_1[0x17];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x17] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRMixedReality_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x18],*(undefined8 *)OVRMixedReality_TypeInfo)
  ;
  uVar11 = param_1[0x18];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x18] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPermissionsRequester_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x19],*(undefined8 *)OVRPermissionsRequester_TypeInfo);
  uVar11 = param_1[0x19];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x19] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRMixedRealityCaptureConfiguration_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x1a],*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo);
  uVar11 = param_1[0x1a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1a] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRHandTest_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x1b],*(undefined8 *)OVRHandTest_TypeInfo);
  uVar11 = param_1[0x1b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1b] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVROverlayCanvasSettings_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x1c],*(undefined8 *)OVROverlayCanvasSettings_TypeInfo);
  uVar11 = param_1[0x1c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1c] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRNodeStateProperties_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x1d],*(undefined8 *)OVRNodeStateProperties_TypeInfo);
  uVar11 = param_1[0x1d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1d] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRProfile_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x1e],*(undefined8 *)OVRProfile_TypeInfo);
  uVar11 = param_1[0x1e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1e] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPose_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x1f],*(undefined8 *)OVRPose_TypeInfo);
  uVar11 = param_1[0x1f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1f] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRMarkerPayload_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x20],*(undefined8 *)OVRMarkerPayload_TypeInfo);
  uVar11 = param_1[0x20];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x20] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRMeshRenderer_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x21],*(undefined8 *)OVRMeshRenderer_TypeInfo)
  ;
  uVar11 = param_1[0x21];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x21] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRLocatable_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x22],*(undefined8 *)OVRLocatable_TypeInfo);
  uVar11 = param_1[0x22];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x22] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = UnityEngine_EventSystems_OVRInputModule_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x23],*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo);
  uVar11 = param_1[0x23];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x23] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRRuntimeSettings_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x24],*(undefined8 *)OVRRuntimeSettings_TypeInfo);
  uVar11 = param_1[0x24];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x24] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRHapticsClip_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x25],*(undefined8 *)OVRHapticsClip_TypeInfo);
  uVar11 = param_1[0x25];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x25] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRHumanBodyBonesMappingsInterface_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x26],*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo);
  uVar11 = param_1[0x26];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x26] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPlatformMenu_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x27],*(undefined8 *)OVRPlatformMenu_TypeInfo)
  ;
  uVar11 = param_1[0x27];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x27] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRPlugin_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x28],*(undefined8 *)OVRPlugin_TypeInfo);
  uVar11 = param_1[0x28];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x28] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRRoomLayout_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x29],*(undefined8 *)OVRRoomLayout_TypeInfo);
  uVar11 = param_1[0x29];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x29] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRRuntimeController_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x2a],*(undefined8 *)OVRRuntimeController_TypeInfo);
  uVar11 = param_1[0x2a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2a] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRHandSkeletonVersion_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x2b],*(undefined8 *)OVRHandSkeletonVersion_TypeInfo);
  uVar11 = param_1[0x2b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2b] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>
                    (param_1[0x2c],
                     *(undefined8 *)Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
  uVar11 = param_1[0x2c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2c] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRGLTFLoader_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x2d],*(undefined8 *)OVRGLTFLoader_TypeInfo);
  uVar11 = param_1[0x2d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2d] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  puVar1 = OVRGLTFType_TypeInfo;
  uVar9 = OVRTask<bool>__ContinueWith<object>(param_1[0x2e],*(undefined8 *)OVRGLTFType_TypeInfo);
  uVar11 = param_1[0x2e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2e] = uVar9;
  OVRTask<bool>__ContinueWith<object>(uVar11,uVar10);
  return;
}



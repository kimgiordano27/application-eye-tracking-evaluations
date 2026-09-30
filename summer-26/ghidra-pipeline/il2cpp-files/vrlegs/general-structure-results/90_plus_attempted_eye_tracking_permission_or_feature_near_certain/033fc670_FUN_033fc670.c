/*
FUNCTION_NAME: FUN_033fc670
ENTRY_POINT: 033fc670
PROGRAM: vrlegs-libil2cpp.so
SCORE: 111
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_033fc670(void)

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
  
  puVar10 = System_Xml_Schema_Numeric10FacetsChecker_TypeInfo;
  puVar9 = XRIF__Support_Energy_NumberUtils_TypeInfo;
  puVar8 = MS_Internal_Xml_XPath_NumberFunctions_TypeInfo;
  puVar7 = System_Globalization_NumberFormatInfo_TypeInfo;
  puVar6 = System_Number_TypeInfo;
  puVar5 = System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo;
  puVar4 = Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo;
  puVar3 = VRMShaders_NextFrameTaskScheduler_TypeInfo;
  puVar2 = Unity_Services_Core_Internal_Serialization_NewtonsoftSerializer_TypeInfo;
  puVar1 = Fusion_NetworkRunner_TypeInfo;
  if ((DAT_0412d50a & 1) == 0) {
    FUN_01ab69ac(Fusion_NetworkRunner_TypeInfo);
    FUN_01ab69ac(System_Xml_Schema_Numeric2FacetsChecker_TypeInfo);
    FUN_01ab69ac(MS_Internal_Xml_XPath_NumericExpr_TypeInfo);
    FUN_01ab69ac(UnityEngine_NumericFieldDraggerUtility_TypeInfo);
    FUN_01ab69ac(System_Threading_OSSpecificSynchronizationContext_TypeInfo);
    FUN_01ab69ac(FMOD_OUTPUTTYPE_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo);
    FUN_01ab69ac(OVRAnchor_TypeInfo);
    FUN_01ab69ac(OVRAnchorContainer_TypeInfo);
    FUN_01ab69ac(Unity_Services_Core_Internal_Serialization_NewtonsoftSerializer_TypeInfo);
    FUN_01ab69ac(OVRBody_TypeInfo);
    FUN_01ab69ac(OVRBone_TypeInfo);
    FUN_01ab69ac(Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo);
    FUN_01ab69ac(System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01ab69ac(OVRBoneCapsule_TypeInfo);
    FUN_01ab69ac(OVRBoundary_TypeInfo);
    FUN_01ab69ac(XRIF__Support_Energy_NumberUtils_TypeInfo);
    FUN_01ab69ac(OVRBounded2D_TypeInfo);
    FUN_01ab69ac(System_Number_TypeInfo);
    FUN_01ab69ac(OVRBounded3D_TypeInfo);
    FUN_01ab69ac(OVRControllerTest_TypeInfo);
    FUN_01ab69ac(OVRDisplay_TypeInfo);
    FUN_01ab69ac(OVRExternalComposition_TypeInfo);
    FUN_01ab69ac(VRMShaders_NextFrameTaskScheduler_TypeInfo);
    FUN_01ab69ac(OVREyeGaze_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo);
    FUN_01ab69ac(OVRFaceExpressions_TypeInfo);
    FUN_01ab69ac(OVRGLTFAccessor_TypeInfo);
    FUN_01ab69ac(OVRGLTFAnimatinonNode_TypeInfo);
    FUN_01ab69ac(OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_01ab69ac(OVRGLTFComponentType_TypeInfo);
    FUN_01ab69ac(OVRGLTFLoader_TypeInfo);
    FUN_01ab69ac(OVRGLTFType_TypeInfo);
    FUN_01ab69ac(OVRGazePointer_TypeInfo);
    FUN_01ab69ac(OVRHandTest_TypeInfo);
    FUN_01ab69ac(OVRHumanBodyBonesMappingsInterface_TypeInfo);
    FUN_01ab69ac(OVRInput_TypeInfo);
    FUN_01ab69ac(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
    FUN_01ab69ac(OVRLocatable_TypeInfo);
    FUN_01ab69ac(OVRManager_TypeInfo);
    FUN_01ab69ac(OVRMixedReality_TypeInfo);
    FUN_01ab69ac(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_01ab69ac(OVRNativeBuffer_TypeInfo);
    FUN_01ab69ac(OVRNodeStateProperties_TypeInfo);
    FUN_01ab69ac(System_NullConsoleDriver_TypeInfo);
    FUN_01ab69ac(MS_Internal_Xml_XPath_NumberFunctions_TypeInfo);
    FUN_01ab69ac(OVROverlay_TypeInfo);
    FUN_01ab69ac(System_Xml_Schema_Numeric10FacetsChecker_TypeInfo);
    FUN_01ab69ac(OVROverlayCanvas_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_NullConstant_TypeInfo);
    DAT_0412d50a = 1;
  }
  uVar11 = FUN_03691af8(*(undefined8 *)puVar3,0);
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar2,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFAnimatinonNode_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)Mono_CSharp_NullConstant_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)System_NullConsoleDriver_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBounded3D_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRAnchor_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)UnityEngine_NumericFieldDraggerUtility_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRAnchorContainer_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVROverlay_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBoundary_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBounded2D_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRControllerTest_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBoneCapsule_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRInput_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRFaceExpressions_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 100) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBone_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)FMOD_OUTPUTTYPE_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVREyeGaze_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x74) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFType_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x7c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFComponentType_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRHandTest_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x84) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x8c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRMixedReality_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRDisplay_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x94) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGazePointer_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFAccessor_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRExternalComposition_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVROverlayCanvas_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa4) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)System_Threading_OSSpecificSynchronizationContext_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xac) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRGLTFLoader_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRNativeBuffer_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb4) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRBody_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRLocatable_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xbc) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)OVRManager_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc0) = uVar11;
  return;
}



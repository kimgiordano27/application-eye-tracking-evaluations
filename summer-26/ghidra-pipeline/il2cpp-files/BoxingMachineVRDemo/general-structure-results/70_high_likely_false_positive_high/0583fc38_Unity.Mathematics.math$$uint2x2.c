/*
FUNCTION_NAME: Unity.Mathematics.math$$uint2x2
ENTRY_POINT: 0583fc38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4
*/


void Unity_Mathematics_math__uint2x2(long param_1)

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
  undefined8 uVar10;
  
  puVar9 = UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo;
  puVar8 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
  puVar7 = Unity_Burst_BurstString_NumberFormatKind_TypeInfo;
  puVar6 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_PostfixBurstDelegate_TypeInfo
  ;
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
  ;
  puVar4 = UnityEngine_XR_ARSubsystems_XRTextureType_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_TypeInfo;
  puVar2 = UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_TypeInfo;
  puVar1 = PTR_DAT_0676eb60;
  if ((DAT_06b805b6 & 1) == 0) {
    FUN_02d6084c(UnityEngine_UIElements_Button_UxmlFactory_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_TypeInfo);
    FUN_02d6084c(UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRTextureType_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_CSharpNameUtility_<>c__DisplayClass8_0_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_CVROverlay__PollNextOverlayEventPacked_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo);
    FUN_02d6084c(PTR_DAT_0676eb60);
    FUN_02d6084c(OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo);
    FUN_02d6084c(Unity_Burst_BurstString_NumberFormatKind_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768640);
    FUN_02d6084c(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_02d6084c(Oculus_Platform_Callback_RequestCallback_TypeInfo);
    FUN_02d6084c(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo);
    FUN_02d6084c(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo);
    DAT_06b805b6 = 1;
  }
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x170) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x170);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x178) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x178);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x180) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x180);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x188) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x188);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)PTR_DAT_06768640,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 400) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 400);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo,
                        *(undefined8 *)
                         UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo);
  *(undefined8 *)(param_1 + 0x198) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x198);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo,
                        *(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1a0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1a0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo,
                        *(undefined8 *)
                         Unity_VisualScripting_CSharpNameUtility_<>c__DisplayClass8_0_TypeInfo);
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1a8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo,
                        *(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1b0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)Oculus_Platform_Callback_RequestCallback_TypeInfo,
                        *(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1b8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                        ,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1c0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 OVR_OpenVR_CVROverlay__PollNextOverlayEventPacked_TypeInfo,
                        *(undefined8 *)UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo)
  ;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1c8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                        ,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1d0);
  FUN_037b86e0(param_1,*(undefined8 *)UnityEngine_UIElements_Button_UxmlFactory_TypeInfo);
  return;
}



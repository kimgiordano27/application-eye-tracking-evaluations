/*
FUNCTION_NAME: Unity.Mathematics.math$$uint2x2
ENTRY_POINT: 0583fc84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3
*/


void Unity_Mathematics_math__uint2x2(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *puVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 *puVar5;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar6;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar7;
  
  puVar5 = *(undefined8 **)(unaff_x23 + 0x998);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xd20);
  puVar3 = *(undefined8 **)(unaff_x21 + 0xb60);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x8d0);
  puVar7 = *(undefined8 **)(unaff_x29 + 0xd28);
  puVar6 = *(undefined8 **)(unaff_x27 + 0x8b0);
  if ((*(byte *)(unaff_x25 + 0x5b6) & 1) == 0) {
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
    *(undefined1 *)(unaff_x25 + 0x5b6) = 1;
  }
  uVar1 = FUN_03452f4c(param_1,*unaff_x26,*unaff_x28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x170);
  uVar1 = FUN_03452f4c(param_1,*unaff_x24,*puVar5);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x178);
  uVar1 = FUN_03452f4c(param_1,*puVar4,*puVar5);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x180);
  uVar1 = FUN_03452f4c(param_1,*puVar3,*puVar2);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x188);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)PTR_DAT_06768640,*puVar7);
  *(undefined8 *)(param_1 + 400) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 400);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo,
                       *(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x198);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo,
                       *puVar2);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1a0);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo,
                       *(undefined8 *)
                        Unity_VisualScripting_CSharpNameUtility_<>c__DisplayClass8_0_TypeInfo);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1a8);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo,*puVar6
                      );
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1b0);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)Oculus_Platform_Callback_RequestCallback_TypeInfo,
                       *puVar6);
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1b8);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                       ,*puVar5);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1c0);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                OVR_OpenVR_CVROverlay__PollNextOverlayEventPacked_TypeInfo,
                       *(undefined8 *)UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo);
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1c8);
  uVar1 = FUN_03452f4c(param_1,*(undefined8 *)
                                Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                       ,*puVar2);
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  thunk_FUN_02dd37b4(param_1 + 0x1d0);
  FUN_037b86e0(param_1,*(undefined8 *)UnityEngine_UIElements_Button_UxmlFactory_TypeInfo);
  return;
}



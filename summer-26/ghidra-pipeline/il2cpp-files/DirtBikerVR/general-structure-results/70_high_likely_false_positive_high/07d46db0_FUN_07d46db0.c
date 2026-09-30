/*
FUNCTION_NAME: FUN_07d46db0
ENTRY_POINT: 07d46db0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2
*/


void FUN_07d46db0(void)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_08492f60;
  if ((DAT_089996e7 & 1) == 0) {
    FUN_03a8a718(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_03a8a718(UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_Button_UxmlFactory_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492f60);
    FUN_03a8a718(UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_CVROverlay__PollNextOverlayEventPacked_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo);
    FUN_03a8a718(Oculus_Platform_Callback_RequestCallback_TypeInfo);
    FUN_03a8a718(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo);
    FUN_03a8a718(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo);
    FUN_03a8a718(UnityEngine_Camera_CameraCallback_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo);
    FUN_03a8a718(NWH_Common_Cameras_CameraChanger_<>c_TypeInfo);
    FUN_03a8a718(NWH_Common_Cameras_CameraMouseDrag_<>c_TypeInfo);
    FUN_03a8a718(
                UnityEditor_XR_LegacyInputHelpers_CameraOffset_<RepeatInitializeCamera>d__29_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_CameraScreenRaycaster_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_CameraSettings_BufferClearing_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_CameraSettings_Culling_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_CameraSettings_Frustum_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_CameraSettings_Volumes_TypeInfo);
    DAT_089996e7 = 1;
  }
  puVar12 = UnityEngine_Rendering_HighDefinition_CameraSettings_Volumes_TypeInfo;
  puVar11 = UnityEngine_Rendering_HighDefinition_CameraSettings_Frustum_TypeInfo;
  puVar10 = UnityEngine_Rendering_HighDefinition_CameraSettings_Culling_TypeInfo;
  puVar9 = UnityEngine_Rendering_HighDefinition_CameraSettings_BufferClearing_TypeInfo;
  puVar8 = UnityEngine_UIElements_CameraScreenRaycaster_<>c_TypeInfo;
  puVar7 = UnityEngine_Camera_CameraCallback_TypeInfo;
  puVar6 = Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo;
  puVar5 = Oculus_Platform_Callback_RequestCallback_TypeInfo;
  puVar4 = OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo;
  puVar3 = OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo;
  puVar2 = UnityEngine_UIElements_Button_UxmlFactory_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d47110();
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_07d47190();
  FUN_046d639c(uVar13,*(undefined8 *)puVar3);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
  FUN_07d472f8();
  FUN_046d7080(uVar13,*(undefined8 *)puVar5);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar11);
  FUN_07d473e8();
  FUN_046d7148(uVar13,*(undefined8 *)puVar6);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar12);
  FUN_07d47514();
  FUN_046d7210(uVar13,*(undefined8 *)puVar7);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar8);
  FUN_07d4767c();
  FUN_046d70e4(uVar13,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar10);
  FUN_07d4776c();
  FUN_046d71ac(uVar13,*(undefined8 *)
                       Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)NWH_Common_Cameras_CameraMouseDrag_<>c_TypeInfo);
  FUN_07d47898();
  FUN_046d65f4(uVar13,*(undefined8 *)OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo
              );
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)NWH_Common_Cameras_CameraChanger_<>c_TypeInfo);
  FUN_07d47a00();
  FUN_046d6658(uVar13,*(undefined8 *)OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo);
  FUN_07d47b68();
  FUN_046d62d4(uVar13,*(undefined8 *)OVR_OpenVR_CVROverlay__PollNextOverlayEventPacked_TypeInfo);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
  FUN_07d47c58();
  FUN_046d6338(uVar13,*(undefined8 *)UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                               UnityEditor_XR_LegacyInputHelpers_CameraOffset_<RepeatInitializeCamera>d__29_TypeInfo
                             );
  UnityEngine_UIElements_UITKTextJobSystem_<>c___ctor();
  FUN_046d6590(uVar13,*(undefined8 *)UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo)
  ;
  return;
}



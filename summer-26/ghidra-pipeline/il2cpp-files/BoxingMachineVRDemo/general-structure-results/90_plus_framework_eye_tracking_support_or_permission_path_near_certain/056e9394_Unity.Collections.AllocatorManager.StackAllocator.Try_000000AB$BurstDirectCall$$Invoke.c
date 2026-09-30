/*
FUNCTION_NAME: Unity.Collections.AllocatorManager.StackAllocator.Try_000000AB$BurstDirectCall$$Invoke
ENTRY_POINT: 056e9394
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_12;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


undefined8
Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_BurstDirectCall__Invoke(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined1 *unaff_x22;
  
  uVar3 = FUN_04f84f34(unaff_w21,unaff_w20,0);
  puVar1 = PTR_DAT_06760700;
  if ((uVar3 & 1) != 0) {
    *unaff_x22 = 1;
    lVar4 = FUN_02d60934(*(undefined8 *)puVar1,2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((*(int *)(lVar4 + 0x18) == 0) ||
       (*(short *)(lVar4 + 0x20) = (short)unaff_w21, *(int *)(lVar4 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(short *)(lVar4 + 0x22) = (short)unaff_w20;
    uVar5 = FUN_04e8a86c(0,lVar4,0);
    iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                UnityEngine_InputSystem_LowLevel_InputEventTrace_DeviceInfo___TypeInfo
                         ,0);
    if (((((((-1 < iVar2) &&
            (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)System_Xml_NameTable_Entry___TypeInfo,0),
            iVar2 < 1)) ||
           ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo,0),
            -1 < iVar2 &&
            (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)RootMotion_Dynamics_Muscle_Group___TypeInfo,0
                                 ), iVar2 < 1)))) ||
          ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRInput_HapticInfo___TypeInfo,0), -1 < iVar2
           && (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                           UnityEngine_InputSystem_InputDevice_ControlBitRangeNode___TypeInfo
                                    ,0), iVar2 < 1)))) ||
         ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_Bone___TypeInfo,0), -1 < iVar2 &&
          (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                       RootMotion_Dynamics_Muscle_TargetChild___TypeInfo,0),
          iVar2 < 1)))) ||
        ((((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo,0),
           -1 < iVar2 &&
           (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRInput_OpenVRControllerDetails___TypeInfo,0)
           , iVar2 < 1)) ||
          ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRDisplay_EyeRenderDesc___TypeInfo,0),
           -1 < iVar2 &&
           (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRHaptics_OVRHapticsOutput___TypeInfo,0),
           iVar2 < 1)))) ||
         ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                       UnityEngine_InputSystem_InputControlScheme_SchemeJson___TypeInfo
                                ,0), -1 < iVar2 &&
          (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                       UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping___TypeInfo
                                ,0), iVar2 < 1)))))) ||
       ((((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_BoneCapsule___TypeInfo,0), -1 < iVar2
          && (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                          UnityEngine_InputSystem_InputControlScheme_DeviceRequirement___TypeInfo
                                   ,0), iVar2 < 1)) ||
         ((((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo
                                  ,0), -1 < iVar2 &&
            (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVROverlay_LayerTexture___TypeInfo,0),
            iVar2 < 1)) ||
           ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_Quatf___TypeInfo,0), -1 < iVar2 &&
            (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                         UnityEngine_UI_InputField_ContentType___TypeInfo,0),
            iVar2 < 1)))) ||
          ((((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRHaptics_OVRHapticsChannel___TypeInfo,0),
             -1 < iVar2 &&
             (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                          RootMotion_FinalIK_InteractionTrigger_Range___TypeInfo,0),
             iVar2 < 1)) ||
            ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo
                                   ,0), -1 < iVar2 &&
             (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                          UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson___TypeInfo
                                   ,0), iVar2 < 1)))) ||
           (((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_InputHelpers_ButtonInfo___TypeInfo
                                   ,0), -1 < iVar2 &&
             (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)Newtonsoft_Json_JsonWriter_State___TypeInfo,
                                   0), iVar2 < 1)) ||
            ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                          OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo,0),
             -1 < iVar2 &&
             (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo,0),
             iVar2 < 1)))))))))) ||
        (((unaff_x19 & 1) != 0 &&
         (((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                 ,0), -1 < iVar2 &&
           (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo,0),
           iVar2 < 1)) ||
          ((iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)
                                        UnityEngine_InputSystem_InputRemoting_RemoteInputDevice___TypeInfo
                                 ,0), -1 < iVar2 &&
           (iVar2 = FUN_04e8b380(uVar5,*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo,0)
           , iVar2 < 1)))))))))) {
      return 1;
    }
  }
  return 0;
}



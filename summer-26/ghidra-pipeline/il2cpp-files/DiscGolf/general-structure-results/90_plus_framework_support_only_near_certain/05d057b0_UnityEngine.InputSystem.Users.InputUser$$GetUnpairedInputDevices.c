/*
FUNCTION_NAME: UnityEngine.InputSystem.Users.InputUser$$GetUnpairedInputDevices
ENTRY_POINT: 05d057b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_1
*/


void UnityEngine_InputSystem_Users_InputUser__GetUnpairedInputDevices(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02d965b8();
  FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo);
  FUN_02d965b8(
              UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0xe4b) = 1;
  lVar2 = FUN_02d966a4(*unaff_x20,0x29);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo
    ;
    LeanTween__value((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
      LeanTween__value((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var;
        LeanTween__value((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo;
          LeanTween__value((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo;
            LeanTween__value((undefined8 *)(lVar2 + 0x40));
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) =
                   *(undefined8 *)Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
              LeanTween__value((undefined8 *)(lVar2 + 0x48));
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo;
                LeanTween__value((undefined8 *)(lVar2 + 0x50));
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar2 + 0x58) =
                       *(undefined8 *)
                        Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                  ;
                  LeanTween__value((undefined8 *)(lVar2 + 0x58));
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) =
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                    ;
                    LeanTween__value((undefined8 *)(lVar2 + 0x60));
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)PTR_DAT_06a122e8;
                      LeanTween__value((undefined8 *)(lVar2 + 0x68));
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) =
                             *(undefined8 *)System_Net_Http_Headers_Parser_MD5_TypeInfo;
                        LeanTween__value((undefined8 *)(lVar2 + 0x70));
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)PTR_DAT_06a0db58;
                          LeanTween__value((undefined8 *)(lVar2 + 0x78));
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)PTR_DAT_069ff558;
                            LeanTween__value((undefined8 *)(lVar2 + 0x80));
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) =
                                   *(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo;
                              LeanTween__value((undefined8 *)(lVar2 + 0x88));
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) =
                                     *(undefined8 *)
                                      UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                                ;
                                LeanTween__value((undefined8 *)(lVar2 + 0x90));
                                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar2 + 0x98) =
                                       *(undefined8 *)
                                        Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
                                  LeanTween__value((undefined8 *)(lVar2 + 0x98));
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) =
                                         *(undefined8 *)
                                          System_Net_PathList_PathListComparer_TypeInfo;
                                    LeanTween__value((undefined8 *)(lVar2 + 0xa0));
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) =
                                           *(undefined8 *)
                                            UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                                      ;
                                      LeanTween__value((undefined8 *)(lVar2 + 0xa8));
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) =
                                             *(undefined8 *)
                                              Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                        ;
                                        LeanTween__value((undefined8 *)(lVar2 + 0xb0));
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) =
                                               *(undefined8 *)
                                                Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                          ;
                                          LeanTween__value((undefined8 *)(lVar2 + 0xb8));
                                          if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xc0) =
                                                 *(undefined8 *)
                                                  Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo
                                            ;
                                            LeanTween__value((undefined8 *)(lVar2 + 0xc0));
                                            if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 200) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo
                                              ;
                                              LeanTween__value((undefined8 *)(lVar2 + 200));
                                              if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xd0) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                                ;
                                                LeanTween__value((undefined8 *)(lVar2 + 0xd0));
                                                if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd8) =
                                                       *(undefined8 *)
                                                        Mono_Security_PKCS7_ContentInfo_TypeInfo;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xf0));
                                                  if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xf8));
                                                  if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x100) =
                                                         *(undefined8 *)
                                                          OVRPlugin_OVRP_1_128_0_TypeInfo;
                                                    LeanTween__value(lVar2 + 0x100);
                                                    if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x108) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x108);
                                                  if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x110) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x110);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x118) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x118);
                                                  if (0x20 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x120);
                                                  if (0x21 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x128) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x128);
                                                  if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x130) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ParameterizedStrings_LowLevelStack_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x130);
                                                  if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x138) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x138);
                                                  if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x140) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x140);
                                                  if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x148) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x148);
                                                  if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x150) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_HashSet<uint>__ctor__
                                                  ;
                                                  LeanTween__value(lVar2 + 0x150);
                                                  if (0x27 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x158) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_HashSet<Type>_Remove__
                                                  ;
                                                  LeanTween__value(lVar2 + 0x158);
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_HashSet<Guid>_Add__
                                                  ;
                                                  if (0x28 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x160) =
                                                         *(undefined8 *)System_IO_Path_<>c_TypeInfo;
                                                    LeanTween__value(lVar2 + 0x160);
                                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),lVar2
                                                                    );
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}



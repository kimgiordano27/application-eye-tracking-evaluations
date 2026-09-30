/*
FUNCTION_NAME: FUN_05d04ea0
ENTRY_POINT: 05d04ea0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_10;functionality_possible_biometrics_hits_2
*/


void FUN_05d04ea0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_069fb9d8;
  if ((DAT_06dc2e49 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Type>_Contains__);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Mono_Security_PKCS7_EncryptedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo);
    FUN_02d965b8(Unity_Networking_QoS_UcgQosServer_var);
    FUN_02d965b8(PTR_DAT_06a122e8);
    FUN_02d965b8(System_Net_Http_Headers_Parser_DateTime_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_Parser_MD5_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_02d965b8(System_Net_PathList_PathListComparer_TypeInfo);
    FUN_02d965b8(PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02d965b8(UnityEngine_Physics_ContactEventDelegate_TypeInfo);
    FUN_02d965b8(UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    FUN_02d965b8(Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo);
    FUN_02d965b8(Assets_Scripts_Player_<Simulate>d__107_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                );
    DAT_06dc2e49 = 1;
  }
  lVar2 = FUN_02d966a4(*(undefined8 *)puVar1,0x1e);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo;
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
                     *(undefined8 *)Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                ;
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
                                     *(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo
                                ;
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
                                                                                                        
                                                  Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                                              ;
                                              LeanTween__value((undefined8 *)(lVar2 + 0xc0));
                                              if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 200) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo
                                                ;
                                                LeanTween__value((undefined8 *)(lVar2 + 200));
                                                if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd0) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                          Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                                    LeanTween__value((undefined8 *)(lVar2 + 0xd8));
                                                    if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0xe0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                          Mono_Security_PKCS7_EncryptedData_TypeInfo
                                                    ;
                                                    LeanTween__value((undefined8 *)(lVar2 + 0xe8));
                                                    if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0xf0) =
                                                           *(undefined8 *)
                                                            Mono_Security_PKCS7_SignedData_TypeInfo;
                                                      LeanTween__value((undefined8 *)(lVar2 + 0xf0))
                                                      ;
                                                      if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0xf8) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar2 + 0xf8));
                                                  if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x100) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x100);
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_HashSet<Type>_Contains__
                                                  ;
                                                  if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x108) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  LeanTween__value(lVar2 + 0x108);
                                                  **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                                  LeanTween__value(*(undefined8 *)
                                                                    (*(long *)puVar1 + 0xb8),lVar2);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



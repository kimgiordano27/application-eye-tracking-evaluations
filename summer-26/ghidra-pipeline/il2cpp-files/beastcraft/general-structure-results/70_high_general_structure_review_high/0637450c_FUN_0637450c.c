/*
FUNCTION_NAME: FUN_0637450c
ENTRY_POINT: 0637450c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0637450c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_06a6c960;
  if ((bRam0000000006e9ba17 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6c960);
    FUN_02e3ca1c(PTR_DAT_06a6ce48);
    FUN_02e3ca1c(Photon_Realtime_PhotonPortDefinition_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_Proxies_Autodetect_ProxyDetector_TypeInfo);
    FUN_02e3ca1c(ExitGames_Client_Photon_PhotonSocketState_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_PhotonTransportProtocol_TypeInfo);
    FUN_02e3ca1c(Photon_Voice_Unity_PhotonVoiceCreatedParams_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Physics_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Physics2D_TypeInfo);
    FUN_02e3ca1c(UnityEngine_PhysicsScene_TypeInfo);
    FUN_02e3ca1c(UnityEngine_PhysicsScene2D_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_PickingMode_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Models_Pid_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Models_PidList_TypeInfo);
    FUN_02e3ca1c(Fusion_Photon_Realtime_PingHttp_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_TypedParameterExpression_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_UA_UAObjectIdentifiers_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UICharInfo_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIDocument_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIDocumentList_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIElementsRuntimeUtility_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIElementsRuntimeUtilityNative_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIElementsUtility_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_UIEventRegistration_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_UIHoverEnterEvent_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_UIHoverEventArgs_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_UIHoverExitEvent_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_TypeInfo);
    FUN_02e3ca1c(System_ComponentModel_TypeDescriptionProvider_TypeInfo);
    bRam0000000006e9ba17 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = System_ComponentModel_TypeDescriptionProvider_TypeInfo;
  puVar1 = PTR_DAT_06a2f000;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_06a2f000 + 0x18);
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_05614e08(lVar5 + 0x20,0);
    uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_06a6ce48;
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0x31];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_PhysicsScene2D_TypeInfo);
      FUN_048077e8(lVar9,uVar10,
                   *(undefined8 *)System_Linq_Expressions_TypedParameterExpression_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x188) = lVar9;
      thunk_FUN_02ee2be8(lVar5 + 0x188,lVar9);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x18);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar6 = FUN_05614e08(lVar5 + 0x20,0);
      uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
        lVar5 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar9 = puVar8[0x32];
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar5);
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
        FUN_04807d44(lVar9,uVar10,*(undefined8 *)UnityEngine_UIElements_UIDocumentList_TypeInfo,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 400) = lVar9;
        thunk_FUN_02ee2be8(lVar5 + 400,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x18);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar6 = FUN_05614e08(lVar5 + 0x20,0);
        uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar5);
          lVar5 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
        lVar9 = puVar8[0x33];
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar5);
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_UIElements_PickingMode_TypeInfo);
          FUN_048078ac(lVar9,uVar10,
                       *(undefined8 *)UnityEngine_UIElements_UIElementsRuntimeUtility_TypeInfo,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x198) = lVar9;
          thunk_FUN_02ee2be8(lVar5 + 0x198,lVar9);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x18);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar6 = FUN_05614e08(lVar5 + 0x20,0);
          uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar8[0x34];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar5);
              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
            FUN_04807a34(lVar9,uVar10,
                         *(undefined8 *)
                          UnityEngine_UIElements_UIElementsRuntimeUtilityNative_TypeInfo,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x1a0) = lVar9;
            thunk_FUN_02ee2be8(lVar5 + 0x1a0,lVar9);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x18);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar6 = FUN_05614e08(lVar5 + 0x20,0);
            uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x48) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar5);
              lVar5 = *(long *)puVar4;
            }
            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
            lVar9 = puVar8[0x35];
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar5);
                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar10 = *puVar8;
              lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_Photon_Realtime_PingHttp_TypeInfo);
              FUN_04807af8(lVar9,uVar10,
                           *(undefined8 *)UnityEngine_UIElements_UIElementsUtility_TypeInfo,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x1a8) = lVar9;
              thunk_FUN_02ee2be8(lVar5 + 0x1a8,lVar9);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x18);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar6 = FUN_05614e08(lVar5 + 0x20,0);
              uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x68) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar5);
                lVar5 = *(long *)puVar4;
              }
              puVar8 = *(undefined8 **)(lVar5 + 0xb8);
              lVar9 = puVar8[0x36];
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar5);
                  puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                }
                uVar10 = *puVar8;
                lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                            Photon_Voice_PhotonTransportProtocol_TypeInfo);
                Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask<LevelService_<GetSliceMapUploadUrl>d__13,_object>__get_Task
                          (lVar9,uVar10,
                           *(undefined8 *)UnityEngine_UIElements_UIEventRegistration_TypeInfo,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x1b0) = lVar9;
                thunk_FUN_02ee2be8(lVar5 + 0x1b0,lVar9);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x18);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                lVar9 = puVar8[0x37];
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar5);
                    puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar10 = *puVar8;
                  lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                              Photon_Voice_Unity_PhotonVoiceCreatedParams_TypeInfo);
                  FUN_04807ecc(lVar9,uVar10,
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_UI_UIHoverEnterEvent_TypeInfo,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x1b8) = lVar9;
                  thunk_FUN_02ee2be8(lVar5 + 0x1b8,lVar9);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x18);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                  uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = puVar8[0x38];
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar5);
                      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar10 = *puVar8;
                    lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)Oculus_Platform_Models_Pid_TypeInfo);
                    FUN_04807f90(lVar9,uVar10,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_UI_UIHoverEventArgs_TypeInfo,0)
                    ;
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x1c0) = lVar9;
                    thunk_FUN_02ee2be8(lVar5 + 0x1c0,lVar9);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x18);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                    uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = puVar8[0x39];
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c(lVar5);
                        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                      }
                      uVar10 = *puVar8;
                      lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                  Photon_Realtime_PhotonPortDefinition_TypeInfo);
                      FUN_04808054(lVar9,uVar10,
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_UI_UIHoverExitEvent_TypeInfo,
                                   0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x1c8) = lVar9;
                      thunk_FUN_02ee2be8(lVar5 + 0x1c8,lVar9);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x18);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                      uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = puVar8[0x3a];
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(lVar5);
                          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                        }
                        uVar10 = *puVar8;
                        lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_Physics_TypeInfo);
                        FUN_04807e08(lVar9,uVar10,
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_TypeInfo,0
                                    );
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x1d0) = lVar9;
                        thunk_FUN_02ee2be8(lVar5 + 0x1d0,lVar9);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x18);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                        uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = puVar8[0x3b];
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c(lVar5);
                            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                          }
                          uVar10 = *puVar8;
                          lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                      Oculus_Platform_Models_PidList_TypeInfo);
                          FUN_04807970(lVar9,uVar10,
                                       *(undefined8 *)
                                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_UA_UAObjectIdentifiers_TypeInfo
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x1d8) = lVar9;
                          thunk_FUN_02ee2be8(lVar5 + 0x1d8,lVar9);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x18);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                          uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x10) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = puVar8[0x3c];
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c(lVar5);
                              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                            }
                            uVar10 = *puVar8;
                            lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                
                                                  ExitGames_Client_Photon_PhotonSocketState_TypeInfo
                                                  );
                            FUN_04807c80(lVar9,uVar10,*(undefined8 *)UnityEngine_UICharInfo_TypeInfo
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x1e0) = lVar9;
                            thunk_FUN_02ee2be8(lVar5 + 0x1e0,lVar9);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
                          lVar5 = *(long *)puVar2;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                            lVar5 = *(long *)puVar2;
                          }
                          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                          if (lVar5 != 0) {
                            local_48 = *(undefined8 *)(lVar5 + 0x28);
                            lVar5 = *(long *)(puVar1 + 0x90);
                            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                              thunk_FUN_02e9a04c();
                            }
                            uVar6 = FUN_05614e08(lVar5 + 0x20,0);
                            uVar7 = FUN_05614e08(*(long *)(puVar1 + 0x18) + 0x20,0);
                            lVar5 = *(long *)puVar4;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                            lVar9 = puVar8[0x3d];
                            if (lVar9 == 0) {
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c(lVar5);
                                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                              }
                              uVar10 = *puVar8;
                              lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Proxies_Autodetect_ProxyDetector_TypeInfo
                                                  );
                              FUN_0480c950(lVar9,uVar10,
                                           *(undefined8 *)UnityEngine_UIElements_UIDocument_TypeInfo
                                           ,0);
                              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                              *(long *)(lVar5 + 0x1e8) = lVar9;
                              thunk_FUN_02ee2be8(lVar5 + 0x1e8,lVar9);
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_02e9a04c();
                            }
                            FUN_063705cc(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}



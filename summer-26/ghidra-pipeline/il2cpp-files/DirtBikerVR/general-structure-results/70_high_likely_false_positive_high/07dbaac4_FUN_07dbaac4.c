/*
FUNCTION_NAME: FUN_07dbaac4
ENTRY_POINT: 07dbaac4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void FUN_07dbaac4(void)

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
  
  puVar3 = PTR_DAT_084918f8;
  if ((DAT_08999ffc & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084918f8);
    FUN_03a8a718(PTR_DAT_084918f0);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_media_connect_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_media_disconnect_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_send_message_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_set_3d_position_t_TypeInfo);
    FUN_03a8a718(AudioDeviceSettings_<>c__DisplayClass20_0_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_set_local_render_volume_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_set_participant_volume_for_me_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_text_connect_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_text_disconnect_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_session_transcription_control_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_sessiongroup_add_session_t_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_vx_req_sessiongroup_control_audio_injection_t_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo
                );
    FUN_03a8a718(UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_TypeInfo)
    ;
    FUN_03a8a718(UnityEngine_InputSystem_InputActionSetupExtensions_<>c__DisplayClass5_0_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputActionState_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputActionState_GlobalState_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputBinding_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputBindingCompositeContext_<get_controls>d__2_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo)
    ;
    FUN_03a8a718(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceRightProperty_TypeInfo
                );
    DAT_08999ffc = 1;
  }
  lVar5 = *(long *)puVar3;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceRightProperty_TypeInfo;
  puVar1 = PTR_DAT_08486760;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_08486760 + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
    uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar2 = PTR_DAT_084918f0;
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0x25];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar5);
        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  Unity_Services_Vivox_vx_req_session_media_disconnect_t_TypeInfo);
      FUN_059a277c(lVar9,uVar10,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x128) = lVar9;
      thunk_FUN_03afed3c(lVar5 + 0x128,lVar9);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x68);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
      uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar9 = puVar8[0x26];
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(lVar5);
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Unity_Services_Vivox_vx_req_session_set_local_render_volume_t_TypeInfo
                                  );
        FUN_059a2cd8(lVar9,uVar10,
                     *(undefined8 *)UnityEngine_InputSystem_InputActionState_<>c_TypeInfo,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x130) = lVar9;
        thunk_FUN_03afed3c(lVar5 + 0x130,lVar9);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x68);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
        uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
        lVar9 = puVar8[0x27];
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar5);
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      Unity_Services_Vivox_vx_req_session_set_participant_volume_for_me_t_TypeInfo
                                    );
          FUN_059a2904(lVar9,uVar10,
                       *(undefined8 *)UnityEngine_InputSystem_InputActionState_GlobalState_TypeInfo,
                       0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x138) = lVar9;
          thunk_FUN_03afed3c(lVar5 + 0x138,lVar9);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar5 = *(long *)puVar3;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x68);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
          uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar8[0x28];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar5);
              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        Unity_Services_Vivox_vx_req_sessiongroup_control_audio_injection_t_TypeInfo
                                      );
            FUN_059a2a8c(lVar9,uVar10,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_TypeInfo
                         ,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x140) = lVar9;
            thunk_FUN_03afed3c(lVar5 + 0x140,lVar9);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x68);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
            uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x48) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
            lVar9 = puVar8[0x29];
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(lVar5);
                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar10 = *puVar8;
              lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                          Unity_Services_Vivox_vx_req_session_transcription_control_t_TypeInfo
                                        );
              FUN_059a2b50(lVar9,uVar10,
                           *(undefined8 *)
                            UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_TypeInfo,0
                          );
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x148) = lVar9;
              thunk_FUN_03afed3c(lVar5 + 0x148,lVar9);
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar3;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *(long *)puVar3;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x68);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
              uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              puVar8 = *(undefined8 **)(lVar5 + 0xb8);
              lVar9 = puVar8[0x2a];
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar5);
                  puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                }
                uVar10 = *puVar8;
                lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                            Unity_Services_Vivox_vx_req_session_media_connect_t_TypeInfo
                                          );
                FUN_059a2840(lVar9,uVar10,
                             *(undefined8 *)UnityEngine_InputSystem_InputBinding_<>c_TypeInfo,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x150) = lVar9;
                thunk_FUN_03afed3c(lVar5 + 0x150,lVar9);
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar3;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar5 = *(long *)puVar3;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x68);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                lVar9 = puVar8[0x2b];
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(lVar5);
                    puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar10 = *puVar8;
                  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                              Unity_Services_Vivox_vx_req_session_send_message_t_TypeInfo
                                            );
                  FUN_059a2e60(lVar9,uVar10,
                               *(undefined8 *)
                                UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_TypeInfo
                               ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x158) = lVar9;
                  thunk_FUN_03afed3c(lVar5 + 0x158,lVar9);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar3;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                  lVar5 = *(long *)puVar3;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x68);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                  uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = puVar8[0x2c];
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4(lVar5);
                      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar10 = *puVar8;
                    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                Unity_Services_Vivox_vx_req_session_text_disconnect_t_TypeInfo
                                              );
                    FUN_059a2f24(lVar9,uVar10,
                                 *(undefined8 *)
                                  UnityEngine_InputSystem_InputBindingCompositeContext_<get_controls>d__2_TypeInfo
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x160) = lVar9;
                    thunk_FUN_03afed3c(lVar5 + 0x160,lVar9);
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar3;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                    lVar5 = *(long *)puVar3;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x68);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                    uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = puVar8[0x2d];
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4(lVar5);
                        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                      }
                      uVar10 = *puVar8;
                      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                  Unity_Services_Vivox_vx_req_sessiongroup_add_session_t_TypeInfo
                                                );
                      FUN_059a2fe8(lVar9,uVar10,
                                   *(undefined8 *)
                                    UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_TypeInfo
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x168) = lVar9;
                      thunk_FUN_03afed3c(lVar5 + 0x168,lVar9);
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar3;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                      lVar5 = *(long *)puVar3;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x68);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                      uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = puVar8[0x2e];
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4(lVar5);
                          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                        }
                        uVar10 = *puVar8;
                        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                        
                                                  Unity_Services_Vivox_vx_req_session_text_connect_t_TypeInfo
                                                  );
                        FUN_059a2d9c(lVar9,uVar10,
                                     *(undefined8 *)
                                      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x170) = lVar9;
                        thunk_FUN_03afed3c(lVar5 + 0x170,lVar9);
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar3;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                        lVar5 = *(long *)puVar3;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x68);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                        uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = puVar8[0x2f];
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(lVar5);
                            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                          }
                          uVar10 = *puVar8;
                          lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                            
                                                  Unity_Services_Vivox_vx_req_session_set_3d_position_t_TypeInfo
                                                  );
                          FUN_059a29c8(lVar9,uVar10,
                                       *(undefined8 *)
                                        UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_TypeInfo
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x178) = lVar9;
                          thunk_FUN_03afed3c(lVar5 + 0x178,lVar9);
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                        }
                        FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar3;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                          lVar5 = *(long *)puVar3;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                          }
                          uVar6 = FUN_0675ff58(lVar5 + 0x20,0);
                          uVar7 = FUN_0675ff58(*(long *)(puVar1 + 0x68) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = puVar8[0x30];
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4(lVar5);
                              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                            }
                            uVar10 = *puVar8;
                            lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                                                
                                                  AudioDeviceSettings_<>c__DisplayClass20_0_TypeInfo
                                                  );
                            FUN_059a3928(lVar9,uVar10,
                                         *(undefined8 *)
                                          UnityEngine_InputSystem_InputActionSetupExtensions_<>c__DisplayClass5_0_TypeInfo
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x180) = lVar9;
                            thunk_FUN_03afed3c(lVar5 + 0x180,lVar9);
                          }
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                          }
                          FUN_07db7990(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



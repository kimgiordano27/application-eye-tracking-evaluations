/*
FUNCTION_NAME: FUN_0689dd34
ENTRY_POINT: 0689dd34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0689e78c) */

long FUN_0689dd34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong local_38;
  
  if ((DAT_073a29ec & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f744e0);
    FUN_02fe925c(PTR_DAT_06f744e8);
    FUN_02fe925c(System_Net_IAuthenticationModule_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_IAxis1D_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_IAxis2D_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_IBaseUxmlFactory_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_IBaseUxmlObjectFactory_TypeInfo);
    FUN_02fe925c(UnityEngine_EventSystems_IBeginDragHandler_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Binary_IBinaryDeserializationContext_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Binary_IBinarySerializationContext_TypeInfo);
    FUN_02fe925c(BNG_HeadCollisionFade_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f744f8);
    FUN_02fe925c(PTR_DAT_06f72008);
    FUN_02fe925c(PTR_DAT_06f6d8a0);
    FUN_02fe925c(PTR_DAT_06f7a4c8);
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(PTR_DAT_06f7a4d0);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(PTR_DAT_06f7a4d8);
    FUN_02fe925c(PTR_DAT_06f7a4e0);
    FUN_02fe925c(PTR_DAT_06f6dbc0);
    FUN_02fe925c(OVR_OpenVR_HmdRect2_t_TypeInfo);
    FUN_02fe925c(IAPUIProduct_TypeInfo);
    FUN_02fe925c(OVR_OpenVR_HmdColor_t_TypeInfo);
    FUN_02fe925c(IAPUIPurchaseButton_TypeInfo);
    FUN_02fe925c(UnityEngine_UI_HorizontalLayoutGroup_TypeInfo);
    FUN_02fe925c(System_Net_HeaderInfo_TypeInfo);
    FUN_02fe925c(System_Runtime_Remoting_Activation_IActivator_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_IBindable_TypeInfo);
    FUN_02fe925c(System_Net_HttpVersion_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_HmdDataSourceConfig_TypeInfo);
    FUN_02fe925c(System_Net_HeaderInfoTable_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_IActiveState_TypeInfo);
    FUN_02fe925c(Pathfinding_Clipper2Lib_HorzJoin_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo);
    FUN_02fe925c(OVR_OpenVR_HmdMatrix44_t_TypeInfo);
    FUN_02fe925c(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_02fe925c(Pathfinding_RVO_IAgent_TypeInfo);
    FUN_02fe925c(RootMotion_Demos_HoldingHands_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_IArgumentProvider_TypeInfo);
    FUN_02fe925c(Pathfinding_IAstarAI_TypeInfo);
    FUN_02fe925c(Pathfinding_Pooling_IAstarPooledObject_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_IBinding_TypeInfo);
    DAT_073a29ec = 1;
  }
  puVar3 = PTR_DAT_06f744f8;
  if (param_1 != 0) {
    lVar14 = *(long *)PTR_DAT_06f744f8;
    lVar12 = *(long *)(lVar14 + 0x38);
    if (lVar12 == 0) {
      FUN_02feb320(lVar14);
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02feb2c4();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    puVar4 = System_Net_HeaderInfo_TypeInfo;
    puVar2 = PTR_DAT_06f744e8;
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02feb2c4();
    }
    puVar1 = PTR_DAT_06f70b30;
    plVar8 = (long *)FUN_03bf1820(param_1,*(undefined8 *)puVar4,**(undefined8 **)(lVar12 + 0xb8),
                                  *(undefined8 *)puVar2);
    lVar14 = *(long *)puVar3;
    lVar12 = *(long *)(lVar14 + 0x38);
    if (lVar12 == 0) {
      FUN_02feb320(lVar14);
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02feb2c4();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02feb2c4();
    }
    puVar2 = BNG_HeadCollisionFade_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = FUN_03bf1820(plVar8,*(undefined8 *)System_Net_HeaderInfoTable_TypeInfo,
                         **(undefined8 **)(lVar12 + 0xb8),
                         *(undefined8 *)BNG_HeadCollisionFade_TypeInfo);
    uVar10 = thunk_FUN_05971620(*(undefined8 *)Pathfinding_Pooling_IAstarPooledObject_TypeInfo,uVar9
                                ,0);
    if ((uVar10 & 1) == 0) {
      uVar10 = thunk_FUN_05971620(*(undefined8 *)IAPUIPurchaseButton_TypeInfo,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = thunk_FUN_05971620(*(undefined8 *)
                                     System_Runtime_Remoting_Activation_IActivator_TypeInfo,uVar9,0)
        ;
        if ((uVar10 & 1) == 0) {
          uVar10 = thunk_FUN_05971620(*(undefined8 *)
                                       Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo
                                      ,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = thunk_FUN_05971620(*(undefined8 *)Pathfinding_RVO_IAgent_TypeInfo,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = thunk_FUN_05971620(*(undefined8 *)IAPUIProduct_TypeInfo,uVar9,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = thunk_FUN_05971620(*(undefined8 *)Pathfinding_IAstarAI_TypeInfo,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = thunk_FUN_05971620(*(undefined8 *)
                                               System_Linq_Expressions_IArgumentProvider_TypeInfo,
                                              uVar9,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = thunk_FUN_05971620(*(undefined8 *)
                                                 Oculus_Interaction_IActiveState_TypeInfo,uVar9,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = thunk_FUN_05971620(*(undefined8 *)
                                                   UnityEngine_UIElements_IBindable_TypeInfo,uVar9,0
                                                 );
                      if ((uVar10 & 1) == 0) {
                        lVar14 = *(long *)puVar3;
                        lVar12 = *(long *)(lVar14 + 0x38);
                        if (lVar12 == 0) {
                          FUN_02feb320(lVar14);
                          lVar12 = *(long *)(lVar14 + 0x38);
                        }
                        lVar12 = *(long *)(lVar12 + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = FUN_02feb2c4();
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                        }
                        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = FUN_02feb2c4();
                        }
                        uVar10 = FUN_03bf1640(plVar8,*(undefined8 *)
                                                      UnityEngine_UIElements_IBinding_TypeInfo,
                                              **(undefined8 **)(lVar12 + 0xb8),
                                              *(undefined8 *)
                                               System_Net_IAuthenticationModule_TypeInfo);
                        if ((uVar10 & 1) != 0) {
                          param_1 = FUN_068a0e78(param_1);
                        }
                      }
                      else {
                        if (*(long *)(param_1 + 0x10) == 0) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
                        }
                        param_1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f744e0);
                        FUN_0689fad4(param_1,uVar9);
                      }
                    }
                    else {
                      lVar14 = *(long *)puVar3;
                      lVar12 = *(long *)(lVar14 + 0x38);
                      if (lVar12 == 0) {
                        FUN_02feb320(lVar14);
                        lVar12 = *(long *)(lVar14 + 0x38);
                      }
                      lVar12 = *(long *)(lVar12 + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_02feb2c4();
                      }
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_02feb2c4();
                      }
                      param_1 = FUN_03bf1820(param_1,*(undefined8 *)System_Net_HttpVersion_TypeInfo,
                                             **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)puVar2)
                      ;
                    }
                  }
                  else {
                    lVar14 = *(long *)puVar3;
                    lVar12 = *(long *)(lVar14 + 0x38);
                    if (lVar12 == 0) {
                      FUN_02feb320(lVar14);
                      lVar12 = *(long *)(lVar14 + 0x38);
                    }
                    lVar12 = *(long *)(lVar12 + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_02feb2c4();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_02feb2c4();
                    }
                    uVar6 = FUN_03bf1690(param_1,*(undefined8 *)
                                                  Pathfinding_Clipper2Lib_HorzJoin_TypeInfo,
                                         **(undefined8 **)(lVar12 + 0xb8),
                                         *(undefined8 *)Oculus_Interaction_Input_IAxis1D_TypeInfo);
                    local_38 = CONCAT62(local_38._2_6_,uVar6);
                    param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6d8a0,&local_38);
                  }
                }
                else {
                  lVar14 = *(long *)puVar3;
                  lVar12 = *(long *)(lVar14 + 0x38);
                  if (lVar12 == 0) {
                    FUN_02feb320(lVar14);
                    lVar12 = *(long *)(lVar14 + 0x38);
                  }
                  lVar12 = *(long *)(lVar12 + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02feb2c4();
                  }
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02feb2c4();
                  }
                  local_38 = FUN_03bf16e0(param_1,*(undefined8 *)
                                                   UnityEngine_UI_HorizontalLayoutGroup_TypeInfo,
                                          **(undefined8 **)(lVar12 + 0xb8),
                                          *(undefined8 *)Oculus_Interaction_Input_IAxis2D_TypeInfo);
                  param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4c8,&local_38);
                }
              }
              else {
                lVar14 = *(long *)puVar3;
                lVar12 = *(long *)(lVar14 + 0x38);
                if (lVar12 == 0) {
                  FUN_02feb320(lVar14);
                  lVar12 = *(long *)(lVar14 + 0x38);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_02feb2c4();
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_02feb2c4();
                }
                uVar7 = FUN_03bf18c0(param_1,*(undefined8 *)RootMotion_Demos_HoldingHands_TypeInfo,
                                     **(undefined8 **)(lVar12 + 0xb8),
                                     *(undefined8 *)
                                      Unity_Serialization_Binary_IBinarySerializationContext_TypeInfo
                                    );
                local_38 = CONCAT44(local_38._4_4_,uVar7);
                param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6dbc0,&local_38);
              }
            }
            else {
              lVar14 = *(long *)puVar3;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_02feb320(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02feb2c4();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02feb2c4();
              }
              local_38 = FUN_03bf17d0(param_1,*(undefined8 *)OVR_OpenVR_HmdRect2_t_TypeInfo,
                                      **(undefined8 **)(lVar12 + 0xb8),
                                      *(undefined8 *)
                                       UnityEngine_EventSystems_IBeginDragHandler_TypeInfo);
              param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4d8,&local_38);
            }
          }
          else {
            lVar14 = *(long *)puVar3;
            lVar12 = *(long *)(lVar14 + 0x38);
            if (lVar12 == 0) {
              FUN_02feb320(lVar14);
              lVar12 = *(long *)(lVar14 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02feb2c4();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02feb2c4();
            }
            uVar6 = FUN_03bf1730(param_1,*(undefined8 *)
                                          Oculus_Interaction_Input_HmdDataSourceConfig_TypeInfo,
                                 **(undefined8 **)(lVar12 + 0xb8),
                                 *(undefined8 *)UnityEngine_UIElements_IBaseUxmlFactory_TypeInfo);
            local_38 = CONCAT62(local_38._2_6_,uVar6);
            param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4d0,&local_38);
          }
        }
        else {
          lVar14 = *(long *)puVar3;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02feb320(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02feb2c4();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02feb2c4();
          }
          uVar5 = FUN_03bf1870(param_1,*(undefined8 *)OVR_OpenVR_HmdColor_t_TypeInfo,
                               **(undefined8 **)(lVar12 + 0xb8),
                               *(undefined8 *)
                                Unity_Serialization_Binary_IBinaryDeserializationContext_TypeInfo);
          local_38 = CONCAT71(local_38._1_7_,uVar5);
          param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4e0,&local_38);
        }
      }
      else {
        lVar14 = *(long *)puVar3;
        lVar12 = *(long *)(lVar14 + 0x38);
        if (lVar12 == 0) {
          FUN_02feb320(lVar14);
          lVar12 = *(long *)(lVar14 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02feb2c4();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02feb2c4();
        }
        uVar5 = FUN_03bf1640(param_1,*(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo,
                             **(undefined8 **)(lVar12 + 0xb8),
                             *(undefined8 *)System_Net_IAuthenticationModule_TypeInfo);
        local_38 = CONCAT71(local_38._1_7_,uVar5) & 0xffffffffffffff01;
        param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f72008,&local_38);
      }
    }
    else {
      lVar14 = *(long *)puVar3;
      lVar12 = *(long *)(lVar14 + 0x38);
      if (lVar12 == 0) {
        FUN_02feb320(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02feb2c4();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02feb2c4();
      }
      uVar7 = FUN_03bf1780(param_1,*(undefined8 *)OVR_OpenVR_HmdMatrix44_t_TypeInfo,
                           **(undefined8 **)(lVar12 + 0xb8),
                           *(undefined8 *)UnityEngine_UIElements_IBaseUxmlObjectFactory_TypeInfo);
      local_38 = CONCAT44(local_38._4_4_,uVar7);
      param_1 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_38);
    }
    lVar12 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0689e694;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar1,0);
LAB_0689e694:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return param_1;
}



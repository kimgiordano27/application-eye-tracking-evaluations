/*
FUNCTION_NAME: FUN_061f5558
ENTRY_POINT: 061f5558
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_10;strong_file_logging_hits_9;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x061f6050) */

undefined8 FUN_061f5558(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined8 local_68;
  long **pplStack_60;
  long local_58;
  long *local_48;
  
  if ((DAT_06e96add & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6d9e8);
    FUN_02e3ca1c(PTR_DAT_06a6d9f0);
    FUN_02e3ca1c(PTR_DAT_06a74db0);
    FUN_02e3ca1c(UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6d9f8);
    FUN_02e3ca1c(PTR_DAT_06a6da00);
    FUN_02e3ca1c(PTR_DAT_06a6da40);
    FUN_02e3ca1c(PTR_DAT_06a6da48);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6da08);
    FUN_02e3ca1c(PTR_DAT_06a33998);
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(PTR_DAT_06a31508);
    FUN_02e3ca1c(PTR_DAT_06a2f488);
    FUN_02e3ca1c(PTR_DAT_06a6d9e0);
    FUN_02e3ca1c(PTR_DAT_06a7cc78);
    FUN_02e3ca1c(PTR_DAT_06a7bc40);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a33dc8);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a77f18);
    FUN_02e3ca1c(PTR_DAT_06a353a8);
    FUN_02e3ca1c(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a38168);
    FUN_02e3ca1c(System_Xml_HtmlTernaryTree_TypeInfo);
    FUN_02e3ca1c(System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a77f20);
    FUN_02e3ca1c(PTR_DAT_06aa98b8);
    FUN_02e3ca1c(PTR_DAT_06a35430);
    FUN_02e3ca1c(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a30cc8);
    FUN_02e3ca1c(PTR_DAT_06a5c8f8);
    DAT_06e96add = 1;
  }
  puVar3 = PTR_DAT_06a6da08;
  puVar1 = PTR_DAT_06a2f000;
  local_48 = (long *)0x0;
  local_58 = 0;
  puVar9 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
  if (param_1 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
       (plVar6 = param_1,
       *(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
       *(long *)(PTR_DAT_06a2f000 + 0xe0))) {
      plVar6 = (long *)Oculus_Platform_RosterOptions__AddSuggestedUser(param_1,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (plVar6 == (long *)0x0) goto LAB_061f6074;
    uVar7 = FUN_0562000c(plVar6,0);
    if ((uVar7 & 1) == 0) {
      lVar13 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar8 = FUN_05614e08(lVar13 + 0x20,0);
      uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
      puVar9 = (undefined8 *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
      if ((uVar7 & 1) == 0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_06a6da48 + 0x130);
        if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_06a6da48)) {
          if (plVar6 == param_1) {
            uVar8 = *(undefined8 *)PTR_DAT_06a6da40;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            plVar10 = (long *)FUN_05614e08(uVar8,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(*(long *)puVar3);
            }
            if (plVar10 == (long *)0x0) goto LAB_061f6074;
            uVar7 = (**(code **)(*plVar10 + 0x298))
                              (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2a0));
            puVar9 = (undefined8 *)PTR_DAT_06a30cc8;
            if ((uVar7 & 1) != 0) goto LAB_061f5d60;
          }
          uVar8 = *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar8 = FUN_05614e08(uVar8,0);
          uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
          puVar9 = (undefined8 *)System_Xml_HtmlUtf8RawTextWriter_TypeInfo;
          if ((uVar7 & 1) != 0) goto LAB_061f5d60;
          bVar2 = *(byte *)(*(long *)PTR_DAT_06a6d9f0 + 0x130);
          if (*(byte *)(*param_1 + 0x130) < bVar2) {
            bVar4 = false;
          }
          else {
            bVar4 = *(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
                    *(long *)PTR_DAT_06a6d9f0;
          }
          if ((plVar6 != param_1) || (bVar4)) {
            puVar9 = (undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
            if (bVar4) goto LAB_061f5d60;
          }
          else {
            uVar8 = *(undefined8 *)PTR_DAT_06a6d9e8;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            plVar10 = (long *)FUN_05614e08(uVar8,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(*(long *)puVar3);
            }
            if (plVar10 == (long *)0x0) goto LAB_061f6074;
            uVar7 = (**(code **)(*plVar10 + 0x298))
                              (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2a0));
            puVar9 = (undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
            if ((uVar7 & 1) != 0) goto LAB_061f5d60;
          }
          bVar2 = *(byte *)(*(long *)PTR_DAT_06a6da00 + 0x130);
          if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_06a6da00)) {
            if (plVar6 == param_1) {
              uVar8 = *(undefined8 *)PTR_DAT_06a6d9f8;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              plVar10 = (long *)FUN_05614e08(uVar8,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(*(long *)puVar3);
              }
              if (plVar10 == (long *)0x0) goto LAB_061f6074;
              uVar7 = (**(code **)(*plVar10 + 0x298))
                                (plVar10,param_1,*(undefined8 *)(*plVar10 + 0x2a0));
              puVar9 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo
              ;
              if ((uVar7 & 1) != 0) goto LAB_061f5d60;
            }
            lVar13 = *(long *)(puVar1 + 0xa0);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            plVar10 = (long *)FUN_05614e08(lVar13 + 0x20,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(*(long *)puVar3);
            }
            if (plVar10 != (long *)0x0) {
              uVar7 = (**(code **)(*plVar10 + 0x298))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2a0));
              if ((uVar7 & 1) == 0) {
                lVar13 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f488,6);
                if (lVar13 != 0) {
                  FUN_02a720b4(lVar13,0,*(undefined8 *)System_Xml_HtmlTernaryTree_TypeInfo);
                  uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                  FUN_02a720b4(lVar13,1,uVar8);
                  uVar8 = thunk_FUN_02ea289c(
                                            Unity_Services_CloudSave_Internal_Http_HttpClient_TypeInfo
                                            );
                  FUN_02a720b4(lVar13,2,uVar8);
                  uVar8 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170))
                  ;
                  FUN_02a720b4(lVar13,3,uVar8);
                  uVar8 = thunk_FUN_02ea289c(PTR_DAT_06a807a0);
                  FUN_02a720b4(lVar13,4,uVar8);
                  puVar1 = PTR_DAT_06a8f288;
                  if (plVar6 == param_1) {
                    puVar1 = Unity_Services_Economy_Internal_Http_HttpClient_TypeInfo;
                  }
                  uVar8 = thunk_FUN_02ea289c(puVar1);
                  FUN_02a71e6c(lVar13);
                  FUN_02a720b4(lVar13,5,uVar8);
                  uVar8 = FUN_0548dc0c(lVar13,0);
                  thunk_FUN_02ea289c(PTR_DAT_06a2f4a0);
                  uVar11 = thunk_FUN_02e78ab8();
                  FUN_0563d574(uVar11,uVar8,0);
                  uVar8 = thunk_FUN_02ea289c(
                                            Unity_Services_CloudCode_Internal_Http_HttpClient_TypeInfo
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cb88(uVar11,uVar8);
                }
              }
              else {
                iVar5 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
                if (iVar5 != 1) {
                  thunk_FUN_02ea289c(PTR_DAT_06a2f4a0);
                  uVar8 = thunk_FUN_02e78ab8();
                  uVar11 = thunk_FUN_02ea289c(UnityWebSocketSharp_HttpBase_TypeInfo);
                  FUN_0563d574(uVar8,uVar11,0);
                  uVar11 = thunk_FUN_02ea289c(
                                             Unity_Services_CloudCode_Internal_Http_HttpClient_TypeInfo
                                             );
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cb88(uVar8,uVar11);
                }
                plVar10 = (long *)thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a31508);
                FUN_054990d0(plVar10,0);
                if (plVar10 != (long *)0x0) {
                  FUN_0549b44c(plVar10,0x5b,0);
                  uVar8 = (**(code **)(*plVar6 + 0x418))(plVar6,*(undefined8 *)(*plVar6 + 0x420));
                  if (*(int *)(*(long *)PTR_DAT_06a6d9e0 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a6d9e0);
                  }
                  uVar8 = FUN_061f5558(uVar8);
                  FUN_0549aae4(plVar10,uVar8,0);
                  iVar5 = FUN_05499c50(plVar10,0);
                  puVar9 = (undefined8 *)PTR_DAT_06a30cc8;
                  if (1 < iVar5) {
                    uVar8 = (**(code **)(*plVar10 + 0x168))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                    return uVar8;
                  }
                  goto LAB_061f5d60;
                }
              }
            }
          }
          else {
            lVar13 = FUN_02a74d84(param_1);
            puVar1 = PTR_DAT_06a33998;
            uVar8 = FUN_02a861f0(*(undefined8 *)PTR_DAT_06a33998);
            if (lVar13 != 0) {
              lVar13 = FUN_039749e8(lVar13,*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo
                                    ,uVar8,*(undefined8 *)PTR_DAT_06a74db0);
              pplStack_60 = (long **)&local_58;
              local_68 = 0;
              local_58 = lVar13;
              uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
              if (lVar13 != 0) {
                uVar8 = FUN_039749e8(lVar13,*(undefined8 *)
                                             UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo
                                     ,uVar8,*(undefined8 *)
                                             UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo
                                    );
                uVar8 = FUN_0548d5a0(*(undefined8 *)PTR_DAT_06a353a8,uVar8,
                                     *(undefined8 *)PTR_DAT_06a38168,0);
                FUN_02a71b0c(&local_68);
                return uVar8;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
          }
        }
        else if ((param_1[2] != 0) && (lVar13 = *(long *)(param_1[2] + 0x18), lVar13 != 0)) {
          uVar8 = *(undefined8 *)(lVar13 + 0x18);
          plVar6 = (long *)thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6da00);
          FUN_06203414(plVar6,uVar8);
          pplStack_60 = &local_48;
          local_68 = 0;
          lVar14 = *(long *)PTR_DAT_06a33998;
          lVar13 = *(long *)(lVar14 + 0x38);
          local_48 = plVar6;
          if (lVar13 == 0) {
            FUN_02e756e8(lVar14);
            lVar13 = *(long *)(lVar14 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02e7568c();
          }
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02e7568c();
          }
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar8 = FUN_039749e8(plVar6,*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo
                               ,**(undefined8 **)(lVar13 + 0xb8),
                               *(undefined8 *)
                                UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
          uVar8 = FUN_0548d5a0(*(undefined8 *)PTR_DAT_06a353a8,uVar8,*(undefined8 *)PTR_DAT_06a38168
                               ,0);
          plVar6 = local_48;
          if (local_48 == (long *)0x0) {
            return uVar8;
          }
          lVar13 = *local_48;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef10) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_061f5b48;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_02e759c0(local_48,*(long *)PTR_DAT_06a2ef10,0);
LAB_061f5b48:
          (*(code *)*puVar9)(plVar6,puVar9[1]);
          return uVar8;
        }
LAB_061f6074:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
    }
    else {
      lVar13 = *(long *)(puVar1 + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar8 = FUN_05614e08(lVar13 + 0x20,0);
      uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
      puVar9 = (undefined8 *)PTR_DAT_06a77f18;
      if ((uVar7 & 1) == 0) {
        lVar13 = *(long *)(puVar1 + 0x28);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar8 = FUN_05614e08(lVar13 + 0x20,0);
        uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
        puVar9 = (undefined8 *)PTR_DAT_06a33dc8;
        if ((uVar7 & 1) == 0) {
          lVar13 = *(long *)(puVar1 + 0x18);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar8 = FUN_05614e08(lVar13 + 0x20,0);
          uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
          if ((uVar7 & 1) == 0) {
            lVar13 = *(long *)(puVar1 + 0x30);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar8 = FUN_05614e08(lVar13 + 0x20,0);
            uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
            puVar9 = (undefined8 *)PTR_DAT_06aa98b8;
            if ((uVar7 & 1) == 0) {
              lVar13 = *(long *)(puVar1 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar8 = FUN_05614e08(lVar13 + 0x20,0);
              uVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
              puVar9 = (undefined8 *)PTR_DAT_06a7cc78;
              if ((uVar7 & 1) == 0) {
                lVar13 = *(long *)(puVar1 + 0x68);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar8 = FUN_05614e08(lVar13 + 0x20,0);
                uVar7 = (**(code **)(*plVar6 + 0x938))
                                  (plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
                puVar9 = (undefined8 *)PTR_DAT_06a7bc40;
                if ((uVar7 & 1) == 0) {
                  lVar13 = *(long *)(puVar1 + 0x78);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar8 = FUN_05614e08(lVar13 + 0x20,0);
                  uVar7 = (**(code **)(*plVar6 + 0x938))
                                    (plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
                  puVar9 = (undefined8 *)PTR_DAT_06a5c8f8;
                  if ((uVar7 & 1) == 0) {
                    lVar13 = *(long *)(puVar1 + 0x80);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar8 = FUN_05614e08(lVar13 + 0x20,0);
                    uVar7 = (**(code **)(*plVar6 + 0x938))
                                      (plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
                    puVar9 = (undefined8 *)PTR_DAT_06a77f20;
                    if ((uVar7 & 1) == 0) {
                      lVar13 = *(long *)(puVar1 + 0x88);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      uVar8 = FUN_05614e08(lVar13 + 0x20,0);
                      uVar7 = (**(code **)(*plVar6 + 0x938))
                                        (plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x940));
                      puVar9 = (undefined8 *)PTR_DAT_06a30cc8;
                      if ((uVar7 & 1) != 0) {
                        puVar9 = (undefined8 *)PTR_DAT_06a35430;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_06222224(*(undefined8 *)System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo,0);
            puVar9 = (undefined8 *)PTR_DAT_06aa98b8;
          }
        }
      }
    }
  }
LAB_061f5d60:
  return *puVar9;
}



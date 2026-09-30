/*
FUNCTION_NAME: FUN_066987b8
ENTRY_POINT: 066987b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_5
*/


void FUN_066987b8(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_07557f1e & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_Layout_ILayoutProcessor_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo);
    FUN_03188a78(UnityEngine_UI_ILayoutSelfController_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(System_Runtime_Remoting_Lifetime_ILease_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1d68);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ILineRenderable_TypeInfo);
    DAT_07557f1e = 1;
  }
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar2 = param_1[10];
    plVar9 = (long *)(param_1 + 0x14);
    lVar11 = *plVar9;
    lVar7 = *(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20);
    iVar3 = *param_1;
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_06698c84(param_5,iVar1,iVar3 << 2,iVar2,*(undefined4 *)(lVar11 + 8));
    if (*param_5 != 0) {
      FUN_03a300c4(*param_5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12),0,0,
                   param_1[2] * *param_1,
                   *(undefined8 *)UnityEngine_UI_ILayoutSelfController_TypeInfo);
      if (param_5[1] != 0) {
        FUN_03a2fbd4(param_5[1],param_3,param_4,0,0,param_1[2],
                     *(undefined8 *)UnityEngine_UIElements_Layout_ILayoutProcessor_TypeInfo);
        puVar6 = UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ILineRenderable_TypeInfo;
        puVar5 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo;
        if (param_5[2] != 0) {
          FUN_03a2fd10(param_5[2],*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0,0,
                       param_1[10],
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo);
          lVar7 = param_5[4];
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (lVar7 != 0) {
            FUN_069e0220(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4),param_1[2],0);
            if (param_5[4] != 0) {
              FUN_069e0220(param_5[4],*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),
                           iVar3 << 2,0);
              if (param_5[4] != 0) {
                thunk_FUN_069e07ac(param_5[4],(int)param_5[5],
                                   *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),
                                   *param_5,0);
                if (param_5[4] != 0) {
                  thunk_FUN_069e07ac(param_5[4],(int)param_5[5],
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),
                                     param_5[1],0);
                  if (param_5[4] != 0) {
                    thunk_FUN_069e07ac(param_5[4],(int)param_5[5],
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc),
                                       param_5[2],0);
                    if ((param_6 & 1) == 0) {
                      lVar7 = param_5[4];
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      if (lVar7 == 0) goto LAB_06698c80;
                      FUN_069e0220(lVar7,**(undefined4 **)(*(long *)puVar6 + 0xb8),
                                   *(undefined4 *)(param_2 + 0x3c),0);
                      if (param_5[4] == 0) goto LAB_06698c80;
                      thunk_FUN_069e08f8(param_5[4],(int)param_5[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                                         *(undefined8 *)(param_2 + 0x50),0);
                    }
                    else {
                      lVar7 = param_5[3];
                      auVar12 = FUN_0460e8d4(plVar9,*(undefined8 *)
                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo
                                            );
                      lVar11 = *plVar9;
                      if ((*(ushort *)
                            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                      0x20) + 0x135) & 1) == 0) {
                        FUN_031c09d4();
                      }
                      if (lVar7 == 0) goto LAB_06698c80;
                      FUN_03a2fd10(lVar7,auVar12._0_8_,auVar12._8_8_,0,0,*(undefined4 *)(lVar11 + 8)
                                   ,*(undefined8 *)puVar5);
                      lVar7 = *(long *)puVar6;
                      lVar11 = param_5[4];
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar7 = *(long *)puVar6;
                      }
                      lVar10 = *plVar9;
                      uVar4 = **(undefined4 **)(lVar7 + 0xb8);
                      if ((*(ushort *)
                            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                      0x20) + 0x135) & 1) == 0) {
                        FUN_031c09d4(*(long *)(*(long *)
                                                System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                              0x20));
                      }
                      if (lVar11 == 0) goto LAB_06698c80;
                      FUN_069e0220(lVar11,uVar4,*(undefined4 *)(lVar10 + 8),0);
                      if (param_5[4] == 0) goto LAB_06698c80;
                      thunk_FUN_069e07ac(param_5[4],(int)param_5[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                                         param_5[3],0);
                    }
                    lVar11 = param_5[4];
                    lVar7 = param_5[5];
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    if (lVar11 != 0) {
                      thunk_FUN_069e08f8(lVar11,(int)lVar7,
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c),
                                         *(undefined8 *)(param_2 + 0x58),0);
                      if (param_5[4] != 0) {
                        thunk_FUN_069e08f8(param_5[4],(int)param_5[5],
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20)
                                           ,*(undefined8 *)(param_2 + 0x68),0);
                        if (param_5[4] != 0) {
                          thunk_FUN_069e08f8(param_5[4],(int)param_5[5],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar6 + 0xb8) + 0x24),
                                             *(undefined8 *)(param_2 + 0x60),0);
                          if (param_5[4] != 0) {
                            thunk_FUN_069e08f8(param_5[4],(int)param_5[5],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0x28),
                                               *(undefined8 *)(param_2 + 0x48),0);
                            puVar5 = System_Runtime_Remoting_Lifetime_ILease_TypeInfo;
                            if (param_5[4] != 0) {
                              iVar1 = param_1[2] + 0x3f;
                              iVar2 = param_1[2] + 0x7e;
                              if (-1 < iVar1) {
                                iVar2 = iVar1;
                              }
                              FUN_069e0ccc(param_5[4],(int)param_5[5],iVar2 >> 6,1,1,0);
                              uVar8 = *(undefined8 *)puVar5;
                              param_1[2] = 0;
                              FUN_0460e8a0(plVar9,uVar8);
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
LAB_06698c80:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



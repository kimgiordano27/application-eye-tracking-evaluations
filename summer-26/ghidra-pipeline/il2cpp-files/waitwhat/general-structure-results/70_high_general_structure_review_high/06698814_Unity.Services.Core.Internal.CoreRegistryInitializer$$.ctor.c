/*
FUNCTION_NAME: Unity.Services.Core.Internal.CoreRegistryInitializer$$.ctor
ENTRY_POINT: 06698814
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


void Unity_Services_Core_Internal_CoreRegistryInitializer___ctor(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar8;
  ulong unaff_x23;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  FUN_03188a78();
  FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
  FUN_03188a78(System_Runtime_Remoting_Lifetime_ILease_TypeInfo);
  FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
  FUN_03188a78(PTR_DAT_070f1d68);
  FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ILineRenderable_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xf1e) = 1;
  if (unaff_x19[2] == 0) {
    return;
  }
  if (unaff_x21 != 0) {
    plVar8 = (long *)(unaff_x19 + 0x14);
    lVar6 = *(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20);
    iVar2 = *unaff_x19;
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x21 + 0x40) + 1;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_06698c84();
    if (*unaff_x20 != 0) {
      FUN_03a300c4(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12),0,
                   0,unaff_x19[2] * *unaff_x19,
                   *(undefined8 *)UnityEngine_UI_ILayoutSelfController_TypeInfo);
      if (unaff_x20[1] != 0) {
        FUN_03a2fbd4();
        puVar5 = UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ILineRenderable_TypeInfo;
        puVar4 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo;
        if (unaff_x20[2] != 0) {
          FUN_03a2fd10(unaff_x20[2],*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0
                       ,0,unaff_x19[10],
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerTaggedObject_TypeInfo);
          lVar6 = unaff_x20[4];
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          if (lVar6 != 0) {
            FUN_069e0220(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4),unaff_x19[2],0
                        );
            if (unaff_x20[4] != 0) {
              FUN_069e0220(unaff_x20[4],*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                           iVar2 << 2,0);
              if (unaff_x20[4] != 0) {
                thunk_FUN_069e07ac(unaff_x20[4],(int)unaff_x20[5],
                                   *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                                   *unaff_x20,0);
                if (unaff_x20[4] != 0) {
                  thunk_FUN_069e07ac(unaff_x20[4],(int)unaff_x20[5],
                                     *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14),
                                     unaff_x20[1],0);
                  if (unaff_x20[4] != 0) {
                    thunk_FUN_069e07ac(unaff_x20[4],(int)unaff_x20[5],
                                       *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),
                                       unaff_x20[2],0);
                    if ((unaff_x23 & 1) == 0) {
                      lVar6 = unaff_x20[4];
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      if (lVar6 == 0) goto LAB_06698c80;
                      FUN_069e0220(lVar6,**(undefined4 **)(*(long *)puVar5 + 0xb8),
                                   *(undefined4 *)(unaff_x21 + 0x3c),0);
                      if (unaff_x20[4] == 0) goto LAB_06698c80;
                      thunk_FUN_069e08f8(unaff_x20[4],(int)unaff_x20[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                                         *(undefined8 *)(unaff_x21 + 0x50),0);
                    }
                    else {
                      lVar6 = unaff_x20[3];
                      auVar11 = FUN_0460e8d4(plVar8,*(undefined8 *)
                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo
                                            );
                      lVar10 = *plVar8;
                      if ((*(ushort *)
                            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                      0x20) + 0x135) & 1) == 0) {
                        FUN_031c09d4();
                      }
                      if (lVar6 == 0) goto LAB_06698c80;
                      FUN_03a2fd10(lVar6,auVar11._0_8_,auVar11._8_8_,0,0,*(undefined4 *)(lVar10 + 8)
                                   ,*(undefined8 *)puVar4);
                      lVar6 = *(long *)puVar5;
                      lVar10 = unaff_x20[4];
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar6 = *(long *)puVar5;
                      }
                      lVar9 = *plVar8;
                      uVar3 = **(undefined4 **)(lVar6 + 0xb8);
                      if ((*(ushort *)
                            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                      0x20) + 0x135) & 1) == 0) {
                        FUN_031c09d4(*(long *)(*(long *)
                                                System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo +
                                              0x20));
                      }
                      if (lVar10 == 0) goto LAB_06698c80;
                      FUN_069e0220(lVar10,uVar3,*(undefined4 *)(lVar9 + 8),0);
                      if (unaff_x20[4] == 0) goto LAB_06698c80;
                      thunk_FUN_069e07ac(unaff_x20[4],(int)unaff_x20[5],
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                                         unaff_x20[3],0);
                    }
                    lVar10 = unaff_x20[4];
                    lVar6 = unaff_x20[5];
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    if (lVar10 != 0) {
                      thunk_FUN_069e08f8(lVar10,(int)lVar6,
                                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c),
                                         *(undefined8 *)(unaff_x21 + 0x58),0);
                      if (unaff_x20[4] != 0) {
                        thunk_FUN_069e08f8(unaff_x20[4],(int)unaff_x20[5],
                                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20)
                                           ,*(undefined8 *)(unaff_x21 + 0x68),0);
                        if (unaff_x20[4] != 0) {
                          thunk_FUN_069e08f8(unaff_x20[4],(int)unaff_x20[5],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar5 + 0xb8) + 0x24),
                                             *(undefined8 *)(unaff_x21 + 0x60),0);
                          if (unaff_x20[4] != 0) {
                            thunk_FUN_069e08f8(unaff_x20[4],(int)unaff_x20[5],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x28),
                                               *(undefined8 *)(unaff_x21 + 0x48),0);
                            puVar4 = System_Runtime_Remoting_Lifetime_ILease_TypeInfo;
                            if (unaff_x20[4] != 0) {
                              iVar2 = unaff_x19[2] + 0x3f;
                              iVar1 = unaff_x19[2] + 0x7e;
                              if (-1 < iVar2) {
                                iVar1 = iVar2;
                              }
                              FUN_069e0ccc(unaff_x20[4],(int)unaff_x20[5],iVar1 >> 6,1,1,0);
                              uVar7 = *(undefined8 *)puVar4;
                              unaff_x19[2] = 0;
                              FUN_0460e8a0(plVar8,uVar7);
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



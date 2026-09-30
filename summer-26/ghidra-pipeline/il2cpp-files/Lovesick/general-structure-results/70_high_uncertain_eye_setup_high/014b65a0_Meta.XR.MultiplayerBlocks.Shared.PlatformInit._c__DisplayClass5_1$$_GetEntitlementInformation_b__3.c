/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_1$$<GetEntitlementInformation>b__3
ENTRY_POINT: 014b65a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  
  puVar4 = (undefined8 *)FUN_00d59724();
  (*(code *)*puVar4)();
  puVar3 = StringLiteral_7493;
  plVar6 = *(long **)(unaff_x19 + 0x30);
  if (plVar6 == (long *)0x0) {
LAB_014b6658:
    if (plVar6 == (long *)0x0) goto LAB_014b69ec;
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<BaseInputModule>_TypeInfo + 300);
    if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Collections_Generic_List<BaseInputModule>_TypeInfo)) {
      lVar5 = FUN_00bc379c(plVar6,*unaff_x26);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
      }
      lVar8 = plVar6[0x13];
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar5 == 0) goto LAB_014b69ec;
      FUN_014a3520(lVar5,uVar7,lVar8);
      plVar6[0x1c] = lVar5;
      plVar6 = *(long **)(unaff_x19 + 0x30);
      goto LAB_014b6658;
    }
  }
  lVar5 = **(long **)(*(long *)(*unaff_x27 + 0x20) + 0xc0);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  plVar6 = (long *)thunk_FUN_00d32ed4(plVar6,*(long *)(lVar5 + 0x80) + 0xe0);
  if (*plVar6 != 0) {
    lVar8 = *(long *)(*plVar6 + 0x80);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4e80);
    if ((lVar5 != 0) && (FUN_013df2bc(), lVar8 != 0)) {
      FUN_013df780(lVar8,lVar5,*(undefined8 *)StringLiteral_1329);
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 != 0) {
        lVar8 = **(long **)(*(long *)(*unaff_x27 + 0x20) + 0xc0);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        plVar6 = (long *)thunk_FUN_00d32ed4(lVar5,*(long *)(lVar8 + 0x80) + 0xe0);
        puVar3 = 
        Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
        if (*plVar6 != 0) {
          lVar8 = *(long *)(*plVar6 + 0x28);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                                    );
          if (lVar5 != 0) {
            FUN_013df2bc();
            puVar2 = Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__;
            if (lVar8 != 0) {
              FUN_013df780(lVar8,lVar5,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
              lVar5 = *(long *)(unaff_x20 + 0x18);
              if (lVar5 != 0) {
                lVar8 = **(long **)(*(long *)(*unaff_x27 + 0x20) + 0xc0);
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_00d5941c();
                }
                plVar6 = (long *)thunk_FUN_00d32ed4(lVar5,*(long *)(lVar8 + 0x80) + 0xe0);
                if (*plVar6 != 0) {
                  lVar8 = *(long *)(*plVar6 + 0x30);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  if ((lVar5 != 0) && (FUN_013df2bc(), lVar8 != 0)) {
                    FUN_013df780(lVar8,lVar5,*(undefined8 *)puVar2);
                    lVar5 = *(long *)(unaff_x20 + 0x18);
                    if (lVar5 != 0) {
                      lVar8 = **(long **)(*(long *)(*unaff_x27 + 0x20) + 0xc0);
                      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                        lVar8 = FUN_00d5941c();
                      }
                      plVar6 = (long *)thunk_FUN_00d32ed4(lVar5,*(long *)(lVar8 + 0x80) + 0xe0);
                      if (*plVar6 != 0) {
                        lVar8 = *(long *)(*plVar6 + 0x38);
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                        if ((lVar5 != 0) && (FUN_013df2bc(), lVar8 != 0)) {
                          FUN_013df780(lVar8,lVar5,*(undefined8 *)puVar2);
                          lVar5 = *(long *)(unaff_x20 + 0x18);
                          if (lVar5 != 0) {
                            lVar8 = **(long **)(*(long *)(*unaff_x27 + 0x20) + 0xc0);
                            if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                              lVar8 = FUN_00d5941c();
                            }
                            plVar6 = (long *)thunk_FUN_00d32ed4(lVar5,*(long *)(lVar8 + 0x80) + 0xe0
                                                               );
                            if (*plVar6 != 0) {
                              lVar8 = *(long *)(*plVar6 + 0x40);
                              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                              if ((lVar5 != 0) &&
                                 (FUN_013df2bc(), puVar3 = StringLiteral_610, lVar8 != 0)) {
                                FUN_013df780(lVar8,lVar5,*(undefined8 *)puVar2);
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (DAT_03776498 == '\0') {
                                  thunk_FUN_00d48444(StringLiteral_610);
                                  DAT_03776498 = '\x01';
                                }
                                lVar5 = *(long *)puVar3;
                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar5 = *(long *)puVar3;
                                }
                                if (*(long *)(unaff_x20 + 0x18) != 0) {
                                  lVar8 = **(long **)(lVar5 + 0xb8);
                                  lVar5 = FUN_00bc379c(*(long *)(unaff_x20 + 0x18),*unaff_x26);
                                  if ((lVar5 != 0) &&
                                     (uVar7 = FUN_028a05b8(*(undefined8 *)(lVar5 + 0x10),0),
                                     lVar8 != 0)) {
                                    FUN_028a07a8(lVar8,uVar7,1,0);
                                    lVar5 = FUN_014b4c8c();
                                    if ((lVar5 != 0) &&
                                       (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
                                      (**(code **)(lVar5 + 0x18))
                                                (*(undefined8 *)(lVar5 + 0x40),
                                                 *(undefined8 *)(unaff_x20 + 0x18),
                                                 *(undefined8 *)(lVar5 + 0x28));
                                    }
                                    lVar5 = thunk_FUN_00d62348(*unaff_x25);
                                    puVar3 = Method_System_IO_BinaryReader_ReadString__;
                                    if (lVar5 != 0) {
                                      FUN_016f27fc();
                                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      FUN_014e0608(lVar5,0);
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
LAB_014b69ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



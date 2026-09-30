/*
FUNCTION_NAME: Newtonsoft.Json.Converters.KeyValuePairConverter$$ReadJson
ENTRY_POINT: 05120654
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


long * Newtonsoft_Json_Converters_KeyValuePairConverter__ReadJson(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  int iVar17;
  ulong unaff_x22;
  long unaff_x23;
  long lVar18;
  long lVar19;
  uint uVar20;
  long in_stack_00000008;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x20 + 0xe6f) = 1;
  in_stack_00000008 = 0;
  if (unaff_x23 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar16 = thunk_FUN_02f45270();
    puVar13 = PTR_DAT_067d7e30;
  }
  else {
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_050ed374();
    puVar13 = PTR_DAT_067da3a8;
    if ((uVar7 & 1) == 0) {
      uVar16 = *(undefined8 *)UnityEngine_ParticleSystem_MainModule_var;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050e4454(uVar16,0);
      uVar7 = FUN_050ed374();
      plVar11 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar11 = unaff_x19;
      }
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar8 = FUN_051203cc();
      if ((unaff_x22 & 1) == 0) {
        if (lVar8 == 0) goto LAB_05120ac4;
        if (*(int *)(lVar8 + 0x18) == 1) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar7 = FUN_050edfb8(plVar11,0,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05120f14;
              if (*(long *)(lVar8 + 0x20) == 0) goto LAB_05120ac4;
              plVar11 = (long *)FUN_02f1863c();
            }
            else {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05120f14;
              if ((*(long *)(lVar8 + 0x20) == 0) ||
                 (uVar16 = FUN_02f1863c(), plVar11 == (long *)0x0)) goto LAB_05120ac4;
              uVar7 = (**(code **)(*plVar11 + 0x298))
                                (plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x2a0));
              if ((uVar7 & 1) == 0) {
                lVar8 = FUN_050fae30(plVar11,0,0);
                if (lVar8 == 0) {
                  return (long *)0x0;
                }
                uVar16 = *(undefined8 *)PTR_DAT_067c9648;
                plVar11 = (long *)thunk_FUN_02f45174(lVar8,uVar16);
                if (plVar11 != (long *)0x0) {
                  return plVar11;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(lVar8,uVar16);
              }
            }
            lVar9 = FUN_050fae30(plVar11,1,0);
            if (lVar9 != 0) {
              uVar16 = *(undefined8 *)PTR_DAT_067c9648;
              plVar11 = (long *)thunk_FUN_02f45174(lVar9,uVar16);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(lVar9,uVar16);
              }
              if (*(int *)(lVar8 + 0x18) != 0) {
                lVar8 = *(long *)(lVar8 + 0x20);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
                {
                  uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar16,0);
                }
                if ((int)plVar11[3] != 0) {
                  plVar11[4] = lVar8;
                  return plVar11;
                }
              }
LAB_05120f14:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05120f14;
            goto LAB_05120ac4;
          }
LAB_05120e70:
          thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
          uVar16 = thunk_FUN_02f45270();
          uVar12 = thunk_FUN_02f6ef30(Unity_AppUI_UI_Picker_UxmlSerializedData_var);
          FUN_05014c44(uVar16,uVar12,0);
          goto LAB_05120ea0;
        }
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar9 = FUN_05120f30();
        bVar4 = lVar9 != 0;
      }
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050edfb8(plVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_05120ac4;
        bVar5 = FUN_050ef1b4(plVar11,0);
        if ((bVar4 & bVar5) == 1) {
          if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar9 = FUN_0512129c(plVar11);
          if (lVar9 == 0) goto LAB_05120ac4;
          bVar4 = *(char *)(lVar9 + 0x15) != '\0';
        }
      }
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_050d645c(*(undefined4 *)(lVar8 + 0x18),0x10,0);
        if (bVar4 != false) {
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_PageView_UxmlSerializedData_var);
          FUN_0492c438(lVar9,uVar6,*(undefined8 *)PageScroll_Page_var);
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cb3f0);
          FUN_03abf17c(lVar10,uVar6,*(undefined8 *)Unity_AppUI_UI_Panel_UxmlSerializedData_var);
          puVar3 = Unity_AppUI_UI_PageIndicator_UxmlSerializedData_var;
          puVar13 = PTR_DAT_067cb3c8;
          iVar17 = 0;
          do {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar20 = 0;
              do {
                if (uVar1 <= uVar20) goto LAB_05120f14;
                lVar18 = *(long *)(lVar8 + (long)(int)uVar20 * 8 + 0x20);
                if (lVar18 == 0) goto LAB_05120e70;
                uVar16 = FUN_02f1863c(lVar18);
                if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
                }
                uVar7 = FUN_050edfb8(plVar11,0,0);
                if ((uVar7 & 1) == 0) {
LAB_05120944:
                  if (lVar9 == 0) goto LAB_05120ac4;
                  uVar7 = FUN_0492e7f4(lVar9,uVar16,&stack0x00000008,*(undefined8 *)puVar3);
                  if ((uVar7 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    lVar19 = FUN_0512129c(uVar16);
                    if (iVar17 != 0) goto LAB_051209a0;
LAB_05120970:
                    if (lVar19 == 0) goto LAB_05120ac4;
LAB_051209ac:
                    if (((*(char *)(lVar19 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                       (*(int *)(in_stack_00000008 + 0x18) == iVar17)) {
                      if (lVar10 == 0) goto LAB_05120ac4;
                      lVar14 = *(long *)(lVar10 + 0x10);
                      lVar15 = *(long *)puVar13;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_05120ac4;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
                      }
                      else {
                        FUN_03abf904(lVar10,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (in_stack_00000008 == 0) goto LAB_05120ac4;
                    lVar19 = *(long *)(in_stack_00000008 + 0x10);
                    if (iVar17 == 0) goto LAB_05120970;
LAB_051209a0:
                    if (lVar19 == 0) goto LAB_05120ac4;
                    if (*(char *)(lVar19 + 0x15) != '\0') goto LAB_051209ac;
                  }
                  if (in_stack_00000008 == 0) {
                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                 UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var
                                               );
                    puVar2 = UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var;
                    *(long *)(lVar18 + 0x10) = lVar19;
                    *(int *)(lVar18 + 0x18) = iVar17;
                    FUN_0492cd38(lVar9,uVar16,lVar18,*(undefined8 *)puVar2);
                  }
                }
                else {
                  if (plVar11 == (long *)0x0) goto LAB_05120ac4;
                  uVar7 = (**(code **)(*plVar11 + 0x298))
                                    (plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x2a0));
                  if ((uVar7 & 1) != 0) goto LAB_05120944;
                }
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)uVar1);
            }
            puVar2 = PTR_DAT_067da3a8;
            if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            unaff_x23 = FUN_05120f30(unaff_x23);
            if (unaff_x23 == 0) {
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar7 = FUN_050ed374(plVar11,0,0);
              if ((uVar7 & 1) == 0) {
                if (plVar11 == (long *)0x0) break;
                uVar7 = FUN_050ef21c(plVar11,0);
                if ((uVar7 & 1) == 0) {
                  if (lVar10 != 0) {
                    uVar16 = FUN_050fae30(plVar11,*(undefined4 *)(lVar10 + 0x18),0);
                    plVar11 = (long *)thunk_FUN_02f45174(uVar16,*(undefined8 *)PTR_DAT_067c9648);
                    goto LAB_05120e30;
                  }
                  break;
                }
              }
              if (lVar10 != 0) {
                plVar11 = (long *)FUN_02f0880c(*(undefined8 *)UnityEngine_UIElements_StyleCursor_var
                                               ,*(undefined4 *)(lVar10 + 0x18));
                goto LAB_05120e30;
              }
              break;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            iVar17 = iVar17 + 1;
            lVar8 = FUN_051203cc(unaff_x23,plVar11,1);
          } while (lVar8 != 0);
          goto LAB_05120ac4;
        }
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050ed374(plVar11,0,0);
        if ((uVar7 & 1) != 0) {
          iVar17 = *(int *)(lVar8 + 0x18);
          if (0 < iVar17) {
            plVar11 = (long *)(lVar8 + 0x20);
            do {
              if (*plVar11 == 0) goto LAB_05120e70;
              iVar17 = iVar17 + -1;
              plVar11 = plVar11 + 1;
            } while (iVar17 != 0);
          }
          plVar11 = (long *)FUN_02f0880c(*(undefined8 *)UnityEngine_UIElements_StyleCursor_var);
          FUN_050f7cb4(lVar8,plVar11,0,0);
          return plVar11;
        }
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cb3f0);
        FUN_03abf17c(lVar10,uVar6,*(undefined8 *)Unity_AppUI_UI_Panel_UxmlSerializedData_var);
        puVar13 = PTR_DAT_067cb3c8;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            if (uVar1 <= (uint)lVar9) goto LAB_05120f14;
            lVar18 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
            if (lVar18 == 0) goto LAB_05120e70;
            uVar16 = FUN_02f1863c(lVar18);
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
            }
            uVar7 = FUN_050edfb8(plVar11,0,0);
            if ((uVar7 & 1) == 0) {
LAB_05120c54:
              if (lVar10 == 0) goto LAB_05120ac4;
              lVar19 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)puVar13;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_05120ac4;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                *(long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
              }
              else {
                FUN_03abf904(lVar10,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar11 == (long *)0x0) goto LAB_05120ac4;
              uVar7 = (**(code **)(*plVar11 + 0x298))
                                (plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x2a0));
              if ((uVar7 & 1) != 0) goto LAB_05120c54;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
        }
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050ed374(plVar11,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_05120ac4;
          uVar7 = FUN_050ef21c(plVar11,0);
          if ((uVar7 & 1) == 0) {
            if (lVar10 == 0) goto LAB_05120ac4;
            uVar16 = FUN_050fae30(plVar11,*(undefined4 *)(lVar10 + 0x18),0);
            plVar11 = (long *)thunk_FUN_02f45174(uVar16,*(undefined8 *)PTR_DAT_067c9648);
            goto LAB_05120e30;
          }
        }
        if (lVar10 != 0) {
          plVar11 = (long *)FUN_02f0880c(*(undefined8 *)UnityEngine_UIElements_StyleCursor_var,
                                         *(undefined4 *)(lVar10 + 0x18));
LAB_05120e30:
          FUN_03abfec0(lVar10,plVar11,0,
                       *(undefined8 *)
                        UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var
                      );
          return plVar11;
        }
      }
LAB_05120ac4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar16 = thunk_FUN_02f45270();
    puVar13 = PTR_DAT_067d9d58;
  }
  uVar12 = thunk_FUN_02f6ef30(puVar13);
  FUN_0504ee1c(uVar16,uVar12,0);
LAB_05120ea0:
  uVar12 = thunk_FUN_02f6ef30(UnityEngine_UIElements_PointerDeviceState_PointerLocation_var);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar16,uVar12);
}



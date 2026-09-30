/*
FUNCTION_NAME: FUN_05121874
ENTRY_POINT: 05121874
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x05122930) */
/* WARNING: Removing unreachable block (ram,0x051227f0) */
/* WARNING: Removing unreachable block (ram,0x05121fd0) */
/* WARNING: Removing unreachable block (ram,0x05122218) */
/* WARNING: Removing unreachable block (ram,0x051229fc) */

long * FUN_05121874(long param_1,long *param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 uVar22;
  long lVar23;
  long local_88;
  long local_70;
  long *local_68;
  
  if ((DAT_06bb9e72 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var);
    FUN_02f08768(UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var);
    FUN_02f08768(PTR_DAT_067d9bc0);
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var);
    FUN_02f08768(Unity_AppUI_UI_PageIndicator_UxmlSerializedData_var);
    FUN_02f08768(PageScroll_Page_var);
    FUN_02f08768(Unity_AppUI_UI_PageView_UxmlSerializedData_var);
    FUN_02f08768(UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067d9990);
    FUN_02f08768(PTR_DAT_067d9998);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                );
    FUN_02f08768(System_Diagnostics_Process_ProcInfo_var);
    FUN_02f08768(Unity_AppUI_UI_Progress_UxmlSerializedData_var);
    FUN_02f08768(Unity_AppUI_UI_Quote_UxmlSerializedData_var);
    FUN_02f08768(Unity_AppUI_UI_Radio_UxmlSerializedData_var);
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(UnityEngine_ParticleSystem_MainModule_var);
    FUN_02f08768(PTR_DAT_067da3a8);
    DAT_06bb9e72 = 1;
  }
  puVar17 = PTR_DAT_067c9338;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar22 = thunk_FUN_02f45270();
    puVar17 = PTR_DAT_067d7e30;
  }
  else {
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050ed374(param_2,0,0);
    puVar2 = PTR_DAT_067da3a8;
    if ((uVar10 & 1) == 0) {
      uVar22 = *(undefined8 *)UnityEngine_ParticleSystem_MainModule_var;
      if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar22 = FUN_050e4454(uVar22,0);
      uVar10 = FUN_050ed374(param_2,uVar22,0);
      plVar16 = (long *)0x0;
      if ((uVar10 & 1) == 0) {
        plVar16 = param_2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var;
      plVar11 = (long *)FUN_051216b0(param_1,plVar16,0);
      if ((param_3 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_0512292c;
        lVar12 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05121acc;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_05121acc:
        iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        puVar5 = 
        UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var;
        if (iVar8 == 1) {
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) ==
                  *(long *)
                   UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                 ) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto Newtonsoft_Json_Converters_UnixDateTimeConverter___ctor;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_02f421d0(plVar11,*(long *)
                                          UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                                 ,0);
Newtonsoft_Json_Converters_UnixDateTimeConverter___ctor:
          lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
          if (lVar12 == 0) {
            thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
            uVar22 = thunk_FUN_02f45270();
            uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
            FUN_05014c44(uVar22,uVar15,0);
            goto LAB_051229e4;
          }
          if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050edfb8(plVar16,0,0);
          if ((uVar10 & 1) == 0) {
            plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,1);
            lVar14 = *plVar11;
            lVar12 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar12) goto LAB_05122780;
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
          }
          else {
            lVar12 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05122688;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar5,0);
LAB_05122688:
            lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
            if ((lVar12 == 0) || (uVar22 = FUN_050205e0(lVar12,0), plVar16 == (long *)0x0))
            goto LAB_0512292c;
            uVar10 = (**(code **)(*plVar16 + 0x298))
                               (plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x2a0));
            if ((uVar10 & 1) == 0) {
              lVar14 = *(long *)
                        UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_02f41ef8(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02f41e9c();
              }
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02f41e9c();
              }
              return (long *)**(undefined8 **)(lVar12 + 0xb8);
            }
            plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,1);
            lVar14 = *plVar11;
            lVar12 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar12) goto LAB_05122780;
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar11,lVar12,0);
          goto LAB_0512278c;
        }
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar12 = FUN_05120f30(param_1);
        bVar6 = (bool)(lVar12 != 0 & param_3);
      }
      if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050edfb8(plVar16,0,0);
      if ((uVar10 & 1) != 0) {
        if (plVar16 == (long *)0x0) goto LAB_0512292c;
        bVar7 = FUN_050ef1b4(plVar16,0);
        if ((bVar6 & bVar7) == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar12 = FUN_0512129c(plVar16);
          if (lVar12 == 0) goto LAB_0512292c;
          bVar6 = *(char *)(lVar12 + 0x15) != '\0';
        }
      }
      puVar2 = PTR_DAT_067c8f80;
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05121bec;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_05121bec:
        uVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar2);
        }
        uVar9 = FUN_050d645c(uVar9,0x10,0);
        if (bVar6 == false) {
          if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050ed374(plVar16,0,0);
          if ((uVar10 & 1) == 0) {
            lVar12 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_Radio_UxmlSerializedData_var);
            FUN_03abf17c(lVar12,uVar9,*(undefined8 *)Unity_AppUI_UI_Quote_UxmlSerializedData_var);
            lVar14 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05122498;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067d9990,0);
LAB_05122498:
            plVar11 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
            puVar3 = System_Diagnostics_Process_ProcInfo_var;
            puVar2 = PTR_DAT_067d9998;
            puVar17 = PTR_DAT_067c91b8;
joined_r0x051224b0:
            do {
              local_68 = plVar11;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar14 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar17) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_0512251c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar17,0);
LAB_0512251c:
              uVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
              plVar11 = local_68;
              if ((uVar10 & 1) == 0) {
                if (local_68 == (long *)0x0) goto joined_r0x051228ec;
                lVar14 = *local_68;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 == 0) goto LAB_0512266c;
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                goto LAB_05122654;
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar14 = *local_68;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_05122580;
                  }
                  uVar10 = uVar10 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar2,0);
LAB_05122580:
              lVar14 = (*(code *)*puVar13)(plVar11,puVar13[1]);
              if (lVar14 == 0) {
                thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
                uVar22 = thunk_FUN_02f45270();
                uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
                FUN_05014c44(uVar22,uVar15,0);
                uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar22,uVar15);
              }
              uVar22 = FUN_050205e0(lVar14,0);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8(uVar22,uVar22);
              }
              uVar10 = (**(code **)(*plVar16 + 0x298))
                                 (plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x2a0));
              plVar11 = local_68;
            } while ((uVar10 & 1) == 0);
            if (lVar12 != 0) {
              lVar18 = *(long *)(lVar12 + 0x10);
              lVar23 = *(long *)puVar3;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar18 != 0) {
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
                }
                else {
                  FUN_03abf904(lVar12,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                  plVar11 = local_68;
                }
                goto joined_r0x051224b0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_051222f8;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067d9990,0);
LAB_051222f8:
          local_68 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
          puVar2 = PTR_DAT_067d9998;
          puVar17 = PTR_DAT_067c91b8;
          do {
            plVar16 = local_68;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar12 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar17) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05122374;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar17,0);
LAB_05122374:
            uVar10 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            plVar16 = local_68;
            if ((uVar10 & 1) == 0) {
              if (local_68 == (long *)0x0) goto LAB_051227e4;
              lVar12 = *local_68;
              uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar10 == 0) goto LAB_0512247c;
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_05122464;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar12 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_051223d8;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar2,0);
LAB_051223d8:
            lVar12 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            if (lVar12 == 0) {
              thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
              uVar22 = thunk_FUN_02f45270();
              uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
              FUN_05014c44(uVar22,uVar15,0);
              uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar22,uVar15);
            }
          } while( true );
        }
        lVar14 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_PageView_UxmlSerializedData_var);
        FUN_0492c438(lVar14,uVar9,*(undefined8 *)PageScroll_Page_var);
        lVar12 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_Radio_UxmlSerializedData_var);
        FUN_03abf17c(lVar12,uVar9,*(undefined8 *)Unity_AppUI_UI_Quote_UxmlSerializedData_var);
        puVar5 = Unity_AppUI_UI_PageIndicator_UxmlSerializedData_var;
        puVar3 = PTR_DAT_067d9998;
        puVar2 = PTR_DAT_067c91b8;
        iVar8 = 0;
        local_88 = param_1;
        do {
          lVar18 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_05121ce8;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067d9990,0);
LAB_05121ce8:
          plVar11 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
joined_r0x05121d04:
          local_68 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar18 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_05121d54;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar2,0);
LAB_05121d54:
          uVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          plVar11 = local_68;
          if ((uVar10 & 1) != 0) {
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar18 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05121db8;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar3,0);
LAB_05121db8:
            lVar18 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            if (lVar18 == 0) {
              thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
              uVar22 = thunk_FUN_02f45270();
              uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
              FUN_05014c44(uVar22,uVar15,0);
              uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar22,uVar15);
            }
            uVar22 = FUN_050205e0(lVar18,0);
            if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_050edfb8(plVar16,0,0);
            if ((uVar10 & 1) != 0) goto code_r0x05121e00;
            goto LAB_05121e20;
          }
          if (local_68 != (long *)0x0) {
            lVar18 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
                  puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05121fb8;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
LAB_05121fb8:
            (*(code *)*puVar13)(plVar11,puVar13[1]);
          }
          if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          local_88 = FUN_05120f30(local_88);
          if (local_88 == 0) goto joined_r0x051228ec;
          if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          iVar8 = iVar8 + 1;
          plVar11 = (long *)FUN_051216b0(local_88,plVar16,1);
        } while (plVar11 != (long *)0x0);
      }
LAB_0512292c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar22 = thunk_FUN_02f45270();
    puVar17 = PTR_DAT_067d9d58;
  }
  uVar15 = thunk_FUN_02f6ef30(puVar17);
  FUN_0504ee1c(uVar22,uVar15,0);
LAB_051229e4:
  uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar22,uVar15);
LAB_05122780:
  puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
LAB_0512278c:
  lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
  if (plVar16 != (long *)0x0) {
    if ((lVar12 != 0) &&
       (lVar14 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0)) {
      uVar22 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar22,0);
    }
    if ((int)plVar16[3] != 0) {
      plVar16[4] = lVar12;
      return plVar16;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  goto LAB_0512292c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar21 = piVar21 + 4;
    if (uVar10 == 0) break;
LAB_05122654:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_051228dc;
    }
  }
LAB_0512266c:
  puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
LAB_051228dc:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
joined_r0x051228ec:
  if (lVar12 != 0) {
    plVar16 = (long *)FUN_03ac12f8(lVar12,*(undefined8 *)
                                           Unity_AppUI_UI_Progress_UxmlSerializedData_var);
    return plVar16;
  }
  goto LAB_0512292c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar21 = piVar21 + 4;
    if (uVar10 == 0) break;
LAB_05122464:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_051227d8;
    }
  }
LAB_0512247c:
  puVar13 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
LAB_051227d8:
  (*(code *)*puVar13)(plVar16,puVar13[1]);
LAB_051227e4:
  lVar12 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_05122840;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_05122840:
  uVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,uVar9);
  lVar12 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar12 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto FUN_051228b8;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,5);
FUN_051228b8:
  (*(code *)*puVar13)(plVar11,plVar16,0,puVar13[1]);
  return plVar16;
code_r0x05121e00:
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar10 = (**(code **)(*plVar16 + 0x298))(plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x2a0));
  plVar11 = local_68;
  if ((uVar10 & 1) == 0) goto joined_r0x05121d04;
LAB_05121e20:
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar10 = FUN_0492e7f4(lVar14,uVar22,&local_70,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar23 = FUN_0512129c(uVar22);
    if (iVar8 == 0) goto LAB_05121e84;
LAB_05121e4c:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(char *)(lVar23 + 0x15) == '\0') goto LAB_05121f04;
  }
  else {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar23 = *(long *)(local_70 + 0x10);
    if (iVar8 != 0) goto LAB_05121e4c;
LAB_05121e84:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  if (((*(char *)(lVar23 + 0x14) == '\0') && (local_70 != 0)) &&
     (*(int *)(local_70 + 0x18) != iVar8)) {
LAB_05121f04:
    plVar11 = local_68;
    if (local_70 == 0) {
      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var
                                 );
      *(long *)(lVar18 + 0x10) = lVar23;
      puVar4 = UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var;
      *(int *)(lVar18 + 0x18) = iVar8;
      FUN_0492cd38(lVar14,uVar22,lVar18,*(undefined8 *)puVar4);
      plVar11 = local_68;
    }
    goto joined_r0x05121d04;
  }
  if (lVar12 != 0) {
    lVar19 = *(long *)(lVar12 + 0x10);
    lVar20 = *(long *)System_Diagnostics_Process_ProcInfo_var;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar19 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
      }
      else {
        FUN_03abf904(lVar12,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_05121f04;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



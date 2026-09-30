/*
FUNCTION_NAME: Newtonsoft.Json.Converters.StringEnumConverter$$.ctor
ENTRY_POINT: 05121a24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_17
*/


/* WARNING: Removing unreachable block (ram,0x05122930) */
/* WARNING: Removing unreachable block (ram,0x051227f0) */
/* WARNING: Removing unreachable block (ram,0x05121fd0) */
/* WARNING: Removing unreachable block (ram,0x05122218) */
/* WARNING: Removing unreachable block (ram,0x051229fc) */

long * Newtonsoft_Json_Converters_StringEnumConverter___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long *unaff_x19;
  byte unaff_w22;
  long *unaff_x24;
  long lVar22;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long *in_stack_00000028;
  
  plVar17 = (long *)0x0;
  if (in_ZR) {
    plVar17 = unaff_x19;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var;
  plVar10 = (long *)FUN_051216b0(in_stack_00000008,plVar17,0);
  if ((unaff_w22 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_0512292c;
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_05121acc;
        }
        uVar12 = uVar12 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05121acc:
    iVar8 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    puVar2 = 
    UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var;
    if (iVar8 == 1) {
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)
               UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
             ) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
            goto Newtonsoft_Json_Converters_UnixDateTimeConverter___ctor;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_02f421d0(plVar10,*(long *)
                                      UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                             ,0);
Newtonsoft_Json_Converters_UnixDateTimeConverter___ctor:
      lVar11 = (*(code *)*puVar13)(plVar10,0,puVar13[1]);
      if (lVar11 == 0) {
        thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
        uVar16 = thunk_FUN_02f45270();
        uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
        FUN_05014c44(uVar16,uVar15,0);
        uVar15 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar16,uVar15);
      }
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_050edfb8(plVar17,0,0);
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,1);
        lVar14 = *plVar10;
        lVar11 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar11) goto LAB_05122780;
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
      }
      else {
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05122688;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,0);
LAB_05122688:
        lVar11 = (*(code *)*puVar13)(plVar10,0,puVar13[1]);
        if ((lVar11 == 0) || (uVar15 = FUN_050205e0(lVar11,0), plVar17 == (long *)0x0))
        goto LAB_0512292c;
        uVar12 = (**(code **)(*plVar17 + 0x298))(plVar17,uVar15,*(undefined8 *)(*plVar17 + 0x2a0));
        if ((uVar12 & 1) == 0) {
          lVar14 = *(long *)
                    UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var;
          lVar11 = *(long *)(lVar14 + 0x38);
          if (lVar11 == 0) {
            FUN_02f41ef8(lVar14);
            lVar11 = *(long *)(lVar14 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02f41e9c();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02f41e9c();
          }
          return (long *)**(undefined8 **)(lVar11 + 0xb8);
        }
        plVar17 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,1);
        lVar14 = *plVar10;
        lVar11 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar11) goto LAB_05122780;
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
      }
      puVar13 = (undefined8 *)FUN_02f421d0(plVar10,lVar11,0);
      goto LAB_0512278c;
    }
    bVar6 = false;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar11 = FUN_05120f30(in_stack_00000008);
    bVar6 = (bool)(lVar11 != 0 & unaff_w22);
  }
  if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar12 = FUN_050edfb8(plVar17,0,0);
  if ((uVar12 & 1) != 0) {
    if (plVar17 == (long *)0x0) goto LAB_0512292c;
    bVar7 = FUN_050ef1b4(plVar17,0);
    if ((bVar6 & bVar7) == 1) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar11 = FUN_0512129c(plVar17);
      if (lVar11 == 0) goto LAB_0512292c;
      bVar6 = *(char *)(lVar11 + 0x15) != '\0';
    }
  }
  puVar2 = PTR_DAT_067c8f80;
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_05121bec;
        }
        uVar12 = uVar12 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05121bec:
    uVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar2);
    }
    uVar9 = FUN_050d645c(uVar9,0x10,0);
    if (bVar6 == false) {
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_050ed374(plVar17,0,0);
      if ((uVar12 & 1) == 0) {
        lVar11 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_Radio_UxmlSerializedData_var);
        FUN_03abf17c(lVar11,uVar9,*(undefined8 *)Unity_AppUI_UI_Quote_UxmlSerializedData_var);
        lVar14 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05122498;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067d9990,0);
LAB_05122498:
        plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
        puVar4 = System_Diagnostics_Process_ProcInfo_var;
        puVar2 = PTR_DAT_067d9998;
        puVar3 = PTR_DAT_067c91b8;
joined_r0x051224b0:
        do {
          in_stack_00000028 = plVar10;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0512251c;
              }
              uVar12 = uVar12 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_0512251c:
          uVar12 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          plVar10 = in_stack_00000028;
          if ((uVar12 & 1) == 0) {
            if (in_stack_00000028 == (long *)0x0) goto joined_r0x051228ec;
            lVar14 = *in_stack_00000028;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar12 == 0) goto LAB_0512266c;
            piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_05122654;
          }
          if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = *in_stack_00000028;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_05122580;
              }
              uVar12 = uVar12 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)puVar2,0);
LAB_05122580:
          lVar14 = (*(code *)*puVar13)(plVar10,puVar13[1]);
          if (lVar14 == 0) {
            thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
            uVar15 = thunk_FUN_02f45270();
            uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
            FUN_05014c44(uVar15,uVar16,0);
            uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar15,uVar16);
          }
          uVar15 = FUN_050205e0(lVar14,0);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar15,uVar15);
          }
          uVar12 = (**(code **)(*plVar17 + 0x298))(plVar17,uVar15,*(undefined8 *)(*plVar17 + 0x2a0))
          ;
          plVar10 = in_stack_00000028;
        } while ((uVar12 & 1) == 0);
        if (lVar11 != 0) {
          lVar18 = *(long *)(lVar11 + 0x10);
          lVar22 = *(long *)puVar4;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar18 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
            }
            else {
              FUN_03abf904(lVar11,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              plVar10 = in_stack_00000028;
            }
            goto joined_r0x051224b0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_051222f8;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067d9990,0);
LAB_051222f8:
      in_stack_00000028 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
      puVar4 = PTR_DAT_067d9998;
      puVar2 = PTR_DAT_067c91b8;
      do {
        plVar17 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05122374;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)puVar2,0);
LAB_05122374:
        uVar12 = (*(code *)*puVar13)(plVar17,puVar13[1]);
        plVar17 = in_stack_00000028;
        if ((uVar12 & 1) == 0) {
          if (in_stack_00000028 == (long *)0x0) goto LAB_051227e4;
          lVar11 = *in_stack_00000028;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0512247c;
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_05122464;
        }
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_051223d8;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)puVar4,0);
LAB_051223d8:
        lVar11 = (*(code *)*puVar13)(plVar17,puVar13[1]);
        if (lVar11 == 0) {
          thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
          uVar15 = thunk_FUN_02f45270();
          uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
          FUN_05014c44(uVar15,uVar16,0);
          uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar15,uVar16);
        }
      } while( true );
    }
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_PageView_UxmlSerializedData_var);
    FUN_0492c438(lVar14,uVar9,*(undefined8 *)PageScroll_Page_var);
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)Unity_AppUI_UI_Radio_UxmlSerializedData_var);
    FUN_03abf17c(lVar11,uVar9,*(undefined8 *)Unity_AppUI_UI_Quote_UxmlSerializedData_var);
    puVar4 = Unity_AppUI_UI_PageIndicator_UxmlSerializedData_var;
    puVar2 = PTR_DAT_067d9998;
    puVar3 = PTR_DAT_067c91b8;
    iVar8 = 0;
    do {
      lVar18 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067d9990) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_05121ce8;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067d9990,0);
LAB_05121ce8:
      plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
joined_r0x05121d04:
      in_stack_00000028 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar18 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_05121d54;
          }
          uVar12 = uVar12 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05121d54:
      uVar12 = (*(code *)*puVar13)(plVar10,puVar13[1]);
      plVar10 = in_stack_00000028;
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar18 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05121db8;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)puVar2,0);
LAB_05121db8:
        lVar18 = (*(code *)*puVar13)(plVar10,puVar13[1]);
        if (lVar18 == 0) {
          thunk_FUN_02f6ef30(Unity_Properties_PathVisitor_PropertyScope_var);
          uVar15 = thunk_FUN_02f45270();
          uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RadioGroup_UxmlSerializedData_var);
          FUN_05014c44(uVar15,uVar16,0);
          uVar16 = thunk_FUN_02f6ef30(Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar15,uVar16);
        }
        uVar15 = FUN_050205e0(lVar18,0);
        if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar12 = FUN_050edfb8(plVar17,0,0);
        if ((uVar12 & 1) != 0) goto code_r0x05121e00;
        goto LAB_05121e20;
      }
      if (in_stack_00000028 != (long *)0x0) {
        lVar18 = *in_stack_00000028;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05121fb8;
            }
            uVar12 = uVar12 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)PTR_DAT_067c91b0,0);
LAB_05121fb8:
        (*(code *)*puVar13)(plVar10,puVar13[1]);
      }
      if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_00000008 = FUN_05120f30(in_stack_00000008);
      if (in_stack_00000008 == 0) goto joined_r0x051228ec;
      if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar8 = iVar8 + 1;
      plVar10 = (long *)FUN_051216b0(in_stack_00000008,plVar17,1);
    } while (plVar10 != (long *)0x0);
  }
LAB_0512292c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_05122780:
  puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
LAB_0512278c:
  lVar11 = (*(code *)*puVar13)(plVar10,0,puVar13[1]);
  if (plVar17 != (long *)0x0) {
    if ((lVar11 != 0) &&
       (lVar14 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar14 == 0)) {
      uVar15 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar15,0);
    }
    if ((int)plVar17[3] != 0) {
      plVar17[4] = lVar11;
      return plVar17;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  goto LAB_0512292c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar21 = piVar21 + 4;
    if (uVar12 == 0) break;
LAB_05122654:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_051228dc;
    }
  }
LAB_0512266c:
  puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)PTR_DAT_067c91b0,0);
LAB_051228dc:
  (*(code *)*puVar13)(plVar10,puVar13[1]);
joined_r0x051228ec:
  if (lVar11 != 0) {
    plVar17 = (long *)FUN_03ac12f8(lVar11,*(undefined8 *)
                                           Unity_AppUI_UI_Progress_UxmlSerializedData_var);
    return plVar17;
  }
  goto LAB_0512292c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar21 = piVar21 + 4;
    if (uVar12 == 0) break;
LAB_05122464:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_051227d8;
    }
  }
LAB_0512247c:
  puVar13 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)PTR_DAT_067c91b0,0);
LAB_051227d8:
  (*(code *)*puVar13)(plVar17,puVar13[1]);
LAB_051227e4:
  lVar11 = *plVar10;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_05122840;
      }
      uVar12 = uVar12 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_05122840:
  uVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
  plVar17 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067d9bc0,uVar9);
  lVar11 = *plVar10;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar11 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto FUN_051228b8;
      }
      uVar12 = uVar12 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,5);
FUN_051228b8:
  (*(code *)*puVar13)(plVar10,plVar17,0,puVar13[1]);
  return plVar17;
code_r0x05121e00:
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar12 = (**(code **)(*plVar17 + 0x298))(plVar17,uVar15,*(undefined8 *)(*plVar17 + 0x2a0));
  plVar10 = in_stack_00000028;
  if ((uVar12 & 1) == 0) goto joined_r0x05121d04;
LAB_05121e20:
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar12 = FUN_0492e7f4(lVar14,uVar15,&stack0x00000020,*(undefined8 *)puVar4);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067da3a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar22 = FUN_0512129c(uVar15);
    if (iVar8 != 0) goto LAB_05121e4c;
LAB_05121e84:
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *(long *)(in_stack_00000020 + 0x10);
    if (iVar8 == 0) goto LAB_05121e84;
LAB_05121e4c:
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(char *)(lVar22 + 0x15) == '\0') goto LAB_05121f04;
  }
  if (((*(char *)(lVar22 + 0x14) == '\0') && (in_stack_00000020 != 0)) &&
     (*(int *)(in_stack_00000020 + 0x18) != iVar8)) {
LAB_05121f04:
    plVar10 = in_stack_00000028;
    if (in_stack_00000020 == 0) {
      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var
                                 );
      *(long *)(lVar18 + 0x10) = lVar22;
      puVar5 = UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var;
      *(int *)(lVar18 + 0x18) = iVar8;
      FUN_0492cd38(lVar14,uVar15,lVar18,*(undefined8 *)puVar5);
      plVar10 = in_stack_00000028;
    }
    goto joined_r0x05121d04;
  }
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x10);
    lVar20 = *(long *)System_Diagnostics_Process_ProcInfo_var;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar19 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20) = lVar18;
      }
      else {
        FUN_03abf904(lVar11,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_05121f04;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



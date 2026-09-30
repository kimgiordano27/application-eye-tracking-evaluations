/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 05169bdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  plVar11 = (long *)PTR_DAT_067823f0;
  if (unaff_x25 != (long *)0x0) {
    lVar8 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_05169c40;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05169c40:
    puVar3 = PTR_DAT_06782640;
    (*(code *)*puVar6)();
    puVar4 = PTR_DAT_06782750;
    puVar2 = PTR_DAT_06782548;
    puVar1 = PTR_DAT_06782540;
    if (unaff_x24 != 0) {
      System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                (&stack0x00000008);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar9 = FUN_04b3a824(&stack0x00000030,*(undefined8 *)puVar4), uVar7 = in_stack_00000040
            , (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0566d8ec(uVar7,0);
        uVar7 = FUN_050eb21c(uVar7,0);
        uVar9 = FUN_050f0eb8(uVar7,0);
        if ((uVar9 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          (**(code **)(*unaff_x21 + 0x238))();
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                goto LAB_05169de8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05169de8:
          uVar7 = (*(code *)*puVar6)();
        }
        else {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                goto LAB_05169dc0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05169dc0:
          uVar7 = (*(code *)*puVar6)();
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar8 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05169e54;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(param_1,*(long *)puVar1,0);
LAB_05169e54:
        (*(code *)*puVar6)(param_1,uVar7,puVar6[1]);
      }
      FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_06782748);
      plVar11 = (long *)PTR_DAT_067823f0;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_0516a078;
    uVar5 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar5 < 0x12) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar8 = FUN_05167dbc();
        if (lVar8 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_05169f50;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05169f50:
          uVar7 = (*(code *)*puVar6)();
          if (param_1 != (long *)0x0) {
            lVar8 = *param_1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *plVar11) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                  goto LAB_05169fb8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02d9a5d4(param_1,*plVar11,7);
LAB_05169fb8:
            (*(code *)*puVar6)(param_1,uVar7,puVar6[1]);
            return;
          }
        }
        goto LAB_0516a078;
      }
      if (uVar5 == 0xb) {
        return;
      }
      if (uVar5 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_0516a078;
        goto LAB_0516a008;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_05167054(unaff_x27);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_0516a008:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_0516a078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_GetTimeInSeconds
ENTRY_POINT: 05169b60
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_GetTimeInSeconds(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar12;
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
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x640));
  FUN_02d6084c(PTR_DAT_06782540);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_06764050);
  FUN_02d6084c(PTR_DAT_06764020);
  FUN_02d6084c(PTR_DAT_06782548);
  FUN_02d6084c(PTR_DAT_0677d900);
  *(undefined1 *)(unaff_x23 + 0xe70) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar6 = (long *)FUN_0516a128();
  plVar12 = (long *)PTR_DAT_067823f0;
  if (unaff_x25 != (long *)0x0) {
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_05169c40;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05169c40:
    puVar3 = PTR_DAT_06782640;
    (*(code *)*puVar7)();
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
      while (uVar10 = FUN_04b3a824(&stack0x00000030,*(undefined8 *)puVar4),
            uVar8 = in_stack_00000040, (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0566d8ec(uVar8,0);
        uVar8 = FUN_050eb21c(uVar8,0);
        uVar10 = FUN_050f0eb8(uVar8,0);
        if ((uVar10 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          (**(code **)(*unaff_x21 + 0x238))();
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
                goto LAB_05169de8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05169de8:
          uVar8 = (*(code *)*puVar7)();
        }
        else {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
                goto LAB_05169dc0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05169dc0:
          uVar8 = (*(code *)*puVar7)();
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05169e54;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,0);
LAB_05169e54:
        (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
      }
      FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_06782748);
      plVar12 = (long *)PTR_DAT_067823f0;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_0516a078;
    uVar5 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar5 < 0x12) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar9 = FUN_05167dbc();
        if (lVar9 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_05169f50;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4();
LAB_05169f50:
          uVar8 = (*(code *)*puVar7)();
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *plVar12) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                  goto LAB_05169fb8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*plVar12,7);
LAB_05169fb8:
            (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
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



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 063ad688
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(void)

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
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07db6d50);
                    /* try { // try from 063ad6a0 to 064ad6a7 has its CatchHandler @ 063ad7f0 */
  FUN_0373b518(PTR_DAT_07db6c00);
  FUN_0373b518(PTR_DAT_07db6f40);
  FUN_0373b518(PTR_DAT_07db6f48);
  FUN_0373b518(PTR_DAT_07db6d58);
  FUN_0373b518(PTR_DAT_07db2190);
                    /* try { // try from 063ad6d4 to 064ad6db has its CatchHandler @ 063ad81c */
  *(undefined1 *)(unaff_x23 + 0x6ae) = 1;
  in_stack_00000050 = 0;
                    /* try { // try from 063ad6f8 to 064ad703 has its CatchHandler @ 063ad800 */
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar6 = (long *)FUN_063adc4c();
  plVar12 = (long *)PTR_DAT_07db6c00;
  if (unaff_x25 != (long *)0x0) {
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_063ad764;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063ad764:
    puVar3 = PTR_DAT_07db6e20;
    (*(code *)*puVar7)();
    puVar4 = PTR_DAT_07db6f30;
    puVar2 = PTR_DAT_07db6d58;
    puVar1 = PTR_DAT_07db6d50;
    if (unaff_x24 != 0) {
      FUN_05b0fb30(&stack0x00000008);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar10 = FUN_05e3d424(&stack0x00000030,*(undefined8 *)puVar4),
            uVar8 = in_stack_00000040, (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_06a0d350(uVar8,0);
        uVar8 = FUN_0632ed40(uVar8,0);
        uVar10 = FUN_063349dc(uVar8,0);
        if ((uVar10 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          (**(code **)(*unaff_x21 + 0x238))();
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
                goto LAB_063ad90c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063ad90c:
          uVar8 = (*(code *)*puVar7)();
        }
        else {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
                goto LAB_063ad8e4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063ad8e4:
          uVar8 = (*(code *)*puVar7)();
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_063ad978;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar1,0);
LAB_063ad978:
        (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
      }
      FUN_05e3d544(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6f28);
      plVar12 = (long *)PTR_DAT_07db6c00;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_063adb9c;
    uVar5 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar5 < 0x12) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar9 = FUN_063ab8e0();
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
                goto LAB_063ada74;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063ada74:
          uVar8 = (*(code *)*puVar7)();
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *plVar12) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                  goto LAB_063adadc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar6,*plVar12,7);
LAB_063adadc:
            (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
            return;
          }
        }
        goto LAB_063adb9c;
      }
      if (uVar5 == 0xb) {
        return;
      }
      if (uVar5 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_063adb9c;
        goto LAB_063adb2c;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_063aab78(unaff_x27);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_063adb2c:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_063adb9c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



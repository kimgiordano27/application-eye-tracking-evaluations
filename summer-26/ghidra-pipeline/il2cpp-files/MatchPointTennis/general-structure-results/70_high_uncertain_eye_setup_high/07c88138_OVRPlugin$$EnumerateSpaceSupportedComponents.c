/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 07c88138
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f50aa8);
  FUN_04447ba8(PTR_DAT_09f4db88);
  FUN_04447ba8(PTR_DAT_09f4db90);
  FUN_04447ba8(PTR_DAT_09f4db98);
  FUN_04447ba8(PTR_DAT_09f509d0);
  FUN_04447ba8(PTR_DAT_09f4dba0);
                    /* try { // try from 07c88188 to 07d881af has its CatchHandler @ 07c88524 */
  FUN_04447ba8(PTR_DAT_09f509e0);
  *(undefined1 *)(unaff_x20 + 0x80a) = 1;
  puVar3 = PTR_DAT_09f50a98;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_0737a5ac(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_09f50a98);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_0737a5ac(*(long *)(unaff_x19 + 0x48),*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_09f509d0;
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f509d0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07c8823c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f509d0,0);
LAB_07c8823c:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f509e0) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07c882a4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f509e0,0);
LAB_07c882a4:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f4dba0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_07c88310;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f4dba0,1);
LAB_07c88310:
            puVar4 = PTR_DAT_09f50aa8;
            puVar2 = PTR_DAT_09f4db90;
            puVar1 = PTR_DAT_09f4db88;
            (*(code *)*puVar5)(&stack0x00000080,plVar11,puVar5[1]);
            in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
            in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
            in_stack_00000060 = in_stack_00000080;
            while (uVar6 = FUN_0767900c(&stack0x00000060,*(undefined8 *)puVar2),
                  uVar9 = in_stack_00000070, (uVar6 & 1) != 0) {
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                    goto LAB_07c883b8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_044822ac(plVar11,lVar7,7);
LAB_07c883b8:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000040,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uStack0000000000000088 = in_stack_00000048;
                in_stack_00000080 = in_stack_00000040;
                uStack0000000000000094 = uStack0000000000000054;
                in_stack_00000098 = in_stack_00000058;
                uStack000000000000008c = uStack000000000000004c;
                uStack0000000000000090 = in_stack_00000050;
                FUN_0737a2c8(*(long *)(unaff_x19 + 0x40),uVar9 & 0xffffffff,&stack0x00000080,
                             *(undefined8 *)puVar4);
              }
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                    goto LAB_07c88460;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_044822ac(plVar11,lVar7,8);
LAB_07c88460:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000020,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uStack0000000000000088 = in_stack_00000028;
                in_stack_00000080 = in_stack_00000020;
                uStack0000000000000094 = uStack0000000000000034;
                in_stack_00000098 = in_stack_00000038;
                uStack000000000000008c = uStack000000000000002c;
                uStack0000000000000090 = in_stack_00000030;
                FUN_0737a2c8(*(long *)(unaff_x19 + 0x48),uVar9 & 0xffffffff,&stack0x00000080,
                             *(undefined8 *)puVar4);
              }
            }
            FUN_07679008(&stack0x00000060,*(undefined8 *)puVar1);
            lVar7 = *(long *)(unaff_x19 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



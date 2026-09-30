/*
FUNCTION_NAME: OVRPlugin$$GetKeyboardState
ENTRY_POINT: 07a43c78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetKeyboardState(long param_1)

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
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xa48));
  FUN_04077588(PTR_DAT_092eda50);
  FUN_04077588(PTR_DAT_092eda58);
  FUN_04077588(PTR_DAT_092f05f0);
  FUN_04077588(PTR_DAT_092eda60);
  FUN_04077588(PTR_DAT_092f0600);
  *(undefined1 *)(unaff_x20 + 0x2f3) = 1;
  puVar3 = PTR_DAT_092f06b8;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_06e84c40(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_092f06b8);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_06e84c40(*(long *)(unaff_x19 + 0x48),*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_092f05f0;
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092f05f0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto OVRPlugin__GetSystemKeyboardDescription;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092f05f0,0);
OVRPlugin__GetSystemKeyboardDescription:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092f0600) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07a43dd0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092f0600,0);
LAB_07a43dd0:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092eda60) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_07a43e3c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092eda60,1);
LAB_07a43e3c:
            puVar4 = PTR_DAT_092f06c8;
            puVar2 = PTR_DAT_092eda50;
            puVar1 = PTR_DAT_092eda48;
            (*(code *)*puVar5)(&stack0x00000070,plVar11,puVar5[1]);
            in_stack_00000060 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
            in_stack_00000058 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
            in_stack_00000050 = in_stack_00000070;
            while (uVar6 = FUN_0712a164(&stack0x00000050,*(undefined8 *)puVar2),
                  uVar9 = in_stack_00000060, (uVar6 & 1) != 0) {
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                    goto LAB_07a43ee8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00(plVar11,lVar7,7);
LAB_07a43ee8:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000030,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uStack0000000000000078 = in_stack_00000038;
                in_stack_00000070 = in_stack_00000030;
                uStack0000000000000084 = uStack0000000000000044;
                in_stack_00000088 = in_stack_00000048;
                uStack000000000000007c = uStack000000000000003c;
                uStack0000000000000080 = in_stack_00000040;
                FUN_06e849ac(*(long *)(unaff_x19 + 0x40),uVar9 & 0xffffffff,&stack0x00000070,
                             *(undefined8 *)puVar4);
              }
              plVar11 = *(long **)(unaff_x19 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                    goto LAB_07a43f80;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00(plVar11,lVar7,8);
LAB_07a43f80:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&stack0x00000010,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uStack0000000000000078 = in_stack_00000018;
                in_stack_00000070 = in_stack_00000010;
                uStack0000000000000084 = uStack0000000000000024;
                in_stack_00000088 = in_stack_00000028;
                uStack000000000000007c = uStack000000000000001c;
                uStack0000000000000080 = in_stack_00000020;
                FUN_06e849ac(*(long *)(unaff_x19 + 0x48),uVar9 & 0xffffffff,&stack0x00000070,
                             *(undefined8 *)puVar4);
              }
            }
            FUN_0712a160(&stack0x00000050,*(undefined8 *)puVar1);
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
  FUN_04077830();
}



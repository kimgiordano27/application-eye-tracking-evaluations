/*
FUNCTION_NAME: Fusion.TextWriterLogger$$Dispose
ENTRY_POINT: 01c14120
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c143a8) */
/* WARNING: Removing unreachable block (ram,0x01c14600) */

void Fusion_TextWriterLogger__Dispose(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong uVar16;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_01ab69ac(PTR_DAT_03cbdf88);
                    /* try { // try from 01c14130 to 01d14137 has its CatchHandler @ 01c14744 */
  FUN_01ab69ac(PTR_DAT_03cc3110);
  FUN_01ab69ac(PTR_DAT_03cbf648);
  *(undefined1 *)(unaff_x22 + 0x63f) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar7 = thunk_FUN_01a89e68(*unaff_x21);
  FUN_02215594(lVar7,3,*unaff_x20);
  lVar8 = FUN_01c13d58();
  puVar6 = PTR_DAT_03cc3418;
  puVar5 = PTR_DAT_03cc33f8;
  puVar4 = PTR_DAT_03cbf648;
  puVar3 = PTR_DAT_03cbed20;
  puVar2 = PTR_DAT_03cbed08;
  if (lVar8 != 0) {
    uVar16 = 0;
    do {
      if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar16) {
        if (lVar7 != 0) {
          Animancer_FadeGroup__get_TargetWeight
                    (lVar7,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc3420);
          puVar6 = PTR_DAT_03cc3410;
          puVar5 = PTR_DAT_03cc3408;
          puVar4 = PTR_DAT_03cc33f0;
          puVar3 = PTR_DAT_03cc3110;
          puVar2 = PTR_DAT_03cbdf88;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          while( true ) {
            while( true ) {
              do {
                uVar16 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar5);
                if ((uVar16 & 1) == 0) {
                  FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03cc3400);
                  *(undefined8 *)(unaff_x19 + 0x340) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x19 + 0x340,0);
                  *(undefined8 *)(unaff_x19 + 0x338) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x19 + 0x338,0);
                  return;
                }
                FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar6);
                lVar7 = in_stack_00000008;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = FUN_036cee6c(lVar7,0,0);
              } while ((uVar16 & 1) == 0);
              lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
              if (lVar8 == 0) break;
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar12 = FUN_036cbbbc(lVar7,0);
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),uVar12,*(undefined8 *)(lVar8 + 0x28));
            }
            if (lVar7 == 0) break;
            FUN_01c20e28(lVar7,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_036d4360(lVar7,0);
            uVar12 = FUN_036cbbbc();
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_01c3a3e0(uVar12,0);
            if ((uVar16 & 1) == 0) {
              uVar12 = FUN_036cbbbc(lVar7,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_036d4360(uVar12,0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        break;
      }
      lVar8 = FUN_036cbb80();
      if (lVar8 == 0) break;
      plVar9 = (long *)FUN_036df98c(lVar8,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
LAB_01c141cc:
      lVar13 = *plVar9;
      lVar8 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01c14218;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar8,0);
LAB_01c14218:
      uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar14 & 1) != 0) {
        lVar13 = *plVar9;
        lVar8 = *(long *)puVar3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01c14278;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar8,1);
LAB_01c14278:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar11);
        }
        lVar8 = FUN_036cbbbc(plVar11,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_036d3824(lVar8,0);
        lVar8 = FUN_01c13d58();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar14 = thunk_FUN_025bd1c0(uVar12,*(undefined8 *)(lVar8 + uVar16 * 8 + 0x20),0);
        if ((uVar14 & 1) != 0) {
          FUN_01f49730(plVar11,&stack0x00000038,*(undefined8 *)puVar5);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(lVar7,in_stack_00000038,*(undefined8 *)puVar6);
        }
        goto LAB_01c141cc;
      }
      plVar9 = (long *)thunk_FUN_01a89d6c(plVar9,*(undefined8 *)puVar2);
      if (plVar9 != (long *)0x0) {
        lVar13 = *plVar9;
        lVar8 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01c14390;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar8,0);
LAB_01c14390:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      uVar16 = uVar16 + 1;
      lVar8 = FUN_01c13d58();
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



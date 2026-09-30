/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 05068ca8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0506982c) */

int Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>
              (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x20;
  int iVar14;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long lVar15;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  do {
    uVar5 = FUN_0719124c(param_1,param_2,0);
    if ((uVar5 & 1) == 0) {
LAB_05068d70:
      plVar12 = (long *)*unaff_x22;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05068dc4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x29,0);
LAB_05068dc4:
      uVar11 = (*(code *)*puVar6)(plVar12,unaff_w28,puVar6[1]);
      uVar13 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_07186ef4(uVar13,0);
      uVar5 = FUN_0805c5fc();
      unaff_x22 = in_stack_00000010;
      unaff_x23 = (long *)PTR_DAT_091a7758;
      unaff_x29 = (long *)PTR_DAT_091a7760;
      if ((uVar5 & 1) != 0) {
        if (unaff_w24 == 4) {
          iVar3 = in_stack_00000018._4_4_;
          iVar4 = *(int *)(unaff_x27 + 0x90);
        }
        else {
          if (*(long *)(unaff_x27 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar5 = FUN_06c4a278(*(long *)(unaff_x27 + 0x98),uVar11,(long)&stack0x00000078 + 4,
                               *(undefined8 *)PTR_DAT_091fa820);
          lVar8 = *in_stack_00000020;
          iVar3 = in_stack_00000078._4_4_;
          if ((uVar5 & 1) == 0) {
            iVar3 = in_stack_00000018._4_4_;
          }
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c(*(long *)PTR_DAT_091a7798);
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          iVar4 = iVar3;
          if (iVar3 <= *(int *)(lVar8 + 8)) {
            in_stack_00000030 = uVar11;
            uVar11 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091adc10,&stack0x00000030);
            unaff_x29 = (long *)PTR_DAT_091a7760;
            unaff_x23 = (long *)PTR_DAT_091a7758;
            uVar13 = **(undefined8 **)(unaff_x20 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            plVar12 = (long *)FUN_07186ef4(uVar13,0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uVar13 = (**(code **)(*plVar12 + 0x2f8))(plVar12,*(undefined8 *)(*plVar12 + 0x300));
            uVar11 = FUN_06fd2898(*(undefined8 *)PTR_DAT_091fa858,uVar11,uVar13,0);
            if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_08a106ac(uVar11,0);
            in_stack_00000018._4_4_ = iVar3;
            goto LAB_05069530;
          }
        }
        lVar8 = *(long *)(unaff_x27 + 0x60);
        if (lVar8 == 0) {
LAB_050697a4:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar14 = 0;
        while (iVar14 < *(int *)(lVar8 + 0x18)) {
          plVar12 = (long *)FUN_05a39464(lVar8,iVar14,*(undefined8 *)PTR_DAT_091fa7d0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar8 = *plVar12;
          lVar15 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_05068f28;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          lVar8 = FUN_03d8f370(plVar12);
LAB_05068f28:
          lVar8 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar8 + 8),lVar15);
          (**(code **)(lVar8 + 8))(plVar12,uVar11);
          lVar8 = *(long *)(unaff_x27 + 0x60);
          iVar14 = iVar14 + 1;
          if (lVar8 == 0) goto LAB_050697a4;
        }
        if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar8 = FUN_06c41bb0(*(long *)(unaff_x27 + 0x38),uVar11,*(undefined8 *)PTR_DAT_091fa830);
        in_stack_00000080 = lVar8;
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        lVar15 = in_stack_00000080;
        if (*(int *)(lVar8 + 8) == 0) {
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_0805d00c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
          in_stack_00000058 = in_stack_00000038;
          in_stack_00000050 = in_stack_00000030;
          in_stack_00000068 = in_stack_00000048;
          in_stack_00000060 = in_stack_00000040;
          FUN_05e0b1c8(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_091fa840);
          lVar8 = FUN_05e0af90(&stack0x00000080,0,*(undefined8 *)PTR_DAT_091fa848);
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if (DAT_0983c3d0 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a1008);
            DAT_0983c3d0 = '\x01';
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x10);
          if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          iVar4 = FUN_0717946c(0x10,uVar2,0);
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
LAB_05069230:
          iVar14 = *(int *)(lVar8 + 8);
          if ((iVar4 < iVar14) && (*(int *)(lVar8 + 0xc) < iVar14)) {
            *(int *)(lVar8 + 0xc) = iVar14;
          }
          *(int *)(lVar8 + 8) = iVar4;
        }
        else {
          if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          lVar8 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar15 + 8) + -1,
                               *(undefined8 *)PTR_DAT_091fa848);
          if (*(int *)(lVar8 + 0x18) != unaff_w24) {
LAB_05069058:
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            FUN_0805d00c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
            in_stack_00000058 = in_stack_00000038;
            in_stack_00000050 = in_stack_00000030;
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            FUN_05e0b1c8(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_091fa840);
            lVar8 = in_stack_00000080;
            if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
              FUN_03d8f26c();
            }
            lVar8 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar8 + 8) + -1,
                                 *(undefined8 *)PTR_DAT_091fa848);
            if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (DAT_0983c3d0 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091a1008);
              DAT_0983c3d0 = '\x01';
            }
            if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uVar2 = *(undefined4 *)(*(long *)(lVar8 + 0x10) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            iVar4 = FUN_0717946c(0x10,uVar2,0);
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            goto LAB_05069230;
          }
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          iVar14 = *(int *)(lVar15 + 8);
          if (*(int *)(lVar15 + 8) <= *(int *)(lVar15 + 0xc)) {
            iVar14 = *(int *)(lVar15 + 0xc);
          }
          iVar1 = *(int *)(in_stack_00000088 + 1);
          if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
            iVar1 = *(int *)((long)in_stack_00000088 + 0xc);
          }
          if (*(int *)(lVar8 + 0x14) - *(int *)(lVar8 + 8) < iVar1 + iVar14) goto LAB_05069058;
        }
        lVar8 = in_stack_00000080;
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        lVar8 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar8 + 8) + -1,
                             *(undefined8 *)PTR_DAT_091fa848);
        lVar15 = *in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar4 = *(int *)(lVar15 + 8);
        if (*(int *)(lVar15 + 8) <= *(int *)(lVar15 + 0xc)) {
          iVar4 = *(int *)(lVar15 + 0xc);
        }
        iVar14 = *(int *)(in_stack_00000088 + 1);
        if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
          iVar14 = *(int *)((long)in_stack_00000088 + 0xc);
        }
        if (DAT_0983c3d5 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a7798);
          DAT_0983c3d5 = '\x01';
        }
        plVar12 = (long *)(lVar8 + 0x10);
        lVar15 = *plVar12;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar1 = *(int *)(lVar15 + 8) + iVar14 + iVar4;
        in_stack_00000018._4_4_ = iVar3;
        if (*(int *)(lVar15 + 0x10) < iVar1) {
          if ((*(int *)(lVar15 + 0x14) < iVar1) ||
             (*(int *)(lVar15 + 0x14) <= *(int *)(lVar15 + 0x10))) {
            lVar8 = *in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            unaff_x29 = (long *)PTR_DAT_091a7760;
            unaff_x23 = (long *)PTR_DAT_091a7758;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            iVar3 = *(int *)(lVar8 + 8);
            if (*(int *)(lVar8 + 8) <= *(int *)(lVar8 + 0xc)) {
              iVar3 = *(int *)(lVar8 + 0xc);
            }
            iVar4 = *(int *)(in_stack_00000088 + 1);
            if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
              iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
            }
            in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar4 + iVar3);
            uVar11 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,&stack0x00000030);
            if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uStack000000000000002c = *(undefined4 *)(*plVar12 + 8);
            uVar13 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,(long)&stack0x00000028 + 4);
            if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uStack0000000000000028 = *(undefined4 *)(*plVar12 + 0x10);
            uVar7 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,&stack0x00000028);
            uVar11 = FUN_06fd28dc(*(undefined8 *)PTR_DAT_091fa860,uVar11,uVar13,uVar7,0);
            if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_08a106ac(uVar11,0);
            goto LAB_05069530;
          }
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_08082ca4(plVar12,iVar14 + iVar4,0);
        }
        if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        plVar9 = (long *)*plVar12;
        iVar3 = *(int *)(in_stack_00000088 + 1);
        if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
          iVar3 = *(int *)((long)in_stack_00000088 + 0xc);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_08a06cdc((long)(int)plVar9[1] + *plVar9,*in_stack_00000088,(long)iVar3,0);
        plVar9 = (long *)*plVar12;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar3 = (int)plVar9[1] + iVar3;
        *(int *)(plVar9 + 1) = iVar3;
        puVar6 = (undefined8 *)*in_stack_00000020;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar4 = *(int *)(puVar6 + 1);
        if (*(int *)(puVar6 + 1) <= *(int *)((long)puVar6 + 0xc)) {
          iVar4 = *(int *)((long)puVar6 + 0xc);
        }
        FUN_08a06cdc(*plVar9 + (long)iVar3,*puVar6,(long)iVar4,0);
        lVar15 = *plVar12;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + iVar4;
        *(short *)(lVar8 + 2) = *(short *)(lVar8 + 2) + 1;
        lVar8 = *(long *)(unaff_x27 + 0x60);
        if (lVar8 == 0) {
LAB_050697ac:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        iVar3 = 0;
        while (unaff_x23 = (long *)PTR_DAT_091a7758, unaff_x29 = (long *)PTR_DAT_091a7760,
              iVar3 < *(int *)(lVar8 + 0x18)) {
          plVar12 = (long *)FUN_05a39464(lVar8,iVar3,*(undefined8 *)PTR_DAT_091fa7d0);
          lVar8 = *in_stack_00000020;
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar8 = *plVar12;
          lVar15 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_050694e0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          lVar8 = FUN_03d8f370(plVar12);
LAB_050694e0:
          lVar8 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar8 + 8),lVar15);
          (**(code **)(lVar8 + 8))(plVar12,uVar11);
          lVar8 = *(long *)(unaff_x27 + 0x60);
          iVar3 = iVar3 + 1;
          if (lVar8 == 0) goto LAB_050697ac;
        }
      }
    }
    else {
      uVar11 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_07186ef4(uVar11,0);
      plVar12 = (long *)*unaff_x22;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05068d38;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x29,0);
LAB_05068d38:
      (*(code *)*puVar6)(plVar12,unaff_w28,puVar6[1]);
      iVar3 = FUN_0805c3f8();
      if ((-1 < iVar3) && (iVar3 == in_stack_00000008._4_4_)) goto LAB_05068d70;
    }
LAB_05069530:
    do {
      plVar12 = (long *)*unaff_x22;
      unaff_w28 = unaff_w28 + 1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x23) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05068bc0;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x23,0);
LAB_05068bc0:
      iVar3 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (iVar3 <= unaff_w28) {
        lVar8 = *in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (lVar8 != 0) {
          if (in_stack_00000088 != (undefined8 *)0x0) {
            iVar3 = *(int *)(lVar8 + 8);
            if (*(int *)(lVar8 + 8) <= *(int *)(lVar8 + 0xc)) {
              iVar3 = *(int *)(lVar8 + 0xc);
            }
            iVar4 = *(int *)(in_stack_00000088 + 1);
            if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
              iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
            }
            if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_08082b08(&stack0x00000088,0);
            return iVar4 + iVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar12 = (long *)*unaff_x22;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = *plVar12;
      lVar15 = *(long *)(unaff_x27 + 0x40);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05068c2c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x29,0);
LAB_05068c2c:
      uVar11 = (*(code *)*puVar6)(plVar12,unaff_w28,puVar6[1]);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548(uVar11,uVar11);
      }
      uVar5 = FUN_055ec514(lVar15,uVar11,*(undefined8 *)PTR_DAT_091fa838);
    } while ((uVar5 & 1) != 0);
    uVar11 = **(undefined8 **)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = FUN_07186ef4(uVar11,0);
    param_2 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49745_091fa7b8,0);
  } while( true );
}



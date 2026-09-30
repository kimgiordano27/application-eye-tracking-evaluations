/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 088b9f28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x088ba440) */
/* WARNING: Removing unreachable block (ram,0x088ba538) */
/* WARNING: Removing unreachable block (ram,0x088ba53c) */
/* WARNING: Removing unreachable block (ram,0x088ba664) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar16;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0921a558);
  FUN_03d2d2b0(PTR_DAT_09292688);
  FUN_03d2d2b0(PTR_DAT_0921a560);
  FUN_03d2d2b0(PTR_DAT_09292690);
  FUN_03d2d2b0(PTR_DAT_09292698);
  FUN_03d2d2b0(PTR_DAT_092926a0);
  FUN_03d2d2b0(PTR_DAT_0921a568);
  FUN_03d2d2b0(PTR_DAT_092926a8);
  FUN_03d2d2b0(PTR_DAT_09292618);
  FUN_03d2d2b0(PTR_DAT_091fde80);
  FUN_03d2d2b0(PTR_DAT_091fe550);
  FUN_03d2d2b0(PTR_DAT_092926b0);
  FUN_03d2d2b0(PTR_DAT_091afd60);
  FUN_03d2d2b0(PTR_DAT_091afd68);
  FUN_03d2d2b0(PTR_DAT_092926b8);
  FUN_03d2d2b0(PTR_DAT_092926c0);
  FUN_03d2d2b0(PTR_DAT_091f9868);
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  in_stack_000000d0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000078 = 0;
  unaff_x21[1] = 0;
  *unaff_x21 = 0;
  unaff_x21[3] = 0;
  unaff_x21[2] = 0;
  puVar7 = PTR_DAT_092926c0;
  puVar6 = PTR_DAT_09292690;
  puVar5 = PTR_DAT_09292688;
  puVar4 = PTR_DAT_0921a560;
  puVar3 = PTR_DAT_092142b8;
  puVar2 = PTR_DAT_091fe550;
  puVar1 = PTR_DAT_091fde80;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000048 = 0;
  if ((char)unaff_x22[5] != '\0') {
    uVar11 = (**(code **)(*unaff_x22 + 0x168))();
    thunk_FUN_03d1e194(PTR_DAT_091b0358);
    uVar12 = thunk_FUN_03d2ef40();
    FUN_07186c94(uVar12,uVar11,0);
    uVar11 = thunk_FUN_03d1e194(PTR_DAT_092926c8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar12,uVar11);
  }
  if (unaff_x22[2] != 0) {
    FUN_06b6e20c(&stack0x00000018,unaff_x22[2],*(undefined8 *)PTR_DAT_0921a550);
    unaff_x21[1] = in_stack_00000020;
    *unaff_x21 = in_stack_00000018;
    unaff_x21[3] = in_stack_00000030;
    unaff_x21[2] = in_stack_00000028;
    in_stack_000000d0 = in_stack_00000038;
    while (uVar8 = FUN_06e6c258(&stack0x000000b0,*(undefined8 *)puVar4), uVar12 = in_stack_000000c8,
          uVar11 = in_stack_000000c0, (uVar8 & 1) != 0) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar13 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_088ba0fc;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03d8f370();
LAB_088ba0fc:
      lVar13 = (*(code *)*puVar9)();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar8 = FUN_06b6dfd0(lVar13,uVar11,*(undefined8 *)puVar3);
      if ((uVar8 & 1) != 0) {
        lVar13 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
              goto LAB_088ba16c;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_03d8f370();
LAB_088ba16c:
        plVar10 = (long *)(*(code *)*puVar9)();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_088ba1d0;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_03d8f370(plVar10,lVar13,3);
LAB_088ba1d0:
        uVar8 = (*(code *)*puVar9)(plVar10,uVar11,puVar9[1]);
        if ((uVar8 & 1) != 0) {
          lVar13 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
                goto LAB_088ba234;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03d8f370();
LAB_088ba234:
          plVar10 = (long *)(*(code *)*puVar9)();
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar14 = *plVar10;
          lVar13 = *(long *)puVar1;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar13) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_088ba294;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03d8f370(plVar10,lVar13,0);
LAB_088ba294:
          lVar13 = (*(code *)*puVar9)(plVar10,uVar11,puVar9[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar16 = *(undefined8 *)(lVar13 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_091f9868 + 0xe0) == 0) {
            thunk_FUN_03db619c(*(long *)PTR_DAT_091f9868);
          }
          uVar8 = FUN_08848474(uVar16,uVar12,0);
          if ((uVar8 & 1) != 0) {
            lVar13 = *unaff_x20;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
                  goto FUN_088ba32c;
                }
                uVar8 = uVar8 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_03d8f370();
FUN_088ba32c:
            lVar13 = (*(code *)*puVar9)();
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_06b6ddc8(lVar13,uVar11,uVar12,*(undefined8 *)PTR_DAT_091b17c8);
          }
        }
      }
    }
    FUN_06e6c378(&stack0x000000b0,*(undefined8 *)PTR_DAT_0921a558);
    puVar3 = PTR_DAT_09292680;
    puVar2 = PTR_DAT_09292678;
    puVar1 = PTR_DAT_09292670;
    if (unaff_x22[3] != 0) {
      FUN_06b6e20c(&stack0x00000018,unaff_x22[3],*(undefined8 *)PTR_DAT_09292670);
      in_stack_00000088 = in_stack_00000020;
      in_stack_00000080 = in_stack_00000018;
      in_stack_00000098 = in_stack_00000030;
      in_stack_00000090 = in_stack_00000028;
      in_stack_000000a0 = in_stack_00000038;
      while (uVar8 = FUN_06e6c258(&stack0x00000080,*(undefined8 *)puVar6),
            lVar13 = in_stack_00000098, uVar11 = in_stack_00000090, (uVar8 & 1) != 0) {
        in_stack_00000070 = unaff_x20;
        thunk_FUN_03d1023c(&stack0x00000070);
        in_stack_00000078 = uVar11;
        thunk_FUN_03d1023c(&stack0x00000078,uVar11);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_05c85ef8(&stack0x00000018,lVar13,*(undefined8 *)puVar7);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000068 = in_stack_00000030;
        in_stack_00000060 = in_stack_00000028;
        while (uVar8 = FUN_06e123f4(&stack0x00000050,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
          FUN_088bd558(uVar8,in_stack_00000060,in_stack_00000068,in_stack_00000070,in_stack_00000078
                      );
        }
        FUN_06e123f0(&stack0x00000050,*(undefined8 *)puVar2);
      }
      FUN_06e6c378(&stack0x00000080,*(undefined8 *)puVar3);
      if (unaff_x22[4] != 0) {
        FUN_06b6e20c(&stack0x00000018,unaff_x22[4],*(undefined8 *)puVar1);
        in_stack_00000088 = in_stack_00000020;
        in_stack_00000080 = in_stack_00000018;
        in_stack_00000098 = in_stack_00000030;
        in_stack_00000090 = in_stack_00000028;
        in_stack_000000a0 = in_stack_00000038;
        while( true ) {
          uVar8 = FUN_06e6c258(&stack0x00000080,*(undefined8 *)puVar6);
          lVar13 = in_stack_00000098;
          uVar11 = in_stack_00000090;
          if ((uVar8 & 1) == 0) {
            FUN_06e6c378(&stack0x00000080,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)PTR_DAT_09292618 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_05528bf4(unaff_x22,*(undefined8 *)PTR_DAT_092926a8);
            return;
          }
          in_stack_00000040 = unaff_x20;
          thunk_FUN_03d1023c(&stack0x00000040);
          in_stack_00000048 = uVar11;
          thunk_FUN_03d1023c(&stack0x00000048,uVar11);
          if (lVar13 == 0) break;
          FUN_05c85ef8(&stack0x00000018,lVar13,*(undefined8 *)puVar7);
          in_stack_00000058 = in_stack_00000020;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000068 = in_stack_00000030;
          in_stack_00000060 = in_stack_00000028;
          while (uVar8 = FUN_06e123f4(&stack0x00000050,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
            FUN_088bd558(uVar8,in_stack_00000040,in_stack_00000048,in_stack_00000060,
                         in_stack_00000068);
          }
          FUN_06e123f0(&stack0x00000050,*(undefined8 *)puVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



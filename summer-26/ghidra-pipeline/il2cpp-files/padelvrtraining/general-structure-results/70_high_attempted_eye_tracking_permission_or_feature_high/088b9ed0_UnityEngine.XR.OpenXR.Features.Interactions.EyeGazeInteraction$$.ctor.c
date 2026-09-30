/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 088b9ed0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x088ba440) */
/* WARNING: Removing unreachable block (ram,0x088ba538) */
/* WARNING: Removing unreachable block (ram,0x088ba53c) */
/* WARNING: Removing unreachable block (ram,0x088ba664) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor
               (long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if ((*(byte *)(unaff_x19 + 0x80) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092142b8);
    FUN_03d2d2b0(PTR_DAT_09292670);
    FUN_03d2d2b0(PTR_DAT_0921a550);
    FUN_03d2d2b0(PTR_DAT_091b17c8);
    FUN_03d2d2b0(PTR_DAT_09292678);
    FUN_03d2d2b0(PTR_DAT_09292680);
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
  }
  puVar7 = PTR_DAT_092926c0;
  puVar6 = PTR_DAT_09292690;
  puVar5 = PTR_DAT_09292688;
  puVar4 = PTR_DAT_0921a560;
  puVar3 = PTR_DAT_092142b8;
  puVar2 = PTR_DAT_091fe550;
  puVar1 = PTR_DAT_091fde80;
  in_stack_000000d0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000078 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
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
  if ((char)param_1[5] != '\0') {
    uVar12 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    thunk_FUN_03d1e194(PTR_DAT_091b0358);
    uVar16 = thunk_FUN_03d2ef40();
    FUN_07186c94(uVar16,uVar12,0);
    uVar12 = thunk_FUN_03d1e194(PTR_DAT_092926c8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar16,uVar12);
  }
  if (param_1[2] != 0) {
    FUN_06b6e20c(&stack0x00000018,param_1[2],*(undefined8 *)PTR_DAT_0921a550);
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_000000c8 = in_stack_00000030;
    in_stack_000000c0 = in_stack_00000028;
    in_stack_000000d0 = in_stack_00000038;
    while (uVar9 = FUN_06e6c258(&stack0x000000b0,*(undefined8 *)puVar4), lVar8 = in_stack_000000c8,
          uVar12 = in_stack_000000c0, (uVar9 & 1) != 0) {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar13 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_088ba0fc;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(param_2,*(long *)puVar2,8);
LAB_088ba0fc:
      lVar13 = (*(code *)*puVar10)(param_2,puVar10[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar9 = FUN_06b6dfd0(lVar13,uVar12,*(undefined8 *)puVar3);
      if ((uVar9 & 1) != 0) {
        lVar13 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
              goto LAB_088ba16c;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_03d8f370(param_2,*(long *)puVar2,0xb);
LAB_088ba16c:
        plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar14 = *plVar11;
        lVar13 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_088ba1d0;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_03d8f370(plVar11,lVar13,3);
LAB_088ba1d0:
        uVar9 = (*(code *)*puVar10)(plVar11,uVar12,puVar10[1]);
        if ((uVar9 & 1) != 0) {
          lVar13 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
                goto LAB_088ba234;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_03d8f370(param_2,*(long *)puVar2,0xb);
LAB_088ba234:
          plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar14 = *plVar11;
          lVar13 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar13) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_088ba294;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_03d8f370(plVar11,lVar13,0);
LAB_088ba294:
          lVar13 = (*(code *)*puVar10)(plVar11,uVar12,puVar10[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar16 = *(undefined8 *)(lVar13 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_091f9868 + 0xe0) == 0) {
            thunk_FUN_03db619c(*(long *)PTR_DAT_091f9868);
          }
          uVar9 = FUN_08848474(uVar16,lVar8,0);
          if ((uVar9 & 1) != 0) {
            lVar13 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
                  goto FUN_088ba32c;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_03d8f370(param_2,*(long *)puVar2,8);
FUN_088ba32c:
            lVar13 = (*(code *)*puVar10)(param_2,puVar10[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_06b6ddc8(lVar13,uVar12,lVar8,*(undefined8 *)PTR_DAT_091b17c8);
          }
        }
      }
    }
    FUN_06e6c378(&stack0x000000b0,*(undefined8 *)PTR_DAT_0921a558);
    puVar3 = PTR_DAT_09292680;
    puVar2 = PTR_DAT_09292678;
    puVar1 = PTR_DAT_09292670;
    if (param_1[3] != 0) {
      FUN_06b6e20c(&stack0x00000018,param_1[3],*(undefined8 *)PTR_DAT_09292670);
      in_stack_00000088 = in_stack_00000020;
      in_stack_00000080 = in_stack_00000018;
      in_stack_00000098 = in_stack_00000030;
      in_stack_00000090 = in_stack_00000028;
      in_stack_000000a0 = in_stack_00000038;
      while (uVar9 = FUN_06e6c258(&stack0x00000080,*(undefined8 *)puVar6), lVar8 = in_stack_00000098
            , uVar12 = in_stack_00000090, (uVar9 & 1) != 0) {
        in_stack_00000070 = param_2;
        thunk_FUN_03d1023c(&stack0x00000070,param_2);
        in_stack_00000078 = uVar12;
        thunk_FUN_03d1023c(&stack0x00000078,uVar12);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_05c85ef8(&stack0x00000018,lVar8,*(undefined8 *)puVar7);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000068 = in_stack_00000030;
        in_stack_00000060 = in_stack_00000028;
        while (uVar9 = FUN_06e123f4(&stack0x00000050,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
          FUN_088bd558(uVar9,in_stack_00000060,in_stack_00000068,in_stack_00000070,in_stack_00000078
                      );
        }
        FUN_06e123f0(&stack0x00000050,*(undefined8 *)puVar2);
      }
      FUN_06e6c378(&stack0x00000080,*(undefined8 *)puVar3);
      if (param_1[4] != 0) {
        FUN_06b6e20c(&stack0x00000018,param_1[4],*(undefined8 *)puVar1);
        in_stack_00000088 = in_stack_00000020;
        in_stack_00000080 = in_stack_00000018;
        in_stack_00000098 = in_stack_00000030;
        in_stack_00000090 = in_stack_00000028;
        in_stack_000000a0 = in_stack_00000038;
        while( true ) {
          uVar9 = FUN_06e6c258(&stack0x00000080,*(undefined8 *)puVar6);
          lVar8 = in_stack_00000098;
          uVar12 = in_stack_00000090;
          if ((uVar9 & 1) == 0) {
            FUN_06e6c378(&stack0x00000080,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)PTR_DAT_09292618 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_05528bf4(param_1,*(undefined8 *)PTR_DAT_092926a8);
            return;
          }
          in_stack_00000040 = param_2;
          thunk_FUN_03d1023c(&stack0x00000040,param_2);
          in_stack_00000048 = uVar12;
          thunk_FUN_03d1023c(&stack0x00000048,uVar12);
          if (lVar8 == 0) break;
          FUN_05c85ef8(&stack0x00000018,lVar8,*(undefined8 *)puVar7);
          in_stack_00000058 = in_stack_00000020;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000068 = in_stack_00000030;
          in_stack_00000060 = in_stack_00000028;
          while (uVar9 = FUN_06e123f4(&stack0x00000050,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
            FUN_088bd558(uVar9,in_stack_00000040,in_stack_00000048,in_stack_00000060,
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



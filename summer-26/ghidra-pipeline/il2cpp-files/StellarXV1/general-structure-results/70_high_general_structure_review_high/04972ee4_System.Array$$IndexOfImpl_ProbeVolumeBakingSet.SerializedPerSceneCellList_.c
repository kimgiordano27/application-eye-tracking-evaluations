/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 04972ee4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int in_w9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  plVar6 = (long *)(**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_092ac5c0 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_092ac5c0);
  }
  uVar12 = FUN_048194b0(uVar12,0);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar13 = *(undefined8 *)PTR_DAT_092b1560;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_04972f8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x25,5);
LAB_04972f8c:
    (*(code *)*puVar7)(plVar6,uVar13,uVar12,puVar7[1]);
    uVar10 = FUN_04968520();
    if ((uVar10 & 1) != 0) {
      in_stack_00000058._4_4_ = 1;
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_04973488;
      FUN_05c27784(&stack0x00000008,*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_092b65f8);
      puVar4 = PTR_DAT_092b6668;
      puVar3 = PTR_DAT_092b6620;
      puVar2 = PTR_DAT_092b65c0;
      puVar1 = PTR_DAT_092ac5c0;
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000010 = &stack0x00000040;
      in_stack_00000008 = 0;
      while (uVar10 = FUN_07161154(&stack0x00000040,*(undefined8 *)puVar2),
            lVar8 = in_stack_00000050, (uVar10 & 1) != 0) {
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(in_stack_00000050 + 0x10) != 0) {
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a58b8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_04973080;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00();
LAB_04973080:
          plVar6 = (long *)(*(code *)*puVar7)();
          uVar12 = FUN_07676bc4((long)&stack0x00000058 + 4,0);
          uVar12 = FUN_074e691c(*(undefined8 *)puVar3,uVar12,*(undefined8 *)puVar4,0);
          uVar13 = *(undefined8 *)(lVar8 + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_048194b0(uVar13,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_0497312c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x25,5);
LAB_0497312c:
          (*(code *)*puVar7)(plVar6,uVar12,uVar13,puVar7[1]);
        }
        in_stack_00000058._4_4_ = in_stack_00000058._4_4_ + 1;
      }
      FUN_07161150(&stack0x00000040,*(undefined8 *)PTR_DAT_092b65a8);
    }
    uVar10 = FUN_049685b8();
    if ((uVar10 & 1) != 0) {
      in_stack_00000038._4_4_ = 1;
      if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_04973488;
      FUN_05c27784(&stack0x00000008,*(long *)(unaff_x20 + 0x60),*(undefined8 *)PTR_DAT_092b65e8);
      puVar5 = PTR_DAT_092b6628;
      puVar4 = PTR_DAT_092b6618;
      puVar3 = PTR_DAT_092b6610;
      puVar2 = PTR_DAT_092b65c8;
      puVar1 = PTR_DAT_092ac5c0;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000010 = &stack0x00000020;
      in_stack_00000008 = 0;
      while (uVar10 = FUN_07161154(&stack0x00000020,*(undefined8 *)puVar2),
            lVar8 = in_stack_00000030, (uVar10 & 1) != 0) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(in_stack_00000030 + 0x10) != 0) {
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a58b8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_0497324c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00();
LAB_0497324c:
          plVar6 = (long *)(*(code *)*puVar7)();
          uVar12 = FUN_07676bc4((long)&stack0x00000038 + 4,0);
          uVar12 = FUN_074e691c(*(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar3,0);
          uVar13 = *(undefined8 *)(lVar8 + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_048194b0(uVar13,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_049732f8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x25,5);
LAB_049732f8:
          (*(code *)*puVar7)(plVar6,uVar12,uVar13,puVar7[1]);
        }
        if (*(long *)(lVar8 + 0x18) != 0) {
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a58b8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_0497336c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00();
LAB_0497336c:
          plVar6 = (long *)(*(code *)*puVar7)();
          uVar12 = FUN_07676bc4((long)&stack0x00000038 + 4,0);
          uVar12 = FUN_074e691c(*(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar5,0);
          uVar13 = *(undefined8 *)(lVar8 + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_048194b0(uVar13,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_04973418;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x25,5);
LAB_04973418:
          (*(code *)*puVar7)(plVar6,uVar12,uVar13,puVar7[1]);
        }
        in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
      }
      FUN_07161150(&stack0x00000020,*(undefined8 *)PTR_DAT_092b65b0);
    }
    return;
  }
LAB_04973488:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



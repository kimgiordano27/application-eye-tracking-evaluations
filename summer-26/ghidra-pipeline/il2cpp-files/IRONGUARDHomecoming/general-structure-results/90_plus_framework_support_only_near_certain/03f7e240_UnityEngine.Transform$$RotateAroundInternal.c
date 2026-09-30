/*
FUNCTION_NAME: UnityEngine.Transform$$RotateAroundInternal
ENTRY_POINT: 03f7e240
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f7e748) */
/* WARNING: Removing unreachable block (ram,0x03f7e5ac) */
/* WARNING: Removing unreachable block (ram,0x03f7e6bc) */

void UnityEngine_Transform__RotateAroundInternal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar7 = FUN_022e39c4();
  puVar1 = PTR_DAT_045816f0;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)puVar1,0);
    return;
  }
  lVar8 = *unaff_x19;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x19;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  if (lVar8 != 0) {
    in_stack_00000038._4_4_ = *(undefined4 *)(lVar8 + 0x20);
    uVar9 = FUN_035683d0((long)&stack0x00000038 + 4,0);
    uVar9 = FUN_03405678(uVar9,*(undefined8 *)PTR_DAT_045816e8,0);
    lVar8 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x20);
    if (lVar8 != 0) {
      FUN_02ee8778(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_045816d0);
      puVar5 = PTR_DAT_045816c0;
      puVar4 = PTR_DAT_04581690;
      puVar3 = PTR_DAT_04581688;
      puVar2 = PTR_DAT_04581680;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar7 = FUN_02c7a3f0(&stack0x00000020,*(undefined8 *)puVar5);
        plVar6 = in_stack_00000030;
        if ((uVar7 & 1) == 0) {
          FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar9,0);
          return;
        }
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
        FUN_02ee7c10(lVar8,*(undefined8 *)PTR_DAT_045816d8);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04581698) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f7e388;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
        plVar11 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f7e3e8;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f7e3e8:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar14 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e448;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03f7e448:
          uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar7 & 1) == 0) goto LAB_03f7e534;
          lVar14 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e4a4;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03f7e4a4:
          plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar14 = *plVar12;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03f7e508;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,1);
LAB_03f7e508:
          uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        } while ((uVar7 & 1) != 0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ee8df4(lVar8,plVar12,*(undefined8 *)StringLiteral_3506);
LAB_03f7e534:
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03f7e594;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar11,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_03f7e594:
          (*(code *)*puVar10)(plVar11,puVar10[1]);
        }
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03f83d08(lVar8,0);
        uVar13 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,plVar6,uVar13,0);
        uVar9 = FUN_03405678(uVar9,uVar13,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



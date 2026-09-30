/*
FUNCTION_NAME: UnityEngine.Transform$$Rotate
ENTRY_POINT: 03f7e238
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

void UnityEngine_Transform__Rotate(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  plVar15 = *(long **)(unaff_x20 + 0xa38);
  uVar6 = FUN_022e39c4(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_DAT_045816f0;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)puVar1,0);
    return;
  }
  lVar7 = *unaff_x19;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *unaff_x19;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar7 != 0) {
    in_stack_00000038._4_4_ = *(undefined4 *)(lVar7 + 0x20);
    uVar8 = FUN_035683d0((long)&stack0x00000038 + 4,0);
    uVar8 = FUN_03405678(uVar8,*(undefined8 *)PTR_DAT_045816e8,0);
    lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x20);
    if (lVar7 != 0) {
      FUN_02ee8778(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_045816d0);
      puVar5 = PTR_DAT_045816c0;
      puVar4 = PTR_DAT_04581690;
      puVar3 = PTR_DAT_04581688;
      puVar2 = PTR_DAT_04581680;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar6 = FUN_02c7a3f0(&stack0x00000020,*(undefined8 *)puVar5);
        plVar15 = in_stack_00000030;
        if ((uVar6 & 1) == 0) {
          FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar8,0);
          return;
        }
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
        FUN_02ee7c10(lVar7,*(undefined8 *)PTR_DAT_045816d8);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *plVar15;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04581698) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03f7e388;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
        plVar10 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03f7e3e8;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03f7e3e8:
        plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar13 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03f7e448;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03f7e448:
          uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          if ((uVar6 & 1) == 0) goto LAB_03f7e534;
          lVar13 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03f7e4a4;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03f7e4a4:
          plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03f7e508;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,1);
LAB_03f7e508:
          uVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        } while ((uVar6 & 1) != 0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ee8df4(lVar7,plVar11,*(undefined8 *)StringLiteral_3506);
LAB_03f7e534:
        if (plVar10 != (long *)0x0) {
          lVar13 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03f7e594;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar10,*(long *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_03f7e594:
          (*(code *)*puVar9)(plVar10,puVar9[1]);
        }
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03f83d08(lVar7,0);
        uVar12 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,plVar15,uVar12,0);
        uVar8 = FUN_03405678(uVar8,uVar12,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



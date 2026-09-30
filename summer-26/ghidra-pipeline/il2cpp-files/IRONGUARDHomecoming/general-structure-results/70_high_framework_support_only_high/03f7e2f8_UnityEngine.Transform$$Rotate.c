/*
FUNCTION_NAME: UnityEngine.Transform$$Rotate
ENTRY_POINT: 03f7e2f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f7e5ac) */
/* WARNING: Removing unreachable block (ram,0x03f7e6bc) */
/* WARNING: Removing unreachable block (ram,0x03f7e748) */

void UnityEngine_Transform__Rotate(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000030;
  
  do {
    uVar2 = FUN_02c7a3f0(&stack0x00000020,param_2);
    plVar1 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
      FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(unaff_x20,0);
      return;
    }
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3509);
    FUN_02ee7c10(lVar3,*(undefined8 *)PTR_DAT_045816d8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04581698) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f7e388;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)PTR_DAT_04581698,0);
LAB_03f7e388:
    plVar5 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f7e3e8;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,0);
LAB_03f7e3e8:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03f7e448;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x25,0);
LAB_03f7e448:
      uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar2 & 1) == 0) goto LAB_03f7e534;
      lVar8 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03f7e4a4;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x27,0);
LAB_03f7e4a4:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03f7e508;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,1);
LAB_03f7e508:
      uVar2 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    } while ((uVar2 & 1) != 0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02ee8df4(lVar3,plVar6,*(undefined8 *)StringLiteral_3506);
LAB_03f7e534:
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03f7e594;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f7e594:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_CollectionExtensions_RemoveFirst<ParameterInfo>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03f83d08(lVar3,0);
    uVar7 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_045816f8,plVar1,uVar7,0);
    unaff_x20 = FUN_03405678(unaff_x20,uVar7,0);
    param_2 = *unaff_x26;
  } while( true );
}



/*
FUNCTION_NAME: System.Collections.Generic.Stack.Enumerator<ProbeBrickPool.BrickChunkAlloc>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bbd484
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02bbd8d0) */

void System_Collections_Generic_Stack_Enumerator<ProbeBrickPool_BrickChunkAlloc>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if ((*(byte *)(unaff_x23 + 0x3bb) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0x3bb) = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bbd550;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_02bbd550:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  FUN_02bbd3c0(param_1,uVar4,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar6 = thunk_FUN_01ecaf38(param_2,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar12 = FUN_03579868(uVar12,0);
  uVar10 = FUN_03582560(uVar6,uVar12,0);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = param_2[3];
    if (lVar8 != 0) {
      uVar10 = 0;
      lVar9 = lVar8;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar9 + 0x20)) {
          FUN_02bbe7b4(param_1,*(undefined8 *)(lVar9 + 0x28));
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x30;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *(long *)(lVar8 + 0x88);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02bbd6f8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_02bbd6f8:
  plVar7 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    uVar3 = in_stack_00000018;
    uVar12 = in_stack_00000008;
    uVar6 = in_stack_00000000;
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bbd768;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02bbd768:
    uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bbd7e0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02bbd7e0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
    in_stack_00000008 = in_stack_00000010;
    in_stack_00000000 = uVar12;
    in_stack_00000018 = in_stack_00000020;
    in_stack_00000010 = uVar3;
    FUN_02bbe7b4(param_1,uVar6);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bbd888;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02bbd888:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}



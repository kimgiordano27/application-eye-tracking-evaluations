/*
FUNCTION_NAME: System.Collections.Generic.Stack.Enumerator<Color>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b6da3c
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


/* WARNING: Removing unreachable block (ram,0x02b6dea0) */

void System_Collections_Generic_Stack_Enumerator<Color>__System_Collections_IEnumerator_get_Current
               (ulong param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0x2a7) = 1;
  }
  if (param_3 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02b6db08;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_3,lVar9,0);
LAB_02b6db08:
    uVar5 = (*(code *)*puVar6)(param_3,puVar6[1]);
  }
  FUN_02b6d974(param_2,uVar5,param_4,**(undefined8 **)(*(long *)(param_5 + 0x20) + 0xc0));
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar7 = thunk_FUN_01ecaf38(param_3,0);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar13 = FUN_03579868(uVar13,0);
  uVar11 = FUN_03582560(uVar7,uVar13,0);
  lVar9 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if ((uVar11 & 1) != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    uVar1 = *(uint *)(param_3 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar9 = param_3[3];
    if (lVar9 != 0) {
      uVar11 = 0;
      lVar10 = lVar9 + 0x30;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar10 + -0x10)) {
          FUN_02b6ee1c(param_2,*(undefined8 *)(lVar10 + -8));
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x40;
      } while (uVar1 != uVar11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(lVar9 + 0x88);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar10 = *param_3;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02b6dcbc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_3,lVar9,0);
LAB_02b6dcbc:
  plVar8 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    uVar4 = in_stack_00000028;
    uVar3 = in_stack_00000018;
    uVar13 = in_stack_00000008;
    uVar7 = in_stack_00000000;
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02b6dd2c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_02b6dd2c:
    uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar11 & 1) == 0) break;
    lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02b6dda4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02b6dda4:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
    in_stack_00000008 = in_stack_00000010;
    in_stack_00000000 = uVar13;
    in_stack_00000018 = in_stack_00000020;
    in_stack_00000010 = uVar3;
    in_stack_00000028 = in_stack_00000030;
    in_stack_00000020 = uVar4;
    FUN_02b6ee1c(param_2,uVar7);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02b6de58;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b6de58:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<byte>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 031c9d48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031c9f80) */

void Unity_Collections_NativeArray<byte>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto LAB_031c9d74;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_031c9d74:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 031c9d18 with catch @ 031c9da4
                       catch() { ... } // from try @ 031c9d94 with catch @ 031c9da4 */
    if (uVar8 != 0) {
                    /* try { // try from 031c9da8 to 032c9dab has its CatchHandler @ 031c9db4 */
                    /* try { // try from 031c9dac to 032c9db7 has its CatchHandler @ 031c9c60 */
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c9da8 with catch @ 031c9db4
                        */
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031c9de4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_031c9de4:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_031c9f2c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031c9e5c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_031c9e5c:
    (*(code *)*puVar3)(&stack0x00000020,plVar4,puVar3[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_031c84b8();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_00000058;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000050;
    thunk_FUN_01f51358(lVar5 + 0x20,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto Unity_Collections_NativeArray<byte>__GetHashCode;
    }
  }
LAB_031c9f2c:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
Unity_Collections_NativeArray<byte>__GetHashCode:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}



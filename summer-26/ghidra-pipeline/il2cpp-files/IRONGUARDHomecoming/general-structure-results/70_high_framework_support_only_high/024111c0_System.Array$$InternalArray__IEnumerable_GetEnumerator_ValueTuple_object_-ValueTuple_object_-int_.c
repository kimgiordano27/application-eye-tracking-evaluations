/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,-ValueTuple<object,-int>>>
ENTRY_POINT: 024111c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x024113ec) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,_ValueTuple<object,_int>>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  int *in_x10;
  long in_x11;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_024111f0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024111f0:
        uVar2 = (*(code *)*puVar1)();
        uVar3 = FUN_0240ea50();
        if ((uVar3 & 1) == 0) {
LAB_02411354:
          if (unaff_x20 == (long *)0x0) {
            return;
          }
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_02411394;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0241137c;
        }
        lVar4 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0241125c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0241125c:
        lVar4 = (*(code *)*puVar1)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03e1f400(&stack0x00000070,lVar4,uVar2 >> 0x20,0);
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        in_stack_000000e0 = in_stack_000000a0;
        in_stack_000000b0 = in_stack_000000e8;
        in_stack_000000b8 = CONCAT44((int)((ulong)in_stack_00000078 >> 0x20),in_stack_000000f0);
        lVar4 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_024112f8;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024112f8:
        lVar4 = (*(code *)*puVar1)();
        in_stack_00000078 = in_stack_000000b8;
        in_stack_00000070 = in_stack_000000b0;
        in_stack_00000088 = in_stack_000000c8;
        in_stack_00000080 = in_stack_000000c0;
        in_stack_00000098 = in_stack_000000d8;
        in_stack_00000090 = in_stack_000000d0;
        in_stack_000000a0 = in_stack_000000e0;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03e1f16c(lVar4,uVar2 >> 0x20);
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02411194;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02411194:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) goto LAB_02411354;
        param_1 = *unaff_x20;
        param_3 = *unaff_x26;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0241137c:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024113b0:
  (*(code *)*puVar1)();
  return;
}



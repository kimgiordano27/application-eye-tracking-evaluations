/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,-OVRLocatable>>
ENTRY_POINT: 02411328
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

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,_OVRLocatable>>
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000030;
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
  
  uVar6 = param_1._0_8_;
  uVar7 = param_1._8_8_;
  uVar8 = param_2._0_8_;
  uVar9 = param_2._8_8_;
  do {
    uStack0000000000000028 = in_stack_00000098;
    uStack0000000000000020 = in_stack_00000090;
    uStack0000000000000030 = in_stack_000000a0;
    uStack0000000000000000 = uVar6;
    uStack0000000000000008 = uVar7;
    uStack0000000000000010 = uVar8;
    uStack0000000000000018 = uVar9;
    FUN_03e1f16c(param_3,unaff_x23 & 0xffffffff);
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02411194;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02411194:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
LAB_02411354:
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_02411394;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_024111f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024111f0:
    uVar4 = (*(code *)*puVar1)();
    uVar2 = FUN_0240ea50();
    if ((uVar2 & 1) == 0) goto LAB_02411354;
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0241125c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0241125c:
    lVar3 = (*(code *)*puVar1)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x23 = uVar4 >> 0x20;
    FUN_03e1f400(&stack0x00000070,lVar3,unaff_x23,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000b0 = in_stack_000000e8;
    in_stack_000000b8 = CONCAT44((int)((ulong)in_stack_00000078 >> 0x20),in_stack_000000f0);
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_024112f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024112f8:
    param_3 = (*(code *)*puVar1)();
    in_stack_00000078 = in_stack_000000b8;
    in_stack_00000070 = in_stack_000000b0;
    in_stack_00000088 = in_stack_000000c8;
    in_stack_00000080 = in_stack_000000c0;
    in_stack_00000098 = in_stack_000000d8;
    in_stack_00000090 = in_stack_000000d0;
    in_stack_000000a0 = in_stack_000000e0;
    uVar6 = in_stack_000000b0;
    uVar7 = in_stack_000000b8;
    uVar8 = in_stack_000000c0;
    uVar9 = in_stack_000000c8;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024113b0:
  (*(code *)*puVar1)();
  return;
}



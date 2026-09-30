/*
FUNCTION_NAME: System.Nullable<Vector4>$$Unbox
ENTRY_POINT: 03235164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032353d4) */

void System_Nullable<Vector4>__Unbox(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  puVar3 = (undefined8 *)FUN_01ecb238();
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
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_032351f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_032351f4:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_0323537c;
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
          goto LAB_0323526c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_0323526c:
    (*(code *)*puVar3)(&stack0x00000040,plVar4,puVar3[1]);
    in_stack_00000088 = in_stack_00000048;
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000098 = in_stack_00000058;
    in_stack_00000090 = in_stack_00000050;
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_000000b0 = in_stack_00000070;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_03233630();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 0x38;
    *(undefined8 *)(lVar5 + 0x50) = in_stack_000000b0;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_00000098;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000090;
    *(undefined8 *)(lVar5 + 0x48) = in_stack_000000a8;
    *(undefined8 *)(lVar5 + 0x40) = in_stack_000000a0;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000088;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000080;
    thunk_FUN_01f51358(lVar5 + 0x20,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03235398;
    }
  }
LAB_0323537c:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03235398:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}



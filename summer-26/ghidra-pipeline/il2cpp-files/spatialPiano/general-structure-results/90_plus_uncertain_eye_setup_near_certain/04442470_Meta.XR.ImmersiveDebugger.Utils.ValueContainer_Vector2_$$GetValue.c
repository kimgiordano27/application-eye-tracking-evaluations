/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$GetValue
ENTRY_POINT: 04442470
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x044424cc) */
/* WARNING: Removing unreachable block (ram,0x044425d8) */

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__GetValue(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 in_x10;
  long unaff_x19;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000e8;
  
code_r0x04442470:
  *(undefined8 *)(param_1 + 0x30) = in_x10;
  do {
    uVar5 = FUN_04ae814c(&stack0x00000090,*unaff_x24);
    uVar3 = in_stack_000000a8;
    uVar2 = in_stack_000000a0;
    if ((uVar5 & 1) == 0) {
      FUN_04ae8148(&stack0x00000090,*(undefined8 *)PTR_DAT_067cd3e0);
      lVar8 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      FUN_03e76a2c();
      plVar4 = in_stack_00000060;
      lVar8 = *(long *)(*in_stack_00000060 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      lVar8 = thunk_FUN_02f58fe8(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x58));
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = in_stack_00000068;
      lVar8 = *(long *)(*plVar4 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      FUN_04442e50(uVar2,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x58));
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0();
      }
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *(long *)(unaff_x19 + 0x28);
    lVar6 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c();
    }
    FUN_047e7bf4(&stack0x00000030,lVar8,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30))
    ;
    in_x10 = in_stack_00000040;
    uVar3 = in_stack_00000038;
    uVar2 = in_stack_00000030;
    if (lVar7 == 0) {
LAB_044425c0:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c();
    }
    param_1 = *(long *)(lVar7 + 0x10);
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_044425c0;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    in_stack_00000030 = uVar2;
    in_stack_00000038 = uVar3;
    in_stack_00000040 = in_x10;
    FUN_039980d8(lVar7,&stack0x00000030,
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  } while( true );
  param_1 = param_1 + (long)(int)uVar1 * (long)unaff_w25;
  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  goto code_r0x04442470;
}



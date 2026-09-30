/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Path
ENTRY_POINT: 0444238c
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

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Path(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000e8;
  
  FUN_03a5512c();
  puVar2 = PTR_DAT_067cd3e8;
  in_stack_00000098 = in_stack_00000038;
  in_stack_00000090 = in_stack_00000030;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
  while( true ) {
    uVar7 = FUN_04ae814c(&stack0x00000090,*(undefined8 *)puVar2);
    uVar4 = in_stack_000000a8;
    uVar3 = in_stack_000000a0;
    if ((uVar7 & 1) == 0) {
      FUN_04ae8148(&stack0x00000090,*(undefined8 *)PTR_DAT_067cd3e0);
      lVar10 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02f41e9c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02f41e9c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      FUN_03e76a2c();
      plVar6 = in_stack_00000060;
      lVar10 = *(long *)(*in_stack_00000060 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02f41e9c();
      }
      lVar10 = thunk_FUN_02f58fe8(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x58));
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = in_stack_00000068;
      lVar10 = *(long *)(*plVar6 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02f41e9c();
      }
      FUN_04442e50(uVar3,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x58));
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0();
      }
      return;
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(unaff_x19 + 0x28);
    lVar8 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c();
    }
    FUN_047e7bf4(&stack0x00000030,lVar10,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30)
                );
    uVar5 = in_stack_00000040;
    uVar4 = in_stack_00000038;
    uVar3 = in_stack_00000030;
    if (lVar9 == 0) break;
    lVar10 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02f41e9c();
    }
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + 0x28) = uVar4;
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      *(undefined8 *)(lVar8 + 0x30) = uVar5;
    }
    else {
      in_stack_00000030 = uVar3;
      in_stack_00000038 = uVar4;
      in_stack_00000040 = uVar5;
      FUN_039980d8(lVar9,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



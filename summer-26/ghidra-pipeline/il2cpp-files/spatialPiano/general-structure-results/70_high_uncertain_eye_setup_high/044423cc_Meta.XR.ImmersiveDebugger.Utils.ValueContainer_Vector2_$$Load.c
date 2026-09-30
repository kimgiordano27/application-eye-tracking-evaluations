/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 044423cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x044424cc) */
/* WARNING: Removing unreachable block (ram,0x044425d8) */

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
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
  
  while( true ) {
    lVar9 = *(long *)(unaff_x19 + 0x28);
    lVar7 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    FUN_047e7bf4(&stack0x00000030,unaff_x21,unaff_x22,unaff_x23,
                 *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
    uVar4 = in_stack_00000040;
    uVar3 = in_stack_00000038;
    uVar2 = in_stack_00000030;
    if (lVar9 == 0) break;
    lVar7 = *(long *)(in_stack_000000e8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * (long)unaff_w25;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + 0x28) = uVar3;
      *(undefined8 *)(lVar8 + 0x20) = uVar2;
      *(undefined8 *)(lVar8 + 0x30) = uVar4;
    }
    else {
      in_stack_00000030 = uVar2;
      in_stack_00000038 = uVar3;
      in_stack_00000040 = uVar4;
      FUN_039980d8(lVar9,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = FUN_04ae814c(&stack0x00000090,*unaff_x24);
    if ((uVar6 & 1) == 0) {
      FUN_04ae8148(&stack0x00000090,*(undefined8 *)PTR_DAT_067cd3e0);
      lVar7 = *(long *)(in_stack_000000e8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02f41e9c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02f41e9c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      FUN_03e76a2c();
      plVar5 = in_stack_00000060;
      lVar7 = *(long *)(*in_stack_00000060 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02f41e9c();
      }
      lVar7 = thunk_FUN_02f58fe8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = in_stack_00000068;
      lVar7 = *(long *)(*plVar5 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02f41e9c();
      }
      FUN_04442e50(uVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
      if (in_stack_00000058 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0();
    }
    unaff_x21 = *(long *)(unaff_x19 + 0x20);
    param_1 = in_stack_000000e8;
    unaff_x22 = in_stack_000000a0;
    unaff_x23 = in_stack_000000a8;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 05d193b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughSupported(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  long *unaff_x21;
  long unaff_x24;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  puVar10 = *(undefined8 **)(unaff_x20 + 0x678);
  lVar5 = thunk_FUN_0301080c(*param_1);
  FUN_0442fab4(lVar5,*puVar10);
  puVar4 = PTR_DAT_06fb8958;
  puVar3 = PTR_DAT_06fb8948;
  puVar2 = PTR_DAT_06fb8940;
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_04572f80(&stack0x00000078,*unaff_x21,*(undefined8 *)PTR_DAT_06fb8960);
  in_stack_000000d8 = *(undefined8 *)(unaff_x24 + 0x18);
  in_stack_000000d0 = *(undefined8 *)(unaff_x24 + 0x10);
  in_stack_000000e8 = *(undefined8 *)(unaff_x24 + 0x28);
  in_stack_000000e0 = *(undefined8 *)(unaff_x24 + 0x20);
  in_stack_000000f8 = *(undefined8 *)(unaff_x24 + 0x38);
  in_stack_000000f0 = *(undefined8 *)(unaff_x24 + 0x30);
  in_stack_000000c8 = in_stack_00000080;
  in_stack_000000c0 = in_stack_00000078;
  while( true ) {
    uVar6 = FUN_0556c2b4(&stack0x000000c0,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_0556c2b0(&stack0x000000c0,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0x130) = lVar5;
      thunk_FUN_03048534(unaff_x19 + 0x130,lVar5);
      return;
    }
    uVar7 = FUN_05d1955c();
    if (lVar5 == 0) break;
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      thunk_FUN_03048534();
    }
    else {
      FUN_044302e8(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



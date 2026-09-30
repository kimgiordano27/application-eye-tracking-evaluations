/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 05f19108
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar7 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x30);
  uStack00000000000000c0 = uVar5;
  uStack00000000000000c8 = uVar7;
  uStack00000000000000d0 = uVar2;
  uStack00000000000000d8 = uVar4;
  uStack00000000000000e0 = param_2;
  uStack00000000000000f0 = param_1;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  in_stack_000001c8 = in_stack_00000108;
  in_stack_000001c0 = in_stack_00000100;
  in_stack_000001d8 = in_stack_00000118;
  in_stack_000001d0 = in_stack_00000110;
  in_stack_000001e8 = in_stack_00000128;
  in_stack_000001e0 = in_stack_00000120;
  in_stack_00000180 = uVar5;
  in_stack_00000188 = uVar7;
  in_stack_00000190 = uVar2;
  in_stack_00000198 = uVar4;
  in_stack_000001a0 = param_2;
  in_stack_000001b0 = param_1;
  iVar1 = (**(code **)(param_4 + 0x18))
                    (*(undefined8 *)(param_4 + 0x40),&stack0x000001c0,&stack0x00000180,
                     *(undefined8 *)(param_4 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    uVar4 = *(undefined8 *)(unaff_x25 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x25 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x25 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x25 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x25 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x20);
    uVar15 = *(undefined8 *)(unaff_x25 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x25 + 0x30);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar3 = *(undefined8 *)(unaff_x26 + 0x40);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x58);
      uVar6 = *(undefined8 *)(unaff_x26 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar10 = *(undefined8 *)(unaff_x26 + 0x20);
      uVar16 = *(undefined8 *)(unaff_x26 + 0x38);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x30);
      *(undefined8 *)(unaff_x25 + 0x48) = *(undefined8 *)(unaff_x26 + 0x48);
      *(undefined8 *)(unaff_x25 + 0x40) = uVar3;
      *(undefined8 *)(unaff_x25 + 0x58) = uVar8;
      *(undefined8 *)(unaff_x25 + 0x50) = uVar6;
      *(undefined8 *)(unaff_x25 + 0x28) = uVar12;
      *(undefined8 *)(unaff_x25 + 0x20) = uVar10;
      *(undefined8 *)(unaff_x25 + 0x38) = uVar16;
      *(undefined8 *)(unaff_x25 + 0x30) = uVar14;
      thunk_FUN_044bb4b4(unaff_x19 + unaff_x24 * 0x40 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x48) = uVar4;
        *(undefined8 *)(unaff_x26 + 0x40) = uVar2;
        *(undefined8 *)(unaff_x26 + 0x58) = uVar7;
        *(undefined8 *)(unaff_x26 + 0x50) = uVar5;
        *(undefined8 *)(unaff_x26 + 0x28) = uVar11;
        *(undefined8 *)(unaff_x26 + 0x20) = uVar9;
        *(undefined8 *)(unaff_x26 + 0x38) = uVar15;
        *(undefined8 *)(unaff_x26 + 0x30) = uVar13;
        thunk_FUN_044bb4b4(unaff_x19 + unaff_x23 * 0x40 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}



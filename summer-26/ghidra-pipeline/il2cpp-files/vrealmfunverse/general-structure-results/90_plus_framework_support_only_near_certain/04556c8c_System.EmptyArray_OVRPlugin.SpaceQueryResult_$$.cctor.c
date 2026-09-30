/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 04556c8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 153
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *puVar4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    lVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xa8));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02b79548(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_02bb0e9c(unaff_x26 + (long)(int)unaff_w20 * 8,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      puVar4 = unaff_x27;
      unaff_x25 = unaff_x25 + 1;
      unaff_x27 = puVar4 + 6;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
    } while ((int)puVar4[2] < 0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_03619398(&stack0x00000010,*(undefined8 *)(puVar4 + 4),*unaff_x27,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
    param_1 = *(long *)(unaff_x19 + 0x20);
    uStack0000000000000000 = in_stack_00000010;
    uStack0000000000000008 = in_stack_00000018;
  } while( true );
}



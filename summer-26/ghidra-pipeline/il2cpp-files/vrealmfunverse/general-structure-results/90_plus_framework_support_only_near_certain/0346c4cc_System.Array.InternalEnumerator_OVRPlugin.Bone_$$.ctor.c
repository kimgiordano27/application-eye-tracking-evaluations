/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$.ctor
ENTRY_POINT: 0346c4cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  if (1 < param_1) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar5 = thunk_FUN_02b79644();
                    /* try { // try from 0346c5b4 to 0356c5bf has its CatchHandler @ 0346c668 */
                    /* try { // try from 0346c5c0 to 0356c5f3 has its CatchHandler @ 0346bf64 */
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5);
  }
  uVar3 = FUN_04d941cc();
  puVar1 = PTR_DAT_063185a8;
  if ((int)uVar3 < 1) {
    bVar2 = false;
  }
  else {
    uVar7 = 0;
    bVar2 = true;
    do {
      memcpy(&stack0x00000020,
             (void *)((long)unaff_x21 + uVar7 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      uVar4 = UnityEngine_UI_Image__get_minWidth();
      if ((uVar4 & 1) != 0) {
        return bVar2;
      }
      uVar7 = uVar7 + 1;
      bVar2 = uVar7 < uVar3;
    } while (uVar3 != uVar7);
  }
  return bVar2;
}



/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0346d3bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (param_1 == 0) {
    FUN_02b76274();
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  iVar2 = thunk_FUN_02b4ba0c();
  if (1 < iVar2) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5);
  }
  uVar3 = FUN_04d941cc();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
                    /* try { // try from 0346d414 to 0356d41b has its CatchHandler @ 0346d534 */
                    /* try { // try from 0346d428 to 0356d42f has its CatchHandler @ 0346d52c */
      memcpy(&stack0x00000070,
             (void *)((long)unaff_x21 + uVar8 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 0346d430 to 0356d43b has its CatchHandler @ 0346d528 */
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      in_stack_00000068 = in_stack_00000098;
      in_stack_00000060 = in_stack_00000090;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar7);
      }
      uVar4 = thunk_FUN_04dd5180();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}



/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0346ca54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 232
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


bool System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_02b76274();
  }
                    /* try { // try from 0346ca64 to 0356ca6b has its CatchHandler @ 0346cde0 */
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar2 = thunk_FUN_02b4ba0c(param_2,0);
  if (1 < iVar2) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar4 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar4);
  }
  uVar3 = FUN_04d941cc(param_2,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
                    /* try { // try from 0346caa8 to 0356cacf has its CatchHandler @ 0346cde4 */
    do {
      memcpy(&stack0x00000048,(void *)((long)param_2 + uVar8 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      in_stack_00000038 = in_stack_00000050;
      in_stack_00000030 = in_stack_00000048;
      in_stack_00000040 = in_stack_00000058;
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218(lVar7);
      }
      in_stack_00000020 = unaff_x20[1];
      in_stack_00000018 = *unaff_x20;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = unaff_x20[2];
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_04dd5180(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}



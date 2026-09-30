/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 0346d850
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


bool System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
               (long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02b76274(param_2);
  }
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_02b4ba0c(param_1,0);
  if (1 < iVar2) {
                    /* try { // try from 0346d960 to 0356d987 has its CatchHandler @ 0346dc9c */
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar5,uVar6,0);
                    /* try { // try from 0346d988 to 0356d99b has its CatchHandler @ 0346dc8c */
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,param_2);
  }
  uVar3 = FUN_04d941cc(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000038,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000018 = in_stack_00000038;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(param_2 + 0x38) + 8),&stack0x00000018);
      lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar7);
      }
      uVar4 = thunk_FUN_04dd5180();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
                    /* try { // try from 0346d91c to 0356d923 has its CatchHandler @ 0346dc98 */
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}



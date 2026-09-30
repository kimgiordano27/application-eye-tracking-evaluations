/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.AnimationDataSet<StylePropertyAnimationSystem.Values.EmptyData<TransformOrigin>,-TransformOrigin>$$GetActivePropertiesForElement
ENTRY_POINT: 02a9bfac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_UIElements_StylePropertyAnimationSystem_AnimationDataSet<StylePropertyAnimationSystem_Values_EmptyData<TransformOrigin>,_TransformOrigin>__GetActivePropertiesForElement
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 02a9bfb0 to 02b9bfc7 has its CatchHandler @ 02a9c6b0 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
                    /* try { // try from 02a9bfd0 to 02b9bfd3 has its CatchHandler @ 02a9c6ac */
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
                    /* try { // try from 02a9bff0 to 02b9bff3 has its CatchHandler @ 02a9c744 */
  if ((int)(uVar3 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
                    /* try { // try from 02a9c008 to 02b9c00b has its CatchHandler @ 02a9c740 */
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    puVar6 = (undefined2 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02a9c098:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(puVar6 + -6)) {
        in_stack_00000008 = 0;
        FUN_0306b958(&stack0x00000008,*(undefined4 *)(puVar6 + -2),*puVar6,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02a9c098;
        lVar1 = (long)(int)param_3;
        param_3 = param_3 + 1;
        *(undefined8 *)(param_2 + lVar1 * 8 + 0x20) = in_stack_00000008;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar2 != uVar5);
  }
  return;
}



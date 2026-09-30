/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0346d014
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  byte unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    memcpy(&stack0x00000020,(void *)(unaff_x23 + unaff_x22 * *(uint *)(param_1 + 0x104)),
           (ulong)*(uint *)(param_1 + 0x104));
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    uVar1 = FUN_05d1f928();
    if ((uVar1 & 1) != 0) break;
    unaff_x22 = unaff_x22 + 1;
    unaff_w25 = unaff_x22 < unaff_x24;
    if (unaff_x24 == unaff_x22) break;
    param_1 = *unaff_x21;
  }
  return unaff_w25 & 1;
}



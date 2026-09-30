/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 043c36dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  int unaff_w23;
  undefined4 in_stack_00000008;
  
  while (uVar1 = thunk_FUN_02ef1438(param_1,param_2), unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    uVar2 = FUN_0337efc0(unaff_x22 + (long)(int)unaff_w19 * 4 + 0x20,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    param_2 = &stack0x00000008;
    param_1 = **(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    in_stack_00000008 = unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}



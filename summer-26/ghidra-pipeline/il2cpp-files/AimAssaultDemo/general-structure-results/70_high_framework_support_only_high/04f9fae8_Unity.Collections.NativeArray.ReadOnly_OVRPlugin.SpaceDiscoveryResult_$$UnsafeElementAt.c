/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$UnsafeElementAt
ENTRY_POINT: 04f9fae8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__UnsafeElementAt
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_w20;
  
  iVar1 = thunk_FUN_037752f8(param_1 + 8,param_4,0);
  if ((long *)*param_2 != (long *)0x0) {
    FUN_0754e55c(*(long *)*param_2 + (long)((iVar1 - unaff_w20) * 0x4c),param_3,
                 (long)(unaff_w20 * 0x4c),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



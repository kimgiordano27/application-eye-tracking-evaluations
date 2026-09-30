/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 04d02248
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  
  if ((*(byte *)(*(long *)(param_1 + 0x58) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar1 = thunk_FUN_0322f148();
  FUN_059be9ec();
  plVar2 = *(long **)(unaff_x19 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d022b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x1b0));
    return uVar1;
  }
  return uVar1;
}



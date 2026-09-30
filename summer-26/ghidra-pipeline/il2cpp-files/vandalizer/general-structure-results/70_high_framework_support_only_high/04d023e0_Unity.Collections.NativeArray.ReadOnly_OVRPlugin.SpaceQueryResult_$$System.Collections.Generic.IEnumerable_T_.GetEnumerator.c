/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04d023e0
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
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  
  uVar1 = thunk_FUN_0322f148();
  FUN_059beca4();
  plVar2 = *(long **)(unaff_x19 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d02430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x1b0));
    return uVar1;
  }
  return uVar1;
}



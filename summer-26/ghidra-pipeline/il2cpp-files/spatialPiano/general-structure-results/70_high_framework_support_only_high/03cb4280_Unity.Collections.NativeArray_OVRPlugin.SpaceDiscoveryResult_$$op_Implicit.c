/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 03cb4280
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (undefined8 param_1,long param_2)

{
  void *__src;
  long *unaff_x19;
  
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_2 + 0x40)) {
    __src = (void *)thunk_FUN_02f453b8();
    memcpy(&stack0x00000008,__src,0x48);
    FUN_03cb411c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48();
}



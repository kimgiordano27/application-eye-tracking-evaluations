/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 06d051b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_03d1e194(PTR_DAT_091aa550);
  uVar1 = thunk_FUN_03d2ef40();
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091fc950);
  Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1,param_2);
}



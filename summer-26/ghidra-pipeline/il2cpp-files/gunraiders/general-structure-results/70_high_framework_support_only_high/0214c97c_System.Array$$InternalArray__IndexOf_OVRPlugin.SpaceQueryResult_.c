/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0214c97c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  
                    /* try { // try from 0214c97c to 0224c98b has its CatchHandler @ 0214c98c */
  uVar1 = FUN_03146988(*(undefined8 *)System_Data_DataException_TypeInfo);
  if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
  }
  FUN_03d03d14(uVar1,0);
  return 0;
}



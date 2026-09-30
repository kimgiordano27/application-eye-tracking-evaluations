/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 048ce7e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length(void)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  float *unaff_x19;
  
  plVar2 = (long *)thunk_FUN_0301043c();
  if (DAT_073918ec == '\0') {
    FUN_02fe925c(PTR_DAT_06f7cfa0);
    DAT_073918ec = '\x01';
  }
  if ((plVar2 == (long *)0x0) || (*plVar2 != *(long *)PTR_DAT_06f7cfa0)) {
    bVar1 = false;
  }
  else {
    pfVar3 = (float *)thunk_FUN_03010960(plVar2);
    bVar1 = false;
    if (((*unaff_x19 == *pfVar3) && (unaff_x19[1] == pfVar3[1])) && (unaff_x19[2] == pfVar3[2])) {
      bVar1 = (unaff_x19[3] == pfVar3[3] && unaff_x19[4] == pfVar3[4]) && unaff_x19[5] == pfVar3[5];
    }
  }
  return bVar1;
}



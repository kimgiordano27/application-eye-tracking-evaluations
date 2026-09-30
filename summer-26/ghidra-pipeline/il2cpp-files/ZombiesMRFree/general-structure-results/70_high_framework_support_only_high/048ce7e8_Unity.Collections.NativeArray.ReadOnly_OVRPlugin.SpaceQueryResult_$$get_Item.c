/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 048ce7e8
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


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item(long *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long unaff_x21;
  
  if (*(char *)(unaff_x21 + 0x8ec) == '\0') {
    FUN_02fe925c(PTR_DAT_06f7cfa0);
    *(undefined1 *)(unaff_x21 + 0x8ec) = 1;
  }
  if ((param_1 == (long *)0x0) || (*param_1 != *(long *)PTR_DAT_06f7cfa0)) {
    bVar1 = false;
  }
  else {
    pfVar2 = (float *)thunk_FUN_03010960(param_1);
    bVar1 = false;
    if (((*unaff_x19 == *pfVar2) && (unaff_x19[1] == pfVar2[1])) && (unaff_x19[2] == pfVar2[2])) {
      bVar1 = (unaff_x19[3] == pfVar2[3] && unaff_x19[4] == pfVar2[4]) && unaff_x19[5] == pfVar2[5];
    }
  }
  return bVar1;
}



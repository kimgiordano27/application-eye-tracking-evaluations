/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 04912104
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    FUN_0513fec0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



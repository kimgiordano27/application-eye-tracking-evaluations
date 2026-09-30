/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01e88edc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_6 + 0x54);
  param_1 = param_1 + param_4;
  param_2 = param_2 + param_5;
  param_3 = param_3 + *(float *)(param_6 + 0x7c);
  *(float *)(param_6 + 0x74) = param_1;
  *(float *)(param_6 + 0x78) = param_2;
  *(float *)(param_6 + 0x7c) = param_3;
  if (DAT_044a2dbf == '\0') {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a2dbf = '\x01';
  }
  fVar2 = param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
  if (fVar1 * fVar1 < fVar2) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    fVar2 = SQRT(fVar2);
    param_1 = fVar1 * (param_1 / fVar2);
    param_2 = fVar1 * (param_2 / fVar2);
    param_3 = fVar1 * (param_3 / fVar2);
  }
  *(float *)(param_6 + 0x74) = param_1;
  *(float *)(param_6 + 0x78) = param_2;
  *(float *)(param_6 + 0x7c) = param_3;
  return;
}



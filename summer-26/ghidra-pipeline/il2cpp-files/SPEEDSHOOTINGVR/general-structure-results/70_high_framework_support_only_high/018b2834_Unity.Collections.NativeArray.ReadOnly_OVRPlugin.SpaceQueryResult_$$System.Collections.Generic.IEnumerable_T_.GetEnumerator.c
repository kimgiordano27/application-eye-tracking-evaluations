/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 018b2834
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort *in_x9;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  uVar1 = *in_x9;
  if ((uVar1 & 1) == 0) {
    FUN_0103c244();
    param_1 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_0103c244();
  }
  FUN_011b6448(unaff_x22 + (long)unaff_w20 * 0x38,unaff_w19,1,
               *(undefined8 *)(*(long *)(param_1 + 0xc0) + 200));
  return;
}



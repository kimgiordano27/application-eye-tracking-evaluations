/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04699e3c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  iVar1 = *(int *)(unaff_x20 + 1);
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
                    /* try { // try from 04699e5c to 04799ea3 has its CatchHandler @ 04699e5c
                       catch() { ... } // from try @ 04699e5c with catch @ 04699e5c
                       catch() { ... } // from try @ 04699f08 with catch @ 04699e5c
                       catch() { ... } // from try @ 04699f38 with catch @ 04699e5c
                       catch() { ... } // from try @ 04699fb4 with catch @ 04699e5c */
  FUN_068b58dc(uVar2,(long)iVar1 * 0xc,0);
  return;
}



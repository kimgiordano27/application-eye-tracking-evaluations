/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03c68e0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  uint uVar1;
  long lVar2;
  long *unaff_x21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
  }
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 03c68e30 to 03d68e73 has its CatchHandler @ 03c68e30
                       catch() { ... } // from try @ 03c68e30 with catch @ 03c68e30
                       catch() { ... } // from try @ 03c68f30 with catch @ 03c68e30
                       catch() { ... } // from try @ 03c68f60 with catch @ 03c68e30
                       catch() { ... } // from try @ 03c68fd4 with catch @ 03c68e30 */
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_02d9d688();
                    /* try { // try from 03c68e74 to 03d68f2f has its CatchHandler @ 03c68f30 */
      uVar1 = FUN_03c68d3c();
      return uVar1 & 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



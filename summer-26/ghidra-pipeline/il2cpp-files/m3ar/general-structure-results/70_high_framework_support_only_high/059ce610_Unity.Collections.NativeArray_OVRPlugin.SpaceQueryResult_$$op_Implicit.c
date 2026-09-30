/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 059ce610
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
                    /* try { // try from 059ce620 to 05ace66b has its CatchHandler @ 059ce620
                       catch() { ... } // from try @ 059ce620 with catch @ 059ce620
                       catch() { ... } // from try @ 059ce750 with catch @ 059ce620
                       catch() { ... } // from try @ 059ce780 with catch @ 059ce620
                       catch() { ... } // from try @ 059ce7f4 with catch @ 059ce620 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec(lVar2);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_0406e000();
      uVar1 = FUN_059ce550();
      return uVar1 & 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



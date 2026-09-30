/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0419f4f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_038486f8();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0419f4b8 with catch @ 0419f514
                       try { // try from 0419f514 to 0429f52b has its CatchHandler @ 0419f46c */
    lVar1 = FUN_02dcfd18(lVar1);
  }
  if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 0419f52c to 0429f543 has its CatchHandler @ 0419f5b8 */
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_02dd328c();
                    /* try { // try from 0419f544 to 0429f5a7 has its CatchHandler @ 0419f46c */
      FUN_0419f3ec();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



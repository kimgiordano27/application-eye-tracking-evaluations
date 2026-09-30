/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 044ed254
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338(param_1);
  }
  uVar1 = FUN_044ecbe8();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 044ed220 with catch @ 044ed298
                       try { // try from 044ed298 to 045ed2af has its CatchHandler @ 044ed1d0 */
    lVar3 = FUN_031c09d4(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 044ed2b0 to 045ed2c7 has its CatchHandler @ 044ed340 */
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      thunk_FUN_031c3ef0();
                    /* try { // try from 044ed2c8 to 045ed32f has its CatchHandler @ 044ed1d0 */
      uVar2 = FUN_044ed1d4();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0399d4f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  plVar2 = (long *)(unaff_x19 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d53c with catch @ 0399d574
                        */
    lVar1 = *(long *)(lVar1 + 0x10);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d550 with catch @ 0399d578
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d554 with catch @ 0399d57c
                       catch(type#1 @ 05fbf508) { ... } // from try @ 0399d560 with catch @ 0399d57c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d3f0 with catch @ 0399d580
                        */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d43c with catch @ 0399d584
                        */
      lVar1 = FUN_02b76218();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 0399d5a0 to 03a9d5a3 has its CatchHandler @ 0399d630 */
                    /* try { // try from 0399d5a4 to 03a9d633 has its CatchHandler @ 0399d2c8 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02b76218();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 0399d53c to 03a9d547 has its CatchHandler @ 0399d574 */
      lVar1 = FUN_02b76218();
    }
    lVar1 = FUN_02b3c908(lVar1,unaff_w22);
                    /* try { // try from 0399d550 to 03a9d553 has its CatchHandler @ 0399d578 */
                    /* try { // try from 0399d554 to 03a9d557 has its CatchHandler @ 0399d57c */
    if (0 < *(int *)(unaff_x20 + 0x18)) {
                    /* try { // try from 0399d558 to 03a9d55b has its CatchHandler @ 0399d570 */
                    /* try { // try from 0399d55c to 03a9d55f has its CatchHandler @ 0399d56c */
                    /* try { // try from 0399d560 to 03a9d563 has its CatchHandler @ 0399d57c */
                    /* try { // try from 0399d564 to 03a9d59f has its CatchHandler @ 0399d2c8 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d4d8 with catch @ 0399d568
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d55c with catch @ 0399d56c
                        */
      FUN_04d9e334(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399d558 with catch @ 0399d570
                        */
    }
  }
  *plVar2 = lVar1;
  thunk_FUN_02bb0e9c(plVar2,lVar1);
  return;
}



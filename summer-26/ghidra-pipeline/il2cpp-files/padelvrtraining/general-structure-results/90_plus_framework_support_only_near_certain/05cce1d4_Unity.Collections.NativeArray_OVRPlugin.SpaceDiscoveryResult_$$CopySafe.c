/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 05cce1d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
                    /* catch() { ... } // from try @ 05cce0ec with catch @ 05cce1d8
                       catch() { ... } // from try @ 05cce128 with catch @ 05cce1d8
                       catch() { ... } // from try @ 05cce154 with catch @ 05cce1d8
                       catch() { ... } // from try @ 05cce1c8 with catch @ 05cce1d8 */
                    /* try { // try from 05cce1dc to 05dce1df has its CatchHandler @ 05cce1e8 */
  FUN_03d2d2b0(PTR_DAT_091fcba0);
                    /* try { // try from 05cce1e0 to 05dce1eb has its CatchHandler @ 05ccdf88 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05cce1dc with catch @ 05cce1e8
                        */
  FUN_03d2d2b0(PTR_DAT_091fcb98);
                    /* catch() { ... } // from try @ 05cce2a8 with catch @ 05cce1ec
                       catch() { ... } // from try @ 05cce2f8 with catch @ 05cce1ec
                       catch() { ... } // from try @ 05cce324 with catch @ 05cce1ec
                       catch() { ... } // from try @ 05cce398 with catch @ 05cce1ec */
  FUN_03d2d2b0(PTR_DAT_091a50e8);
  FUN_03d2d2b0(PTR_DAT_091fcba8);
  *(undefined1 *)(unaff_x22 + 0x4ea) = 1;
  iVar1 = FUN_06093590();
  if (iVar1 != 1) {
    uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a50e8);
                    /* try { // try from 05cce290 to 05dce2a7 has its CatchHandler @ 05cce2c8 */
    FUN_06fc1fb4(*(undefined8 *)PTR_DAT_091fcba8,uVar3,0);
                    /* try { // try from 05cce2a8 to 05dce2df has its CatchHandler @ 05cce1ec */
    FUN_05fbbdc8();
    return;
  }
                    /* try { // try from 05cce228 to 05dce22b has its CatchHandler @ 05cce2c0 */
  lVar2 = FUN_0609352c();
  if (lVar2 != 0) {
                    /* try { // try from 05cce25c to 05dce26b has its CatchHandler @ 05cce2c4 */
    FUN_05cce2d8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



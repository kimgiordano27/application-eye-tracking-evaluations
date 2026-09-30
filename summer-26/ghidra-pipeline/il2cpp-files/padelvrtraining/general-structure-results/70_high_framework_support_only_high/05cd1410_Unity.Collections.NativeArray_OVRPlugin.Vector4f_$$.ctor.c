/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 05cd1410
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd146c) */
/* WARNING: Removing unreachable block (ram,0x05cd1650) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(void)

{
  long unaff_x19;
  undefined8 uVar1;
  char cStack000000000000000c;
  
  uVar1 = *(undefined8 *)(unaff_x19 + 0x120);
  cStack000000000000000c = '\0';
  FUN_071e78b0(uVar1,&stack0x0000000c,0);
  if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_060724dc();
  if (cStack000000000000000c != '\0') {
    thunk_FUN_03d180a8(uVar1,0);
  }
                    /* try { // try from 05cd1460 to 05dd146f has its CatchHandler @ 05cd1470 */
                    /* catch() { ... } // from try @ 05cd1384 with catch @ 05cd1470
                       catch() { ... } // from try @ 05cd13c0 with catch @ 05cd1470
                       catch() { ... } // from try @ 05cd13ec with catch @ 05cd1470
                       catch() { ... } // from try @ 05cd1460 with catch @ 05cd1470 */
                    /* try { // try from 05cd1474 to 05dd1477 has its CatchHandler @ 05cd1480 */
  if (*(long *)(unaff_x19 + 0x128) != 0) {
                    /* try { // try from 05cd1478 to 05dd1483 has its CatchHandler @ 05cd1220 */
    FUN_071e01f8(*(long *)(unaff_x19 + 0x128),0);
    return;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05cd1474 with catch @ 05cd1480
                        */
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



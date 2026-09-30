/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 05ce4634
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce46c4) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(param_1,param_2);
    }
                    /* try { // try from 05ce4638 to 05de4647 has its CatchHandler @ 05ce4648 */
                    /* catch() { ... } // from try @ 05ce45f8 with catch @ 05ce4648
                       catch() { ... } // from try @ 05ce4638 with catch @ 05ce4648 */
    FUN_06b6f2d8(unaff_x24,param_2,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb0));
                    /* try { // try from 05ce464c to 05de464f has its CatchHandler @ 05ce4658 */
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    iVar1 = FUN_06b6daac(*(long *)(unaff_x21 + 0x18),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
    if (iVar1 < *(int *)(unaff_x21 + 0x28)) break;
    if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    unaff_x24 = *(long *)(unaff_x21 + 0x18);
    param_1 = FUN_05d0f570(*(long *)(unaff_x21 + 0x20),
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
    param_2 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_05d0f350();
  if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_06b6dddc();
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}



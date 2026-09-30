/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 041a0578
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_stack_00000000;
  
  do {
    if ((bool)in_ZR) {
                    /* catch() { ... } // from try @ 041a04f0 with catch @ 041a057c
                       catch() { ... } // from try @ 041a056c with catch @ 041a057c */
                    /* try { // try from 041a0580 to 042a0583 has its CatchHandler @ 041a058c */
                    /* try { // try from 041a0584 to 042a058f has its CatchHandler @ 041a0424 */
      puVar1 = (undefined8 *)FUN_02dd004c();
LAB_041a0598:
      (*(code *)*puVar1)();
      if (in_stack_00000000 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041a0580 with catch @ 041a058c
                        */
                    /* try { // try from 041a0590 to 042a08b3 has its CatchHandler @ 041a0590
                       catch() { ... } // from try @ 041a0590 with catch @ 041a0590
                       catch() { ... } // from try @ 041a097c with catch @ 041a0590
                       catch() { ... } // from try @ 041a0a4c with catch @ 041a0590
                       catch() { ... } // from try @ 041a0aa0 with catch @ 041a0590 */
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_041a0598;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}



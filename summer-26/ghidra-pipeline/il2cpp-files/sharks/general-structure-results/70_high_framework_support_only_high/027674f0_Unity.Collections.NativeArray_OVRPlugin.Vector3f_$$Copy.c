/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 027674f0
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  do {
                    /* try { // try from 027674f0 to 028674f3 has its CatchHandler @ 027674fc */
    lVar1 = FUN_0185daa4();
    do {
                    /* try { // try from 027674f4 to 0286751f has its CatchHandler @ 0276706c */
      if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027674f0 with catch @ 027674fc
                        */
        thunk_FUN_01843fdc();
      }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02767424 with catch @ 02767500
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 0276736c with catch @ 02767504
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027673ac with catch @ 02767508
                        */
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02766ca8();
                    /* try { // try from 02767520 to 02867523 has its CatchHandler @ 02767538 */
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
                    /* catch() { ... } // from try @ 02767520 with catch @ 02767538 */
      FUN_02767578();
      unaff_w21 = unaff_w21 + -1;
      if (unaff_w24 + unaff_w21 + 2 < 3) {
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    } while ((*(byte *)(lVar1 + 0x135) & 1) != 0);
  } while( true );
}



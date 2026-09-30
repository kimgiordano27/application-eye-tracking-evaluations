/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 0399c9b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  long unaff_x19;
  int unaff_w21;
  undefined4 unaff_w22;
  
  if (1 < unaff_w21) {
                    /* try { // try from 0399c9d0 to 03a9c9d3 has its CatchHandler @ 0399c9e0 */
                    /* try { // try from 0399c9d4 to 03a9ca0b has its CatchHandler @ 0399c500 */
    FUN_030eb174(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399c9d0 with catch @ 0399c9e0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399c8f0 with catch @ 0399c9e4
                        */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399c90c with catch @ 0399c9e8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399c824 with catch @ 0399c9ec
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399c870 with catch @ 0399c9f0
                        */
  return;
}



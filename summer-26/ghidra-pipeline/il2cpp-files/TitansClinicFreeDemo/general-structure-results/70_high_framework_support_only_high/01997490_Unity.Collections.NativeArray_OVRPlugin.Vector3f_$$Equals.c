/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 01997490
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(void)

{
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  if (unaff_w21 < 0) {
                    /* try { // try from 01997500 to 01a97517 has its CatchHandler @ 019975b0 */
    FUN_01f87fcc(0x10,4,0);
  }
                    /* try { // try from 01997498 to 01a974a7 has its CatchHandler @ 019974e4 */
  if (*(int *)(unaff_x19 + 0x18) - unaff_w22 < unaff_w21) {
    FUN_01f87b08(0x17,0);
  }
                    /* try { // try from 019974b4 to 01a974cb has its CatchHandler @ 019974e8 */
  if (1 < unaff_w21) {
                    /* try { // try from 019974cc to 01a974ff has its CatchHandler @ 01997444 */
    FUN_013dd1b8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0199747c with catch @ 019974e0
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01997498 with catch @ 019974e4
                        */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 019974b4 with catch @ 019974e8
                        */
  return;
}



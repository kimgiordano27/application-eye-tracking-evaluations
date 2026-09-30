/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 031573e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition
               (long param_1,int param_2,int param_3)

{
  long unaff_x22;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
                    /* try { // try from 0315745c to 0325746b has its CatchHandler @ 0315724c */
  if (param_3 < 0) {
                    /* try { // try from 0315746c to 0325746f has its CatchHandler @ 03157470 */
    FUN_033b3224(0x10,4,0);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0315746c with catch @ 03157470
                       try { // try from 03157470 to 03257493 has its CatchHandler @ 0315724c */
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  if (1 < param_3) {
    FUN_02022748(*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
                    /* try { // try from 03157444 to 03257447 has its CatchHandler @ 03157474 */
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* try { // try from 03157448 to 0325745b has its CatchHandler @ 0315747c */
  return;
}



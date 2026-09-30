/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$get_FollowHand
ENTRY_POINT: 03137a3c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_FollowHand
               (undefined8 param_1,int param_2)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03137994 with catch @ 03137a3c
                        */
  if (param_2 < 0) {
                    /* catch() { ... } // from try @ 03137a58 with catch @ 03137aa4
                       catch() { ... } // from try @ 03137a94 with catch @ 03137aa4 */
    OVRManager_PassthroughCapabilities___ctor(0);
  }
                    /* try { // try from 03137aa8 to 03237aab has its CatchHandler @ 03137ab4 */
  if (unaff_w20 < 0) {
                    /* try { // try from 03137aac to 03237ab7 has its CatchHandler @ 031377dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03137aa8 with catch @ 03137ab4
                        */
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_02021690(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}



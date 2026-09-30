/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 06d8e578
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
                    /* try { // try from 06d8e580 to 06e8e58f has its CatchHandler @ 06d8e59c */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d8e568 with catch @ 06d8e590
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d8e564 with catch @ 06d8e594
                        */
  uStack0000000000000040 = param_4;
  uStack0000000000000050 = param_3;
  uStack0000000000000060 = param_2;
  uStack0000000000000070 = param_1;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d8e544 with catch @ 06d8e59c
                       catch(type#1 @ 088de0a8) { ... } // from try @ 06d8e580 with catch @ 06d8e59c
                        */
  FUN_07d81e60(*(undefined4 *)(unaff_x20 + 0x1f0),*(undefined4 *)(unaff_x20 + 500),
               *(undefined4 *)(unaff_x20 + 0x1f8),unaff_x20 + 0x60,&stack0x00000040,0);
                    /* try { // try from 06d8e5a4 to 06e8e5bb has its CatchHandler @ 06d8e5c4 */
                    /* catch() { ... } // from try @ 06d8e52c with catch @ 06d8e5b0 */
                    /* try { // try from 06d8e5bc to 06e8e5c7 has its CatchHandler @ 06d8d374 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06d8e5a4 with catch @ 06d8e5c4
                        */
  FUN_07d81e60(*(undefined4 *)(unaff_x20 + 0x1fc),*(undefined4 *)(unaff_x20 + 0x200),
               *(undefined4 *)(unaff_x20 + 0x204),unaff_x20 + 0x6c);
  return;
}



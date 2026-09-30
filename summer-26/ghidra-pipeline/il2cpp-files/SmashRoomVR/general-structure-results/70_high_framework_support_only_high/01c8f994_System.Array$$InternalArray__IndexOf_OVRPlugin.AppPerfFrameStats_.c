/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01c8f994
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_AppPerfFrameStats>(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 01c8f834 with catch @ 01c8f9a0 */
    FUN_036df1ec(*(long *)(unaff_x19 + 0x38),0x101,0);
                    /* try { // try from 01c8f9a8 to 01d8f9af has its CatchHandler @ 01c8f9b4 */
    if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 01c8f9a8 with catch @ 01c8f9b4 */
                    /* catch() { ... } // from try @ 01c8f780 with catch @ 01c8f9b8 */
      FUN_039281c4(0,0x3f800000,*(long *)(unaff_x19 + 0x40),0);
      uVar2 = DAT_00b555a8;
      uVar1 = DAT_00b55218;
                    /* try { // try from 01c8f9c0 to 01d8f9c7 has its CatchHandler @ 01c8f9cc */
      if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 01c8f9c0 with catch @ 01c8f9cc */
                    /* catch() { ... } // from try @ 01c8f814 with catch @ 01c8f9d0 */
                    /* catch() { ... } // from try @ 01c8f760 with catch @ 01c8f9d4 */
                    /* catch() { ... } // from try @ 01c8f7f8 with catch @ 01c8f9d8 */
                    /* try { // try from 01c8f9e0 to 01d8f9e7 has its CatchHandler @ 01c8f9ec */
        FUN_03927d54(DAT_00b555a8,DAT_00b55218,*(long *)(unaff_x19 + 0x40),0);
                    /* catch() { ... } // from try @ 01c8f9e0 with catch @ 01c8f9ec */
        if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 01c8f744 with catch @ 01c8f9f0 */
                    /* try { // try from 01c8f9f8 to 01d8f9ff has its CatchHandler @ 01c8fa04 */
          UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector
                    (uVar2,uVar1,*(long *)(unaff_x19 + 0x40),0);
                    /* try { // try from 01c8fa00 to 01d8fa1b has its CatchHandler @ 01c8f694 */
                    /* catch() { ... } // from try @ 01c8f9f8 with catch @ 01c8fa04 */
          if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 01c8f708 with catch @ 01c8fa08 */
                    /* catch() { ... } // from try @ 01c8f8cc with catch @ 01c8fa0c */
            FUN_03927f8c(0,0x3f800000,*(long *)(unaff_x19 + 0x40),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



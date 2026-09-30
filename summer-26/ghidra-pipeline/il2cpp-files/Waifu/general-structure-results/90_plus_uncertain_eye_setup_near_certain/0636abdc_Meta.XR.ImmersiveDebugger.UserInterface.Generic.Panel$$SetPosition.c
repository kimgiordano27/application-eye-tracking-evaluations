/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 0636abdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  FUN_042a52a4();
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    FUN_0429e068(*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x22 + 0xfe8));
                    /* try { // try from 0636abf0 to 0646abfb has its CatchHandler @ 0636af24 */
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_0429e068(*(long *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x22 + 0xfe8));
      if (*(long *)(unaff_x19 + 0xa8) != 0) {
        FUN_0429fc00(*(long *)(unaff_x19 + 0xa8),*(undefined8 *)(unaff_x23 + 0x68));
        if (*(long *)(unaff_x19 + 0xb0) != 0) {
                    /* try { // try from 0636ac1c to 0646ac23 has its CatchHandler @ 0636ac34 */
          FUN_0429fc00(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)(unaff_x23 + 0x68));
                    /* try { // try from 0636ac24 to 0646ac43 has its CatchHandler @ 06369dec */
          if (*(long *)(unaff_x19 + 0xb8) != 0) {
            FUN_042a52a4(*(long *)(unaff_x19 + 0xb8),*(undefined8 *)(unaff_x21 + 0x140));
                    /* catch() { ... } // from try @ 0636ac1c with catch @ 0636ac34 */
            if (*(long *)(unaff_x19 + 0xc0) != 0) {
              FUN_0429e068(*(long *)(unaff_x19 + 0xc0),*(undefined8 *)(unaff_x22 + 0xfe8));
                    /* try { // try from 0636ac44 to 0646ac47 has its CatchHandler @ 0636aedc */
              if (*(long *)(unaff_x19 + 200) != 0) {
                FUN_042a52a4(*(long *)(unaff_x19 + 200),*(undefined8 *)(unaff_x21 + 0x140));
                if (*(long *)(unaff_x19 + 0xd0) != 0) {
                  FUN_042a52a4(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x21 + 0x140));
                    /* try { // try from 0636ac64 to 0646ac6f has its CatchHandler @ 0636af94 */
                  if (*(long *)(unaff_x19 + 0xd8) != 0) {
                    FUN_042a52a4(*(long *)(unaff_x19 + 0xd8),*(undefined8 *)(unaff_x21 + 0x140));
                    if (*(long *)(unaff_x19 + 0xe8) != 0) {
                    /* try { // try from 0636ac78 to 0646ac83 has its CatchHandler @ 0636af98 */
                      FUN_042a7d3c(*(long *)(unaff_x19 + 0xe8),*(undefined8 *)(unaff_x20 + 0x1f8));
                      if (*(long *)(unaff_x19 + 0xf0) != 0) {
                        FUN_042a7d3c(*(long *)(unaff_x19 + 0xf0),*(undefined8 *)(unaff_x20 + 0x1f8))
                        ;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 033696b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  long *unaff_x19;
  
                    /* catch() { ... } // from try @ 03369670 with catch @ 033696b8
                       catch() { ... } // from try @ 033696a8 with catch @ 033696b8 */
                    /* try { // try from 033696bc to 034696bf has its CatchHandler @ 033696c8 */
                    /* try { // try from 033696c0 to 034696cb has its CatchHandler @ 03369644 */
  FUN_03252aa8();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033696bc with catch @ 033696c8
                        */
                    /* try { // try from 033696cc to 03469757 has its CatchHandler @ 033696cc
                       catch() { ... } // from try @ 033696cc with catch @ 033696cc
                       catch() { ... } // from try @ 033697e8 with catch @ 033696cc
                       catch() { ... } // from try @ 03369914 with catch @ 033696cc
                       catch() { ... } // from try @ 03369948 with catch @ 033696cc */
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x2f8))();
  return;
}



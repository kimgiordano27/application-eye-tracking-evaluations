/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01a1df54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  
                    /* catch() { ... } // from try @ 01a1de30 with catch @ 01a1df54 */
                    /* catch() { ... } // from try @ 01a1de2c with catch @ 01a1df58 */
                    /* catch() { ... } // from try @ 01a1de28 with catch @ 01a1df5c */
                    /* catch() { ... } // from try @ 01a1de24 with catch @ 01a1df60 */
                    /* catch() { ... } // from try @ 01a1de20 with catch @ 01a1df64 */
                    /* catch() { ... } // from try @ 01a1de1c with catch @ 01a1df68 */
                    /* catch() { ... } // from try @ 01a1de18 with catch @ 01a1df6c */
                    /* catch() { ... } // from try @ 01a1de14 with catch @ 01a1df70 */
                    /* catch() { ... } // from try @ 01a1de10 with catch @ 01a1df74 */
                    /* catch() { ... } // from try @ 01a1de0c with catch @ 01a1df78 */
                    /* catch() { ... } // from try @ 01a1de08 with catch @ 01a1df7c */
                    /* catch() { ... } // from try @ 01a1d410 with catch @ 01a1df80 */
                    /* catch() { ... } // from try @ 01a1d3c0 with catch @ 01a1df84 */
                    /* catch() { ... } // from try @ 01a1d354 with catch @ 01a1df88 */
                    /* catch() { ... } // from try @ 01a1d460 with catch @ 01a1df8c */
                    /* catch() { ... } // from try @ 01a1d46c with catch @ 01a1df90 */
                    /* catch() { ... } // from try @ 01a1d488 with catch @ 01a1df94 */
                    /* catch() { ... } // from try @ 01a1d444 with catch @ 01a1df98 */
                    /* catch() { ... } // from try @ 01a1d758 with catch @ 01a1df9c */
  *(float *)(unaff_x19 + 0xc) = (in_s18 + in_s16 + in_s17) - in_s19;
  *(float *)(unaff_x19 + 0x10) = (in_s22 + in_s20 + in_s21) - in_s23;
                    /* catch() { ... } // from try @ 01a1d65c with catch @ 01a1dfa0 */
  *(float *)(unaff_x19 + 0x14) =
       (in_s24 + param_4 * param_7 + param_3 * param_6) - param_2 * param_5;
  *(float *)(unaff_x19 + 0x18) =
       ((param_4 * param_6 - param_1) - param_2 * param_8) - param_3 * param_7;
                    /* catch() { ... } // from try @ 01a1d550 with catch @ 01a1dfa4 */
  return;
}



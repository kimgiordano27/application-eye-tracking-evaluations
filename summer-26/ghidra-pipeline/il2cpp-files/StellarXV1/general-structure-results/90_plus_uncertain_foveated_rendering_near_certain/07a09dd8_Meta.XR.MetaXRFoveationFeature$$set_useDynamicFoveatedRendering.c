/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 07a09dd8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(void)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float unaff_s9;
  
                    /* catch() { ... } // from try @ 07a09204 with catch @ 07a09dd8 */
                    /* catch() { ... } // from try @ 07a09c18 with catch @ 07a09ddc */
  if (*(char *)(unaff_x20 + 0x4f1) == '\0') {
                    /* catch() { ... } // from try @ 07a09318 with catch @ 07a09de0 */
                    /* catch() { ... } // from try @ 07a093d4 with catch @ 07a09de4 */
                    /* catch() { ... } // from try @ 07a0945c with catch @ 07a09de8 */
    FUN_04077588(PTR_DAT_09285d60);
                    /* catch() { ... } // from try @ 07a094ec with catch @ 07a09dec */
                    /* catch() { ... } // from try @ 07a09590 with catch @ 07a09df0 */
    *(undefined1 *)(unaff_x20 + 0x4f1) = 1;
  }
                    /* catch() { ... } // from try @ 07a09620 with catch @ 07a09df4 */
                    /* catch() { ... } // from try @ 07a096d0 with catch @ 07a09df8 */
                    /* catch() { ... } // from try @ 07a09768 with catch @ 07a09dfc */
                    /* catch() { ... } // from try @ 07a09804 with catch @ 07a09e00 */
                    /* catch() { ... } // from try @ 07a09894 with catch @ 07a09e04 */
                    /* catch() { ... } // from try @ 07a09b20 with catch @ 07a09e08 */
  uVar2 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
                    /* catch() { ... } // from try @ 07a09bb0 with catch @ 07a09e0c */
                    /* catch() { ... } // from try @ 07a092c8 with catch @ 07a09e10 */
  *(undefined8 *)(unaff_x19 + 0xc) = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
                    /* catch() { ... } // from try @ 07a09d70 with catch @ 07a09e14 */
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
                    /* catch() { ... } // from try @ 07a09cc4 with catch @ 07a09e18 */
  if (unaff_s9 <= 0.0) {
                    /* catch() { ... } // from try @ 07a09d64 with catch @ 07a09e2c */
    bVar1 = true;
  }
  else {
                    /* catch() { ... } // from try @ 07a09d6c with catch @ 07a09e1c */
                    /* catch() { ... } // from try @ 07a099e8 with catch @ 07a09e20 */
                    /* catch() { ... } // from try @ 07a099b4 with catch @ 07a09e24 */
    bVar1 = *(float *)(unaff_x19 + 0x18) <= unaff_s9;
                    /* catch() { ... } // from try @ 07a0999c with catch @ 07a09e28 */
  }
                    /* catch() { ... } // from try @ 07a09abc with catch @ 07a09e30 */
  return bVar1;
}



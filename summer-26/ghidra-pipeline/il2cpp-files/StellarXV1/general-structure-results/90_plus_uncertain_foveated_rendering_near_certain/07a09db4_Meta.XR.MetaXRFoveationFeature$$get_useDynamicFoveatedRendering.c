/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 07a09db4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  bool bVar1;
  long unaff_x19;
  undefined8 uVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float in_stack_00000008;
  
                    /* catch() { ... } // from try @ 07a094c8 with catch @ 07a09db4 */
                    /* catch() { ... } // from try @ 07a09560 with catch @ 07a09db8 */
                    /* catch() { ... } // from try @ 07a09604 with catch @ 07a09dbc */
  if (param_3 <= in_stack_00000008) {
                    /* catch() { ... } // from try @ 07a09b94 with catch @ 07a09dd4 */
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    uVar2 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  }
  else {
                    /* catch() { ... } // from try @ 07a096a0 with catch @ 07a09dc0 */
                    /* catch() { ... } // from try @ 07a0974c with catch @ 07a09dc4 */
                    /* catch() { ... } // from try @ 07a097e8 with catch @ 07a09dc8 */
    fVar3 = unaff_s8 / param_3;
                    /* catch() { ... } // from try @ 07a09878 with catch @ 07a09dcc */
    uVar2 = CONCAT44(param_2 / param_3,param_4 / param_3);
                    /* catch() { ... } // from try @ 07a09908 with catch @ 07a09dd0 */
  }
  *(undefined8 *)(unaff_x19 + 0xc) = uVar2;
  *(float *)(unaff_x19 + 0x14) = fVar3;
  if (unaff_s9 <= 0.0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(float *)(unaff_x19 + 0x18) <= unaff_s9;
  }
  return bVar1;
}



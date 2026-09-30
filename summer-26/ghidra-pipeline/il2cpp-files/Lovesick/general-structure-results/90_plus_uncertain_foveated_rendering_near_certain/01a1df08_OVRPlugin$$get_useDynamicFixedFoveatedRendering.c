/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01a1df08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRPlugin__get_useDynamicFixedFoveatedRendering
               (undefined4 param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  undefined4 *unaff_x19;
  uint unaff_w20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 01a1de7c with catch @ 01a1df08 */
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
                    /* catch() { ... } // from try @ 01a1de78 with catch @ 01a1df0c */
  unaff_x19[2] = param_3;
                    /* catch() { ... } // from try @ 01a1de74 with catch @ 01a1df10 */
  lVar1 = FUN_0268fd10();
                    /* catch() { ... } // from try @ 01a1de70 with catch @ 01a1df14 */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 01a1de6c with catch @ 01a1df18 */
                    /* catch() { ... } // from try @ 01a1de68 with catch @ 01a1df1c */
    fVar2 = (float)FUN_0269f810(lVar1,0);
                    /* catch() { ... } // from try @ 01a1de64 with catch @ 01a1df20 */
    fVar3 = (float)unaff_x19[3];
    fVar6 = (float)unaff_x19[4];
                    /* catch() { ... } // from try @ 01a1de60 with catch @ 01a1df24 */
    fVar5 = (float)unaff_x19[5];
    fVar4 = (float)unaff_x19[6];
                    /* catch() { ... } // from try @ 01a1de5c with catch @ 01a1df28 */
                    /* catch() { ... } // from try @ 01a1de58 with catch @ 01a1df2c */
                    /* catch() { ... } // from try @ 01a1de54 with catch @ 01a1df30 */
                    /* catch() { ... } // from try @ 01a1de50 with catch @ 01a1df34 */
                    /* catch() { ... } // from try @ 01a1de4c with catch @ 01a1df38 */
                    /* catch() { ... } // from try @ 01a1de48 with catch @ 01a1df3c */
                    /* catch() { ... } // from try @ 01a1de44 with catch @ 01a1df40 */
                    /* catch() { ... } // from try @ 01a1de40 with catch @ 01a1df44 */
                    /* catch() { ... } // from try @ 01a1de3c with catch @ 01a1df48 */
                    /* catch() { ... } // from try @ 01a1de38 with catch @ 01a1df4c */
                    /* catch() { ... } // from try @ 01a1de34 with catch @ 01a1df50 */
    unaff_x19[3] = (param_2 * fVar5 + param_4 * fVar3 + fVar2 * fVar4) - param_3 * fVar6;
    unaff_x19[4] = (param_3 * fVar3 + param_4 * fVar6 + param_2 * fVar4) - fVar2 * fVar5;
    unaff_x19[5] = (fVar2 * fVar6 + param_4 * fVar5 + param_3 * fVar4) - param_2 * fVar3;
    unaff_x19[6] = ((param_4 * fVar4 - fVar2 * fVar3) - param_2 * fVar6) - param_3 * fVar5;
    return unaff_w20 & 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01a1dc3c with catch @ 01a1dfe4 */
  FUN_00da518c();
}



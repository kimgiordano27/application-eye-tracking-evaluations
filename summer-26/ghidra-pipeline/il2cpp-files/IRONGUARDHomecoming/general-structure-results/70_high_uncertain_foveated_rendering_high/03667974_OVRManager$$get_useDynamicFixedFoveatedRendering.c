/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 03667974
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering
               (undefined4 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_0407e9e4();
  fVar3 = param_3;
  fVar4 = param_4;
                    /* try { // try from 03667990 to 0376799f has its CatchHandler @ 036679a0 */
  FUN_0407bae8(param_6,0);
  fVar2 = (float)FUN_04066fb8(0);
                    /* catch() { ... } // from try @ 03667910 with catch @ 036679a0
                       catch() { ... } // from try @ 03667990 with catch @ 036679a0 */
  fVar5 = *(float *)(unaff_x20 + 0xc);
  fVar6 = *(float *)(unaff_x20 + 0x10);
                    /* try { // try from 036679a4 to 037679a7 has its CatchHandler @ 036679b0 */
  fVar7 = *(float *)(unaff_x20 + 0x14);
  fVar8 = *(float *)(unaff_x20 + 0x18);
                    /* try { // try from 036679a8 to 037679b3 has its CatchHandler @ 03667818 */
  *param_1 = uVar1;
  param_1[1] = param_3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036679a4 with catch @ 036679b0
                        */
  param_1[2] = param_4;
  param_1[3] = (fVar3 * fVar7 + param_5 * fVar5 + fVar2 * fVar8) - fVar4 * fVar6;
  param_1[4] = (fVar4 * fVar5 + param_5 * fVar6 + fVar3 * fVar8) - fVar2 * fVar7;
  param_1[5] = (fVar2 * fVar6 + param_5 * fVar7 + fVar4 * fVar8) - fVar3 * fVar5;
  param_1[6] = ((param_5 * fVar8 - fVar2 * fVar5) - fVar3 * fVar6) - fVar4 * fVar7;
  return;
}



/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 03667874
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


void OVRManager__set_fixedFoveatedRenderingLevel
               (undefined4 param_1,float param_2,float param_3,float param_4)

{
  undefined4 *unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = param_2;
  fVar5 = param_3;
                    /* try { // try from 03667884 to 0376790f has its CatchHandler @ 03667818 */
  FUN_0407bae8();
  fVar1 = (float)FUN_04066fb8(0);
  fVar4 = fVar3;
  fVar6 = fVar5;
  fVar7 = param_4;
  fVar2 = (float)FUN_0407bae8();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_3;
  unaff_x19[3] = (fVar3 * fVar6 + param_4 * fVar2 + fVar1 * fVar7) - fVar5 * fVar4;
  unaff_x19[4] = (fVar5 * fVar2 + param_4 * fVar4 + fVar3 * fVar7) - fVar1 * fVar6;
  unaff_x19[5] = (fVar1 * fVar4 + param_4 * fVar6 + fVar5 * fVar7) - fVar3 * fVar2;
  unaff_x19[6] = ((param_4 * fVar7 - fVar1 * fVar2) - fVar3 * fVar4) - fVar5 * fVar6;
  return;
}



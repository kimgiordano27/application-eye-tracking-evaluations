/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05320788
PROGRAM: spatialPiano-libil2cpp.so
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
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fStack000000000000000c = param_1;
  fStack0000000000000058 = param_2;
  fStack000000000000005c = param_3;
  fVar1 = (float)FUN_0531ee78();
  fVar5 = param_2;
  fVar7 = param_3;
  fVar2 = (float)FUN_0531f0e8(param_4,param_5);
  fVar9 = fVar5;
  fVar10 = fVar7;
  fVar3 = (float)FUN_0531ec4c(param_4,param_5);
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fVar4 = fVar7 * fVar7 + fVar2 * fVar2 + fVar5 * fVar5;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar4) {
    fVar6 = fVar7 * fVar10 + fVar2 * fVar3 + fVar5 * fVar9;
    fVar8 = (fStack000000000000005c - param_3) * fVar7 +
            (fStack000000000000000c - fVar1) * fVar2 + (fStack0000000000000058 - param_2) * fVar5;
    fVar3 = fVar3 - (fVar2 * fVar6) / fVar4;
    fVar9 = fVar9 - (fVar5 * fVar6) / fVar4;
    fVar10 = fVar10 - (fVar7 * fVar6) / fVar4;
    fVar1 = (fStack000000000000000c - fVar1) - (fVar2 * fVar8) / fVar4;
    param_2 = (fStack0000000000000058 - param_2) - (fVar5 * fVar8) / fVar4;
    param_3 = (fStack000000000000005c - param_3) - (fVar7 * fVar8) / fVar4;
  }
  else {
    fVar1 = fStack000000000000000c - fVar1;
    param_2 = fStack0000000000000058 - param_2;
    param_3 = fStack000000000000005c - param_3;
  }
  FUN_060df230(fVar3,fVar9,fVar10,fVar1,param_2,param_3,0);
  return;
}



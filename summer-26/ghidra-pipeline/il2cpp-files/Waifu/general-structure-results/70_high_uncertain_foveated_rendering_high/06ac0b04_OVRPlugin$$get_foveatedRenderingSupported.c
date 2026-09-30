/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 06ac0b04
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_foveatedRenderingSupported(void)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  
  fVar1 = (float)FUN_06ac0910();
  fVar2 = (float)FUN_07a009b0(0);
  fVar5 = *(float *)(unaff_x20 + 0x2c);
  fVar6 = *(float *)(unaff_x20 + 0x30);
  fVar4 = *(float *)(unaff_x20 + 0x28);
  fVar3 = (float)FUN_07a00400(*(undefined4 *)(unaff_x20 + 0x24),fVar4,fVar5,fVar6,0);
  return (*(float *)(unaff_x19 + 0x2c) *
          ((unaff_s10 * fVar3 + fVar1 * fVar4 + unaff_s9 * fVar6) - fVar2 * fVar5) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar1 * fVar6 - fVar2 * fVar3) - unaff_s9 * fVar4) - unaff_s10 * fVar5) +
         *(float *)(unaff_x19 + 0x30) *
         ((unaff_s9 * fVar5 + fVar1 * fVar3 + fVar2 * fVar6) - unaff_s10 * fVar4)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar2 * fVar4 + fVar1 * fVar5 + unaff_s10 * fVar6) - unaff_s9 * fVar3);
}



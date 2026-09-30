/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 020faab0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_051d2ac0(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      fVar6 = *(float *)(unaff_x19 + 0x3c);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      uVar4 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_06e50440 + 0xb8) + 1);
      fVar6 = fVar6 - **(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      fVar3 = (float)uVar2 - (float)uVar4;
      fVar5 = (float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar4 >> 0x20);
      return DAT_0534bf7c <= fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3;
    }
  }
  return false;
}



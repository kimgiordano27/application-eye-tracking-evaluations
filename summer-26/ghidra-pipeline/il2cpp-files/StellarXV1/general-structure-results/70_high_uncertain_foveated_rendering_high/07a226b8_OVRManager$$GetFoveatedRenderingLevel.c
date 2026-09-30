/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 07a226b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long unaff_x21;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_s3;
  
  puVar2 = PTR_DAT_092eff38;
  puVar1 = PTR_DAT_09286eb8;
  if ((*(byte *)(unaff_x21 + 400) & 1) == 0) {
    FUN_04077588(PTR_DAT_092eff38);
    FUN_04077588(PTR_DAT_09286eb8);
    *(undefined1 *)(unaff_x21 + 400) = 1;
  }
  uVar7 = 0;
  uVar3 = DAT_01aec168;
  uVar6 = FUN_089b9180(0,0);
  puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  *puVar5 = uVar6;
  puVar5[1] = uVar3;
  uVar4 = *(undefined8 *)puVar1;
  puVar5[2] = uVar7;
  puVar5[3] = in_s3;
  uVar3 = FUN_08990480(uVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar3;
  return;
}



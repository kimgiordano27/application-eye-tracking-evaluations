/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 073e13b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_foveatedRenderingSupported(void)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x23 + 0xff5) = 1;
  puVar1 = *(undefined4 **)(*unaff_x22 + 0xb8);
  uVar7 = *puVar1;
  fStack0000000000000004 = (float)puVar1[1];
  fVar4 = (float)puVar1[2];
  if (*(char *)(unaff_x19 + 0x146) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar5 = (float)FUN_085d2bd4(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (*(char *)(unaff_x20 + 0xea2) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x20 + 0xea2) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar6 = unaff_s14 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar5 + fStack0000000000000018 * fStack00000000000000a4;
    fVar5 = fVar5 - (fStack0000000000000014 * fVar6) / unaff_s8;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar6) / unaff_s8;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar6) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar5 * fVar5 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar5 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar5 = fVar5 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_085d2264(uVar7,fStack0000000000000004,fVar4,fVar5,fStack00000000000000a4,
                              fStack00000000000000a8,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar5 + unaff_s10 * fVar6) -
         in_stack_00000008._4_4_ * fVar4;
}



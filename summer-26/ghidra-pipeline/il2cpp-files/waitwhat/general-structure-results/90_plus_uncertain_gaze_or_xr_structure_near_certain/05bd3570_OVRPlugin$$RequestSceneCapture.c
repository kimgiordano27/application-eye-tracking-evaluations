/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 05bd3570
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__RequestSceneCapture(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  puVar1 = PTR_DAT_070cf060;
  fVar6 = unaff_s14 * unaff_s14 +
          fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar6) {
    fVar4 = unaff_s14 * param_3 +
            fStack0000000000000014 * unaff_s15 + fStack0000000000000018 * param_2;
    unaff_s15 = unaff_s15 - (fStack0000000000000014 * fVar4) / fVar6;
    param_2 = param_2 - (fStack0000000000000018 * fVar4) / fVar6;
    param_3 = param_3 - (unaff_s14 * fVar4) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x21 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = SQRT(param_3 * param_3 + unaff_s15 * unaff_s15 + param_2 * param_2);
  fStack000000000000000c = unaff_s9;
  if (fVar4 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x23 + 0x7d6) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = unaff_s15 / fVar4;
    fStack0000000000000004 = param_2 / fVar4;
    param_3 = param_3 / fVar4;
  }
  if (*(char *)(unaff_x19 + 0xbc0) == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x19 + 0xbc0) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = (float)FUN_069c57a8(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar4 + fStack0000000000000018 * fStack00000000000000a4;
    fVar4 = fVar4 - (fStack0000000000000014 * fVar5) / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar5) / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x21 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar4 * fVar4 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x23 + 0x7d6) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_069c4e34(fStack0000000000000008,fStack0000000000000004,param_3,fVar4,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fStack0000000000000010 * fStack0000000000000004 +
         fStack000000000000000c * fVar4 + unaff_s11 * fVar6) - unaff_s10 * param_3;
}



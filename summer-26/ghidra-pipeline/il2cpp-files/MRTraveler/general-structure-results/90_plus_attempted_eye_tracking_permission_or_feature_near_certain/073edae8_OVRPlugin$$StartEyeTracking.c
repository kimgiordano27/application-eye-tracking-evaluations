/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 073edae8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x073edd4c) */

float OVRPlugin__StartEyeTracking(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  float *pfVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float unaff_s13;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar3 = (param_4 - in_s18) * unaff_s8 +
          (param_1 - in_s16) * unaff_s9 + (param_3 - in_s17) * unaff_s15;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  puVar1 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  fVar4 = DAT_018b0528;
  fVar7 = SQRT(in_s20 * in_s20 + in_s19 * in_s19 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar7 <= DAT_018b0528) {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
      in_s16 = unaff_s10;
      in_s17 = unaff_s11;
      in_s18 = unaff_s13;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar2;
    fStack0000000000000008 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar5 = in_s19 / fVar7;
    fStack0000000000000008 = fStack0000000000000008 / fVar7;
    fVar6 = in_s20 / fVar7;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  fStack0000000000000020 = (in_s16 + (unaff_s9 * fVar3) / param_2) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + (unaff_s15 * fVar3) / param_2) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + (unaff_s8 * fVar3) / param_2) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar3 <= fVar4) {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000020 = *pfVar2;
    fStack000000000000001c = pfVar2[1];
    fStack0000000000000018 = pfVar2[2];
  }
  else {
    fStack0000000000000020 = fStack0000000000000020 / fVar3;
    fStack000000000000001c = fStack000000000000001c / fVar3;
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe0) == 0) && (thunk_FUN_03cd7500(), DAT_094100b5 == '\0')) {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar7 = (fVar3 / (fVar6 * fStack0000000000000018 +
                   fVar5 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c)
          ) / fVar7;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x12a) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x23 + 0x12a) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar7;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar7;
  fVar3 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar7;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar3) {
    fVar5 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar4 = (fStack0000000000000030 * fVar5) / fVar3;
    fVar7 = (fStack0000000000000088 * fVar5) / fVar3;
    fVar5 = (fStack000000000000008c * fVar5) / fVar3;
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (0.0 <= fStack000000000000008c * fVar5 +
             fStack0000000000000030 * fVar4 + fStack0000000000000088 * fVar7) {
    if (fVar3 < fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5) {
      fVar4 = fStack0000000000000030;
      fVar7 = fStack0000000000000088;
      fVar5 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar4 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar4);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar7);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar5);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}



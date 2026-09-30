/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 073def30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073df34c) */

float OVRPlugin__GetExternalCameraCount
                (float param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  fVar12 = param_2;
  fVar10 = param_3;
  fVar4 = (float)FUN_073de360();
  fVar9 = fVar12;
  fStack0000000000000024 = fVar10;
                    /* try { // try from 073def70 to 074df0cf has its CatchHandler @ 073def70
                       catch() { ... } // from try @ 073def70 with catch @ 073def70
                       catch() { ... } // from try @ 073df0ec with catch @ 073def70
                       catch() { ... } // from try @ 073df194 with catch @ 073def70
                       catch() { ... } // from try @ 073df228 with catch @ 073def70
                       catch() { ... } // from try @ 073df280 with catch @ 073def70
                       catch() { ... } // from try @ 073df2b8 with catch @ 073def70
                       catch() { ... } // from try @ 073df300 with catch @ 073def70
                       catch() { ... } // from try @ 073df31c with catch @ 073def70
                       catch() { ... } // from try @ 073df364 with catch @ 073def70
                       catch() { ... } // from try @ 073df380 with catch @ 073def70
                       catch() { ... } // from try @ 073df3c0 with catch @ 073def70 */
  fVar5 = (float)FUN_073de5d4(param_4,param_5);
  if (DAT_0941112a == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_0941112a = '\x01';
  }
  puVar2 = PTR_DAT_08e722b0;
  fVar11 = fVar10 * fVar10 + fVar5 * fVar5 + fVar9 * fVar9;
  fStack0000000000000014 = fVar4;
  fStack000000000000001c = param_2;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar11) {
    fVar4 = (param_3 - fStack0000000000000024) * fVar10 +
            (param_1 - fVar4) * fVar5 + (param_2 - fVar12) * fVar9;
    fVar13 = (fVar5 * fVar4) / fVar11;
    fVar14 = (fVar9 * fVar4) / fVar11;
    fVar4 = (fVar10 * fVar4) / fVar11;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar13 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  fVar6 = (float)FUN_073de5f8(param_4,param_5);
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fStack000000000000002c = fVar5;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar4 * fVar4);
  if (fVar6 < fVar5) {
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (fVar5 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar13 = *pfVar3;
      fVar14 = pfVar3[1];
      fVar4 = pfVar3[2];
    }
    else {
      fVar13 = fVar13 / fVar5;
      fVar14 = fVar14 / fVar5;
      fVar4 = fVar4 / fVar5;
    }
    fVar13 = fVar6 * fVar13;
    fVar14 = fVar6 * fVar14;
    fVar4 = fVar6 * fVar4;
  }
  if (fVar10 * fVar4 + fStack000000000000002c * fVar13 + fVar9 * fVar14 < 0.0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar13 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  fVar13 = fStack0000000000000014 + fVar13;
  fVar12 = fVar12 + fVar14;
  fVar4 = fStack0000000000000024 + fVar4;
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  param_1 = param_1 - fVar13;
  fVar5 = fStack000000000000001c - fVar12;
  param_3 = param_3 - fVar4;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar11) {
    fVar4 = fVar10 * param_3 + fStack000000000000002c * param_1 + fVar9 * fVar5;
    param_1 = param_1 - (fStack000000000000002c * fVar4) / fVar11;
    fVar5 = fVar5 - (fVar9 * fVar4) / fVar11;
    param_3 = param_3 - (fVar10 * fVar4) / fVar11;
  }
  fStack0000000000000014 = fVar13;
  fStack0000000000000024 = fVar12;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar12 = SQRT(param_3 * param_3 + param_1 * param_1 + fVar5 * fVar5);
  if (fVar12 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    param_1 = **(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  }
  else {
    param_1 = param_1 / fVar12;
  }
  uVar7 = FUN_073de158(param_4,param_5);
  fStack0000000000000004 = fVar9;
  fVar12 = (float)FUN_03f04c24(uVar7,0);
  fVar12 = fVar12 - (float)(int)(fVar12 / 360.0) * 360.0;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar9 = *(float *)(*(long *)(param_4 + 0x20) + 0x2c);
  uVar8 = (ulong)(uint)param_1;
  if ((fVar9 < fVar12) && (uVar8 = uVar7, ABS(fVar12 - fVar9) < ABS(360.0 - fVar12))) {
    uVar8 = FUN_073de204(param_4,param_5);
  }
  fVar12 = (float)FUN_073de418(param_4,param_5);
  return fStack0000000000000014 + (float)uVar8 * fVar12;
}



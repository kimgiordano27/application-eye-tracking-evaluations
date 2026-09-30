/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 073c6950
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsUnityAlphaOrBetaVersion
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float fVar15;
  float fVar16;
  ulong uVar8;
  
  param_4 = unaff_s10 - param_4;
  param_1 = unaff_s14 - param_1;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar11 = (ulong)(uint)(param_1 * param_1);
  fVar2 = SQRT(param_1 * param_1 + unaff_s9 * unaff_s9 + param_4 * param_4);
  if (fVar2 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar16 = *pfVar1;
    param_4 = pfVar1[1];
    param_1 = pfVar1[2];
  }
  else {
    fVar16 = unaff_s9 / fVar2;
    param_4 = param_4 / fVar2;
    param_1 = param_1 / fVar2;
  }
  uVar13 = (ulong)(uint)param_1;
  uVar10 = (ulong)(uint)param_4;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar7 = unaff_x20[2];
    uVar8 = (ulong)(uint)fVar7;
    fVar2 = unaff_x20[1];
    fVar14 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar3 = *unaff_x20;
                    /* try { // try from 073c6a28 to 074c6a2f has its CatchHandler @ 073c6afc */
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar4 = (float)FUN_085e995c();
    fVar15 = *(float *)(unaff_x19 + 0x58);
    uVar9 = uVar8;
    uVar12 = uVar11;
    uVar5 = FUN_085e995c();
    uVar6 = FUN_085d28c8(fVar16,uVar10,uVar13,uVar5,uVar9,uVar12,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_085ebce8((fVar3 - fVar16 * fVar14) + fVar4 * fVar15,
                   (fVar2 - param_4 * fVar14) + (float)uVar8 * fVar15,
                   (fVar7 - param_1 * fVar14) + (float)uVar11 * fVar15,uVar6,uVar10,uVar13,uVar5,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



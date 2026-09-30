/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 073c6898
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


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float fVar16;
  float unaff_s14;
  float fVar17;
  float unaff_s15;
  undefined8 in_stack_00000058;
  
  fVar4 = param_3;
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar2 = (float)FUN_085e995c();
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + param_2 * param_2;
  fVar15 = unaff_s14 - unaff_s9;
  fVar16 = unaff_s15 - unaff_s10;
  in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - param_3;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar3) {
    fVar8 = in_stack_00000058._4_4_ * fVar4 + fVar15 * fVar2 + fVar16 * param_2;
    fVar15 = fVar15 - (fVar2 * fVar8) / fVar3;
    fVar16 = fVar16 - (param_2 * fVar8) / fVar3;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar4 * fVar8) / fVar3;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar12 = (ulong)(uint)(in_stack_00000058._4_4_ * in_stack_00000058._4_4_);
  fVar4 = SQRT(in_stack_00000058._4_4_ * in_stack_00000058._4_4_ + fVar15 * fVar15 + fVar16 * fVar16
              );
  if (fVar4 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    in_stack_00000058._4_4_ = pfVar1[2];
  }
  else {
    fVar15 = fVar15 / fVar4;
    fVar16 = fVar16 / fVar4;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ / fVar4;
  }
  uVar14 = (ulong)(uint)in_stack_00000058._4_4_;
  uVar11 = (ulong)(uint)fVar16;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar3 = unaff_x20[2];
    uVar9 = (ulong)(uint)fVar3;
    fVar4 = unaff_x20[1];
    fVar8 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar2 = *unaff_x20;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar5 = (float)FUN_085e995c();
    fVar17 = *(float *)(unaff_x19 + 0x58);
    uVar10 = uVar9;
    uVar13 = uVar12;
    uVar6 = FUN_085e995c();
    uVar7 = FUN_085d28c8(fVar15,uVar11,uVar14,uVar6,uVar10,uVar13,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_085ebce8((fVar2 - fVar15 * fVar8) + fVar5 * fVar17,
                   (fVar4 - fVar16 * fVar8) + (float)uVar9 * fVar17,
                   (fVar3 - in_stack_00000058._4_4_ * fVar8) + (float)uVar12 * fVar17,uVar7,uVar11,
                   uVar14,uVar6,*(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



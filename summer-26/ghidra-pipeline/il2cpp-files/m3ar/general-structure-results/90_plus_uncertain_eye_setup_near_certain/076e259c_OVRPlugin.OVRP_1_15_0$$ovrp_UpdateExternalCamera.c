/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 076e259c
PROGRAM: m3ar-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x21 + 0xe18) = 1;
  fVar7 = unaff_s14 - unaff_s8;
  fVar8 = unaff_s13 - unaff_s9;
  fVar9 = unaff_s12 - unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar2 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  if (fVar2 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
  }
  else {
    fVar7 = fVar7 / fVar2;
    fVar8 = fVar8 / fVar2;
    fVar9 = fVar9 / fVar2;
  }
  fVar2 = fVar9 * fVar9;
  if (fVar7 * fVar7 + fVar8 * fVar8 + fVar2 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_076e271c;
    fVar7 = (float)FUN_08598e98(*(long *)(unaff_x20 + 0x28),0);
    fVar8 = fVar2;
    fVar9 = param_3;
  }
  FUN_08575dd0(fVar7,fVar8,fVar9,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_0852b5fc((in_stack_00000008._4_4_ * fVar9 + unaff_s15 * fVar7 + unaff_s10 * fVar8) * 0.5 +
                 0.5,*(long *)(unaff_x20 + 0x38),0);
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar6 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar3 = FUN_085759a8(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    return;
  }
LAB_076e271c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



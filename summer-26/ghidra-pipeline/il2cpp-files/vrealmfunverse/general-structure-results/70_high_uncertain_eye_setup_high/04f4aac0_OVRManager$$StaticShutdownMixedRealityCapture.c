/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 04f4aac0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticShutdownMixedRealityCapture(void)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = PTR_DAT_06312c90;
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar8 = DAT_01032864;
  fVar6 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar6 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar4 = unaff_s11 / fVar6;
    fVar5 = unaff_s12 / fVar6;
    fVar6 = unaff_s13 / fVar6;
  }
  FUN_05c7bac0(fVar4,0);
  fVar4 = (float)FUN_05c7bd38(0);
  if (*(char *)(unaff_x22 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x22 + 0xd9d) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar7 <= fVar8) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar4 = fVar4 / fVar7;
    fVar5 = fVar5 / fVar7;
    fVar6 = fVar6 / fVar7;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar8 = *(float *)(unaff_x19 + 0x28);
    FUN_04f465f4(fVar4 * fVar8,fVar5 * fVar8,fVar6 * fVar8);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 != 0) {
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),&stack0x00000030,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 07c5bafc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(void)

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
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x22 + 0x3ad) = 1;
  fVar4 = unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar4) {
    fVar6 = unaff_s13 * unaff_s8 + unaff_s11 * unaff_s10 + unaff_s12 * unaff_s9;
    unaff_s11 = unaff_s11 - (unaff_s10 * fVar6) / fVar4;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar6) / fVar4;
    unaff_s13 = unaff_s13 - (unaff_s8 * fVar6) / fVar4;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar4 = DAT_01c7607c;
  fVar6 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar6 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar5 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar5 = unaff_s11 / fVar6;
    fVar7 = unaff_s12 / fVar6;
    fVar6 = unaff_s13 / fVar6;
  }
  FUN_09516bac(fVar5,0);
  fVar5 = (float)FUN_09516eb8(0);
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
  if (fVar8 <= fVar4) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar5 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  else {
    fVar5 = fVar5 / fVar8;
    fVar7 = fVar7 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar4 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar5 * fVar4,fVar7 * fVar4,fVar6 * fVar4,&stack0x00000030,
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10),4);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 != 0) {
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000050;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),&stack0x00000060,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



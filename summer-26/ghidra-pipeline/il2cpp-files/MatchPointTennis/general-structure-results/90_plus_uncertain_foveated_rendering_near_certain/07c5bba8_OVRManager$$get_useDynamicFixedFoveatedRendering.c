/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 07c5bba8
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


void OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  
  thunk_FUN_044a54b4();
  fVar7 = DAT_01c7607c;
  fVar5 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar5 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s11 / fVar5;
    fVar4 = unaff_s12 / fVar5;
    fVar5 = unaff_s13 / fVar5;
  }
  FUN_09516bac(fVar3,0);
  fVar3 = (float)FUN_09516eb8(0);
  if (*(char *)(unaff_x22 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x22 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar6 <= fVar7) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar3 = fVar3 / fVar6;
    fVar4 = fVar4 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar3 * fVar7,fVar4 * fVar7,fVar5 * fVar7,&stack0x00000030,
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10),4);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000080 = in_stack_00000050;
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000060,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



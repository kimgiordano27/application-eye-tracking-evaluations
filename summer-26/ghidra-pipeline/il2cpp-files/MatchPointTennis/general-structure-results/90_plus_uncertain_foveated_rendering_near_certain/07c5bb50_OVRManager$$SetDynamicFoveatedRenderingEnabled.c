/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 07c5bb50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar6;
  float unaff_s12;
  float fVar7;
  float unaff_s13;
  float fVar8;
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
  
  fVar6 = unaff_s11 - param_3 / param_1;
  fVar7 = unaff_s12 - (unaff_s9 * param_2) / param_1;
  fVar8 = unaff_s13 - (unaff_s8 * param_2) / param_1;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = DAT_01c7607c;
  fVar4 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar4 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  else {
    fVar6 = fVar6 / fVar4;
    fVar7 = fVar7 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  FUN_09516bac(fVar6,0);
  fVar6 = (float)FUN_09516eb8(0);
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar4 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar4 <= fVar5) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  else {
    fVar6 = fVar6 / fVar4;
    fVar7 = fVar7 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar6 * fVar5,fVar7 * fVar5,fVar8 * fVar5,&stack0x00000030,
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



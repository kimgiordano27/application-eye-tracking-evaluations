/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 07c5baac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_w8;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f1e740);
    *(undefined1 *)(unaff_x21 + 0xf40) = 1;
  }
  puVar1 = PTR_DAT_09f1e740;
  lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x18);
  fVar8 = *(float *)(lVar3 + 0x1c);
  fVar7 = *(float *)(lVar3 + 0x20);
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar5) {
    fVar6 = param_3 * fVar7 + param_1 * fVar9 + param_2 * fVar8;
    param_1 = param_1 - (fVar9 * fVar6) / fVar5;
    param_2 = param_2 - (fVar8 * fVar6) / fVar5;
    param_3 = param_3 - (fVar7 * fVar6) / fVar5;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = DAT_01c7607c;
  fVar6 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar6 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    param_1 = *pfVar4;
    param_2 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    param_1 = param_1 / fVar6;
    param_2 = param_2 / fVar6;
    param_3 = param_3 / fVar6;
  }
  FUN_09516bac(param_1,param_2,param_3,fVar9,fVar8,fVar7,0);
  fVar7 = (float)FUN_09516eb8(0);
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar8 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
  if (fVar8 <= fVar5) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar4;
    param_2 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    fVar7 = fVar7 / fVar8;
    param_2 = param_2 / fVar8;
    param_3 = param_3 / fVar8;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar8 = *(float *)(unaff_x19 + 0x28);
    FUN_07c57588(fVar7 * fVar8,param_2 * fVar8,param_3 * fVar8,&stack0x00000030,
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



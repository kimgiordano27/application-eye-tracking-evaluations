/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 07c5ba60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uStack0000000000000050 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar5 = (float)FUN_0953a6a4(*(long *)(param_4 + 0x20),0);
    if (DAT_0a51bf40 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf40 = '\x01';
    }
    puVar1 = PTR_DAT_09f1e740;
    lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar9 = *(float *)(lVar3 + 0x1c);
    fVar8 = *(float *)(lVar3 + 0x20);
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    fVar6 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
    if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar6) {
      fVar7 = param_3 * fVar8 + fVar5 * fVar10 + param_2 * fVar9;
      fVar5 = fVar5 - (fVar10 * fVar7) / fVar6;
      param_2 = param_2 - (fVar9 * fVar7) / fVar6;
      param_3 = param_3 - (fVar8 * fVar7) / fVar6;
    }
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    puVar2 = PTR_DAT_09f1e748;
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar6 = DAT_01c7607c;
    fVar7 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    if (fVar7 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar5 = *pfVar4;
      param_2 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar5 = fVar5 / fVar7;
      param_2 = param_2 / fVar7;
      param_3 = param_3 / fVar7;
    }
    FUN_09516bac(fVar5,param_2,param_3,fVar10,fVar9,fVar8,0);
    fVar5 = (float)FUN_09516eb8(0);
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar8 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    if (fVar8 <= fVar6) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar5 = *pfVar4;
      param_2 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar5 = fVar5 / fVar8;
      param_2 = param_2 / fVar8;
      param_3 = param_3 / fVar8;
    }
    if (*(long *)(param_4 + 0x30) != 0) {
      fVar8 = *(float *)(param_4 + 0x28);
      FUN_07c57588(fVar5 * fVar8,param_2 * fVar8,param_3 * fVar8,&stack0x00000030,
                   *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x10),4);
      lVar3 = *(long *)(param_4 + 0x38);
      if (lVar3 != 0) {
        in_stack_00000068 = uStack0000000000000038;
        in_stack_00000060 = uStack0000000000000030;
        in_stack_00000078 = uStack0000000000000048;
        in_stack_00000070 = uStack0000000000000040;
        in_stack_00000080 = uStack0000000000000050;
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),&stack0x00000060,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



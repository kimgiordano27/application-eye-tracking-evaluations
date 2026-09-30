/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 04f42390
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar5 = (float)FUN_04f430a4();
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_04f3eaf4((long)&stack0x00000000 + 4,*(long *)(param_4 + 0x20),0);
    fVar6 = fStack0000000000000008;
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    puVar1 = PTR_DAT_06312438;
    lVar3 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar13 = *(float *)(lVar3 + 0x1c);
    fVar12 = *(float *)(lVar3 + 0x20);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    puVar2 = PTR_DAT_06315600;
    fVar5 = fVar5 - in_stack_00000000._4_4_;
    param_2 = param_2 - fVar6;
    fVar11 = param_3 - fStack000000000000000c;
    fVar6 = fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13;
    fVar7 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8);
    if (fVar7 <= fVar6) {
      fVar8 = fVar11 * fVar12 + fVar5 * fVar10 + param_2 * fVar13;
      fVar7 = fVar12 * fVar8;
      param_3 = (fVar10 * fVar8) / fVar6;
      fVar5 = fVar5 - param_3;
      param_2 = param_2 - (fVar13 * fVar8) / fVar6;
      fVar11 = fVar11 - fVar7 / fVar6;
    }
    if (*(long *)(param_4 + 0x30) != 0) {
      fVar6 = (float)FUN_05c9c5bc(*(long *)(param_4 + 0x30),0);
      if (DAT_066c1caa == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1caa = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar13 = *(float *)(lVar3 + 0x18);
      fVar12 = *(float *)(lVar3 + 0x1c);
      fVar10 = *(float *)(lVar3 + 0x20);
      if (DAT_066c298e == '\0') {
        FUN_02b3c81c(PTR_DAT_06315600);
        DAT_066c298e = '\x01';
      }
      fVar8 = fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12;
      if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar8) {
        fVar9 = param_3 * fVar10 + fVar6 * fVar13 + fVar7 * fVar12;
        fVar6 = fVar6 - (fVar13 * fVar9) / fVar8;
        fVar7 = fVar7 - (fVar12 * fVar9) / fVar8;
        param_3 = param_3 - (fVar10 * fVar9) / fVar8;
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        FUN_04f3f8c8(fVar5,param_2,fVar11,*(long *)(param_4 + 0x20),0);
        lVar3 = *(long *)(param_4 + 0x20);
        if (DAT_066c1caa == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          DAT_066c1caa = '\x01';
        }
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
        FUN_05c7bac0(fVar6,fVar7,param_3,*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c)
                     ,*(undefined4 *)(lVar4 + 0x20),0);
        if (lVar3 != 0) {
          FUN_04f3f808(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



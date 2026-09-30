/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 0745d964
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__SetColorScaleAndOffset(float *param_1,float param_2)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (*param_1 <= param_2) {
    fVar9 = unaff_s10 * unaff_s13 + unaff_s8 * unaff_s11 + unaff_s9 * unaff_s12;
    unaff_s11 = unaff_s11 - (unaff_s8 * fVar9) / param_2;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar9) / param_2;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar9) / param_2;
  }
  if (*(char *)(unaff_x23 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    *(undefined1 *)(unaff_x23 + 0x37d) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar9 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar9 <= unaff_s15) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar8 = unaff_s11 / fVar9;
    fVar10 = unaff_s12 / fVar9;
    fVar9 = unaff_s13 / fVar9;
  }
  fVar9 = (float)FUN_03e64c4c(fVar8,fVar10,fVar9,in_stack_00000010._4_4_,uStack0000000000000018,
                              uStack000000000000001c,0);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0745daa4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x21,0);
LAB_0745daa4:
  iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  fVar8 = -fVar9;
  if (iVar1 != 1) {
    fVar8 = fVar9;
  }
  if (fVar8 < -70.0) {
    fVar8 = fVar8 + 360.0;
  }
  return fVar8;
}



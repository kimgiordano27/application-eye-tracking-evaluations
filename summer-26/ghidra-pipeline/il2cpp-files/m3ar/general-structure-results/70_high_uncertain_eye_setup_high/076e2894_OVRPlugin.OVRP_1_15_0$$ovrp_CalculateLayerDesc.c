/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_CalculateLayerDesc
ENTRY_POINT: 076e2894
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_CalculateLayerDesc
               (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               float param_5)

{
  float fVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar3;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float fVar9;
  float unaff_s12;
  float unaff_s13;
  float fVar10;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  plVar3 = *(long **)(unaff_x22 + 0x568);
  fStack000000000000000c = SQRT(unaff_s10 * unaff_s10 + param_1 + param_2);
  if (fStack000000000000000c <= param_5) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar2 = *(float **)(*plVar3 + 0xb8);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fStack000000000000000c = pfVar2[2];
  }
  else {
    fVar6 = unaff_s8 / fStack000000000000000c;
    fVar7 = unaff_s9 / fStack000000000000000c;
    fStack000000000000000c = unaff_s10 / fStack000000000000000c;
  }
  fVar8 = unaff_s12 * fStack000000000000000c;
  fVar9 = unaff_s11 * fStack000000000000000c;
  if (*(char *)(unaff_x24 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x24 + 0xe18) = 1;
  }
  fVar8 = unaff_s13 * fVar7 - fVar8;
  fVar9 = fVar9 - unaff_s13 * fVar6;
  fVar10 = unaff_s12 * fVar6 - unaff_s11 * fVar7;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar1 = fStack000000000000000c;
  fVar10 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar10 <= param_5) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar2 = *(float **)(*plVar3 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
  }
  else {
    fVar8 = fVar8 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  fStack0000000000000004 = fVar9;
  FUN_0419f7f0(fVar6,fVar7,fVar1,uStack000000000000001c,uStack0000000000000018,
               in_stack_00000010._4_4_,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_0852b5fc(*(long *)(unaff_x20 + 0x40),0);
    FUN_08575c64(0);
    fVar6 = (float)FUN_08575f94(0);
    if (fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar4 = FUN_08596b90();
      uVar5 = FUN_08575d1c(fVar6,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar5;
      *(float *)(unaff_x19 + 0x10) = fVar8;
      *(float *)(unaff_x19 + 0x14) = fVar9;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



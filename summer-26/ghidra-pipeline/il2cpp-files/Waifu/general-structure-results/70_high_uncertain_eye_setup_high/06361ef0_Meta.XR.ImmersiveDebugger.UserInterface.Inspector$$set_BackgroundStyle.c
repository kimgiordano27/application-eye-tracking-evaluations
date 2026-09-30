/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$set_BackgroundStyle
ENTRY_POINT: 06361ef0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__set_BackgroundStyle(void)

{
  undefined8 *puVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  double dVar6;
  float fVar7;
  float in_s3;
  float fVar8;
  float in_s4;
  undefined8 in_d5;
  float in_s6;
  undefined8 unaff_d8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  if (in_w8 == 0) {
    FUN_033b9870();
    in_d5 = in_stack_00000010;
    in_s3 = in_stack_00000050;
    in_s4 = in_stack_00000020;
  }
  fVar8 = (float)unaff_d8;
  fVar9 = (float)((ulong)unaff_d8 >> 0x20);
  fVar7 = SQRT(in_s6 * in_s6 + fVar8 * fVar8 + fVar9 * fVar9);
  if (DAT_012edda4 < fVar7) {
    fVar7 = DAT_012edda4 / fVar7;
    in_stack_00000060 =
         CONCAT44((float)((ulong)in_d5 >> 0x20) + fVar9 * fVar7,(float)in_d5 + fVar8 * fVar7);
    fStack0000000000000068 = in_s4 + in_s6 * fVar7;
  }
  fVar7 = unaff_s15 * in_s3 + unaff_s14 * unaff_s9 + unaff_s12 * unaff_s11 + unaff_s13 * unaff_s10;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if ((uint)ABS(fVar7) < 0x7f800001) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar7)) {
      bVar3 = fVar7 < 1.0;
      bVar4 = fVar7 == 1.0;
      bVar5 = false;
    }
  }
  fVar8 = 1.0;
  if (bVar4 || bVar3 != bVar5) {
    fVar8 = fVar7;
  }
  if (DAT_086de4d6 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086de4d6 = '\x01';
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  bVar3 = true;
  if (((uint)ABS(fVar8) < 0x7f800001) && (bVar3 = false, !NAN(fVar8))) {
    bVar3 = fVar8 < -1.0;
  }
  dVar6 = -1.0;
  if (!bVar3) {
    dVar6 = (double)fVar8;
  }
  dVar6 = acos(dVar6);
  fVar8 = (float)dVar6 + (float)dVar6;
  fVar7 = DAT_012eda34 - fVar8;
  if (fVar8 <= DAT_012ed918) {
    fVar7 = fVar8;
  }
  if (DAT_012edb30 < fVar7) {
    unaff_s10 = unaff_s13;
    in_stack_00000050 = unaff_s15;
    unaff_s9 = unaff_s14;
    unaff_s11 = (float)FUN_062cd628(0);
  }
  *(float *)(*(long *)(unaff_x19 + 0x120) + unaff_x21 * 4) = fStack000000000000006c * DAT_012eda64;
  puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x130) + unaff_x21 * 0xc);
  *puVar1 = in_stack_00000060;
  *(float *)(puVar1 + 1) = fStack0000000000000068;
  pfVar2 = (float *)(*(long *)(unaff_x19 + 0x140) + unaff_x21 * 0x10);
  *pfVar2 = unaff_s11;
  pfVar2[1] = unaff_s10;
  pfVar2[2] = unaff_s9;
  pfVar2[3] = in_stack_00000050;
  puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x100) + unaff_x21 * 0xc);
  *puVar1 = in_stack_00000010;
  *(float *)(puVar1 + 1) = in_stack_00000020;
  pfVar2 = (float *)(*(long *)(unaff_x19 + 0x110) + unaff_x21 * 0x10);
  *pfVar2 = unaff_s12;
  pfVar2[1] = unaff_s13;
  pfVar2[2] = unaff_s14;
  pfVar2[3] = unaff_s15;
  return;
}



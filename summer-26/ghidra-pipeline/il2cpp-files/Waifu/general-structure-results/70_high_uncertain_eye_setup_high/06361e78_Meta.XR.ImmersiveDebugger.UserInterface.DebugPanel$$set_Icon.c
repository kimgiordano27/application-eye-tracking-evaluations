/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugPanel$$set_Icon
ENTRY_POINT: 06361e78
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


void Meta_XR_ImmersiveDebugger_UserInterface_DebugPanel__set_Icon(long param_1)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long in_x9;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  double dVar6;
  float fVar7;
  float in_s4;
  undefined8 in_d5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 uStack0000000000000010;
  float fStack0000000000000020;
  float fStack0000000000000050;
  undefined8 uStack0000000000000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  puVar5 = (undefined8 *)(param_1 + unaff_x21 * in_x10);
  pfVar1 = (float *)(in_x9 + unaff_x21 * 0x10);
  uStack0000000000000060 = *puVar5;
  fStack0000000000000068 = *(float *)(puVar5 + 1);
  fVar13 = *pfVar1;
  fVar12 = pfVar1[1];
  fVar11 = pfVar1[2];
  fStack0000000000000050 = pfVar1[3];
  uStack0000000000000010 = in_d5;
  fStack0000000000000020 = in_s4;
  if (((unaff_w23 >> 4 & 1) != 0) && (unaff_w20 == 0)) {
    if (*(char *)(unaff_x24 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    fVar9 = (float)uStack0000000000000060 - (float)uStack0000000000000010;
    fVar10 = (float)((ulong)uStack0000000000000060 >> 0x20) -
             (float)((ulong)uStack0000000000000010 >> 0x20);
    fVar8 = fStack0000000000000068 - fStack0000000000000020;
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar7 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
    if (DAT_012edda4 < fVar7) {
      fVar7 = DAT_012edda4 / fVar7;
      uStack0000000000000060 =
           CONCAT44((float)((ulong)uStack0000000000000010 >> 0x20) + fVar10 * fVar7,
                    (float)uStack0000000000000010 + fVar9 * fVar7);
      fStack0000000000000068 = fStack0000000000000020 + fVar8 * fVar7;
    }
    fVar8 = unaff_s15 * fStack0000000000000050 +
            unaff_s14 * fVar11 + unaff_s12 * fVar13 + unaff_s13 * fVar12;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uint)ABS(fVar8) < 0x7f800001) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar8)) {
        bVar2 = fVar8 < 1.0;
        bVar3 = fVar8 == 1.0;
        bVar4 = false;
      }
    }
    fVar9 = 1.0;
    if (bVar3 || bVar2 != bVar4) {
      fVar9 = fVar8;
    }
    if (DAT_086de4d6 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de4d6 = '\x01';
    }
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    bVar2 = true;
    if (((uint)ABS(fVar9) < 0x7f800001) && (bVar2 = false, !NAN(fVar9))) {
      bVar2 = fVar9 < -1.0;
    }
    dVar6 = -1.0;
    if (!bVar2) {
      dVar6 = (double)fVar9;
    }
    dVar6 = acos(dVar6);
    fVar9 = (float)dVar6 + (float)dVar6;
    fVar8 = DAT_012eda34 - fVar9;
    if (fVar9 <= DAT_012ed918) {
      fVar8 = fVar9;
    }
    if (DAT_012edb30 < fVar8) {
      fVar12 = unaff_s13;
      fVar8 = unaff_s15;
      fVar11 = unaff_s14;
      fVar13 = (float)FUN_062cd628(0);
      fStack0000000000000050 = fVar8;
    }
  }
  *(float *)(*(long *)(unaff_x19 + 0x120) + unaff_x21 * 4) = fStack000000000000006c * DAT_012eda64;
  puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x130) + unaff_x21 * 0xc);
  *puVar5 = uStack0000000000000060;
  *(float *)(puVar5 + 1) = fStack0000000000000068;
  pfVar1 = (float *)(*(long *)(unaff_x19 + 0x140) + unaff_x21 * 0x10);
  *pfVar1 = fVar13;
  pfVar1[1] = fVar12;
  pfVar1[2] = fVar11;
  pfVar1[3] = fStack0000000000000050;
  puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x100) + unaff_x21 * 0xc);
  *puVar5 = uStack0000000000000010;
  *(float *)(puVar5 + 1) = fStack0000000000000020;
  pfVar1 = (float *)(*(long *)(unaff_x19 + 0x110) + unaff_x21 * 0x10);
  *pfVar1 = unaff_s12;
  pfVar1[1] = unaff_s13;
  pfVar1[2] = unaff_s14;
  pfVar1[3] = unaff_s15;
  return;
}



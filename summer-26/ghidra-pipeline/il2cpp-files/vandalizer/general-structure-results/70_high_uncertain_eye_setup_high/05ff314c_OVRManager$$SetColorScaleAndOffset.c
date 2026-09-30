/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 05ff314c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  long lVar11;
  long unaff_x24;
  float fVar12;
  float fVar13;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float unaff_s14;
  float fVar15;
  float unaff_s15;
  float fVar16;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  puVar1 = PTR_DAT_0759b378;
  fVar13 = DAT_014ba9b8;
  if (unaff_s12 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar8;
    fVar16 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar15 = unaff_s14 / unaff_s12;
    fVar16 = unaff_s15 / unaff_s12;
    fVar14 = unaff_s11 / unaff_s12;
  }
  if (*(char *)(unaff_x24 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x24 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar2 = PTR_DAT_075b8c38;
  fVar12 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16);
  if (fVar12 <= fVar13) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar8;
    fVar16 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar15 = fVar15 / fVar12;
    fVar16 = fVar16 / fVar12;
    fVar14 = fVar14 / fVar12;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = FUN_06e5b424(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
  }
  fStack0000000000000014 = fVar15;
  in_stack_00000018 = fVar16;
  fStack000000000000001c = fVar14;
  uVar4 = FUN_06ee6d08(unaff_s12 + in_stack_00000068._4_4_,&stack0x00000008,uVar10,uVar3,0);
  fVar13 = 0.0;
  if (0 < (int)uVar4) {
    uVar5 = FUN_05c87ee0(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar5 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) {
LAB_05ff3384:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_05ff3388:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar9 = lVar9 + 0x20;
LAB_05ff3340:
      fVar13 = (float)FUN_06eec198(lVar9,0);
      fVar13 = (unaff_s12 + in_stack_00000068._4_4_) - fVar13;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar10 = 1;
      goto LAB_05ff3358;
    }
    uVar5 = 0;
    lVar11 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) goto LAB_05ff3384;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_05ff3388;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar9 = FUN_06eec0bc(lVar9 + lVar11,0);
      if (lVar9 == 0) goto LAB_05ff3384;
      uVar6 = FUN_06e55774(lVar9,0);
      uVar7 = FUN_05c86f74(uVar10,uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar9 = *(long *)(unaff_x20 + 0x58);
        if (lVar9 == 0) goto LAB_05ff3384;
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar5) goto LAB_05ff3388;
        lVar9 = lVar9 + lVar11;
        goto LAB_05ff3340;
      }
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x2c;
    } while (uVar4 != uVar5);
  }
  uVar10 = 0;
LAB_05ff3358:
  *unaff_x19 = fVar13;
  return uVar10;
}



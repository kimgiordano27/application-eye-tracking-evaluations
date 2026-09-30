/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 0600e6dc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0600ea34) */

float OVRPlugin__DestroyInsightTriangleMesh(void)

{
  undefined *puVar1;
  undefined1 in_w8;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  *(undefined1 *)(unaff_x22 + 0xa82) = in_w8;
  pfVar2 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar3 = (float)FUN_0600dce0();
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  puVar1 = PTR_DAT_0759b370;
  fStack000000000000002c = unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar3 < fVar6) {
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (fVar6 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
    }
    else {
      fVar7 = fVar7 / fVar6;
      fVar8 = fVar8 / fVar6;
      fVar9 = fVar9 / fVar6;
    }
    fVar7 = fVar3 * fVar7;
    fVar8 = fVar3 * fVar8;
    fVar9 = fVar3 * fVar9;
  }
  if (unaff_s10 * fVar9 + fStack000000000000002c * fVar7 + unaff_s9 * fVar8 < 0.0) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + fVar7);
  fStack000000000000001c = fStack000000000000001c - (in_stack_00000028 + fVar8);
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + fVar9);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar3 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar3) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar3) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar3) / unaff_s8;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar3 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar3 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  uVar4 = FUN_0600d840();
  fVar3 = (float)FUN_05f58000(uVar4,0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  fVar8 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar5 = (ulong)(uint)fStack0000000000000018;
  if ((fVar8 < fVar3) && (uVar5 = uVar4, ABS(fVar3 - fVar8) < ABS(360.0 - fVar3))) {
    uVar5 = FUN_0600d8ec();
  }
  fVar3 = (float)FUN_0600db00();
  return in_stack_00000010._4_4_ + fVar7 + (float)uVar5 * fVar3;
}



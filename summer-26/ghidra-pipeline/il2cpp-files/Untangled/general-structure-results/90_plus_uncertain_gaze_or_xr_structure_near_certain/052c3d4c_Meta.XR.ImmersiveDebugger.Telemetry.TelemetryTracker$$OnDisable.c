/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 052c3d4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


float Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  int in_w8;
  float *pfVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000068;
  
  if (in_w8 == 0) {
    FUN_02f07e70(PTR_DAT_06d02c10);
    *(undefined1 *)(unaff_x20 + 0xbf5) = 1;
  }
  pfVar1 = *(float **)(*unaff_x19 + 0xb8);
  fVar11 = *pfVar1;
  fVar13 = pfVar1[1];
  fStack0000000000000014 = pfVar1[2];
  if (DAT_071babf1 == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071babf1 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  fStack000000000000000c = *(float *)(lVar2 + 0x3c);
  uVar8 = *(undefined4 *)(lVar2 + 0x40);
  uStack0000000000000004 = *(undefined4 *)(lVar2 + 0x44);
  fVar12 = unaff_s10;
  fVar9 = in_stack_00000068._4_4_;
  fVar3 = (float)FUN_066bde7c(0);
  fVar6 = fStack0000000000000014;
  fVar12 = ABS(fStack0000000000000014 * fVar12 + fVar11 * fVar3 + fVar13 * fVar9);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  fVar9 = unaff_s10;
  uStack000000000000001c = unaff_s11;
  fVar3 = in_stack_00000068._4_4_;
  fVar4 = (float)FUN_066bde7c(0);
  fVar3 = ABS(fVar6 * fVar9 + fVar11 * fVar4 + fVar13 * fVar3);
  fVar9 = fStack000000000000000c;
  uVar10 = uStack0000000000000004;
  if (fVar12 < fVar3) {
    if (DAT_071bab7b == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071bab7b = '\x01';
    }
    lVar2 = *(long *)(*unaff_x19 + 0xb8);
    fVar9 = *(float *)(lVar2 + 0x18);
    uVar8 = *(undefined4 *)(lVar2 + 0x1c);
    uVar10 = *(undefined4 *)(lVar2 + 0x20);
  }
  if (DAT_071bab7a == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7a = '\x01';
  }
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  fVar4 = in_stack_00000068._4_4_;
  fVar7 = unaff_s10;
  fVar5 = (float)FUN_066bde7c(uStack000000000000001c,in_stack_00000068._4_4_,unaff_s10,unaff_s9,
                              *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                              *(undefined4 *)(lVar2 + 0x50),0);
  fVar6 = ABS(fVar6 * fVar7 + fVar11 * fVar5 + fVar13 * fVar4);
  fStack000000000000000c = fVar11;
  if ((fVar12 < fVar6) && (fVar3 < fVar6)) {
    if (DAT_071bab7a == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071bab7a = '\x01';
    }
    lVar2 = *(long *)(*unaff_x19 + 0xb8);
    fVar9 = *(float *)(lVar2 + 0x48);
    uVar8 = *(undefined4 *)(lVar2 + 0x4c);
    uVar10 = *(undefined4 *)(lVar2 + 0x50);
  }
  fVar6 = (float)FUN_066bde7c(uStack000000000000001c,in_stack_00000068._4_4_,unaff_s10,unaff_s9,
                              fVar9,uVar8,uVar10,0);
  fVar11 = -fVar9;
  if (0.0 <= fStack0000000000000014 * unaff_s10 +
             fStack000000000000000c * fVar6 + fVar13 * in_stack_00000068._4_4_) {
    fVar11 = fVar9;
  }
  return fVar11;
}



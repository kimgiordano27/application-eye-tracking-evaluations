/*
FUNCTION_NAME: CustomWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 038e5624
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void CustomWebSocketSharp_Net_ChunkedRequestStream__Close
               (float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  fVar11 = *(float *)(unaff_x19 + 0x1bc);
  fVar6 = param_3;
  fVar2 = (float)FUN_075b6260(0);
                    /* catch() { ... } // from try @ 038e55dc with catch @ 038e563c */
  if (DAT_08252d60 == '\0') {
    FUN_0373b518(PTR_DAT_07d863e8);
    DAT_08252d60 = '\x01';
  }
  puVar1 = PTR_DAT_07d863e8;
  fVar9 = unaff_s9 - param_1;
  fVar8 = unaff_s10 - param_2;
  fVar7 = fVar11 - param_3;
  uVar5 = (ulong)(uint)(fVar7 * fVar7);
  fVar12 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fStack000000000000000c = fVar11;
  fStack0000000000000010 = unaff_s10;
  fStack0000000000000014 = unaff_s9;
  if ((fVar12 != 0.0) && ((fVar2 < 0.0 || (fVar2 * fVar2 < fVar12)))) {
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    fVar12 = SQRT(fVar12);
    fVar6 = fVar2 * (fVar8 / fVar12);
    fStack0000000000000014 = param_1 + fVar2 * (fVar9 / fVar12);
    fStack0000000000000010 = param_2 + fVar6;
    uVar5 = (ulong)(uint)fStack0000000000000010;
    fStack000000000000000c = param_3 + fVar2 * (fVar7 / fVar12);
    param_4 = fStack0000000000000014;
  }
  uVar3 = FUN_075b83f8();
  fVar11 = *(float *)(unaff_x19 + 0x1c0);
  uVar4 = (ulong)(uint)fVar11;
  fVar7 = *(float *)(unaff_x19 + 0x1c4);
  fStack0000000000000018 = *(float *)(unaff_x19 + 0x1c8);
  fVar12 = *(float *)(unaff_x19 + 0x1cc);
  FUN_075b6260(0);
  fVar2 = DAT_015867b0;
  fVar11 = (float)NEON_fminnm(ABS(param_4 * fVar12 +
                                  fVar6 * fStack0000000000000018 +
                                  (float)uVar3 * fVar11 + (float)uVar5 * fVar7),0x3f800000);
  uVar10 = (ulong)(uint)fVar7;
  fStack000000000000001c = fVar12;
  if ((fVar11 <= DAT_015867b0) && (fVar11 = acosf(fVar11), (fVar11 + fVar11) * DAT_01586abc != 0.0))
  {
    fStack0000000000000018 = fVar6;
    uVar4 = FUN_075999bc(uVar3,0);
    fStack000000000000001c = param_4;
    uVar10 = uVar5;
  }
  fVar11 = fStack0000000000000014;
  fVar6 = fStack000000000000000c;
  FUN_075baed8(fStack0000000000000014,fStack0000000000000010,fStack000000000000000c,uVar4,uVar10,
               fStack0000000000000018,fStack000000000000001c);
  fVar12 = *(float *)(unaff_x19 + 0x1b4);
  fVar7 = *(float *)(unaff_x19 + 0x1b8);
  fVar8 = *(float *)(unaff_x19 + 0x1bc);
  if (DAT_0825295f == '\0') {
    FUN_0373b518(PTR_DAT_07d863e8);
    DAT_0825295f = '\x01';
  }
  fVar11 = fVar11 - fVar12;
  fStack0000000000000010 = fStack0000000000000010 - fVar7;
  fVar6 = fVar6 - fVar8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if ((SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fStack0000000000000010 * fStack0000000000000010) <
       DAT_015866a0) &&
     ((fVar6 = (float)NEON_fminnm(ABS(fStack000000000000001c * *(float *)(unaff_x19 + 0x1cc) +
                                      fStack0000000000000018 * *(float *)(unaff_x19 + 0x1c8) +
                                      (float)uVar4 * *(float *)(unaff_x19 + 0x1c0) +
                                      (float)uVar10 * *(float *)(unaff_x19 + 0x1c4)),0x3f800000),
      fVar2 < fVar6 || (fVar6 = acosf(fVar6), (fVar6 + fVar6) * DAT_01586abc < 2.0)))) {
    *(undefined1 *)(unaff_x19 + 0x1d0) = 0;
  }
  return;
}



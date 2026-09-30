/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 060a1540
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (DAT_07ed76b6 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    DAT_07ed76b6 = '\x01';
  }
  puVar1 = PTR_DAT_079f4dc0;
  lVar3 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x18);
  fVar11 = *(float *)(lVar3 + 0x1c);
  fVar10 = *(float *)(lVar3 + 0x20);
  if (DAT_07eddc9c == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07eddc9c = '\x01';
  }
  puVar2 = PTR_DAT_079f4df8;
  fStack0000000000000004 = unaff_s9 - fStack0000000000000004;
  fStack0000000000000008 = unaff_s10 - fStack0000000000000008;
  fStack000000000000000c = fStack0000000000000000 - fStack000000000000000c;
  fVar4 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
  fVar5 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8);
  if (fVar5 <= fVar4) {
    fVar6 = fStack000000000000000c * fVar10 +
            fStack0000000000000004 * fVar9 + fStack0000000000000008 * fVar11;
    fVar5 = fVar10 * fVar6;
    fStack0000000000000000 = (fVar9 * fVar6) / fVar4;
    fStack0000000000000004 = fStack0000000000000004 - fStack0000000000000000;
    fStack0000000000000008 = fStack0000000000000008 - (fVar11 * fVar6) / fVar4;
    fStack000000000000000c = fStack000000000000000c - fVar5 / fVar4;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar9 = (float)FUN_071d0998(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_07ed76b6 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b6 = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar4 = *(float *)(lVar3 + 0x18);
    fVar11 = *(float *)(lVar3 + 0x1c);
    fVar10 = *(float *)(lVar3 + 0x20);
    if (DAT_07eddc9c == '\0') {
      FUN_03642964(PTR_DAT_079f4df8);
      DAT_07eddc9c = '\x01';
    }
    fVar6 = fVar10 * fVar10 + fVar4 * fVar4 + fVar11 * fVar11;
    if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar6) {
      fVar7 = fStack0000000000000000 * fVar10 + fVar9 * fVar4 + fVar5 * fVar11;
      fVar9 = fVar9 - (fVar4 * fVar7) / fVar6;
      fVar5 = fVar5 - (fVar11 * fVar7) / fVar6;
      fStack0000000000000000 = fStack0000000000000000 - (fVar10 * fVar7) / fVar6;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (DAT_07ed76b6 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b6 = '\x01';
    }
    uVar8 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    uStack0000000000000020 = FUN_071af3c0(fVar9,0);
    fStack0000000000000024 = fVar5;
    fStack0000000000000028 = fStack0000000000000000;
    uStack000000000000002c = uVar8;
    if (lVar3 != 0) {
      FUN_0609ed18(lVar3,&stack0x00000020);
      FUN_060a36b0(fStack0000000000000004,fStack0000000000000008,fStack000000000000000c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



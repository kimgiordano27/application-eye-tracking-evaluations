/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.ActiveFalcoTelemetryClient$$SendEssentialEvent
ENTRY_POINT: 060a25bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient__SendEssentialEvent(void)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_03642964(PTR_DAT_079f4dc0);
  *(undefined1 *)(unaff_x26 + 0x6b6) = 1;
  lVar2 = *(long *)(*unaff_x23 + 0xb8);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar7 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x20);
  if (DAT_07eddc9c == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07eddc9c = '\x01';
  }
  fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
  if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar4) {
    fVar5 = unaff_s10 * fVar6 + unaff_s8 * fVar8 + unaff_s9 * fVar7;
    unaff_s8 = unaff_s8 - (fVar8 * fVar5) / fVar4;
    unaff_s9 = unaff_s9 - (fVar7 * fVar5) / fVar4;
    unaff_s10 = unaff_s10 - (fVar6 * fVar5) / fVar4;
  }
  if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x24 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar6 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar6 <= unaff_s15) {
    if (*(char *)(unaff_x25 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x25 + 0x6b5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x23 + 0xb8);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar7 = unaff_s8 / fVar6;
    fVar8 = unaff_s9 / fVar6;
    fVar6 = unaff_s10 / fVar6;
  }
  if (DAT_07ed76bb == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76bb = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_060a2adc(unaff_s14 * fVar7,unaff_s14 * fVar8,unaff_s14 * fVar6);
  FUN_060a2b44();
  uVar1 = FUN_060a2c18();
  if ((uVar1 & 1) != 0) {
    FUN_060a2148();
  }
  lVar2 = *(long *)(unaff_x20 + 0xa8);
  if (lVar2 != 0) {
    in_stack_00000088 = unaff_x19[1];
    in_stack_00000080 = *unaff_x19;
    in_stack_00000098 = unaff_x19[3];
    in_stack_00000090 = unaff_x19[2];
    in_stack_000000a8 = unaff_x19[5];
    in_stack_000000a0 = unaff_x19[4];
    uStack0000000000000074 = *(undefined8 *)((long)unaff_x21 + 0x14);
    in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
    in_stack_00000060 = *unaff_x21;
    in_stack_00000068 = (undefined4)unaff_x21[1];
    uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),&stack0x00000080,&stack0x00000060,
               *(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



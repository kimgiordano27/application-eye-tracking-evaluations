/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.ActiveFalcoTelemetryClient$$SendEvent
ENTRY_POINT: 060a25e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


void Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient__SendEvent(void)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  int in_w9;
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
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
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
  
  if (in_w9 == 0) {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x26 + 0xc9c) = 1;
  }
  fVar4 = unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12;
  if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar4) {
    fVar5 = unaff_s10 * unaff_s11 + unaff_s8 * unaff_s13 + unaff_s9 * unaff_s12;
    unaff_s8 = unaff_s8 - (unaff_s13 * fVar5) / fVar4;
    unaff_s9 = unaff_s9 - (unaff_s12 * fVar5) / fVar4;
    unaff_s10 = unaff_s10 - (unaff_s11 * fVar5) / fVar4;
  }
  if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x24 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar4 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar4 <= unaff_s15) {
    if (*(char *)(unaff_x25 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x25 + 0x6b5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x23 + 0xb8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar5 = unaff_s8 / fVar4;
    fVar6 = unaff_s9 / fVar4;
    fVar4 = unaff_s10 / fVar4;
  }
  if (DAT_07ed76bb == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76bb = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_060a2adc(unaff_s14 * fVar5,unaff_s14 * fVar6,unaff_s14 * fVar4);
  FUN_060a2b44();
  uVar1 = FUN_060a2c18();
  if ((uVar1 & 1) != 0) {
    FUN_060a2148();
  }
  lVar3 = *(long *)(unaff_x20 + 0xa8);
  if (lVar3 != 0) {
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
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),&stack0x00000080,&stack0x00000060,
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



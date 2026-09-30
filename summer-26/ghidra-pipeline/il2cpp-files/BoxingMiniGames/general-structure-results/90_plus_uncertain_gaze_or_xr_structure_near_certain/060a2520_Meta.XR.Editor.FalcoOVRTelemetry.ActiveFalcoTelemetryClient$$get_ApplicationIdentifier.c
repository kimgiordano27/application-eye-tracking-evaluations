/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.ActiveFalcoTelemetryClient$$get_ApplicationIdentifier
ENTRY_POINT: 060a2520
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


void Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient__get_ApplicationIdentifier
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  ulong uVar1;
  undefined1 in_w8;
  undefined4 *puVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s14;
  float unaff_s15;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
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
  
  *(undefined1 *)(unaff_x25 + 0x6b5) = in_w8;
  puVar2 = *(undefined4 **)(*unaff_x23 + 0xb8);
  uVar11 = *puVar2;
  fVar13 = (float)puVar2[1];
  fVar15 = (float)puVar2[2];
  uStack0000000000000040 = *unaff_x21;
  uStack0000000000000054 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uVar10 = *(undefined8 *)((long)unaff_x21 + 0xc);
  uStack0000000000000048 = (undefined4)unaff_x21[1];
  uStack000000000000004c = (undefined4)uVar10;
  uStack0000000000000050 = (undefined4)((ulong)uVar10 >> 0x20);
  if (*(int *)(*(long *)PTR_DAT_079fd258 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar8 = (undefined4)uVar10;
  uVar5 = UnityEngine_UIElements_BackgroundPropertyHelper__ResolveUnityBackgroundScaleMode
                    (&stack0x00000040,0);
  FUN_071af3c0(uVar11,fVar13,fVar15,uVar5,uVar8,param_3,0);
  FUN_060a27a8();
  fVar6 = (float)FUN_071af638(0);
  if (DAT_07ed76b6 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    DAT_07ed76b6 = '\x01';
  }
  lVar3 = *(long *)(*unaff_x23 + 0xb8);
  fVar16 = *(float *)(lVar3 + 0x18);
  fVar14 = *(float *)(lVar3 + 0x1c);
  fVar12 = *(float *)(lVar3 + 0x20);
  if (DAT_07eddc9c == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07eddc9c = '\x01';
  }
  fVar7 = fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14;
  if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar7) {
    fVar9 = fVar15 * fVar12 + fVar6 * fVar16 + fVar13 * fVar14;
    fVar6 = fVar6 - (fVar16 * fVar9) / fVar7;
    fVar13 = fVar13 - (fVar14 * fVar9) / fVar7;
    fVar15 = fVar15 - (fVar12 * fVar9) / fVar7;
  }
  if (*(char *)(unaff_x24 + 0x6b7) == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    *(undefined1 *)(unaff_x24 + 0x6b7) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar12 = SQRT(fVar15 * fVar15 + fVar6 * fVar6 + fVar13 * fVar13);
  if (fVar12 <= unaff_s15) {
    if (*(char *)(unaff_x25 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x25 + 0x6b5) = 1;
    }
    pfVar4 = *(float **)(*unaff_x23 + 0xb8);
    fVar6 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  else {
    fVar6 = fVar6 / fVar12;
    fVar13 = fVar13 / fVar12;
    fVar15 = fVar15 / fVar12;
  }
  if (DAT_07ed76bb == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76bb = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_060a2adc(unaff_s14 * fVar6,unaff_s14 * fVar13,unaff_s14 * fVar15);
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



/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 060a0224
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 140
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 unaff_s13;
  float fStack0000000000000004;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  
  fVar4 = in_stack_00000168;
  fVar7 = fStack0000000000000160;
  uStack0000000000000024 = param_2;
  uStack0000000000000028 = param_3;
  uStack000000000000002c = param_4;
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a23778);
    FUN_03642964(PTR_DAT_079f4da8);
    *(undefined1 *)(unaff_x21 + 0x893) = 1;
  }
  uStack00000000000000b4 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000a0 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  fVar7 = fVar4 * fVar4 + fVar7 * fVar7 + fStack0000000000000164 * fStack0000000000000164;
  if (DAT_07ed76b8 == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    DAT_07ed76b8 = '\x01';
  }
  fVar4 = ABS(fVar7);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
  fVar5 = fVar4 * DAT_016511f0;
  if (fVar4 * DAT_016511f0 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= ABS(0.0 - fVar7)) {
    if (DAT_07ed76b7 == '\0') {
      FUN_03642964(PTR_DAT_079f4df0);
      DAT_07ed76b7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar1 = PTR_DAT_079f4da8;
    if (SQRT(fVar7) <= DAT_01651354) {
      if (DAT_07ed76b5 == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        DAT_07ed76b5 = '\x01';
      }
      fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 4);
    }
    else {
      fVar7 = fStack0000000000000164 / SQRT(fVar7);
    }
    uVar2 = UnityEngine_UI_FontData__get_defaultFontData(param_5 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar7;
    uVar3 = FUN_0724b428(uStack0000000000000024,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
    }
    else {
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      uStack00000000000000dc = uStack00000000000000ac;
      in_stack_000000e0 = in_stack_000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_04940a0c(&stack0x00000030,&stack0x000000c0,*(undefined8 *)PTR_DAT_07a23778);
      in_stack_00000088 = in_stack_00000058;
      in_stack_00000080 = in_stack_00000050;
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
    }
    param_6[5] = in_stack_00000088;
    param_6[4] = in_stack_00000080;
    param_6[1] = in_stack_00000068;
    *param_6 = in_stack_00000060;
    param_6[3] = in_stack_00000078;
    param_6[2] = in_stack_00000070;
  }
  else {
    uVar3 = 0;
    param_6[3] = 0;
    param_6[2] = 0;
    param_6[5] = 0;
    param_6[4] = 0;
    param_6[1] = 0;
    *param_6 = 0;
  }
  return uVar3 & 1;
}



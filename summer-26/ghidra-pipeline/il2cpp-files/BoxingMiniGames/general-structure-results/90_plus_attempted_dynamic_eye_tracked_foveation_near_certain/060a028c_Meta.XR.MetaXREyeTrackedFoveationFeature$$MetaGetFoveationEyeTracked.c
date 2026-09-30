/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 060a028c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 154
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked
               (float param_1,float param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  undefined4 unaff_s13;
  float fStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
  param_2 = param_2 + param_1;
  uStack0000000000000060 = param_3;
  if (in_w8 == 0) {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x21 + 0x6b8) = 1;
  }
  fVar4 = ABS(param_2);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
  fVar5 = fVar4 * DAT_016511f0;
  if (fVar4 * DAT_016511f0 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= ABS(0.0 - param_2)) {
    if (DAT_07ed76b7 == '\0') {
      FUN_03642964(PTR_DAT_079f4df0);
      DAT_07ed76b7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar1 = PTR_DAT_079f4da8;
    if (SQRT(param_2) <= DAT_01651354) {
      if (DAT_07ed76b5 == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        DAT_07ed76b5 = '\x01';
      }
      fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 4);
    }
    else {
      fVar4 = unaff_s8 / SQRT(param_2);
    }
    uVar2 = UnityEngine_UI_FontData__get_defaultFontData(unaff_x20 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar4;
    uVar3 = FUN_0724b428(in_stack_00000020._4_4_,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
    }
    else {
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      in_stack_000000e0 = uStack00000000000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_04940a0c(&stack0x00000030,&stack0x000000c0,*(undefined8 *)PTR_DAT_07a23778);
      in_stack_00000088 = in_stack_00000058;
      in_stack_00000080 = in_stack_00000050;
      uStack0000000000000068 = in_stack_00000038;
      uStack0000000000000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
    }
    unaff_x19[5] = in_stack_00000088;
    unaff_x19[4] = in_stack_00000080;
    unaff_x19[1] = uStack0000000000000068;
    *unaff_x19 = uStack0000000000000060;
    unaff_x19[3] = in_stack_00000078;
    unaff_x19[2] = in_stack_00000070;
  }
  else {
    uVar3 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return uVar3 & 1;
}



/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 060a036c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 145
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(float param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s11;
  float fStack0000000000000004;
  undefined4 uStack0000000000000020;
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
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
  plVar3 = *(long **)(unaff_x21 + 0xda8);
  if (unaff_s11 <= param_1) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 4);
  }
  else {
    fVar4 = unaff_s8 / unaff_s11;
  }
  uVar1 = UnityEngine_UI_FontData__get_defaultFontData(unaff_x20 + 0x2c,0);
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978(*plVar3);
  }
  fStack0000000000000004 = fVar4;
  uVar2 = FUN_0724b428(uStack0000000000000024,uStack0000000000000028,uStack000000000000002c,
                       uStack0000000000000020,&stack0x00000090,uVar1,1,0);
  if ((uVar2 & 1) == 0) {
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
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
  }
  unaff_x19[5] = in_stack_00000088;
  unaff_x19[4] = in_stack_00000080;
  unaff_x19[1] = in_stack_00000068;
  *unaff_x19 = in_stack_00000060;
  unaff_x19[3] = in_stack_00000078;
  unaff_x19[2] = in_stack_00000070;
  return uVar2 & 1;
}



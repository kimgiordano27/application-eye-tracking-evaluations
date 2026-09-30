/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 060a040c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *unaff_x19;
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
  
  uVar1 = FUN_0724b428(param_1,param_2,1);
  if ((uVar1 & 1) == 0) {
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
  return uVar1 & 1;
}



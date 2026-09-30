/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$GetFirstLayerFromLayerMask
ENTRY_POINT: 05b2dd28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneNavigation__GetFirstLayerFromLayerMask
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  undefined8 in_x9;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000048 = param_3._8_8_;
  uStack0000000000000040 = param_3._0_8_;
  uStack0000000000000038 = param_2._8_8_;
  uStack0000000000000030 = param_2._0_8_;
  while( true ) {
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uStack0000000000000018 = unaff_x20[3];
    uStack0000000000000010 = unaff_x20[2];
    uStack0000000000000020 = unaff_x20[4];
    uStack0000000000000050 = in_x9;
    uVar1 = (**(code **)(param_1 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x23 = unaff_x23 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x23 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uStack0000000000000038 = unaff_x24[6];
    uStack0000000000000030 = unaff_x24[5];
    uStack0000000000000048 = unaff_x24[8];
    uStack0000000000000040 = unaff_x24[7];
    param_1 = *unaff_x22;
    in_x9 = unaff_x24[9];
    unaff_x24 = unaff_x24 + 5;
  }
  return 0xffffffff;
}



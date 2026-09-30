/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 05aa04fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  code *in_x9;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uVar3 = param_3._8_8_;
  uStack0000000000000000 = param_3._0_8_;
  uStack0000000000000034 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  while( true ) {
    uStack0000000000000014 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uStack000000000000002c = (undefined4)uVar2;
    uStack0000000000000030 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack0000000000000008 = (undefined4)uVar3;
    uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x20 + 0xc);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    uVar1 = (*in_x9)();
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
    uStack0000000000000034 = *(undefined8 *)(unaff_x24 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x24 + 0x28);
    uVar3 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    in_x9 = *(code **)(*unaff_x22 + 0x1b8);
    unaff_x24 = unaff_x24 + 0x1c;
  }
  return 0xffffffff;
}



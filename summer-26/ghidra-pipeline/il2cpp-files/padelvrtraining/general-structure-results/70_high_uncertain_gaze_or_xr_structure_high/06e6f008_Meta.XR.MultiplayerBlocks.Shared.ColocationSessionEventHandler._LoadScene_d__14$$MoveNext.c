/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$MoveNext
ENTRY_POINT: 06e6f008
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__MoveNext
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               )

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  uint unaff_w22;
  uint unaff_w23;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
  uStack0000000000000000 = param_4._0_8_;
  uStack0000000000000014 = param_3._8_8_;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack0000000000000040 = 0;
  uStack0000000000000010 = param_3._4_4_;
  uStack0000000000000008 = param_4._8_4_;
  uStack000000000000000c = param_4._12_4_;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  in_stack_00000058 = uStack0000000000000008;
  in_stack_00000050 = uStack0000000000000000;
  uStack0000000000000064 = uStack0000000000000014;
  uStack000000000000005c = uStack000000000000000c;
  in_stack_00000060 = uStack0000000000000010;
  FUN_05815114(&stack0x00000020,uVar2,&stack0x00000050,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x30) = uStack0000000000000040;
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000028;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000020;
  *(undefined8 *)(unaff_x19 + 0x28) = uStack0000000000000038;
  *(undefined8 *)(unaff_x19 + 0x20) = uStack0000000000000030;
  thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
  return unaff_w23 < unaff_w22;
}



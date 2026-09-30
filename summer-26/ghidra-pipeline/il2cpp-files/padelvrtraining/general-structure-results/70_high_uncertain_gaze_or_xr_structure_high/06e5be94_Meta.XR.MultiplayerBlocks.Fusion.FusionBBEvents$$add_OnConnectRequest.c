/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnConnectRequest
ENTRY_POINT: 06e5be94
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


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnConnectRequest(void)

{
  undefined8 uVar1;
  long lVar2;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  lVar2 = in_x10 + (long)(int)unaff_w24 * 0x28;
  uStack0000000000000010 = *(undefined8 *)(lVar2 + 0x38);
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  uStack0000000000000008 = *(undefined8 *)(lVar2 + 0x30);
  uStack0000000000000000 = *(undefined8 *)(lVar2 + 0x28);
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  in_stack_00000048 = uStack0000000000000008;
  in_stack_00000040 = uStack0000000000000000;
  in_stack_00000050 = uStack0000000000000010;
  FUN_058124e4(&stack0x00000020,&stack0x00000040,uVar1,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000028;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000020;
  *(undefined8 *)(unaff_x19 + 0x28) = uStack0000000000000038;
  *(undefined8 *)(unaff_x19 + 0x20) = uStack0000000000000030;
  thunk_FUN_03d1023c(unaff_x19 + 0x28,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_w24 < unaff_w23);
}



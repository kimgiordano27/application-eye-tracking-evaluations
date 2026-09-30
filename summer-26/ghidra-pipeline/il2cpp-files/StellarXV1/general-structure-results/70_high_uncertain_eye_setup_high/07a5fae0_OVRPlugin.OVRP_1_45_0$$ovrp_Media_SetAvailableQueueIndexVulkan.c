/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 07a5fae0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_4;
  uStack0000000000000030 = param_5;
  uStack0000000000000060 =
       FUN_089b6ae8(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,0,param_6,0
                   );
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0xac);
  uStack0000000000000054 = *(undefined8 *)(unaff_x20 + 0xc0);
  in_stack_00000048 = (undefined4)*(undefined8 *)(unaff_x20 + 0xb4);
  uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x20 + 0xb8);
  in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xb8) >> 0x20);
  uVar1 = FUN_079d1f6c(&stack0x00000060,&stack0x00000040,0);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
    *(undefined4 *)(lVar2 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000070;
    *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    FUN_07a5fbd8(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



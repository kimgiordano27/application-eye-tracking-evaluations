/*
FUNCTION_NAME: OVRPlugin.LayerDesc$$ToString
ENTRY_POINT: 03164cfc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LayerDesc__ToString(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  in_stack_00000088 = in_stack_000000a8;
  in_stack_00000080 = in_stack_000000a0;
  *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
  *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    uVar2 = *(undefined8 *)(unaff_x23 + 0xc);
    *(undefined8 *)(unaff_x20 + 0x34) = *(undefined8 *)(unaff_x23 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x2c) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(unaff_x20 + 0x20) = in_stack_000000a0;
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    in_stack_00000078 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
    FUN_038ede48(0x42b40000,0x42b40000,&stack0x00000060,0);
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(ulong *)(unaff_x20 + 0x50) = CONCAT44(in_stack_00000078,uStack0000000000000074);
      *(ulong *)(unaff_x20 + 0x48) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      *(ulong *)(unaff_x20 + 0x44) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x20 + 0x3c) = in_stack_00000060;
      puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
      uVar2 = thunk_FUN_01afaadc(*unaff_x24);
      FUN_038ee4ac();
      *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x40),uVar2);
      *(undefined8 *)(unaff_x19 + 0x48) = 0x1e40133333;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03927648(0);
      *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 100) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      FUN_039211e4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}



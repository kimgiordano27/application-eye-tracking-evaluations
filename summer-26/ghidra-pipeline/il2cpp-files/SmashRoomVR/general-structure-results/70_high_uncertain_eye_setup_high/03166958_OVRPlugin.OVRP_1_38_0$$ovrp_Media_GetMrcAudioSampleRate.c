/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcAudioSampleRate
ENTRY_POINT: 03166958
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcAudioSampleRate
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000c8;
  int iStack00000000000000cc;
  
  uStack0000000000000000 = param_1._0_8_;
  uStack000000000000006c = param_2._0_4_;
  uStack0000000000000070 = param_2._4_4_;
  uStack000000000000004c = uStack000000000000006c;
  uStack000000000000002c = uStack000000000000006c;
  uStack0000000000000030 = uStack0000000000000070;
  lVar2 = *(long *)(unaff_x19 + 0x170);
  uStack000000000000000c = uStack000000000000006c;
  uStack0000000000000010 = uStack0000000000000070;
  uStack0000000000000020 = uStack0000000000000000;
  uStack0000000000000040 = uStack0000000000000000;
  uStack0000000000000050 = uStack0000000000000070;
  uStack0000000000000060 = uStack0000000000000000;
  if (lVar2 != 0) {
    iStack00000000000000cc = (uint)(*(char *)(unaff_x20 + 0xe0) != '\0') << 1;
    pcVar3 = *(code **)(lVar2 + 0x18);
    uVar1 = *(undefined8 *)(lVar2 + 0x40);
    *(ulong *)(unaff_x22 + 0x2c) = CONCAT44(uStack000000000000006c,param_1._8_4_);
    *(undefined8 *)(unaff_x22 + 0x24) = uStack0000000000000000;
    *(long *)(unaff_x22 + 0x38) = param_2._8_8_;
    *(long *)(unaff_x22 + 0x30) = param_2._0_8_;
    in_stack_000000c8 = 2;
    (*pcVar3)(uVar1,&stack0x000000a8,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



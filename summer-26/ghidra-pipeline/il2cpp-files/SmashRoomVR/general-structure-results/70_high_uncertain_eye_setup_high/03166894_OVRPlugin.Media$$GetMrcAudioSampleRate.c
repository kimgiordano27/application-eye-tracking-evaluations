/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 03166894
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcAudioSampleRate(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined8 uStack000000000000009c;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  
  uVar2 = FUN_03922f24(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_031669f4;
    if (*(char *)(unaff_x20 + 0xb0) != '\0') {
      uVar1 = FUN_029bc358();
      FUN_03165f78(&stack0x000000a8);
      if (*(char *)(unaff_x20 + 0xe1) == '\0') {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
      uStack00000000000000c4 = in_stack_000000c0;
      uStack00000000000000ac = in_stack_000000a8;
      uStack00000000000000bc = in_stack_000000b8;
      lVar4 = *(long *)(unaff_x19 + 0x170);
      if (lVar4 != 0) {
        in_stack_000000c8 = CONCAT44((uint)(*(char *)(unaff_x20 + 0xe0) != '\0') << 1,uVar3);
        in_stack_000000a8 = uVar1;
        uStack00000000000000b4 = in_stack_000000b0;
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      goto LAB_031669f4;
    }
  }
  uVar1 = FUN_029bc358();
  FUN_03165f78(&stack0x00000088);
  lVar4 = *(long *)(unaff_x19 + 0x170);
  if (lVar4 != 0) {
    uStack00000000000000b4 = in_stack_00000090;
    uStack00000000000000ac = (undefined4)in_stack_00000088;
    in_stack_000000b0 = (undefined4)((ulong)in_stack_00000088 >> 0x20);
    in_stack_000000c0 = (undefined4)uStack000000000000009c;
    uStack00000000000000c4 = SUB84(uStack000000000000009c,4);
    uStack00000000000000bc = uStack0000000000000098;
    in_stack_000000c8 = 0;
    in_stack_000000a8 = uVar1;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_031669f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



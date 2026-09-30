/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 03696658
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcAudioSampleRate(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01efb3a4(Method_OVRSpaceQuery_Options_ToQueryInfo__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    *(undefined1 *)(unaff_x23 + 0xef4) = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  uStack000000000000002c = 0;
  uStack0000000000000034 = 0;
  FUN_02f47c64();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_0369682c;
    if (*(char *)(unaff_x20 + 0xb0) != '\0') {
      uVar1 = FUN_02f47cac();
      FUN_03695db0(&stack0x000000a8);
      if (*(char *)(unaff_x20 + 0xe1) == '\0') {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
      uStack00000000000000c4 = in_stack_000000c0;
      uStack0000000000000034 = uStack00000000000000bc;
      uStack00000000000000ac = in_stack_000000a8;
      uStack00000000000000bc = uStack00000000000000b8;
      uStack000000000000002c = uStack00000000000000b4;
      lVar4 = *(long *)(unaff_x19 + 0x170);
      if (lVar4 != 0) {
        in_stack_000000c8 = CONCAT44((uint)(*(char *)(unaff_x20 + 0xe0) != '\0') << 1,uVar3);
        in_stack_000000a8 = uVar1;
        uStack00000000000000b4 = uStack00000000000000b0;
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      goto LAB_0369682c;
    }
  }
  uVar1 = FUN_02f47cac();
  FUN_03695db0(&stack0x00000088);
  lVar4 = *(long *)(unaff_x19 + 0x170);
  if (lVar4 != 0) {
    uStack00000000000000b4 = in_stack_00000090;
    uStack00000000000000ac = (undefined4)in_stack_00000088;
    uStack00000000000000b0 = (undefined4)((ulong)in_stack_00000088 >> 0x20);
    in_stack_000000c0 = uStack000000000000009c;
    uStack00000000000000c4 = in_stack_000000a0;
    uStack00000000000000b8 = uStack0000000000000094;
    uStack00000000000000bc = in_stack_00000098;
    in_stack_000000c8 = 0;
    in_stack_000000a8 = uVar1;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_0369682c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_IsInsightPassthroughSupported
ENTRY_POINT: 03173218
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0__ovrp_IsInsightPassthroughSupported(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xb10));
  *(undefined1 *)(unaff_x20 + 0x10d) = 1;
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    lVar1 = FUN_024eb298();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(char *)(lVar1 + 0x10) != '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
      uVar2 = OVRPlugin_OVRP_1_68_0__ovrp_StopKeyboardTracking();
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b10);
      FUN_031732b8(uVar3,uVar2);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
      thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x70),uVar3);
      return;
    }
  }
  return;
}



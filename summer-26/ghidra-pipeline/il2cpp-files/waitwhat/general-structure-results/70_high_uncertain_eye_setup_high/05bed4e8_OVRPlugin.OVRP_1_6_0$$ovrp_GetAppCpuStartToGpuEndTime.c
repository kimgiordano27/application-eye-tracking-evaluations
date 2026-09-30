/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 05bed4e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(ulong param_1)

{
  bool bVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116840);
    *(undefined1 *)(unaff_x21 + 0xd86) = 1;
  }
  lVar2 = FUN_0506e670();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      bVar1 = false;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x48);
      if (lVar2 == 0) goto LAB_05bed554;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      bVar1 = *(char *)(lVar2 + (int)unaff_w19 + 0x20) != '\0';
    }
    return bVar1;
  }
LAB_05bed554:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



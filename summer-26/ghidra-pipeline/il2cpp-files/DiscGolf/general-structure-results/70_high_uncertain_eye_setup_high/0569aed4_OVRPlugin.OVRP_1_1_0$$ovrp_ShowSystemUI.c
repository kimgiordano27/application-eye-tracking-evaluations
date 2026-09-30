/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_ShowSystemUI
ENTRY_POINT: 0569aed4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_ShowSystemUI(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_02dcfd74();
  }
  puVar1 = Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_0421ccdc(unaff_x19 + 0x18,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  lVar2 = *(long *)puVar1;
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  puVar1 = Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0421dda4(unaff_x19 + 0x28,*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
  }
  lVar2 = *(long *)puVar1;
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_02dcfd74(lVar2);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0421ac20(unaff_x19 + 0x48,*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  return;
}



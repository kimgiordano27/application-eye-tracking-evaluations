/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 02c4b890
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  
  thunk_FUN_0181f594();
  if ((unaff_w20 == 0) && (uVar2 = thunk_FUN_01845b28(0), (uVar2 & 1) == 0)) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
    thunk_FUN_0181f594();
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03804068);
    FUN_02b438c4(uVar3,*(undefined8 *)PTR_DAT_0380c920,uVar6,0);
    lVar4 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c918);
    FUN_02c4ba18(lVar4,uVar3);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_037f8790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c4ba8c(uVar6,lVar4);
    puVar1 = PTR_DAT_0380c6a0;
    lVar5 = *(long *)PTR_DAT_0380c6a0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar1;
    }
    if (**(char **)(lVar5 + 0xb8) != '\0') {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(char *)(lVar4 + 0x18) == '\0') {
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380c928);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar3,uVar6);
      }
    }
  }
  FUN_02c1ead0();
  return;
}



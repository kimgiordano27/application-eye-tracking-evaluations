/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 04f89a18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(System_Xml_XmlElement_var);
    *(undefined1 *)(unaff_x20 + 0xd4c) = 1;
  }
  puVar1 = System_Xml_XmlElement_var;
  iVar3 = 0;
  uStack000000000000000c = 0;
  while( true ) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) break;
    if (*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= iVar3) {
      return;
    }
    uStack000000000000000c = 0;
    FUN_04f897ec();
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



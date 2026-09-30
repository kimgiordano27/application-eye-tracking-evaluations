/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 05bd55fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x21;
  ulong uVar2;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  FUN_05be94c0(param_1,param_3,0);
  uVar2 = 0;
  while (lVar1 = FUN_05bc7eec(), lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uStack0000000000000008 = (uint)uVar2;
    iStack000000000000000c = *(int *)(lVar1 + uVar2 * 4 + 0x20);
    if ((1 << (ulong)(uStack0000000000000008 & 0x1f) & unaff_w19) != 0 &&
        iStack000000000000000c == 1) {
      iStack000000000000000c = 2;
    }
    if (*(long *)(unaff_x21 + 0x48) == 0) break;
    FUN_05be99a4(*(long *)(unaff_x21 + 0x48),&stack0x00000008,(long)&stack0x00000008 + 4,0,0);
    uVar2 = uVar2 + 1;
    if (uVar2 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



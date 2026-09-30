/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 056a6f80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  lVar2 = FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                       *unaff_x21);
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    lVar4 = 0;
    iVar5 = 1;
    do {
      *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar3 + lVar4 * 4);
      lVar4 = (long)iVar5;
      iVar5 = iVar5 + 1;
    } while (lVar4 < (long)(ulong)uVar1);
  }
  return;
}



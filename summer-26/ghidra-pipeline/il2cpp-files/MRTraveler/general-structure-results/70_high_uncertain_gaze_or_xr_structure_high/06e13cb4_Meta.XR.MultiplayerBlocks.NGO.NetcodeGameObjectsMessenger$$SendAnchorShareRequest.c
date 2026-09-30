/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$SendAnchorShareRequest
ENTRY_POINT: 06e13cb4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__SendAnchorShareRequest(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  iVar1 = (**(code **)(*unaff_x19 + 0x1f8))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = (**(code **)(*unaff_x20 + 0x188))();
      uVar4 = (**(code **)(*unaff_x19 + 0x188))();
      uVar5 = FUN_06e13970(uVar3,uVar4);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*unaff_x19 + 0x1f8))();
    } while (iVar1 < iVar2);
  }
  return 1;
}



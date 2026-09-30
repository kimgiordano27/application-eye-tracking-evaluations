/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 04a5c508
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar6 = FUN_04a5dba4();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (uVar6 >> 0x20 == 0) {
    iVar5 = (int)uVar6;
    bVar4 = SBORROW4(iVar1,iVar5);
    bVar2 = iVar1 - iVar5 < 0;
    bVar3 = iVar1 == iVar5;
  }
  return !bVar3 && bVar2 == bVar4;
}



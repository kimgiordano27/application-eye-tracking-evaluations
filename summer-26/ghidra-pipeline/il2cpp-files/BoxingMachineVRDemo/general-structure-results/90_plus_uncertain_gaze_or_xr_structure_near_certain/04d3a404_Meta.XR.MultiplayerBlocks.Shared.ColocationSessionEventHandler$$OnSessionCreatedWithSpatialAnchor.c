/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 04d3a404
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined2 *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint uStack000000000000000c;
  
  while( true ) {
    iVar1 = FUN_0601547c(param_1,param_2,param_3,0);
    if (iVar1 != 0) {
      return;
    }
    param_2 = unaff_x22 + 4;
    unaff_x24 = unaff_x24 + -1;
    param_1 = unaff_x23 + 4;
    if (unaff_x24 == 0) break;
    param_3 = 4;
    unaff_x22 = param_2;
    unaff_x23 = param_1;
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uStack000000000000000c = (uint)*unaff_x21;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x200) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_05004840(&stack0x0000000c,*unaff_x19,0);
  return;
}



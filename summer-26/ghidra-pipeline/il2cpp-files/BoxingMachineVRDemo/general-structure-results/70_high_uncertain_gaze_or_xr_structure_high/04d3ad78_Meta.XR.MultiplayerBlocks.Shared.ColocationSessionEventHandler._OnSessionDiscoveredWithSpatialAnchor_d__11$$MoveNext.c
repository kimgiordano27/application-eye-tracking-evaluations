/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$MoveNext
ENTRY_POINT: 04d3ad78
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__MoveNext
               (void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long in_stack_00000208;
  
  FUN_02d9a33c();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x248);
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b77977 == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b77977 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  memcpy(&stack0x00000008,unaff_x20,0x200);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  iVar1 = FUN_04d37f4c(&stack0x00000008,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
  iVar1 = FUN_0601547c((long)unaff_x20 + 4,unaff_x21 + 4,(long)iVar1,0);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000208) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}



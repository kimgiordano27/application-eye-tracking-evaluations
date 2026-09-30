/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$SetStateMachine
ENTRY_POINT: 04d423c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__SetStateMachine
               (void)

{
  ushort uVar1;
  long lVar2;
  short unaff_w19;
  ushort *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  lVar2 = FUN_02d9a2e0();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (*(char *)(unaff_x23 + 0x95f) == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    *(undefined1 *)(unaff_x23 + 0x95f) = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_06013f40((long)unaff_x20 + (long)unaff_w22 + 2,(long)unaff_x20 + (long)unaff_w24 + 2,
               (long)(int)((uint)*unaff_x20 - unaff_w24),0);
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *unaff_x20;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0xa8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  *unaff_x20 = uVar1 - unaff_w19;
  return;
}



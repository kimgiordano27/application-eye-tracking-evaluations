/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$SetStateMachine
ENTRY_POINT: 04e1f728
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__SetStateMachine
               (undefined1 *param_1)

{
  ulong uVar1;
  uint in_w8;
  uint unaff_w19;
  void *unaff_x21;
  long unaff_x22;
  uint uVar2;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  
  do {
    memcpy(param_1,&stack0x00000050,0x50);
    uVar1 = FUN_05ee6d80(unaff_x26 + (long)(int)in_w8 * (long)unaff_w27);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    in_w8 = unaff_w19 - 1;
    if ((int)in_w8 < unaff_w24) {
      return 0xffffffff;
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= in_w8) break;
    memcpy(&stack0x00000050,unaff_x21,0x50);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar2 = *(uint *)(unaff_x22 + 0x18);
    }
    param_1 = (undefined1 *)register0x00000008;
    unaff_w19 = in_w8;
  } while (in_w8 < uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}



/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 04e1d5b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(void)

{
  undefined1 in_CY;
  ulong uVar1;
  uint uVar2;
  uint unaff_w19;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  
  while (!(bool)in_CY) {
    uVar1 = FUN_05ff9c24(unaff_x26 + (long)(int)unaff_w19 * 0x10);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 <= unaff_w19) break;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar2 = *(uint *)(unaff_x23 + 0x18);
    }
    in_CY = uVar2 <= unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}



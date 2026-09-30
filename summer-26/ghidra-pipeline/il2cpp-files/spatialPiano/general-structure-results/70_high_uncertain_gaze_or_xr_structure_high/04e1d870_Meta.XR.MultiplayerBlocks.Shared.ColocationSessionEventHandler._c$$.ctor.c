/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c$$.ctor
ENTRY_POINT: 04e1d870
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c___ctor(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x19 + 0x130)) {
      return *(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) ==
             lVar1;
    }
  }
  return false;
}



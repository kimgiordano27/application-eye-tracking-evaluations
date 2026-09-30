/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 05d04d64
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<ColocationSessionEventHandler_SpaceSharingInfo>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x38);
                    /* try { // try from 05d04d78 to 05e04d87 has its CatchHandler @ 05d04df4 */
  if (lVar2 == 0) {
    FUN_04980b90(param_3);
    lVar2 = *(long *)(param_3 + 0x38);
  }
                    /* try { // try from 05d04d88 to 05e04e17 has its CatchHandler @ 05d04c70 */
  if ((*(ushort *)(*(long *)(lVar2 + 8) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  uVar1 = thunk_FUN_04983f60();
  FUN_07136ba8(uVar1,param_1,1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  return uVar1;
}



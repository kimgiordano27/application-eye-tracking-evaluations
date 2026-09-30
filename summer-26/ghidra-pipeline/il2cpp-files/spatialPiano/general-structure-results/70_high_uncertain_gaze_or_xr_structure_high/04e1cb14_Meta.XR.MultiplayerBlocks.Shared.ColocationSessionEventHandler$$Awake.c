/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 04e1cb14
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


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  uStack0000000000000024 = *(undefined8 *)(param_5 + 0x24);
  uStack000000000000001c = (undefined4)*(undefined8 *)(param_5 + 0x1c);
  uStack0000000000000020 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_2;
  uVar1 = FUN_06194870();
                    /* catch() { ... } // from try @ 04e1cc84 with catch @ 04e1cb38
                       catch() { ... } // from try @ 04e1ccc0 with catch @ 04e1cb38
                       catch() { ... } // from try @ 04e1ccfc with catch @ 04e1cb38
                       catch() { ... } // from try @ 04e1cd28 with catch @ 04e1cb38
                       catch() { ... } // from try @ 04e1cd9c with catch @ 04e1cb38 */
  return uVar1 & 1;
}



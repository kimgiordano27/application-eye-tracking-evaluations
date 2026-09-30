/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$add_AnchorShareRequestCompleted
ENTRY_POINT: 06e13894
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


ulong Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__add_AnchorShareRequestCompleted
                (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x5f0));
  FUN_03c8f898(PTR_DAT_08e811d0);
  *(undefined1 *)(unaff_x21 + 0xf8b) = 1;
  puVar2 = PTR_DAT_08e695f0;
  if (unaff_x19 != (long *)0x0) {
    uVar3 = thunk_FUN_03d12a58();
    uVar4 = thunk_FUN_03d12a58();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    uVar5 = FUN_0711a11c(uVar3,uVar4,0);
    if ((uVar5 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e811d0 + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)PTR_DAT_08e811d0)) {
                    /* try { // try from 06e1395c to 06f13963 has its CatchHandler @ 06e13b2c */
        uVar5 = FUN_06e13970();
        return uVar5;
      }
      return (ulong)(unaff_x20 == unaff_x19);
    }
  }
  return 0;
}



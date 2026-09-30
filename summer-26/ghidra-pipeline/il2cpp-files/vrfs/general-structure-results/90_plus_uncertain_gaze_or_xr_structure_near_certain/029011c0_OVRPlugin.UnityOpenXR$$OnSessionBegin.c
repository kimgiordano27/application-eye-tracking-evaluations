/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 029011c0
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined2 OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined *puVar3;
  
  if (in_w8 == -1) {
    thunk_FUN_0159f088(PTR_DAT_06e0ea30);
    uVar1 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar3 = PTR_DAT_06e4fe50;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (in_w8 < *(int *)(*(long *)(param_1 + 0x10) + 0x10)) {
      return *(undefined2 *)(param_1 + 0x1c);
    }
    thunk_FUN_0159f088(PTR_DAT_06e0ea30);
    uVar1 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar3 = PTR_DAT_06def620;
  }
  uVar2 = thunk_FUN_0159f088(puVar3);
  FUN_0321bdf8(uVar1,uVar2,0);
  uVar2 = thunk_FUN_0159f088(PTR_DAT_06dd5748);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02901258 to 02a0127f has its CatchHandler @ 02901460 */
  FUN_0160ee7c(uVar1,uVar2);
}



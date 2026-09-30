/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 051e0494
PROGRAM: hellodot-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(long param_1)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
    param_1 = *unaff_x22;
  }
  uVar2 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609238);
  FUN_04a66d30(uVar1,uVar2,*(undefined8 *)PTR_DAT_06609258,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = uVar1;
                    /* try { // try from 051e04e0 to 052e0553 has its CatchHandler @ 051e04e0
                       catch() { ... } // from try @ 051e04e0 with catch @ 051e04e0
                       catch() { ... } // from try @ 051e0578 with catch @ 051e04e0
                       catch() { ... } // from try @ 051e05d4 with catch @ 051e04e0
                       catch() { ... } // from try @ 051e0664 with catch @ 051e04e0
                       catch() { ... } // from try @ 051e0698 with catch @ 051e04e0
                       catch() { ... } // from try @ 051e0708 with catch @ 051e04e0 */
  uVar1 = thunk_FUN_02cea894(*unaff_x24);
  FUN_03d87120(uVar1,3);
  return uVar1;
}



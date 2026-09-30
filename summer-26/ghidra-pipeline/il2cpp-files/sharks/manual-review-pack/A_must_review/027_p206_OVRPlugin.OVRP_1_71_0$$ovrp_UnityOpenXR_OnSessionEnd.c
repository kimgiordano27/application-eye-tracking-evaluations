/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 02c48fa0
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x23;
  
  FUN_02c4071c(param_2,param_3,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = unaff_x21;
  thunk_FUN_0188fd20();
  lVar1 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802a30);
  FUN_02c12df4(lVar1,0);
  FUN_02c3f5c0(lVar1);
  if (unaff_x20 != 0) {
    plVar2 = (long *)(unaff_x20 + 0x78);
    *plVar2 = lVar1;
    thunk_FUN_0188fd20(plVar2,lVar1);
    if (*plVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}



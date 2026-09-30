/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 01a43768
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  long unaff_x21;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(unaff_x20 + 0x810);
  puVar4 = *(undefined8 **)(unaff_x21 + 0x6a8);
  FUN_01298da0(param_2,*param_1);
  **(undefined8 **)(*plVar3 + 0xb8) = param_2;
  lVar1 = thunk_FUN_00d62348(*puVar4);
  if (lVar1 != 0) {
    FUN_01298da0(lVar1,*(undefined8 *)PTR_DAT_033f1c40);
    lVar2 = *(long *)(*plVar3 + 0xb8);
    *(long *)(lVar2 + 8) = lVar1;
    *(undefined1 *)(lVar2 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



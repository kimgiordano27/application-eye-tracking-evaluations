/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$Update
ENTRY_POINT: 08a02bd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugBar__Update(void)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  
  FUN_088ef30c();
  FUN_088eeb34();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (lVar1 != 0) {
    FUN_07506b20(lVar1);
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      HdyRpc_RequestHspSetup__set_StreamId();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



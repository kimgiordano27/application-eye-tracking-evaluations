/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 01464284
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<StartObjectDroppedTutorial>d__87_System_Collections_IEnumerator_Reset__
                      );
    *(undefined1 *)(unaff_x20 + 0xab1) = 1;
  }
  lVar1 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x20) = unaff_x19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



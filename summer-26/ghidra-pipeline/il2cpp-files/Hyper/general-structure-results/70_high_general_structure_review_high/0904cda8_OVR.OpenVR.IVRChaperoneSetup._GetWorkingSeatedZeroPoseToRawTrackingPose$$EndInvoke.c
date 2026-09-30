/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0904cda8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  
  if (unaff_x19 != 0) {
    FUN_0a17d830();
    lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    if (lVar1 != 0) {
      System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                (lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



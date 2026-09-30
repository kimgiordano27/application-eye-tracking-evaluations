/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 036dd6ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Quatf>(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  FUN_031c0a30();
  lVar1 = *unaff_x19;
  if (lVar1 == 0) {
    lVar1 = (**(code **)**(undefined8 **)(unaff_x20 + 0x38))();
    *unaff_x19 = lVar1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = unaff_x19[2];
    lVar2 = unaff_x19[1];
    *(int *)(lVar1 + 0x20) = (int)unaff_x19[3];
    *(long *)(lVar1 + 0x18) = lVar3;
    *(long *)(lVar1 + 0x10) = lVar2;
    lVar1 = *unaff_x19;
  }
  return lVar1;
}



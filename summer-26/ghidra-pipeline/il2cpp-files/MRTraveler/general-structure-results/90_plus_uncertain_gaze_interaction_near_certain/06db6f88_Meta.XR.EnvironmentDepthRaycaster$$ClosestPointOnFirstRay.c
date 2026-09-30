/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 06db6f88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0x3d0);
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e903d0);
    FUN_03c8f898(PTR_DAT_08e903d8);
    FUN_03c8f898(PTR_DAT_08e903e0);
    *(undefined1 *)(unaff_x20 + 0xbb3) = 1;
  }
  plVar2 = *(long **)(*plVar5 + 0xb8);
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    uVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e903e0);
    FUN_06db703c();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e903d8);
    FUN_06db3d98(lVar4,uVar1,uVar3);
    plVar2 = *(long **)(*plVar5 + 0xb8);
  }
  *plVar2 = lVar4;
  thunk_FUN_03d233cc(*(undefined8 *)(*plVar5 + 0xb8),lVar4);
  return lVar4;
}



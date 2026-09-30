/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 08a28454
PROGRAM: Hyper-libil2cpp.so
SCORE: 176
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uVar5;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  uVar2 = FUN_05b61074();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_08dc2d58(*unaff_x19);
  puVar1 = PTR_DAT_0ac4c7b0;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_0ac4c7b0;
    lVar4 = thunk_FUN_04983e64(lVar3,uVar5);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *unaff_x19 = lVar4;
      lVar4 = thunk_FUN_04983e64(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_08a284e8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(lVar3,uVar5);
  }
  *unaff_x19 = 0;
LAB_08a284e8:
  thunk_FUN_049ee3d8();
  return;
}



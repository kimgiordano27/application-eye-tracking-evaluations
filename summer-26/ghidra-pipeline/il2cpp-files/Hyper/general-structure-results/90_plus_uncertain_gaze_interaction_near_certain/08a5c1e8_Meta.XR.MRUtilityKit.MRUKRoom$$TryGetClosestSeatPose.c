/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose
ENTRY_POINT: 08a5c1e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSeatPose(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar2 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__FindIndex();
  if (lVar2 != 0) {
    lVar4 = *unaff_x20;
    plVar3 = (long *)(lVar2 + 0x18);
    *plVar3 = lVar4;
LAB_08a5c2a0:
    thunk_FUN_049ee3d8(plVar3,lVar4);
    return;
  }
  lVar2 = *unaff_x19;
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53a70);
  FUN_08dbf2f0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0ac4cdb8;
    thunk_FUN_049ee3d8();
    *(long *)(lVar4 + 0x18) = *unaff_x20;
    thunk_FUN_049ee3d8();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + 0x10);
      lVar6 = *(long *)PTR_DAT_0ac53a60;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
          FUN_06b7fe74(lVar2,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
          return;
        }
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = lVar4;
        goto LAB_08a5c2a0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



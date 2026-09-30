/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 04c511fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition
               (ulong param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  long *plVar4;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6f78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e66f8);
    *(undefined1 *)(unaff_x22 + 0x8d0) = 1;
  }
  puVar2 = PTR_DAT_065e6f78;
  plVar4 = *(long **)(param_2 + 0x110);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065e66f8 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065e66f8)) {
      plVar4[4] = 0;
      uVar3 = FUN_043d1670(param_2,*(undefined8 *)puVar2);
      FUN_04c3ab60(plVar4,uVar3,param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(plVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}



/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose
ENTRY_POINT: 072cb66c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 172
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSeatPose(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_072cb7b4;
  FUN_0678cfe4();
  uVar2 = FUN_072caa60();
  if (((uVar2 & 1) != 0) && (lVar3 = FUN_072cb848(), puVar1 = PTR_DAT_092c2ed0, lVar3 != 0)) {
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_072cb7b4;
    FUN_03b0fbe0(1,*(undefined8 *)PTR_DAT_092c2ed0);
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_072cb7b4;
    FUN_03b10d1c(3,*(undefined8 *)puVar1,*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_092c3870
                );
    if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_072cb7b4;
    FUN_03b10d1c(3,*(undefined8 *)puVar1,*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_092c3468
                );
    if ((*(long *)(unaff_x20 + 0x40) == 0) || (*(long *)(unaff_x20 + 0x60) == 0)) goto LAB_072cb7b4;
    FUN_03f9c604(*(undefined4 *)(lVar3 + 0x28),2,*(undefined8 *)PTR_DAT_092c3888,
                 *(long *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x48),
                 *(undefined8 *)(lVar3 + 0x20),*(undefined1 *)(*(long *)(unaff_x20 + 0x40) + 0xd0),1
                );
  }
  if (unaff_x22 != 0) {
    if (*(char *)(unaff_x22 + 0x20) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07301528(*(undefined8 *)PTR_DAT_092c3898,0);
                    /* WARNING: Could not recover jumptable at 0x072cb79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x478))();
      return;
    }
    return;
  }
LAB_072cb7b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



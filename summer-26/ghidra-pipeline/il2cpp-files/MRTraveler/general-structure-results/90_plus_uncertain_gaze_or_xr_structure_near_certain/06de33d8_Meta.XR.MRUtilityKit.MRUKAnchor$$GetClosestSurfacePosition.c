/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 06de33d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 *unaff_x22;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xe98));
  FUN_03c8f898(PTR_DAT_08e91950);
  FUN_03c8f898(PTR_DAT_08e82448);
  FUN_03c8f898(PTR_DAT_08e91988);
  FUN_03c8f898(PTR_DAT_08e91980);
  *(undefined1 *)(unaff_x21 + 0xd9d) = 1;
  lVar1 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_07145224(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_03d233cc();
    puVar6 = (undefined8 *)(lVar1 + 0x18);
    *puVar6 = unaff_x20;
    thunk_FUN_03d233cc(puVar6);
    FUN_06de3710();
    plVar4 = *(long **)(unaff_x19 + 0x18);
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      uVar5 = *puVar6;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_08e91950) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
            goto LAB_06de34b8;
          }
          uVar2 = uVar2 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e91950,1);
LAB_06de34b8:
                    /* WARNING: Could not recover jumptable at 0x06de34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



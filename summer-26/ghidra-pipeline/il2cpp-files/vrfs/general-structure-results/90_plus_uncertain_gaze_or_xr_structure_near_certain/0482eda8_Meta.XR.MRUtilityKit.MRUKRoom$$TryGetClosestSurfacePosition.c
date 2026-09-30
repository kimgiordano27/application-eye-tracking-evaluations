/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 0482eda8
PROGRAM: vrfs-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x138) = param_2;
  thunk_FUN_01656ef8(unaff_x19 + 0x138);
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0x158) + 0xb8) == '\0') {
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x18),0);
      *(undefined4 *)(unaff_x20 + 0x10) = 3;
      return 1;
    }
    if (*(long *)(unaff_x19 + 0x158) != 0) {
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x50);
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x38));
      if (*(long *)(unaff_x19 + 0x158) != 0) {
        *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x58);
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40));
        if (*(long *)(unaff_x19 + 0x158) != 0) {
          *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x60);
          thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x48));
          if (*(long *)(unaff_x19 + 0x158) != 0) {
            *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x68)
            ;
            thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x50));
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              *(undefined8 *)(unaff_x19 + 0x58) =
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x70);
              thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x58));
              if (*(long *)(unaff_x19 + 0x158) != 0) {
                *(undefined8 *)(unaff_x19 + 0x60) =
                     *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x78);
                thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x60));
                if (*(long *)(unaff_x19 + 0x158) != 0) {
                  *(undefined8 *)(unaff_x19 + 0x68) =
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x80);
                  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x68));
                  if (*(long *)(unaff_x19 + 0x158) != 0) {
                    *(undefined8 *)(unaff_x19 + 0x70) =
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x158) + 0x88);
                    thunk_FUN_01656ef8();
                    uVar1 = FUN_051de2f8();
                    if ((uVar1 & 1) != 0) {
                      FUN_0482c6b4();
                      if (DAT_0722f88c == '\0') {
                        thunk_FUN_0159f088(PTR_DAT_06d97d90);
                        DAT_0722f88c = '\x01';
                      }
                      if (**(char **)(*(long *)PTR_DAT_06d97d90 + 0xb8) != '\0') {
                        *(undefined4 *)(unaff_x19 + 0x168) = 0;
                        FUN_0482d8e8();
                        FUN_051e4284();
                      }
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}



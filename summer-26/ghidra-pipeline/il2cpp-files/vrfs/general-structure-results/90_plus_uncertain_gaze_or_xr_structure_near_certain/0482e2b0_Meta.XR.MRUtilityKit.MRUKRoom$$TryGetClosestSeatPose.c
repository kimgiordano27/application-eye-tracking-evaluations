/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose
ENTRY_POINT: 0482e2b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 172
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSeatPose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x22 + 0x13e) = 1;
  if (unaff_x20 != 0) {
    puVar3 = *(undefined4 **)(*unaff_x23 + 0xb8);
    FUN_049abe68(*puVar3,puVar3[1],puVar3[2]);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_051e0ef0(uVar4,0);
    if (*(long *)(unaff_x19 + 0x138) != 0) {
      System_Xml_Schema_XmlSchemaSimpleContentRestriction__set_AnyAttribute
                (*(long *)(unaff_x19 + 0x138),0);
      if ((*(long *)(unaff_x19 + 0x158) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x158) + 0x30), lVar2 != 0)) {
        FUN_051df8e4(lVar2,0,0);
        if ((*(long *)(unaff_x19 + 0x158) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x158) + 0x38), lVar2 != 0)) {
          FUN_051df8e4(lVar2,0,0);
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            uVar4 = FUN_051df7a8(*(long *)(unaff_x19 + 0x48),0);
            FUN_0482dd48(uVar4,uVar4,1);
            if (*(long *)(unaff_x19 + 0x50) != 0) {
              uVar4 = FUN_051df7a8(*(long *)(unaff_x19 + 0x50),0);
              FUN_0482dd48(uVar4,uVar4,1);
              if (*(long *)(unaff_x19 + 0x98) != 0) {
                FUN_051de334(*(long *)(unaff_x19 + 0x98),0,0);
                puVar1 = PTR_DAT_06e60a48;
                if (*(long *)(unaff_x19 + 0x150) != 0) {
                  *(undefined1 *)(*(long *)(unaff_x19 + 0x150) + 0x21) = 0;
                  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                    FUN_03abca0c(**(long **)(*(long *)puVar1 + 0xb8),0,0);
                    if (*(long *)(unaff_x19 + 0x90) != 0) {
                      FUN_051de334(*(long *)(unaff_x19 + 0x90),1,0);
                      if (*(long *)(unaff_x19 + 0x78) != 0) {
                        FUN_051de334(*(long *)(unaff_x19 + 0x78),1,0);
                        if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
                           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x90), lVar2 != 0)) {
                          FUN_051df8e4(lVar2,1,0);
                          if (*(long *)(unaff_x19 + 0x158) != 0) {
                            FUN_0482df04(*(long *)(unaff_x19 + 0x158),1);
                            if (*(long *)(unaff_x19 + 0x158) != 0) {
                              FUN_0482dfbc(*(long *)(unaff_x19 + 0x158),0);
                              return;
                            }
                          }
                        }
                      }
                    }
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



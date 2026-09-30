/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetDeviceToAbsoluteTrackingPose$$.ctor
ENTRY_POINT: 04316994
PROGRAM: m3ar-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetDeviceToAbsoluteTrackingPose___ctor
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x21 + 0xdfc) = 1;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_042839b0(&stack0x00000008,*(long *)(unaff_x20 + 0x60),unaff_w19,0);
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar3 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      lVar2 = FUN_0428386c(*(long *)(unaff_x20 + 0x58),unaff_w19,0);
      puVar1 = PTR_DAT_08f73818;
      plVar4 = *(long **)(unaff_x20 + 0x20);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
        plVar4 = *(long **)(unaff_x20 + 0x30);
        uVar3 = FUN_0735fe18(*(undefined8 *)puVar1,uVar3,0);
        puVar1 = PTR_DAT_08f6bfc8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
          plVar4 = *(long **)(unaff_x20 + 0x28);
          uStack0000000000000008 = (undefined4)((ulong)lVar2 >> 0x20);
          uVar3 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x00000008);
          uVar3 = FUN_0735fe18(*(undefined8 *)puVar1,uVar3,0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
            plVar4 = *(long **)(unaff_x20 + 0x38);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x178))
                        (plVar4,(ulong)unaff_w19 | lVar2 << 0x20,0,1,*(undefined8 *)PTR_DAT_08f68760
                         ,*(undefined8 *)(*plVar4 + 0x180));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 072a3ff8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 179
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x25;
  uint unaff_w26;
  long in_stack_00000008;
  
  while( true ) {
    FUN_072a4e38();
    while( true ) {
      while( true ) {
        unaff_x25 = unaff_x25 + 1;
        if (unaff_x25 == 3) {
          return;
        }
        lVar1 = *(long *)(unaff_x19 + 0x180);
        if (lVar1 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x25) goto LAB_072a409c;
        lVar1 = *(long *)(lVar1 + unaff_x25 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar1 + 0x18) < 0xc) goto LAB_072a409c;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (*(int *)(lVar1 + 0x4c) != 7) break;
        if ((unaff_w22 >> 1 & 1) == 0) {
          if (lVar2 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4bd4();
        }
        else {
          if (lVar2 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4ab8();
        }
      }
      if ((unaff_x21 & 1) == 0) break;
      if (lVar2 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_072a409c;
      lVar1 = *(long *)(unaff_x19 + 0xf8);
      if (lVar1 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar1 + 0x18) <= unaff_w26) goto LAB_072a409c;
      lVar1 = *(long *)(lVar1 + in_stack_00000008 * 8 + 0x20);
      if (lVar1 == 0) goto LAB_072a40a0;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_072a409c;
      FUN_072a4c7c();
    }
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) < 0xc) {
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 0148d3c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  
  while( true ) {
    if (unaff_w22 == unaff_w21) {
      return;
    }
    FUN_01795470();
    FUN_0148d668();
    lVar5 = *unaff_x26;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *unaff_x26;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w19) {
LAB_0148d3ec:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = *(long *)(unaff_x24 + 0x38);
    if (lVar7 == 0) break;
    lVar5 = *(long *)(lVar5 + unaff_x27 * 8 + 0x20);
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar6 = 0;
    do {
      if (uVar1 <= uVar6) goto LAB_0148d3ec;
      if (lVar5 == 0) goto LAB_0148d3f0;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 <= uVar6) goto LAB_0148d3ec;
      if (unaff_x23 == 0) goto LAB_0148d3f0;
      uVar9 = in_w8 + -0x12 + (int)uVar6;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_0148d3ec;
      lVar8 = uVar6 * 4;
      lVar3 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(float *)(unaff_x23 + (long)(int)uVar9 * 4 + 0x20) =
           *(float *)(lVar7 + 0x20 + lVar8) * *(float *)(lVar5 + 0x20 + lVar3);
    } while (uVar6 != 0x12);
    lVar8 = 0;
    do {
      if (((ulong)uVar1 <= lVar8 + 0x12U) || ((ulong)uVar2 <= lVar8 + 0x12U)) goto LAB_0148d3ec;
      if (unaff_x20 == 0) goto LAB_0148d3f0;
      uVar9 = in_w8 + -0x12 + (int)lVar8;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_0148d3ec;
      lVar3 = lVar8 * 4;
      lVar4 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      *(float *)(unaff_x20 + (long)(int)uVar9 * 4 + 0x20) =
           *(float *)(lVar7 + 0x68 + lVar3) * *(float *)(lVar5 + 0x68 + lVar4);
    } while (lVar8 != 0x12);
    unaff_w22 = unaff_w22 + 1;
    in_w8 = in_w8 + 0x12;
  }
LAB_0148d3f0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



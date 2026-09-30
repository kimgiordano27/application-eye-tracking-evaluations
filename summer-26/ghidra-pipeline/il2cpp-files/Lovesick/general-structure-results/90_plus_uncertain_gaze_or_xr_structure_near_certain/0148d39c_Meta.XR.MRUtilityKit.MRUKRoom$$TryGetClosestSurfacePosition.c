/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 0148d39c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int in_w8;
  ulong uVar4;
  ulong in_x9;
  ulong in_x10;
  long lVar5;
  long in_x11;
  long in_x12;
  long in_x13;
  long in_x14;
  long in_x15;
  uint uVar6;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  
  do {
    lVar3 = in_x13 * 4;
    lVar5 = in_x13 * 4;
    in_x13 = in_x13 + 1;
    *(float *)(unaff_x20 + (long)(int)in_x15 * 4 + 0x20) =
         *(float *)(in_x11 + lVar3) * *(float *)(in_x12 + lVar5);
                    /* try { // try from 0148d3b8 to 0158d3eb has its CatchHandler @ 0148d614 */
    if (in_x13 == 0x12) {
      unaff_w25 = unaff_w25 + in_w8;
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == unaff_w21) {
        return;
      }
      FUN_01795470();
      FUN_0148d668();
      lVar3 = *unaff_x26;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *unaff_x26;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 == 0) goto LAB_0148d3f0;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
LAB_0148d3ec:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar5 = *(long *)(unaff_x24 + 0x38);
      if (lVar5 == 0) goto LAB_0148d3f0;
      lVar3 = *(long *)(lVar3 + unaff_x27 * 8 + 0x20);
      in_x9 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar4 = 0;
      do {
        if (in_x9 <= uVar4) goto LAB_0148d3ec;
        if (lVar3 == 0) goto LAB_0148d3f0;
        in_x10 = (ulong)*(uint *)(lVar3 + 0x18);
        if (in_x10 <= uVar4) goto LAB_0148d3ec;
        if (unaff_x23 == 0) goto LAB_0148d3f0;
        uVar6 = unaff_w25 + (int)uVar4;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_0148d3ec;
        lVar1 = uVar4 * 4;
        lVar2 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(float *)(unaff_x23 + (long)(int)uVar6 * 4 + 0x20) =
             *(float *)(lVar5 + 0x20 + lVar1) * *(float *)(lVar3 + 0x20 + lVar2);
      } while (uVar4 != 0x12);
      in_x13 = 0;
      in_x12 = lVar3 + 0x68;
      in_x11 = lVar5 + 0x68;
      in_x14 = (ulong)(unaff_w25 - 0x12) + 0x12;
      in_w8 = 0x12;
    }
    if ((in_x9 <= in_x13 + 0x12U) || (in_x10 <= in_x13 + 0x12U)) goto LAB_0148d3ec;
    if (unaff_x20 == 0) {
LAB_0148d3f0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_x15 = in_x14 + in_x13;
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)in_x15) goto LAB_0148d3ec;
  } while( true );
}



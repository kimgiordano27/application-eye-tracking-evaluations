/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 04a5d78c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 176
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04a5d85c) */

uint Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
LAB_04a5d79c:
  (*(code *)*param_1)(unaff_x22,param_1[1]);
  uVar1 = FUN_04a5b014();
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a5d714;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x24,0);
LAB_04a5d714:
    unaff_w21 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if ((unaff_w21 & 1) == 0) goto LAB_04a5d7c4;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x22 = in_stack_00000018;
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a5d79c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,lVar4,0);
    goto LAB_04a5d79c;
  }
LAB_04a5d7c4:
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a5d824;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04a5d824:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return (unaff_w21 ^ 1) & 1;
}



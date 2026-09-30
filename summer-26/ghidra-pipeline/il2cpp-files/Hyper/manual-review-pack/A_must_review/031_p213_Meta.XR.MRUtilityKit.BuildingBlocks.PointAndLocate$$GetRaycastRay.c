/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$GetRaycastRay
ENTRY_POINT: 08a7e628
PROGRAM: Hyper-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__GetRaycastRay(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac4e5c8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_08a7e688;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(param_1,*(long *)PTR_DAT_0ac4e5c8,7);
LAB_08a7e688:
  uVar3 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x191) = 1;
  }
  return;
}



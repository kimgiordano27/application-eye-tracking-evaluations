/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetBestPoseFromRaycastDebugger>b__51_0
ENTRY_POINT: 04c61f3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetBestPoseFromRaycastDebugger>b__51_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *in_x9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  ulong in_stack_00000018;
  
  (*in_x9)();
  puVar3 = PTR_DAT_065e7390;
  puVar2 = PTR_DAT_065e7388;
  puVar1 = PTR_DAT_065e71c8;
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  if ((in_stack_00000018 & 0xff) != 0) {
    uVar5 = FUN_03c86c80(&stack0x00000018,*(undefined8 *)PTR_DAT_065e71b0);
    uVar4 = FUN_03427f10(uVar5,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    in_stack_00000008 = 0;
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
              (&stack0x00000008,uVar4,*(undefined8 *)puVar3);
    if (unaff_x19 == (long *)0x0) goto LAB_04c62010;
    (**(code **)(*unaff_x19 + 0x408))();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c62010;
    (**(code **)(*unaff_x19 + 0x3c8))();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    if (unaff_x19 == (long *)0x0) {
LAB_04c62010:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*unaff_x19 + 0x2b8))();
  }
  return;
}



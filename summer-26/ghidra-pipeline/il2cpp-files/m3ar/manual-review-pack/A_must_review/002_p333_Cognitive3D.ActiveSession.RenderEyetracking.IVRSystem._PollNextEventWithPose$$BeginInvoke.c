/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PollNextEventWithPose$$BeginInvoke
ENTRY_POINT: 04318468
PROGRAM: m3ar-libil2cpp.so
SCORE: 194
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PollNextEventWithPose__BeginInvoke
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_0953ae0c & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f73890);
    FUN_0403162c(PTR_DAT_08f73898);
    FUN_0403162c(PTR_DAT_08f738a0);
    FUN_0403162c(PTR_DAT_08f738a8);
    FUN_0403162c(PTR_DAT_08f738b0);
    FUN_0403162c(PTR_DAT_08f738b8);
    FUN_0403162c(PTR_DAT_08f68760);
    DAT_0953ae0c = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = (long *)0x0;
  in_stack_00000020 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_04308fec(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR_DAT_08f738a0;
    puVar2 = PTR_DAT_08f73898;
    puVar1 = PTR_DAT_08f68760;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_06ff01a8(&stack0x00000010,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_08f73890);
      while( true ) {
        uVar4 = FUN_04fcfce0(&stack0x00000010,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          FUN_04fcfdf4(&stack0x00000010,*(undefined8 *)puVar2);
          return;
        }
        if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *(long *)(in_stack_00000020 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (*(int *)(lVar5 + 0x18) == 0) break;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        (**(code **)(*in_stack_00000028 + 0x178))
                  (in_stack_00000028,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),1,
                   *(undefined8 *)puVar1,*(undefined8 *)(*in_stack_00000028 + 0x180));
      }
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



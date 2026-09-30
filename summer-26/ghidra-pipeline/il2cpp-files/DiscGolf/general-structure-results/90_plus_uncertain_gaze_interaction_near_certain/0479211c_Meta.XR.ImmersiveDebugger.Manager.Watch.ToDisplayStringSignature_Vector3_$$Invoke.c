/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$Invoke
ENTRY_POINT: 0479211c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__Invoke(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x29;
  
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x98))();
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar3);
    }
    puVar2 = (undefined8 *)FUN_02d96748();
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10) + 0x28)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    lVar3 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (**(code **)(*(long *)(lVar3 + 0x370) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x370) + 8));
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



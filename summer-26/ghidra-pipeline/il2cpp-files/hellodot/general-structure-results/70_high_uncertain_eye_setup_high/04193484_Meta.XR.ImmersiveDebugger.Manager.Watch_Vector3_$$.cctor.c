/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 04193484
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x9;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  plVar2 = *(long **)(in_x9 + 0x7b0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  uVar1 = FUN_04ea1828();
  if ((3 < *(uint *)(unaff_x20 + 0x18)) &&
     (*(undefined8 *)(unaff_x20 + 0x38) = uVar1, *(uint *)(unaff_x20 + 0x18) != 4)) {
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_065c95e8;
    FUN_04db97ac();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}



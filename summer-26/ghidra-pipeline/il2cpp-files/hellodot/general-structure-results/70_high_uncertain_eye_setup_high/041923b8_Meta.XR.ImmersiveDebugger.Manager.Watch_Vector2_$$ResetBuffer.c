/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 041923b8
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *in_stack_00000008;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = (**(code **)(*in_stack_00000008 + 0x158))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x160));
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar2 = FUN_04193eb0(unaff_x19 + 8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb8));
  FUN_04f4f98c(uVar1,uVar2,0);
  return;
}



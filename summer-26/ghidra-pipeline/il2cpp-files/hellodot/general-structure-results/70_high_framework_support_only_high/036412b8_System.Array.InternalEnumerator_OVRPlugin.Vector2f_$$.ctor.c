/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 036412b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor
               (long param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x20 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(param_2,unaff_x20,param_4);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  puVar2 = *(undefined8 **)(*(long *)(unaff_x24 + 0xc0) + 0x20);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x24 + 0xc0) + 0x10) + 0x28)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
  (*(code *)puVar2[2])(uVar1);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x10));
}



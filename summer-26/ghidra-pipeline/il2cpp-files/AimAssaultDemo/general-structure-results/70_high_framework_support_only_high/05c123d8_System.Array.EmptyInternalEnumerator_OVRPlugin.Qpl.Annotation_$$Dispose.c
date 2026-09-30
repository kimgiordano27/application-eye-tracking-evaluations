/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 05c123d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x27;
  long unaff_x29;
  
  if (in_w8 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
    (*(code *)puVar2[2])(uVar1);
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar2 = *(undefined8 **)(lVar3 + 0x140);
    uVar1 = *puVar2;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x70) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
    (*(code *)puVar2[2])(uVar1);
    uVar1 = 1;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



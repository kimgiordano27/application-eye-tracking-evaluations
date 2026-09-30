/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 03796930
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
                (ulong param_1)

{
  ulong uVar1;
  int *unaff_x21;
  long *unaff_x22;
  ulong uVar2;
  
  if ((param_1 & 1) == 0) {
    if (*(long *)(unaff_x21 + 6) == 0) {
LAB_037969a0:
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      do {
        if ((long)(*unaff_x21 + -1) <= (long)uVar2) goto LAB_037969a0;
        if (*(long *)(unaff_x21 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(*(long *)(unaff_x21 + 6) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
        uVar2 = uVar2 + 1;
      } while ((uVar1 & 1) == 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



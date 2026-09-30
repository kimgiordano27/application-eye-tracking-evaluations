/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 03796910
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x21;
  long *unaff_x22;
  
  if (param_1 == 0) {
LAB_037969bc:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(unaff_x21 + 6) == 0) {
LAB_037969a0:
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
      do {
        if ((long)(*unaff_x21 + -1) <= (long)uVar1) goto LAB_037969a0;
        if (*(long *)(unaff_x21 + 6) == 0) goto LAB_037969bc;
        if (*(uint *)(*(long *)(unaff_x21 + 6) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        uVar2 = (**(code **)(*unaff_x22 + 0x1b8))();
        uVar1 = uVar1 + 1;
      } while ((uVar2 & 1) == 0);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}



/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 06968dc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke
                (long param_1,float param_2)

{
  long *plVar1;
  long unaff_x19;
  float fVar2;
  
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x80), plVar1 != (long *)0x0)) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x588))(plVar1,*(undefined8 *)(*plVar1 + 0x590));
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      return param_2 + fVar2 * *(float *)(*(long *)(unaff_x19 + 0x160) + 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



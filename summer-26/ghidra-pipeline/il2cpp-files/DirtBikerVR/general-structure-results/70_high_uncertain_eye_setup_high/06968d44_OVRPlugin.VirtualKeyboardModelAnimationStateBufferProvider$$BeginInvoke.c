/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 06968d44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke
                (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  FUN_07cadf5c(param_3,0);
  if ((*(long *)(unaff_x19 + 0x108) != 0) &&
     (plVar1 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x80), plVar1 != (long *)0x0)) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x508))(plVar1,*(undefined8 *)(*plVar1 + 0x510));
    if ((*(long *)(unaff_x19 + 0x108) != 0) &&
       (plVar1 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x80), plVar1 != (long *)0x0)) {
      fVar3 = (float)(**(code **)(*plVar1 + 0x4c8))(plVar1,*(undefined8 *)(*plVar1 + 0x4d0));
      fVar2 = (float)FUN_07cade68(fVar2 * unaff_s8 * 0.5,param_2,fVar3 * unaff_s8 * 0.5);
      if ((*(long *)(unaff_x19 + 0x108) != 0) &&
         (plVar1 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x80), plVar1 != (long *)0x0)) {
        fVar3 = (float)(**(code **)(*plVar1 + 0x588))(plVar1,*(undefined8 *)(*plVar1 + 0x590));
        if (*(long *)(unaff_x19 + 0x160) != 0) {
          return fVar2 + fVar3 * *(float *)(*(long *)(unaff_x19 + 0x160) + 0x28);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



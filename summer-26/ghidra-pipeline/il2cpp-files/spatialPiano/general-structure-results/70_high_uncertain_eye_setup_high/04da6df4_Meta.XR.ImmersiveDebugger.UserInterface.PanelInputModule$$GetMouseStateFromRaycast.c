/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$GetMouseStateFromRaycast
ENTRY_POINT: 04da6df4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__GetMouseStateFromRaycast
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x29;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    *(long *)(unaff_x19 + 0x28) = lVar2;
    __cxa_end_catch();
    if (**(char **)(unaff_x19 + 0x30) != '\0') {
      thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
    }
    if (lVar2 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return 0;
      }
    }
    else if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(lVar2);
    }
  }
  else {
    FUN_02a817cc(unaff_x19 + 0x28);
    if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ff761c(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



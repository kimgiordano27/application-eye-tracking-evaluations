/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 01a02c08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_pluginVersion(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    FUN_010e5800(param_1,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<string>__);
    FUN_01a02c8c();
    puVar1 = OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo;
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x128);
      uVar2 = FUN_0268fd10(*(long *)(unaff_x19 + 0xc0),0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_01a02d0c(lVar3,uVar4,uVar2);
        *(long *)(unaff_x19 + 0x138) = lVar3;
        FUN_01954cb8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



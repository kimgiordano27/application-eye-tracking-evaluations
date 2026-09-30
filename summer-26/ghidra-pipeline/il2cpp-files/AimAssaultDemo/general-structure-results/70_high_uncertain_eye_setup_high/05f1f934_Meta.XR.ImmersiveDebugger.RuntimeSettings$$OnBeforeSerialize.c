/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 05f1f934
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678(lVar1);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_03778a20();
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_03778a20();
                    /* WARNING: Could not recover jumptable at 0x05f1f9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x1b8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}



/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_IsDepthAvailable
ENTRY_POINT: 04d8eecc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_IsDepthAvailable
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  *(long *)(param_2 + 0x20) = param_3;
  *(long *)(param_2 + 0x28) = param_4;
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  uVar2 = FUN_02f08824(param_4);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x04') {
      if (param_3 == 0) {
        uVar3 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar3,0);
      }
      goto LAB_04d8ef20;
    }
    pcVar4 = FUN_02b833b4;
  }
  else {
    if (cVar1 != '\x05') {
LAB_04d8ef20:
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
      goto LAB_04d8ef30;
    }
    pcVar4 = FUN_02b833d4;
  }
  *(code **)(param_2 + 0x18) = pcVar4;
LAB_04d8ef30:
  *(code **)(param_2 + 0x38) = FUN_02b8333c;
  return;
}



/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames
ENTRY_POINT: 0511b324
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_02dd37b4();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02d6094c(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_02da9918(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar4,0);
      }
      goto LAB_0511b3b4;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_02cadfa0;
    }
    else {
      uVar2 = thunk_FUN_02db0438(param_3);
      uVar3 = FUN_02d60ee0(param_3);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_02cadfd8;
        }
        else {
          pcVar5 = FUN_02cae008;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_02cae094;
      }
      else {
        pcVar5 = FUN_02cae0e0;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_0511b3b4:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_0511b3fc;
    }
    pcVar5 = FUN_02cadfc4;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
LAB_0511b3fc:
  *(code **)(param_1 + 0x38) = FUN_02cadf48;
  return;
}



/*
FUNCTION_NAME: OVRPlugin$$UnregisterOpenXREventHandler
ENTRY_POINT: 02c2fe9c
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UnregisterOpenXREventHandler(long param_1,long param_2,long param_3)

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
  thunk_FUN_0188fd20();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_017fc40c(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_0187a2a4(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4,0);
      }
      goto LAB_02c2feec;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_017905b8;
    }
    else {
      uVar2 = thunk_FUN_0181d1f4(param_3);
      uVar3 = FUN_017fc99c(param_3);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_017905e8;
        }
        else {
          pcVar5 = FUN_01790614;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_01790698;
      }
      else {
        pcVar5 = FUN_017906d4;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_02c2feec:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_02c2ff64;
    }
    pcVar5 = FUN_017905d8;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
LAB_02c2ff64:
  *(code **)(param_1 + 0x38) = FUN_01790570;
  return;
}



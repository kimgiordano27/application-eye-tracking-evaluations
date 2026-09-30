/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 073c0988
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_03d233cc();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_03c8f994(param_4);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_3 == 0) {
        uVar4 = thunk_FUN_03d0d928(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar4,0);
      }
      goto LAB_073c0a08;
    }
    if (*(char *)(param_2 + 0x70) == '\0') {
      pcVar5 = FUN_03bdca38;
    }
    else {
      uVar2 = thunk_FUN_03cb0718(param_4);
      uVar3 = FUN_03c8ff24(param_4);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_03bdca70;
        }
        else {
          pcVar5 = FUN_03bdcaa0;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_03bdcb2c;
      }
      else {
        pcVar5 = FUN_03bdcb78;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_073c0a08:
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
      goto LAB_073c0a50;
    }
    pcVar5 = FUN_03bdca5c;
  }
  *(code **)(param_2 + 0x18) = pcVar5;
LAB_073c0a50:
  *(code **)(param_2 + 0x38) = FUN_03bdc9d8;
  return;
}



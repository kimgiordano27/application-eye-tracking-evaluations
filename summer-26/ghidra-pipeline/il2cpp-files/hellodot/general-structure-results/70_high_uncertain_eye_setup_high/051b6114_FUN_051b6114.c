/*
FUNCTION_NAME: FUN_051b6114
ENTRY_POINT: 051b6114
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_051b6114(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02ce7aec(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_02c945b8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar3,0);
      }
      goto OVRPlugin__ResetAppPerfStats;
    }
    pcVar4 = FUN_02bdb320;
  }
  else {
    if (cVar1 != '\x02') {
OVRPlugin__ResetAppPerfStats:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_051b6184;
    }
    pcVar4 = FUN_02bdb344;
  }
  *(code **)(param_1 + 0x18) = pcVar4;
LAB_051b6184:
  *(code **)(param_1 + 0x38) = FUN_02bdb29c;
  return;
}



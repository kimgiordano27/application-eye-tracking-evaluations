/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>$$get_Value
ENTRY_POINT: 02b6defc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>__get_Value
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_01c5d314(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0x70) == '\0') {
        pcVar5 = FUN_01a06704;
      }
      else {
        uVar2 = thunk_FUN_01c60ddc(param_3);
        uVar3 = FUN_01c5d7a0(param_3);
        if ((uVar2 & 1) == 0) {
          if ((uVar3 & 1) == 0) {
            pcVar5 = FUN_01a0674c;
          }
          else {
            pcVar5 = FUN_01a067a0;
          }
        }
        else if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_01a06878;
        }
        else {
          pcVar5 = FUN_01a06904;
        }
      }
    }
    else {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_01c57cb0(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,0);
      }
      pcVar5 = FUN_01a066bc;
    }
  }
  else {
    pcVar5 = FUN_01a06630;
    if (cVar1 != '\x06') {
      pcVar5 = FUN_01a06670;
    }
  }
  *(code **)(param_1 + 0x18) = pcVar5;
  *(code **)(param_1 + 0x38) = FUN_01a06594;
  return;
}



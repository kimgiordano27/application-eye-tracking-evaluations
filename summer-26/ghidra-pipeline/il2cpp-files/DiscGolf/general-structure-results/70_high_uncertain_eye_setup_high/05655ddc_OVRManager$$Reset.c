/*
FUNCTION_NAME: OVRManager$$Reset
ENTRY_POINT: 05655ddc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Reset(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
                    /* try { // try from 05655dfc to 05755e8f has its CatchHandler @ 05655dfc
                       catch() { ... } // from try @ 05655dfc with catch @ 05655dfc
                       catch() { ... } // from try @ 05655f00 with catch @ 05655dfc
                       catch() { ... } // from try @ 056561a4 with catch @ 05655dfc
                       catch() { ... } // from try @ 05656224 with catch @ 05655dfc
                       catch() { ... } // from try @ 05656248 with catch @ 05655dfc
                       catch() { ... } // from try @ 056562c8 with catch @ 05655dfc
                       catch() { ... } // from try @ 05656324 with catch @ 05655dfc */
  *(long *)(param_1 + 0x20) = param_2;
  LeanTween__value();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02d966bc(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_02de0434(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar3,0);
      }
      goto LAB_05655e48;
    }
    pcVar4 = FUN_02cff398;
  }
  else {
    if (cVar1 != '\x02') {
LAB_05655e48:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_05655e58;
    }
    pcVar4 = FUN_02cff3b8;
  }
  *(code **)(param_1 + 0x18) = pcVar4;
LAB_05655e58:
  *(code **)(param_1 + 0x38) = FUN_02cff340;
  return;
}



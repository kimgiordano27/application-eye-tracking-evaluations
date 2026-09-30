/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 0566a680
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_ipd(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (param_2 != 1) {
    FUN_029794b4(&stack0x00000010);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  in_stack_00000010 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)*in_stack_00000018;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto OVRPlugin__set_vsyncCount;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
OVRPlugin__set_vsyncCount:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (in_stack_00000010 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}



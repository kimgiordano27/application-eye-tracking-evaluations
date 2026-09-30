/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 076c9004
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetControllerHapticsState(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w23;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  
  if (param_2 != 1) {
    FUN_03a8b9cc(&stack0x00000048);
                    /* WARNING: Subroutine does not return */
    FUN_0412026c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  in_stack_00000048 = *plVar1;
  __cxa_end_catch();
  plVar1 = (long *)*in_stack_00000050;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076c90b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,*(long *)PTR_DAT_08f65868,0);
LAB_076c90b0:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (in_stack_00000048 == 0) {
    return unaff_w23 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}



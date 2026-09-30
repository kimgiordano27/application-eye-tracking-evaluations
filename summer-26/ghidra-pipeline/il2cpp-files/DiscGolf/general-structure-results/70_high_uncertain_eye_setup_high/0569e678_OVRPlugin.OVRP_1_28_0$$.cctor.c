/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$.cctor
ENTRY_POINT: 0569e678
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


undefined1  [16] OVRPlugin_OVRP_1_28_0___cctor(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w22;
  long *unaff_x23;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  FUN_029794b4(&stack0x00000010);
  if (unaff_w22 != 1) {
    FUN_029794b4(&stack0x00000020);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c();
  }
  plVar2 = (long *)__cxa_begin_catch();
  in_stack_00000020 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)*in_stack_00000028;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*unaff_x23,0);
OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}



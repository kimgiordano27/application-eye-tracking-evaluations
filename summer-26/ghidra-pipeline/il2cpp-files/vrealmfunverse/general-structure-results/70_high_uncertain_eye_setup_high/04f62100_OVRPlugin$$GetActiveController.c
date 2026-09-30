/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 04f62100
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActiveController(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  uStack0000000000000068 = in_stack_000000d8;
  uStack0000000000000060 = in_stack_000000d0;
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_2;
  FUN_04f62360();
  lVar1 = FUN_04f60ee4();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_04f60ee4();
    if ((unaff_x19 == 0) || (uVar3 = FUN_05c89410(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04f6219c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar2,*unaff_x25,4);
LAB_04f6219c:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    FUN_04f61664();
  }
  return;
}



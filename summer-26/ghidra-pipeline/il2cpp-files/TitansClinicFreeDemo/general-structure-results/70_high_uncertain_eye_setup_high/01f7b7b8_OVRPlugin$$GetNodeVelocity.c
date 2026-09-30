/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 01f7b7b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetNodeVelocity(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w25;
  long unaff_x26;
  long in_stack_00000028;
  
  while( true ) {
    param_1 = FUN_01fb02a4(param_1,param_2,0);
    uVar4 = FUN_01fb0298();
    uVar5 = FUN_01fb02a4(param_1,4,0);
    uVar6 = FUN_01fb0298(uVar5,0);
    if ((uVar4 < uVar6) ||
       (uVar4 = FUN_01fbe600(*(undefined8 *)(unaff_x20 + param_1 * 2),
                             *(undefined8 *)(unaff_x19 + param_1 * 2),0), (uVar4 & 1) != 0)) break;
    param_2 = 4;
  }
  uVar4 = FUN_01fb0298();
  uVar5 = FUN_01fb02a4(param_1,2,0);
  uVar6 = FUN_01fb0298(uVar5,0);
  if ((uVar6 <= uVar4) && (*(int *)(unaff_x20 + param_1 * 2) == *(int *)(unaff_x19 + param_1 * 2)))
  {
    param_1 = FUN_01fb02a4(param_1,2,0);
  }
  uVar4 = FUN_01fb0298(param_1,0);
  uVar6 = FUN_01fb0298();
  puVar2 = PTR_DAT_027b3998;
  iVar3 = unaff_w25;
  if (uVar4 < uVar6) {
    do {
      uVar1 = *(undefined2 *)(unaff_x19 + param_1 * 2);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01e82750(unaff_x20 + param_1 * 2,uVar1,0);
      if (iVar3 != 0) break;
      param_1 = FUN_01fb02a4(param_1,1,0);
      uVar4 = FUN_01fb0298(param_1,0);
      uVar6 = FUN_01fb0298();
      iVar3 = unaff_w25;
    } while (uVar4 < uVar6);
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000028) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



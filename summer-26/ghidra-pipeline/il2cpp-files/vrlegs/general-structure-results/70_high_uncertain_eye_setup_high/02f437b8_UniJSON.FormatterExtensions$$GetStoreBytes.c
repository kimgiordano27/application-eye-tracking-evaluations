/*
FUNCTION_NAME: UniJSON.FormatterExtensions$$GetStoreBytes
ENTRY_POINT: 02f437b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f43548) */
/* WARNING: Removing unreachable block (ram,0x02f42bec) */
/* WARNING: Removing unreachable block (ram,0x02f42c08) */
/* WARNING: Removing unreachable block (ram,0x02f42c1c) */
/* WARNING: Removing unreachable block (ram,0x02f42c2c) */
/* WARNING: Removing unreachable block (ram,0x02f42c40) */
/* WARNING: Removing unreachable block (ram,0x02f42c48) */
/* WARNING: Removing unreachable block (ram,0x02f42c70) */
/* WARNING: Removing unreachable block (ram,0x02f42c54) */
/* WARNING: Removing unreachable block (ram,0x02f42c60) */
/* WARNING: Removing unreachable block (ram,0x02f42c7c) */
/* WARNING: Removing unreachable block (ram,0x02f42c94) */
/* WARNING: Removing unreachable block (ram,0x02f42cc0) */
/* WARNING: Removing unreachable block (ram,0x02f42cd4) */
/* WARNING: Removing unreachable block (ram,0x02f42cd8) */
/* WARNING: Removing unreachable block (ram,0x02f42ce4) */
/* WARNING: Removing unreachable block (ram,0x02f42cf8) */
/* WARNING: Removing unreachable block (ram,0x02f42d00) */
/* WARNING: Removing unreachable block (ram,0x02f42c8c) */
/* WARNING: Removing unreachable block (ram,0x02f42d10) */
/* WARNING: Removing unreachable block (ram,0x02f42d1c) */
/* WARNING: Removing unreachable block (ram,0x02f42d2c) */
/* WARNING: Removing unreachable block (ram,0x02f42d58) */
/* WARNING: Removing unreachable block (ram,0x02f42d5c) */
/* WARNING: Removing unreachable block (ram,0x02f43560) */
/* WARNING: Removing unreachable block (ram,0x02f42d70) */
/* WARNING: Removing unreachable block (ram,0x02f4355c) */
/* WARNING: Removing unreachable block (ram,0x02f42d7c) */
/* WARNING: Removing unreachable block (ram,0x02f42d9c) */
/* WARNING: Removing unreachable block (ram,0x02f42da4) */
/* WARNING: Removing unreachable block (ram,0x02f42db8) */
/* WARNING: Removing unreachable block (ram,0x02f42dc0) */
/* WARNING: Removing unreachable block (ram,0x02f42dfc) */
/* WARNING: Removing unreachable block (ram,0x02f42e04) */
/* WARNING: Removing unreachable block (ram,0x02f42fa8) */
/* WARNING: Removing unreachable block (ram,0x02f42e10) */
/* WARNING: Removing unreachable block (ram,0x02f42e1c) */
/* WARNING: Removing unreachable block (ram,0x02f42fbc) */
/* WARNING: Removing unreachable block (ram,0x02f42fd0) */
/* WARNING: Removing unreachable block (ram,0x02f43878) */

void UniJSON_FormatterExtensions__GetStoreBytes(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_x9;
  int *piVar3;
  long lVar4;
  int unaff_w26;
  long unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000038;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto code_r0x02f437f8;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec();
code_r0x02f437f8:
  (*(code *)*puVar1)();
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w26 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar4 = *plVar2;
    __cxa_end_catch();
    if (in_stack_00000038._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar4);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b3fef0();
}



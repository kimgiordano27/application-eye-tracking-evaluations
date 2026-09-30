/*
FUNCTION_NAME: FUN_02bae0d8
ENTRY_POINT: 02bae0d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bae1d4) */

uint FUN_02bae0d8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char local_34 [4];
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar4,local_34,0);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = *(int *)(lVar3 + 0x18) - 1;
  if ((int)uVar6 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    while( true ) {
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar2 = FUN_025bd20c(*(undefined8 *)(lVar3 + (ulong)uVar6 * 8 + 0x20),param_2,5,0);
      if ((((uVar2 & 1) != 0) && (uVar2 = FUN_02bae2c8(param_3,uVar6), (uVar2 & 1) == 0)) &&
         (bVar1 = uVar5 != 0xffffffff, uVar5 = uVar6, bVar1)) break;
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) goto LAB_02bae19c;
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    uVar5 = 0xfffffffe;
  }
LAB_02bae19c:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return uVar5;
}



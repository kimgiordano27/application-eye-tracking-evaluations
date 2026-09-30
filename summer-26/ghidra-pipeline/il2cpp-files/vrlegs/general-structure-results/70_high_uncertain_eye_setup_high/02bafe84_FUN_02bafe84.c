/*
FUNCTION_NAME: FUN_02bafe84
ENTRY_POINT: 02bafe84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02baff60) */

bool FUN_02bafe84(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  char local_34 [4];
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar5,local_34,0);
  FUN_02bafdd4(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(lVar6 + 0x10);
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x18);
      if (iVar1 <= iVar7) {
LAB_02baff24:
        if (local_34[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
        }
        return iVar7 < iVar1;
      }
      uVar2 = FUN_02bafa1c(lVar6,iVar7);
      uVar3 = FUN_027be084(uVar2,param_2,0);
      if ((uVar3 & 1) != 0) goto LAB_02baff24;
      lVar4 = *(long *)(lVar6 + 0x10);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



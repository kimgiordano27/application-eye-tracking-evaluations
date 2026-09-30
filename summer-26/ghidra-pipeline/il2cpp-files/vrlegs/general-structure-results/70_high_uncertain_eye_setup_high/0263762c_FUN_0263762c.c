/*
FUNCTION_NAME: FUN_0263762c
ENTRY_POINT: 0263762c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026377d8) */

void FUN_0263762c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  char local_34 [4];
  
  if ((DAT_0412402b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf26a8);
    DAT_0412402b = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  puVar2 = PTR_DAT_03cf26a8;
  iVar4 = 0;
  while( true ) {
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    plVar5 = *(long **)(param_1 + 0x10);
    if (iVar3 <= iVar4) {
      if (plVar5 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        if (iVar4 == 0) {
          FUN_026375fc(param_1);
        }
        if (local_34[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))(plVar5,iVar4,*(undefined8 *)(*plVar5 + 0x2f0));
    if (plVar5 == (long *)0x0) break;
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    if (plVar5[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02636b1c();
    if (plVar5[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(plVar5[0xd] + 0x20) == 4) {
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar7 + 0x3d8))(plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x3e0));
      (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



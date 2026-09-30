/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 027ef278
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027ef390) */

uint OVRPlugin__SetMultimodalHandsControllersSupported
               (ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfd530);
    *(undefined1 *)(unaff_x20 + 0x156) = 1;
  }
  if (param_3 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = thunk_FUN_01a4a380(0);
  }
  uVar4 = FUN_027f25fc(param_2,param_3);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd530);
    FUN_027f26d8();
    FUN_027f2738(param_2,lVar5,1);
    if (param_3 == -1) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_027d8bd0(lVar5,0xffffffff,param_4,0);
    }
    else {
      iVar2 = thunk_FUN_01a4a380(0);
      if ((long)(ulong)(uint)(iVar2 - iVar1) < (long)param_3) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = FUN_027d8bd0(lVar5,param_3 - (iVar2 - iVar1),param_4,0);
      }
      else {
        uVar3 = 0;
      }
    }
    uVar4 = FUN_027e971c(param_2);
    if ((uVar4 & 1) == 0) {
      FUN_027ee30c(param_2,lVar5);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}



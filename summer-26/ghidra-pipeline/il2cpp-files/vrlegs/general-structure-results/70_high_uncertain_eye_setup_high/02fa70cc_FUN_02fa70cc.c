/*
FUNCTION_NAME: FUN_02fa70cc
ENTRY_POINT: 02fa70cc
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


/* WARNING: Removing unreachable block (ram,0x02fa7248) */

undefined8 FUN_02fa70cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_40;
  char local_34 [4];
  
  if ((DAT_0412ae22 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25f40);
    FUN_01ab69ac(PTR_DAT_03d26150);
    FUN_01ab69ac(PTR_DAT_03d25f88);
    FUN_01ab69ac(PTR_DAT_03d26158);
    FUN_01ab69ac(PTR_DAT_03d26160);
    DAT_0412ae22 = 1;
  }
  local_40 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar4,local_34,0);
  uVar1 = FUN_025be440(param_2,0);
  if ((uVar1 & 1) == 0) {
    plVar5 = (long *)(param_1 + 0x30);
    lVar2 = *plVar5;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d26160);
      FUN_0219a4f0(lVar2,*(undefined8 *)PTR_DAT_03d26158);
      *plVar5 = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar2);
      lVar2 = *plVar5;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    uVar1 = FUN_0219f8b8(lVar2,param_2,&local_40,*(undefined8 *)PTR_DAT_03d25f88);
    uVar3 = local_40;
    if ((uVar1 & 1) == 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d25f40);
      FUN_02fa5b00(uVar3,param_1,param_2);
      local_40 = uVar3;
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b9a4(*plVar5,param_2,uVar3,*(undefined8 *)PTR_DAT_03d26150);
      uVar3 = local_40;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return uVar3;
}



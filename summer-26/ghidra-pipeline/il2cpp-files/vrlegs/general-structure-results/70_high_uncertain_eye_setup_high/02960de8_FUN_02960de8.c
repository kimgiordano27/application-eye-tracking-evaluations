/*
FUNCTION_NAME: FUN_02960de8
ENTRY_POINT: 02960de8
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


/* WARNING: Removing unreachable block (ram,0x02960f18) */
/* WARNING: Removing unreachable block (ram,0x02960f78) */

void FUN_02960de8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char local_24 [4];
  
  if ((DAT_04127b3b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03d06138);
    FUN_01ab69ac(PTR_DAT_03d06140);
    FUN_01ab69ac(PTR_DAT_03d06148);
    DAT_04127b3b = 1;
  }
  plVar4 = (long *)(param_1 + 0x10);
  if (*plVar4 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036772fc(*(undefined8 *)PTR_DAT_03d06148,0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar5,local_24,0);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *(long *)PTR_DAT_03d06138;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02ecdaa0(*plVar4,0);
    *plVar4 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367a6ec(*(undefined8 *)PTR_DAT_03d06140,0);
  }
  return;
}



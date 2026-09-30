/*
FUNCTION_NAME: FUN_026e2278
ENTRY_POINT: 026e2278
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026e2418) */
/* WARNING: Removing unreachable block (ram,0x026e24cc) */

void FUN_026e2278(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  char local_34 [4];
  
  if ((DAT_041246a7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03cc12b8);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_041246a7 = 1;
  }
  puVar1 = PTR_DAT_03cbfb98;
  local_34[0] = '\0';
  if ((param_3 & 1) == 0) {
    if (param_2 < 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cdbaf0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf5c08);
      FUN_026ade84(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf7330);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar3 = FUN_0276c0cc(param_2,8,0);
    puVar2 = PTR_DAT_03cc12b8;
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)PTR_DAT_03cc12b8;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar2;
      }
      plVar9 = *(long **)(lVar5 + 0xb8);
      if (*plVar9 != 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
        }
        lVar10 = plVar9[1];
        local_34[0] = '\0';
        FUN_027e0bd8(lVar10,local_34,0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar2;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
        if (lVar8 != 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
          }
          *(long *)(param_1 + 0x28) = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
        }
        if (local_34[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
        }
      }
    }
    plVar9 = (long *)(param_1 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_01ab6a94(*(undefined8 *)puVar1,iVar3);
      *plVar9 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar5);
    }
    else {
      FUN_02793a34(*plVar9,0,iVar3,0);
    }
  }
  else {
    uVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,1);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  return;
}



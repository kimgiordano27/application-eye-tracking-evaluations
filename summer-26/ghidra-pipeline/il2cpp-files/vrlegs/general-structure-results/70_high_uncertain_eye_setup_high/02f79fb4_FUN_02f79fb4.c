/*
FUNCTION_NAME: FUN_02f79fb4
ENTRY_POINT: 02f79fb4
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


/* WARNING: Removing unreachable block (ram,0x02f7a14c) */

long FUN_02f79fb4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_34 [4];
  
  if ((DAT_0412acd8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03d25228);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412acd8 = 1;
  }
  plVar6 = (long *)(param_1 + 0x18);
  if (*plVar6 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_02787b20(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      local_34[0] = '\0';
      FUN_027e0bd8(param_1,local_34,0);
      if (*plVar6 == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,0);
        if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0271c480(0);
        lVar4 = FUN_02799ae0(uVar8,0x234,0,uVar7,uVar3,0);
        puVar1 = PTR_DAT_03d25228;
        if (lVar4 == 0) {
          lVar5 = 0;
          *plVar6 = 0;
        }
        else {
          uVar7 = *(undefined8 *)PTR_DAT_03d25228;
          lVar5 = thunk_FUN_01a89d6c(lVar4,uVar7);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar4,uVar7);
          }
          *plVar6 = lVar5;
          uVar7 = *(undefined8 *)puVar1;
          lVar5 = thunk_FUN_01a89d6c(lVar4,uVar7);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar4,uVar7);
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar5);
      }
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
      }
    }
  }
  return *plVar6;
}



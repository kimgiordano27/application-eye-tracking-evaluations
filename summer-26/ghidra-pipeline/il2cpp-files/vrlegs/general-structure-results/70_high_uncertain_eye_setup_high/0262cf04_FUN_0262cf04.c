/*
FUNCTION_NAME: FUN_0262cf04
ENTRY_POINT: 0262cf04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262d1ec) */

void FUN_0262cf04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_44;
  undefined1 local_40 [16];
  char local_28 [4];
  undefined4 local_24;
  
  puVar2 = PTR_DAT_03cf22a8;
  if ((DAT_04123fce & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed58);
    FUN_01ab69ac(PTR_DAT_03cf22a8);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(PTR_DAT_03cbfeb8);
    FUN_01ab69ac(PTR_DAT_03cc3500);
    FUN_01ab69ac(PTR_DAT_03cf2700);
    FUN_01ab69ac(PTR_DAT_03cc16b8);
    DAT_04123fce = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24 = 0;
  local_28[0] = '\0';
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_44 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  if (*(long *)(lVar6 + 0x18) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    local_28[0] = '\0';
    FUN_027e0bd8(uVar7,local_28,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbed58 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      local_40 = FUN_02760d74(0);
      lVar3 = FUN_02763ab8(local_40,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar4 = FUN_025c06b0(lVar3,0x2d,0x5f,0);
      uVar4 = FUN_025b1328(uVar4,*(undefined8 *)PTR_DAT_03cc16b8,0);
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      *puVar5 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
    }
    if (local_28[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_03cbfcb0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  local_24 = FusionStats__get_GraphColorBad(*(long *)(lVar3 + 0xb8) + 0x28,0);
  lVar3 = FUN_01ab6a94(*(undefined8 *)puVar1,5);
  puVar1 = PTR_DAT_03cbfeb8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar3 + 0x20));
    local_44 = thunk_FUN_01a4a380(0);
    uVar7 = FUN_027679d0(&local_44,*(undefined8 *)puVar1,0);
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar3 + 0x28),uVar7);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_03cc3500;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar3 + 0x30));
        uVar7 = FUN_0276793c(&local_24,0);
        if (3 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x38) = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar3 + 0x38),uVar7);
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_03cf2700;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            FUN_025be564(lVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}



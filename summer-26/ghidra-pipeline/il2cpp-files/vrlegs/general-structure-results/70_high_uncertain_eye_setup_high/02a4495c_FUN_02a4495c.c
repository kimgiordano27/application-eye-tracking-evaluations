/*
FUNCTION_NAME: FUN_02a4495c
ENTRY_POINT: 02a4495c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a44ad0) */

void FUN_02a4495c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char local_58 [4];
  undefined4 local_54;
  long local_48;
  
  if ((DAT_0412827c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d0c278);
    FUN_01ab69ac(PTR_DAT_03d0c280);
    DAT_0412827c = 1;
  }
  local_54 = 0;
  local_58[0] = '\0';
  lVar3 = FUN_027df29c(0);
  puVar2 = PTR_DAT_03d0c278;
  if (lVar3 == *(long *)(param_1 + 0x18)) {
    lVar3 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      local_58[0] = '\0';
      FUN_027e0bd8(uVar7,local_58,0);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(lVar4 + 0x20);
      if (iVar1 < 1) {
        iVar8 = 10;
      }
      else {
        FUN_022661a4(lVar4,&local_48,*(undefined8 *)puVar2);
        iVar8 = 0xb;
        lVar3 = local_48;
      }
      if (local_58[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
      }
      if ((iVar8 != 0xb) && (iVar8 != 0)) {
        return;
      }
      if (lVar3 == 0) break;
      uVar7 = FUN_02a44900(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      *(undefined8 *)(lVar3 + 0x30) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar3 + 0x30),uVar7);
      *(undefined1 *)(lVar3 + 0x20) = 1;
      if (iVar1 < 1) {
        return;
      }
    }
  }
  else {
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbfcb0);
    lVar3 = FUN_01ab6a94(uVar7,7);
    plVar5 = (long *)thunk_FUN_01a5dd74(param_1,0);
    uVar7 = 0;
    if (plVar5 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar3 + 0x20));
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc3930);
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d0c288);
          if ((*(byte *)(lVar4 + 0x53) >> 1 & 1) != 0) {
            lVar4 = thunk_FUN_01a6b8f4();
          }
          plVar5 = (long *)FUN_01ab6990(lVar4,*(undefined8 *)(lVar4 + 0x20));
          if (plVar5 == (long *)0x0) goto LAB_02a44b18;
          uVar7 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = uVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar3 + 0x30),uVar7);
            uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d0c290);
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x38) = uVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_02a44b18;
              local_54 = FUN_027e32ac(*(long *)(param_1 + 0x18),0);
              uVar7 = FUN_0276793c(&local_54,0);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = uVar7;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar3 + 0x40),uVar7);
                uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d0c298);
                if (5 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x48) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar4 = FUN_027df29c(0);
                  if (lVar4 != 0) {
                    local_54 = FUN_027e32ac(lVar4,0);
                    uVar7 = FUN_0276793c(&local_54,0);
                    FUN_018795ac(lVar3,6,uVar7);
                    uVar7 = FUN_025be564(lVar3,0);
                    thunk_FUN_01a6ca08(PTR_DAT_03cf3be0);
                    uVar6 = thunk_FUN_01a89e68();
                    FUN_02683044(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d0c288);
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar6,uVar7);
                  }
                  goto LAB_02a44b18;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_02a44b18:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



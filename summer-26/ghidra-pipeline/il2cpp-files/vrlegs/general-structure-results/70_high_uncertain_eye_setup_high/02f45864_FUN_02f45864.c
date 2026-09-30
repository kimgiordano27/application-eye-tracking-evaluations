/*
FUNCTION_NAME: FUN_02f45864
ENTRY_POINT: 02f45864
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f45bb0) */
/* WARNING: Removing unreachable block (ram,0x02f45ba8) */

long FUN_02f45864(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  char local_34 [4];
  
  puVar2 = PTR_DAT_03d23cb8;
  if ((DAT_0412ab1d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfb838);
    FUN_01ab69ac(PTR_DAT_03ce45f0);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03d23cb8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ab1d = 1;
  }
  lVar3 = *(long *)puVar2;
  local_34[0] = '\0';
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x78);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar7,local_34,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    thunk_FUN_01a4b338();
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(uVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *puVar5 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cfb838;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = (**(code **)(*plVar8 + 0x308))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x310));
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x78);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar7,local_34,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x30);
    thunk_FUN_01a4b338();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = (**(code **)(*plVar8 + 0x308))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x310));
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)PTR_DAT_03ce45f0;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_0277b678(uVar4,0);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar4,uVar4);
      }
      lVar3 = (**(code **)(*param_1 + 0x278))(param_1,uVar4,0,*(undefined8 *)(*param_1 + 0x280));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = FUN_01ab6a94(*(undefined8 *)puVar1,*(undefined4 *)(lVar3 + 0x18));
      FUN_02793c34(lVar3,lVar6,0,0);
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x30);
      thunk_FUN_01a4b338();
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar8 + 0x318))(plVar8,param_1,lVar6,*(undefined8 *)(*plVar8 + 800));
    }
    else {
      uVar4 = *(undefined8 *)puVar1;
      lVar6 = thunk_FUN_01a89d6c(lVar3,uVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar3,uVar4);
      }
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
  }
  else {
    uVar7 = *(undefined8 *)puVar1;
    lVar6 = thunk_FUN_01a89d6c(lVar3,uVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar3,uVar7);
    }
  }
  return lVar6;
}



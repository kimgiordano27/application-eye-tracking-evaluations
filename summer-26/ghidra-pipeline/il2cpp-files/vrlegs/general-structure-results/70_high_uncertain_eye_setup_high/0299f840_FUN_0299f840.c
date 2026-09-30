/*
FUNCTION_NAME: FUN_0299f840
ENTRY_POINT: 0299f840
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

bool FUN_0299f840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  char local_68 [4];
  char local_64 [4];
  
  if ((DAT_04127d37 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cca1f8);
    FUN_01ab69ac(PTR_DAT_03d08030);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03d07ca8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cc9f98);
    FUN_01ab69ac(PTR_DAT_03cc0b80);
    FUN_01ab69ac(PTR_DAT_03d08038);
    FUN_01ab69ac(PTR_DAT_03d08040);
    DAT_04127d37 = 1;
  }
  local_68[0] = '\0';
  local_70 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0xd8);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar8,local_64,0);
  uVar9 = *(undefined8 *)(param_1 + 0xd0);
  local_68[0] = '\0';
  FUN_027e0bd8(uVar9,local_68,0);
  if ((*(long *)(param_1 + 200) == 0) || (*(char *)(*(long *)(param_1 + 200) + 0x40) == '\0')) {
    if (param_5 == 0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x100,0);
      *(undefined8 *)(param_1 + 0x90) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x90),0);
      *(undefined1 *)(param_1 + 0x8d) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    FUN_0299f6e4(param_1);
    plVar10 = *(long **)(param_1 + 200);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    *(undefined1 *)(param_1 + 0x7c) = 0;
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0x30);
    *puVar3 = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,param_2);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0x38);
    *puVar3 = param_3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,param_3);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0xb0);
    *puVar3 = param_4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,param_4);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar10 = (long *)(*(long *)(param_1 + 200) + 0xa0);
    *plVar10 = param_5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,param_5);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0xa8);
    *puVar3 = param_6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,param_6);
    local_70 = 0;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_88 = CONCAT71(local_88._1_7_,*(undefined1 *)(param_1 + 0x84));
    uVar6 = FUN_0219f8b8(*(long *)(param_1 + 0x30),&local_88,&local_70,
                         *(undefined8 *)PTR_DAT_03d08030);
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = local_70;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar5 = *(long *)(param_1 + 200);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar13 = *(long *)(param_1 + 200);
      if ((lVar13 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar4 == 0)) {
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar10[4] = lVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,lVar13);
      plVar10 = (long *)FUN_0279a64c(uVar12,plVar10,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (plVar10 == (long *)0x0) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
      }
      else {
        lVar13 = *(long *)PTR_DAT_03d07ca8;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar1 - 1) * 8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar10);
        }
        *(long **)(lVar5 + 0x28) = plVar10;
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar1 - 1) * 8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar10);
        }
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar5 + 0x28,plVar10);
      plVar10 = *(long **)(param_1 + 200);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = (**(code **)(*plVar10 + 0x1a8))
                        (plVar10,param_2,param_3,param_4,param_5,*(undefined8 *)(*plVar10 + 0x1b0));
      uVar2 = uVar2 & 1;
      goto LAB_0299fc64;
    }
    lVar5 = *(long *)(param_1 + 200);
    local_78 = *(undefined1 *)(param_1 + 0x84);
    local_88 = *(undefined8 *)PTR_DAT_03cca1f8;
    uStack_80 = 0xffffffffffffffff;
    uVar12 = FUN_027a62b8(&local_88,0);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_03cc9f98 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_029bc5e8(uVar11,0,0);
    uVar12 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d08040,uVar12,*(undefined8 *)PTR_DAT_03cc0b80,
                          uVar11,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0298e564(lVar5,1,uVar12,0);
  }
  else {
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_03d08038;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cca060) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0299fc08;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cca060,0);
LAB_0299fc08:
    (*(code *)*puVar3)(plVar10,2,uVar12,puVar3[1]);
  }
  uVar2 = 0;
LAB_0299fc64:
  if (local_68[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  return uVar2 != 0;
}



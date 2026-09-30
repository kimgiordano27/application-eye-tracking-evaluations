/*
FUNCTION_NAME: FUN_0299b4d0
ENTRY_POINT: 0299b4d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0299b970) */

uint FUN_0299b4d0(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char local_48 [4];
  undefined1 local_44 [4];
  
  if ((DAT_04127d1d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cca980);
    FUN_01ab69ac(PTR_DAT_03cca528);
    FUN_01ab69ac(PTR_DAT_03cca530);
    FUN_01ab69ac(PTR_DAT_03d07ec8);
    FUN_01ab69ac(PTR_DAT_03d07e58);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03d07e10);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03d07ed0);
    DAT_04127d1d = 1;
  }
  local_48[0] = '\0';
  plVar14 = param_1 + 0x1e;
  plVar15 = (long *)*plVar14;
  *(undefined1 *)((long)param_1 + 0xdd) = 0;
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0299b5e0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)PTR_DAT_03cbed08,0);
LAB_0299b5e0:
    (*(code *)*puVar6)(plVar15,puVar6[1]);
    *plVar14 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,0);
  }
  puVar2 = PTR_DAT_03cbe5e8;
  if (param_1[2] == 0) goto LAB_0299baec;
  uVar7 = FUN_0299f3f0(param_1[2],0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_03d07e58;
  uVar12 = FUN_02787b20(uVar7,0,0);
  if ((uVar12 & 1) == 0) {
LAB_0299b774:
    if (*plVar14 == 0) {
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d07ec8);
      FUN_029c6d00(lVar10,0);
      *plVar14 = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar10);
    }
  }
  else {
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = FUN_0299f3f0(param_1[2],0);
    lVar10 = FUN_0279a67c(uVar7,0);
    if (lVar10 == 0) {
      lVar8 = 0;
      *plVar14 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_01a89d6c(lVar10,uVar7);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,uVar7);
      }
      *plVar14 = lVar8;
      uVar7 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_01a89d6c(lVar10,uVar7);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,uVar7);
      }
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar8);
    if (*plVar14 == 0) {
      lVar10 = param_1[2];
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar16 = *(long **)(lVar10 + 0x48);
      plVar15 = (long *)FUN_0299f3f0(lVar10,0);
      uVar7 = *(undefined8 *)PTR_DAT_03d07ed0;
      if (plVar15 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
      }
      uVar7 = FUN_025b1328(uVar7,uVar9,0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca060) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0299b760;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cca060,0);
LAB_0299b760:
      (*(code *)*puVar6)(plVar16,2,uVar7,puVar6[1]);
      goto LAB_0299b774;
    }
  }
  puVar4 = PTR_DAT_03d07e10;
  puVar3 = PTR_DAT_03cca980;
  lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cca530);
  FUN_0219a508(lVar10,1,*(undefined8 *)puVar3);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar4;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar1 = **(undefined1 **)(lVar8 + 0xb8);
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0299b848;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)puVar2,0);
LAB_0299b848:
    uVar7 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    if (lVar10 != 0) {
      local_44[0] = uVar1;
      FUN_0219b83c(lVar10,local_44,uVar7,*(undefined8 *)PTR_DAT_03cca528);
      if (param_2 == 0) {
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar4;
        }
        uVar7 = FUN_02999fa4(param_1,*(undefined1 *)(*(long *)(lVar8 + 0xb8) + 3),lVar10,6,0);
        uVar5 = (**(code **)(*param_1 + 0x208))(param_1,uVar7,1,*(undefined8 *)(*param_1 + 0x210));
      }
      else {
        local_48[0] = '\0';
        FUN_027e0bd8(param_2,local_48,0);
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar4;
        }
        uVar7 = FUN_02999fa4(param_1,*(undefined1 *)(*(long *)(lVar8 + 0xb8) + 3),lVar10,6,0);
        uVar5 = (**(code **)(*param_1 + 0x208))(param_1,uVar7,1,*(undefined8 *)(*param_1 + 0x210));
        if (local_48[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(param_2,0);
        }
      }
      return uVar5 & 1;
    }
  }
LAB_0299baec:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



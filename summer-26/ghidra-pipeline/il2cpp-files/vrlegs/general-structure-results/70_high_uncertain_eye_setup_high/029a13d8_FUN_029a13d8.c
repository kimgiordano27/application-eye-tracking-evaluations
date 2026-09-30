/*
FUNCTION_NAME: FUN_029a13d8
ENTRY_POINT: 029a13d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a1538) */

uint FUN_029a13d8(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  char local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_38;
  
  local_44[0] = param_2;
  local_38 = param_4;
  if ((DAT_04127d3c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079f0);
    FUN_01ab69ac(PTR_DAT_03cca060);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(PTR_DAT_03ccad50);
    FUN_01ab69ac(PTR_DAT_03d080b0);
    FUN_01ab69ac(PTR_DAT_03d080b8);
    FUN_01ab69ac(PTR_DAT_03d080c0);
    FUN_01ab69ac(PTR_DAT_03d080c8);
    DAT_04127d3c = 1;
  }
  local_48[0] = '\0';
  lVar5 = *(long *)(param_1 + 200);
  if ((param_4 >> 0x20 & 1) == 0) {
    if (lVar5 == 0) goto LAB_029a1874;
  }
  else {
    if (lVar5 == 0) goto LAB_029a1874;
    if ((*(char *)(lVar5 + 0xdd) == '\0') && (*(char *)(lVar5 + 0x20) != '\x05')) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar9 = thunk_FUN_01a89e68();
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d080d0);
      FUN_026b274c(uVar9,uVar2,0);
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d080e0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,uVar2);
    }
  }
  if (*(char *)(lVar5 + 0x40) == '\x03') {
    if (((uint)(param_4 >> 0x28) & 0xff) < (uint)*(byte *)(param_1 + 0x6a)) {
      uVar9 = *(undefined8 *)(param_1 + 0xe0);
      local_48[0] = '\0';
      FUN_027e0bd8(uVar9,local_48,0);
      if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = FUN_0299a22c(*(long *)(param_1 + 200),local_44[0],param_3,2,local_38._4_1_ & 1,0);
      plVar3 = *(long **)(param_1 + 200);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(0,uVar2);
      }
      uVar1 = (**(code **)(*plVar3 + 0x208))(plVar3,uVar2,local_38,*(undefined8 *)(*plVar3 + 0x210))
      ;
      if (local_48[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      goto LAB_029a1858;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
      if (lVar5 == 0) goto LAB_029a1874;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_029a1878:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_03d080b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x20));
      uVar9 = FUN_026b7320((ulong)&local_38 | 5,0);
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_029a1878;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x28),uVar9);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_029a1878;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_03d080c0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x30));
      uVar9 = FUN_026b7320((byte *)(param_1 + 0x6a),0);
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_029a1878;
      *(undefined8 *)(lVar5 + 0x38) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x38),uVar9);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_029a1878;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_03ccad50;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar9 = FUN_025be564(lVar5,0);
      if (plVar3 == (long *)0x0) goto LAB_029a1874;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca060) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_029a17d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03cca060,0);
LAB_029a17d0:
      (*(code *)*puVar4)(plVar3,1,uVar9,puVar4[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) goto LAB_029a1874;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PTR_DAT_03cca060;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_029a1834;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      uVar9 = FUN_026b7320(local_44,0);
      if (*(long *)(param_1 + 200) == 0) goto LAB_029a1874;
      local_60 = *(undefined8 *)PTR_DAT_03d079f0;
      uStack_58 = 0xffffffffffffffff;
      local_50 = *(undefined1 *)(*(long *)(param_1 + 200) + 0x40);
      uVar2 = FUN_027a62b8(&local_60,0);
      uVar9 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d080c8,uVar9,*(undefined8 *)PTR_DAT_03d080b0,
                           uVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_029a1874;
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca060) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_029a176c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03cca060,0);
LAB_029a176c:
      (*(code *)*puVar4)(plVar3,1,uVar9,puVar4[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
LAB_029a1874:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PTR_DAT_03cca060;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_029a1834;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_01a472ec(plVar3,lVar5,2);
LAB_029a1844:
  (*(code *)*puVar4)(plVar3,0x406,puVar4[1]);
  uVar1 = 0;
LAB_029a1858:
  return uVar1 & 1;
LAB_029a1834:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
  goto LAB_029a1844;
}



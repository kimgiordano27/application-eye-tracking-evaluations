/*
FUNCTION_NAME: FUN_02c8f1f0
ENTRY_POINT: 02c8f1f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c8f78c) */
/* WARNING: Removing unreachable block (ram,0x02c8f57c) */
/* WARNING: Removing unreachable block (ram,0x02c8f7b8) */
/* WARNING: Removing unreachable block (ram,0x02c8f75c) */

undefined8 FUN_02c8f1f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char local_94 [4];
  long local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  
  puVar13 = (undefined8 *)PTR_DAT_03d17e58;
  puVar1 = PTR_DAT_03d17e10;
  if ((DAT_041295c3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d17e60);
    FUN_01ab69ac(PTR_DAT_03d17e68);
    FUN_01ab69ac(PTR_DAT_03d17e70);
    FUN_01ab69ac(PTR_DAT_03d17e78);
    FUN_01ab69ac(PTR_DAT_03d17e80);
    FUN_01ab69ac(PTR_DAT_03d17e88);
                    /* try { // try from 02c8f27c to 02d8f283 has its CatchHandler @ 02c8f32c */
    FUN_01ab69ac(PTR_DAT_03d17e90);
                    /* try { // try from 02c8f28c to 02d8f297 has its CatchHandler @ 02c8f328 */
    FUN_01ab69ac(PTR_DAT_03d17e98);
    FUN_01ab69ac(PTR_DAT_03d17ea0);
    FUN_01ab69ac(PTR_DAT_03d17ea8);
                    /* try { // try from 02c8f2ac to 02d8f2af has its CatchHandler @ 02c8f324 */
                    /* try { // try from 02c8f2b0 to 02d8f31b has its CatchHandler @ 02c8eecc */
    FUN_01ab69ac(PTR_DAT_03d17e58);
    FUN_01ab69ac(PTR_DAT_03d17eb0);
    FUN_01ab69ac(PTR_DAT_03d17eb8);
    FUN_01ab69ac(PTR_DAT_03d17ec0);
    FUN_01ab69ac(PTR_DAT_03d17e10);
    FUN_01ab69ac(PTR_DAT_03d17ec8);
    FUN_01ab69ac(PTR_DAT_03d17278);
    DAT_041295c3 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
                    /* try { // try from 02c8f31c to 02d8f31f has its CatchHandler @ 02c8f320 */
  local_94[0] = '\0';
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02c8f31c with catch @ 02c8f320
                       try { // try from 02c8f320 to 02d8f343 has its CatchHandler @ 02c8eecc */
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02c8f2ac with catch @ 02c8f324
                        */
  uStack_c8 = 0;
  local_d0 = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02c8f28c with catch @ 02c8f328
                        */
  local_f0 = 0;
  uStack_e8 = 0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02c8f27c with catch @ 02c8f32c
                        */
  local_e0 = 0;
  local_78 = 0;
  FUN_02207c1c(&local_90,param_1,param_2,*puVar13);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_03d17e70;
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar12 != 0) {
    local_120 = local_90;
    uStack_118 = uStack_88;
    uVar10 = FUN_0219f8b8(lVar12,&local_120,&local_78,*(undefined8 *)PTR_DAT_03d17e70);
    if ((uVar10 & 1) != 0) {
      return local_78;
    }
    lVar9 = *(long *)puVar1;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)puVar1;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
  local_94[0] = '\0';
  FUN_027e0bd8(uVar15,local_94,0);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar9);
    lVar9 = *(long *)puVar1;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar12 != 0) {
    local_120 = local_90;
    uStack_118 = uStack_88;
    uVar10 = FUN_0219f8b8(lVar12,&local_120,&local_78,*(undefined8 *)puVar2);
    if ((uVar10 & 1) != 0) goto LAB_02c8f734;
    lVar9 = *(long *)puVar1;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar9);
  }
  FUN_02c9056c(param_1);
  puVar2 = PTR_DAT_03d17ec8;
  if (lVar12 == 0) {
    lVar9 = *(long *)PTR_DAT_03d17ec8;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d17e90);
    FUN_0219a51c(lVar9,uVar14,*(undefined8 *)PTR_DAT_03d17e80);
  }
  else {
    iVar8 = FUN_0219b384(lVar12,*(undefined8 *)PTR_DAT_03d17e88);
    puVar2 = PTR_DAT_03d17ec8;
    lVar9 = *(long *)PTR_DAT_03d17ec8;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar9 + 0xb8);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d17e90);
    FUN_0219a538(lVar9,iVar8 + 1,uVar14,*(undefined8 *)PTR_DAT_03d17e78);
    FUN_0219c9c0(lVar12,&local_120,*(undefined8 *)PTR_DAT_03d17e68);
    puVar6 = PTR_DAT_03d17eb8;
    puVar5 = PTR_DAT_03d17eb0;
    puVar4 = PTR_DAT_03d17ea8;
    puVar3 = PTR_DAT_03d17ea0;
    puVar2 = PTR_DAT_03d17e60;
    uStack_c8 = uStack_118;
    local_d0 = local_120;
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    while (uVar10 = FUN_021bc4c4(&local_d0,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      FUN_01b5f1d8(&local_d0,&local_120,*(undefined8 *)puVar4);
      uStack_e8 = uStack_118;
      local_f0 = local_120;
      local_e0 = local_110;
      FUN_01b5f2c8(&local_f0,&local_120,*(undefined8 *)puVar5);
      uVar14 = uStack_118;
      lVar12 = local_120;
      FUN_01b5f3b4(&local_f0,&local_120,*(undefined8 *)puVar6);
      lVar7 = local_120;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_120 = lVar12;
      uStack_118 = uVar14;
      FUN_0219b9a4(lVar9,&local_120,lVar7,*(undefined8 *)puVar2);
    }
    FUN_021bca9c(&local_d0,*(undefined8 *)PTR_DAT_03d17e98);
    puVar13 = (undefined8 *)PTR_DAT_03d17e58;
  }
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d17278);
  FUN_02e5acd8(uVar14,0);
  local_130 = 0;
  uStack_128 = 0;
  FUN_02207c1c(&local_130,param_1,uVar14,*puVar13);
  puVar2 = PTR_DAT_03d17ec0;
  uStack_88 = uStack_128;
  local_90 = local_130;
  FUN_01b5f3b4(&local_90,&local_70,*(undefined8 *)PTR_DAT_03d17ec0);
  lVar12 = local_70;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar14 = FUN_02e56c20(param_2,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar13 = (undefined8 *)(lVar12 + 0x18);
  *puVar13 = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13);
  FUN_01b5f3b4(&local_90,&local_70,*(undefined8 *)puVar2);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_01b5f3b4(&local_90,&local_70,*(undefined8 *)puVar2);
  lVar12 = local_70;
  uVar14 = FUN_02e5ad20(param_2,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar13 = (undefined8 *)(lVar12 + 0x10);
  *puVar13 = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13);
  FUN_01b5f3b4(&local_90,&local_70,*(undefined8 *)puVar2);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined1 *)(local_70 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar1;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  auVar16 = FUN_02e70414(lVar12,param_1,param_2,0);
  local_78 = auVar16._0_8_;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(local_78,auVar16._8_8_,local_78);
  }
  local_70 = local_90;
  uStack_68 = uStack_88;
  FUN_0219b9a4(lVar9,&local_70,local_78,*(undefined8 *)PTR_DAT_03d17e60);
  plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *plVar11 = lVar9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar9);
LAB_02c8f734:
  if (local_94[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
  }
  return local_78;
}



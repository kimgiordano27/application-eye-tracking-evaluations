/*
FUNCTION_NAME: FUN_02ece5c4
ENTRY_POINT: 02ece5c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ecea14) */
/* WARNING: Removing unreachable block (ram,0x02ece96c) */
/* WARNING: Removing unreachable block (ram,0x02ece7fc) */
/* WARNING: Removing unreachable block (ram,0x02ece970) */
/* WARNING: Removing unreachable block (ram,0x02ecea90) */
/* WARNING: Removing unreachable block (ram,0x02ecea28) */

bool FUN_02ece5c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_70 [4];
  int local_6c;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_03ccaa88;
                    /* try { // try from 02ece5d4 to 02fce5eb has its CatchHandler @ 02ece65c */
                    /* try { // try from 02ece5ec to 02fce64b has its CatchHandler @ 02ece158 */
  if ((DAT_0412a738 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d20650);
    FUN_01ab69ac(PTR_DAT_03d08780);
    FUN_01ab69ac(PTR_DAT_03d08788);
    FUN_01ab69ac(PTR_DAT_03d08790);
    FUN_01ab69ac(PTR_DAT_03d087a0);
    FUN_01ab69ac(PTR_DAT_03d08748);
    FUN_01ab69ac(PTR_DAT_03d08750);
                    /* try { // try from 02ece64c to 02fce65b has its CatchHandler @ 02ece65c */
    FUN_01ab69ac(PTR_DAT_03d1f708);
    FUN_01ab69ac(PTR_DAT_03ccaa88);
    FUN_01ab69ac(PTR_DAT_03cc0ad8);
    FUN_01ab69ac(PTR_DAT_03d20658);
    FUN_01ab69ac(PTR_DAT_03d20660);
    DAT_0412a738 = 1;
  }
  local_70[0] = '\0';
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_6c = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02ec3158(uVar14,0,&local_6c,0);
  thunk_FUN_01a3c554(*(undefined8 *)(param_1 + 0x10),2,&local_6c,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    local_70[0] = '\0';
    FUN_027e0bd8(lVar8,local_70,0);
    puVar6 = PTR_DAT_03d087a0;
    puVar5 = PTR_DAT_03d08790;
    puVar4 = PTR_DAT_03d08788;
    puVar3 = PTR_DAT_03d08780;
    puVar2 = PTR_DAT_03d08750;
    iVar15 = 0;
    while( true ) {
      puVar7 = PTR_DAT_03d1f708;
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar9 + 0x18) < 1) break;
      if (iVar15 == 10) {
        lVar9 = *(long *)PTR_DAT_03d1f708;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)puVar7;
        }
        if (**(char **)(lVar9 + 0xb8) != '\0') {
          plVar12 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0ad8);
          FUN_025d4bdc(plVar12,0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_025d6b18(plVar12,*(undefined8 *)PTR_DAT_03d20660,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            Animancer_FadeGroup__get_TargetWeight
                      (*(long *)(param_1 + 0x20),&local_a8,*(undefined8 *)puVar6);
            puVar2 = PTR_DAT_03d20658;
            puVar1 = PTR_DAT_03d20650;
            uStack_88 = uStack_a0;
            local_90 = local_a8;
            local_80 = local_98;
            while( true ) {
              uVar11 = FUN_021b51c8(&local_90,*(undefined8 *)puVar4);
              if ((uVar11 & 1) == 0) {
                FUN_021b51c4(&local_90,*(undefined8 *)puVar3);
                FUN_025d6af8(plVar12,0);
                uVar14 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                uVar13 = thunk_FUN_01a89e68();
                FUN_027a794c(uVar13,uVar14,0);
                uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03d20668);
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar13,uVar14);
              }
              FUN_01b7a454(&local_90,&local_a8,*(undefined8 *)puVar5);
              plVar10 = local_a8;
              FUN_025d6b18(plVar12,*(undefined8 *)puVar2,0);
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_0219b634(*(long *)(param_1 + 0x28),plVar10,&local_a8,*(undefined8 *)puVar1);
              if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar14 = (**(code **)(*local_a8 + 0x168))(local_a8,*(undefined8 *)(*local_a8 + 0x170))
              ;
              FUN_025d6b18(plVar12,uVar14,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        break;
      }
      if (*(int *)(lVar9 + 0x18) == 1) {
        FUN_02215a88(lVar9,0,&local_a8,*(undefined8 *)puVar2);
        plVar12 = local_a8;
        plVar10 = (long *)FUN_027df29c(0);
        if (plVar12 == plVar10) break;
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      Animancer_FadeGroup__get_TargetWeight(lVar9,&local_a8,*(undefined8 *)puVar6);
      iVar15 = iVar15 + 1;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      while (uVar11 = FUN_021b51c8(&local_90,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
        FUN_01b7a454(&local_90,&local_68,*(undefined8 *)puVar5);
        uVar14 = local_68;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        thunk_FUN_01a3c9d0(uVar14,0);
      }
      FUN_021b51c4(&local_90,*(undefined8 *)puVar3);
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_027e1070(*(undefined8 *)(param_1 + 0x20),100,0);
    }
    if (local_70[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar8,0);
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  thunk_FUN_01a3b22c(uVar14,&local_6c,0);
  return local_6c == 0;
}



/*
FUNCTION_NAME: FUN_02f748e8
ENTRY_POINT: 02f748e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f74d28) */
/* WARNING: Removing unreachable block (ram,0x02f74cb0) */
/* WARNING: Removing unreachable block (ram,0x02f74c14) */
/* WARNING: Removing unreachable block (ram,0x02f74b5c) */
/* WARNING: Removing unreachable block (ram,0x02f74c34) */
/* WARNING: Removing unreachable block (ram,0x02f74d20) */

long * FUN_02f748e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  char local_54 [4];
  
  puVar3 = PTR_DAT_03d1fee8;
  if ((DAT_0412aca6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d24900);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d250a0);
    FUN_01ab69ac(PTR_DAT_03d25038);
                    /* try { // try from 02f74964 to 0307498b has its CatchHandler @ 02f74aec */
    DAT_0412aca6 = 1;
  }
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar4 = PTR_DAT_03d250a0;
  uVar6 = FUN_02f651a8();
  puVar2 = PTR_DAT_03cbeb18;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f660a0(param_1,0,*(undefined8 *)puVar4);
    plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)puVar2,1);
                    /* try { // try from 02f749c0 to 030749eb has its CatchHandler @ 02f74ae8 */
    if ((*(long *)(param_1 + 0x50) == 0) || (plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar7[4] = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar11);
    uVar9 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25038,plVar7,0);
                    /* try { // try from 02f74a20 to 03074a27 has its CatchHandler @ 02f74ae0 */
                    /* try { // try from 02f74a28 to 03074abf has its CatchHandler @ 02f748b4 */
    FUN_02f6520c(param_1,uVar9,*(undefined8 *)puVar4);
  }
  puVar2 = PTR_DAT_03d24900;
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24900);
    FUN_02f8321c(plVar7,param_1,param_3,param_2,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02f837d0(plVar7,*(undefined8 *)(param_1 + 0xe8),0);
    iVar5 = 4;
    plVar12 = plVar7;
    goto LAB_02f74c3c;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar9 = thunk_FUN_01a89e68();
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
    FUN_0276a4a8(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d250a8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar10);
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_026779dc(*(long *)(param_1 + 0xa8),0);
  }
  iVar5 = FUN_02f73644(param_1,1);
  plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                    /* try { // try from 02f74ac0 to 03074ac7 has its CatchHandler @ 02f74af0 */
                    /* try { // try from 02f74ac8 to 03074acb has its CatchHandler @ 02f74ae4 */
                    /* try { // try from 02f74acc to 03074acf has its CatchHandler @ 02f748b4 */
  FUN_02f8321c(plVar7,param_1,param_3,param_2,0);
                    /* try { // try from 02f74ad0 to 03074ad3 has its CatchHandler @ 02f74adc */
                    /* try { // try from 02f74ad4 to 03074b07 has its CatchHandler @ 02f748b4 */
  *(undefined1 *)(plVar7 + 10) = 3;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74ad0 with catch @ 02f74adc
                        */
  *(long **)(param_1 + 0x100) = plVar7;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74a20 with catch @ 02f74ae0
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74ac8 with catch @ 02f74ae4
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f749c0 with catch @ 02f74ae8
                        */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x100),plVar7);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74964 with catch @ 02f74aec
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74ac0 with catch @ 02f74af0
                        */
  if (iVar5 < 1) {
    uVar9 = FUN_02f64afc(plVar7,1);
    local_54[0] = '\0';
    FUN_027e0bd8(uVar9,local_54,0);
    FUN_02f73a88(param_1,1);
    FUN_02f64cc4(plVar7);
    if (local_54[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
    FUN_02f73644(param_1,0);
  }
  else {
    FUN_02f64afc(plVar7,1);
    FUN_02f64cc4(plVar7);
                    /* try { // try from 02f74b08 to 03074b0b has its CatchHandler @ 02f74b18 */
    if (iVar5 < 3) {
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      local_54[0] = '\0';
                    /* catch() { ... } // from try @ 02f74b08 with catch @ 02f74b18 */
                    /* try { // try from 02f74b20 to 03074b87 has its CatchHandler @ 02f74b9c */
      FUN_027e0bd8(uVar9,local_54,0);
      if (2 < *(int *)(param_1 + 0xd8)) {
        plVar7 = (long *)0x0;
      }
      if (local_54[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      if (plVar7 != (long *)0x0) goto LAB_02f74c24;
    }
    plVar7 = *(long **)(param_1 + 0x100);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar11 + 0x130);
                    /* try { // try from 02f74b88 to 03074b93 has its CatchHandler @ 02f748b4 */
                    /* try { // try from 02f74b94 to 03074b9b has its CatchHandler @ 02f74b9c */
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar7);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02f74b20 with catch @ 02f74b9c
                       catch(type#2 @ 00000000) { ... } // from try @ 02f74b94 with catch @ 02f74b9c
                        */
    uVar6 = FUN_02f8355c(plVar7,0);
    if ((uVar6 & 1) == 0) {
      FUN_02f837d8(plVar7,0);
    }
  }
LAB_02f74c24:
  plVar12 = (long *)0x0;
  iVar5 = 0xe;
LAB_02f74c3c:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02f651a8();
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54(param_1,0,*(undefined8 *)puVar4);
  }
  if ((iVar5 == 0xe) || (iVar5 == 0)) {
    plVar12 = plVar7;
  }
  return plVar12;
}



/*
FUNCTION_NAME: FUN_027dcd74
ENTRY_POINT: 027dcd74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027dd320) */
/* WARNING: Removing unreachable block (ram,0x027dd4d0) */

void FUN_027dcd74(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_58;
  char local_48 [4];
  char local_44 [4];
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027dcd58 with catch @ 027dcd94
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027dcd3c with catch @ 027dcd98
                        */
  if ((DAT_04125071 & 1) == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027dcd2c with catch @ 027dcd9c
                        */
    FUN_01ab69ac(PTR_DAT_03cfcde8);
    FUN_01ab69ac(PTR_DAT_03cfcdf0);
                    /* try { // try from 027dcdb4 to 028dcdcb has its CatchHandler @ 027dce4c */
    FUN_01ab69ac(PTR_DAT_03ccb578);
    FUN_01ab69ac(PTR_DAT_03ccb4c0);
                    /* try { // try from 027dcdcc to 028dce3b has its CatchHandler @ 027dccc8 */
    FUN_01ab69ac(PTR_DAT_03ccafc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cd9938);
    FUN_01ab69ac(PTR_DAT_03cfcdf8);
    FUN_01ab69ac(PTR_DAT_03cfce00);
    FUN_01ab69ac(PTR_DAT_03cd9940);
    FUN_01ab69ac(PTR_DAT_03cfce08);
    FUN_01ab69ac(PTR_DAT_03cd9948);
    FUN_01ab69ac(PTR_DAT_03cbed08);
                    /* try { // try from 027dce3c to 028dce4b has its CatchHandler @ 027dce4c */
    FUN_01ab69ac(PTR_DAT_03ccaf38);
                    /* catch() { ... } // from try @ 027dcdb4 with catch @ 027dce4c
                       catch() { ... } // from try @ 027dce3c with catch @ 027dce4c */
    FUN_01ab69ac(PTR_DAT_03cfce10);
                    /* try { // try from 027dce50 to 028dce53 has its CatchHandler @ 027dce5c */
                    /* try { // try from 027dce54 to 028dce5f has its CatchHandler @ 027dccc8 */
    FUN_01ab69ac(PTR_DAT_03cd9950);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027dce50 with catch @ 027dce5c
                        */
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125071 = 1;
  }
  puVar3 = PTR_DAT_03ccb4c0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_48[0] = '\0';
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  iVar15 = *param_1;
  lVar11 = *(long *)(param_1 + 0xe);
  if (iVar15 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    iVar15 = -1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_027dd0a8:
    FUN_02189a7c(local_70,&local_58,*(undefined8 *)PTR_DAT_03cfce00);
    plVar6 = (long *)(param_1 + 0x12);
    if (*plVar6 == local_58) {
      *plVar6 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,0);
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027d9d9c(lVar12);
      FUN_027da0c0(lVar12,0);
      bVar5 = true;
      iVar13 = 10;
      iVar1 = 10;
      if (iVar15 < 0) goto LAB_027dd460;
LAB_027dd120:
      iVar13 = iVar1;
      bVar2 = true;
    }
    else {
      bVar5 = false;
      iVar13 = 0xb;
      iVar1 = 0xb;
      if (-1 < iVar15) goto LAB_027dd120;
LAB_027dd460:
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 != (long *)0x0) {
        lVar12 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_027dd4bc;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_027dd4bc:
        (*(code *)*puVar9)(plVar6,puVar9[1]);
      }
      bVar2 = false;
    }
    if (iVar13 != 0xb) {
      if (iVar13 == 10) goto LAB_027dd2b8;
      if (iVar13 != 0) {
        return;
      }
    }
    piVar10 = param_1 + 0x10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x20);
    local_48[0] = '\0';
    FUN_027e0bd8(uVar14,local_48,0);
    uVar8 = FUN_027dc5a4(lVar11,*(undefined8 *)(param_1 + 10));
    if ((uVar8 & 1) == 0) {
      iVar15 = 0xd;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d7fa0(param_1 + 8);
      bVar5 = false;
      iVar15 = 10;
    }
    if (!bVar2 && local_48[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
    }
    if (iVar15 != 0xd) {
      if (iVar15 == 10) goto LAB_027dd2b8;
      if (iVar15 != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_80 = FUN_020a2c64(*(long *)(param_1 + 10),0,*(undefined8 *)PTR_DAT_03cd9950);
    uVar8 = FUN_02189a30(local_80,*(undefined8 *)PTR_DAT_03cd9948);
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_80;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(param_1 + 2,local_80,param_1,*(undefined8 *)PTR_DAT_03cfcdf0);
      return;
    }
  }
  else {
    if (iVar15 != 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar12 = *(long *)(param_1 + 8);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_01a89e68();
        thunk_FUN_01a4b338();
        *(undefined4 *)(lVar12 + 0x24) = 0xffffffff;
        FUN_027b3d9c(lVar12,0);
        thunk_FUN_01a4b338();
        *(undefined4 *)(lVar12 + 0x20) = 1;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03ccafc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar12 = FUN_027dae90(lVar12,0);
      }
      *(long *)(param_1 + 0x10) = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x10,lVar12);
      plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ccaf38,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *(long *)(param_1 + 10);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6[4] = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar12);
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = param_1[0xc];
      FUN_027d9d9c(lVar12);
      local_58 = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_58,lVar12);
      lVar12 = local_58;
      if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar12 = FUN_027f5f08(iVar1,lVar12,0);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,0);
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6[5] = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 5,lVar12);
      lVar12 = FUN_027f70cc(plVar6,0);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 10);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_70 = FUN_020a2c64(lVar12,0,*(undefined8 *)PTR_DAT_03cfce10);
      uVar8 = FUN_02189a30(local_70,*(undefined8 *)PTR_DAT_03cfce08);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x14,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(param_1 + 2,local_70,param_1,*(undefined8 *)PTR_DAT_03cfcde8);
        return;
      }
      goto LAB_027dd0a8;
    }
    local_80 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
    local_70 = ZEXT816(0);
  }
  FUN_02189a7c(local_80,local_44,*(undefined8 *)PTR_DAT_03cd9940);
  bVar5 = local_44[0] != '\0';
LAB_027dd2b8:
  *param_1 = -2;
  puVar4 = PTR_DAT_03ccb578;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  local_44[0] = bVar5;
  FUN_02145584(param_1 + 2,local_44,*(undefined8 *)puVar4);
  return;
}



/*
FUNCTION_NAME: FUN_02fa070c
ENTRY_POINT: 02fa070c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02fa0d00) */
/* WARNING: Removing unreachable block (ram,0x02fa0d4c) */

void FUN_02fa070c(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  char local_84 [4];
  undefined8 local_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  if ((DAT_0412adea & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25dc0);
    FUN_01ab69ac(PTR_DAT_03d25dc8);
    FUN_01ab69ac(PTR_DAT_03d25dd0);
    FUN_01ab69ac(PTR_DAT_03d25be0);
    FUN_01ab69ac(PTR_DAT_03d25dd8);
    FUN_01ab69ac(PTR_DAT_03d25de0);
    FUN_01ab69ac(PTR_DAT_03d25de8);
    FUN_01ab69ac(PTR_DAT_03d18b80);
    FUN_01ab69ac(PTR_DAT_03d1f860);
    FUN_01ab69ac(PTR_DAT_03d25df0);
    FUN_01ab69ac(PTR_DAT_03d25df8);
    FUN_01ab69ac(PTR_DAT_03d18a38);
    DAT_0412adea = 1;
  }
  local_84[0] = '\0';
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  iVar16 = *param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (iVar16 != 1) {
    if (iVar16 == 0) {
      local_a0 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x40);
      uVar12 = *(undefined8 *)(lVar10 + 0xa8);
      uVar14 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)(lVar10 + 0x78);
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d18b80);
      FUN_02fa0f9c(uVar3,uVar11,uVar12,uVar14,uVar15);
      piVar8 = param_1 + 0xe;
      *(undefined8 *)piVar8 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,uVar3);
      plVar5 = (long *)(param_1 + 0x10);
      *plVar5 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
      *(undefined2 *)(param_1 + 0x12) = 0;
      uVar3 = *(undefined8 *)(lVar10 + 0x128);
      local_84[0] = '\0';
      FUN_027e0bd8(uVar3,local_84,0);
      FUN_02f9ed84(&local_d0,lVar10,*(undefined8 *)piVar8);
      lVar7 = lStack_c8;
      *(byte *)(param_1 + 0x12) = (byte)local_d0 & 1;
      *(byte *)((long)param_1 + 0x49) = (byte)((ulong)local_d0 >> 8) & 1;
      *(undefined8 *)(param_1 + 0x10) = uStack_c0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
      if ((iVar16 < 0) && (local_84[0] != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      lVar9 = *plVar5;
      if (lVar9 == 0) {
        if (lVar7 != 0) {
          local_b0 = FUN_020a2c64(lVar7,0,*(undefined8 *)PTR_DAT_03d25df0);
          uVar4 = FUN_02189a30(local_b0,*(undefined8 *)PTR_DAT_03d25de8);
          if ((uVar4 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x18) = local_b0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x18,0);
            if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01f07574(param_1 + 2,local_b0,param_1,*(undefined8 *)PTR_DAT_03d25dc0);
            return;
          }
          goto LAB_02fa0978;
        }
        uVar3 = 0;
        goto LAB_02fa0998;
      }
      if (*(char *)((long)param_1 + 0x49) == '\0') goto LAB_02fa0d30;
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = FUN_02eb74c0(*(long *)(param_1 + 10),0,*(undefined8 *)(param_1 + 0xc),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_a0 = FUN_027e9a10(lVar10,0,0);
      uVar4 = FUN_026792ec(local_a0,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_a0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x14,0);
        if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(param_1 + 2,local_a0,param_1,*(undefined8 *)PTR_DAT_03d25dc8);
        return;
      }
    }
    FUN_02679308(local_a0,0);
    lVar9 = *(long *)(param_1 + 0x10);
LAB_02fa0d30:
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25e00);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(lVar9,uVar3);
  }
  local_b0 = *(undefined1 (*) [16])(param_1 + 0x18);
  iVar16 = -1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = -1;
LAB_02fa0978:
  FUN_02189a7c(local_b0,&local_d0,*(undefined8 *)PTR_DAT_03d25de0);
  uVar3 = local_d0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_02fa0998:
  uVar11 = *(undefined8 *)(lVar10 + 0x128);
  local_84[0] = '\0';
  FUN_027e0bd8(uVar11,local_84,0);
  lVar7 = *(long *)(lVar10 + 0xe8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (((*(char *)(lVar7 + 0x30) == '\0') || (*(char *)(lVar7 + 0x32) != '\0')) ||
     (plVar5 = *(long **)(lVar10 + 0xd8), plVar5 == (long *)0x0)) {
    uVar2 = 0;
  }
  else {
    lVar7 = *plVar5;
    uVar12 = *(undefined8 *)(lVar10 + 0x40);
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d1f860) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02fa0ce0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03d1f860,1);
LAB_02fa0ce0:
    uVar2 = (*(code *)*puVar6)(plVar5,uVar12,puVar6[1]);
    uVar2 = ~uVar2 & 1;
  }
  if ((char)param_1[0x12] == '\0') {
    lVar7 = 0x171;
    if (uVar2 != 0) {
      lVar7 = 0x181;
    }
    lVar9 = 0x174;
    if (uVar2 != 0) {
      lVar9 = 0x184;
    }
    if ((*(char *)(lVar10 + lVar7) != '\0') && (*(int *)(lVar10 + lVar9) != 0)) {
      plVar5 = *(long **)(param_1 + 0xe);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (iVar1 < 400) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*(long *)(param_1 + 10) + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined1 *)(lVar7 + 0x18) = 1;
      }
    }
    if (*(long *)(lVar10 + 0xf8) != 0) {
      FUN_02eb357c(*(long *)(lVar10 + 0xf8),0);
    }
    lStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    local_44[0] = 0;
    local_48[0] = 0;
    FUN_020fafcc(&local_d0,*(undefined8 *)(param_1 + 0xe),local_44,local_48,uVar3,0,
                 *(undefined8 *)PTR_DAT_03d25df8);
    uVar12 = 0;
    iVar13 = 0x14;
    iVar1 = 0x14;
    lStack_78 = lStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
  }
  else {
    if (*(char *)(lVar10 + 0xe0) != '\0') {
      *(undefined1 *)(lVar10 + 0xe0) = 0;
      if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02f7bee0(*(long *)(lVar10 + 0x90),*(undefined8 *)PTR_DAT_03d18a38,0);
    }
    uVar12 = FUN_02f9e5ac(lVar10,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe),uVar3,
                          *(undefined8 *)(param_1 + 0xc));
    iVar13 = 0x16;
    iVar1 = 0x16;
  }
  if ((iVar16 < 0) && (iVar1 = iVar13, local_84[0] != '\0')) {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  if (iVar1 != 0x16) {
    if (iVar1 == 0x14) goto LAB_02fa0b5c;
    if (iVar1 != 0) {
      return;
    }
  }
  local_58[0] = *(undefined1 *)((long)param_1 + 0x49);
  lStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_54[0] = 1;
  FUN_020fafcc(&local_d0,*(undefined8 *)(param_1 + 0xe),local_54,local_58,uVar3,uVar12,
               *(undefined8 *)PTR_DAT_03d25df8);
  lStack_78 = lStack_c8;
  local_80 = local_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
LAB_02fa0b5c:
  *param_1 = -2;
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,0);
  piVar8 = param_1 + 0x10;
  piVar8[0] = 0;
  piVar8[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,0);
  lStack_c8 = lStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lStack_e8 = lStack_c8;
  local_f0 = local_d0;
  uStack_d8 = uStack_b8;
  uStack_e0 = uStack_c0;
  FUN_02145584(param_1 + 2,&local_f0,*(undefined8 *)PTR_DAT_03d25dd0);
  return;
}



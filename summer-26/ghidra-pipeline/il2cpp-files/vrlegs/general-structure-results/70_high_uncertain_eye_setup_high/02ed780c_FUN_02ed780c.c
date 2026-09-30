/*
FUNCTION_NAME: FUN_02ed780c
ENTRY_POINT: 02ed780c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ed7b80) */
/* WARNING: Removing unreachable block (ram,0x02ed7f60) */

void FUN_02ed780c(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 local_68;
  undefined1 local_60 [16];
  char local_48 [4];
  int local_44;
  
  if ((DAT_0412a789 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d20938);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    FUN_01ab69ac(PTR_DAT_03cf0070);
    FUN_01ab69ac(PTR_DAT_03cd9660);
    FUN_01ab69ac(PTR_DAT_03cd9908);
    FUN_01ab69ac(PTR_DAT_03d20940);
    FUN_01ab69ac(PTR_DAT_03cd9918);
    FUN_01ab69ac(PTR_DAT_03cf78d0);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    DAT_0412a789 = 1;
  }
  puVar5 = PTR_DAT_03cc9270;
  local_48[0] = '\0';
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  iVar1 = *param_1;
  lVar12 = *(long *)(param_1 + 8);
  switch(iVar1) {
  case 0:
    local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_02ed78f4:
    FUN_02679308(local_60,0);
    break;
  case 1:
    local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_02ed796c:
    FUN_02679308(local_60,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
LAB_02ed797c:
    if (*(char *)(lVar12 + 0x18) != '\0') {
      auVar15 = FUN_02067350(lVar12 + 0x38,*(undefined8 *)PTR_DAT_03cd9908);
      uVar2 = *(uint *)(lVar12 + 0x88);
      uVar8 = *(ulong *)(param_1 + 0xc);
      lVar10 = *(long *)PTR_DAT_03cd9918;
      if ((auVar15._8_4_ < uVar2) || (auVar15._8_4_ - uVar2 < (uint)uVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      uVar13 = FUN_0200257c(auVar15._0_8_,uVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      iVar1 = param_1[0xe];
      if (*(int *)(*(long *)PTR_DAT_03cd9660 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02ed5aac(uVar13,uVar8 & 0xffffffff,iVar1,0);
    }
    puVar6 = PTR_DAT_03cd9908;
    auVar15 = FUN_02067350(lVar12 + 0x38,*(undefined8 *)PTR_DAT_03cd9908);
    if (auVar15._8_4_ <= *(uint *)(lVar12 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    bVar3 = *(byte *)(auVar15._0_8_ + (long)(int)*(uint *)(lVar12 + 0x88));
    auVar15 = FUN_02067350(lVar12 + 0x38,*(undefined8 *)puVar6);
    uVar2 = *(int *)(lVar12 + 0x88) + 1;
    if (auVar15._8_4_ <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    bVar4 = *(byte *)(auVar15._0_8_ + (long)(int)uVar2);
    uVar2 = (uint)CONCAT11(bVar3,bVar4);
    param_1[0x12] = uVar2;
    if (*(int *)(*(long *)PTR_DAT_03cd9660 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((3999 < uVar2 - 1000) ||
       (((4 < uVar2 - 0x3ef && (uVar2 < 3000)) && ((bVar4 & 0xfffc | (uint)bVar3 << 8) != 1000)))) {
      lVar10 = FUN_02ed5388(lVar12,0x3ea,2,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar14 = FUN_027e9a10(lVar10,0,0);
      local_60 = auVar14;
      uVar8 = FUN_026792ec(local_60,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f2e2b8(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d20938);
        return;
      }
      goto LAB_02ed7afc;
    }
    goto LAB_02ed7b08;
  case 2:
    local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_02ed7afc:
    FUN_02679308(local_60,0);
LAB_02ed7b08:
    puVar6 = PTR_DAT_03cd9660;
    if (*(long *)(param_1 + 0xc) < 3) {
LAB_02ed7b14:
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    else {
      lVar10 = *(long *)PTR_DAT_03cd9660;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)puVar6;
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      auVar15 = FUN_02067350(lVar12 + 0x38,*(undefined8 *)PTR_DAT_03cd9908);
      iVar1 = param_1[0xc];
      uVar2 = *(int *)(lVar12 + 0x88) + 2;
      lVar7 = *(long *)PTR_DAT_03cd9918;
      if ((auVar15._8_4_ < uVar2) || (auVar15._8_4_ - uVar2 < iVar1 - 2U)) {
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      lVar9 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      uVar13 = FUN_0200257c(auVar15._0_8_,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      auVar14 = FUN_0208fb8c(uVar13,iVar1 - 2U,*(undefined8 *)PTR_DAT_03cf78d0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar13 = System_IO_CStreamReader__ReadToEnd(lVar10,auVar14._0_8_,auVar14._8_8_,0);
      *(undefined8 *)(param_1 + 0x14) = uVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    iVar1 = param_1[0xc];
    *(int *)(lVar12 + 0x88) = *(int *)(lVar12 + 0x88) + iVar1;
    *(int *)(lVar12 + 0x8c) = *(int *)(lVar12 + 0x8c) - iVar1;
    break;
  case 3:
    local_60._8_8_ = *(undefined8 *)(param_1 + 0x18);
    local_60._0_8_ = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    FUN_02679308(local_60,0);
    goto LAB_02ed7b14;
  case 4:
    local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    goto LAB_02ed7dc0;
  default:
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar13 = *(undefined8 *)(lVar12 + 0x30);
    local_48[0] = '\0';
    FUN_027e0bd8(uVar13,local_48,0);
    *(undefined1 *)(lVar12 + 0x5e) = 1;
    if (*(int *)(lVar12 + 0x58) < 4) {
      *(undefined4 *)(lVar12 + 0x58) = 4;
    }
    if ((iVar1 < 0) && (local_48[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
    param_1[0x12] = 1000;
    *(undefined8 *)(param_1 + 0x14) = **(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar10 = *(long *)(param_1 + 0xc);
    if (lVar10 == 1) {
      lVar10 = FUN_02ed5388(lVar12,0x3ea,2,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_60 = FUN_027e9a10(lVar10,0,0);
      uVar8 = FUN_026792ec(local_60,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f2e2b8(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d20938);
        return;
      }
      goto LAB_02ed78f4;
    }
    if (1 < lVar10) {
      if (*(int *)(lVar12 + 0x8c) < lVar10) {
        lVar10 = FUN_02ed57c4(lVar12,lVar10,*(undefined8 *)(param_1 + 0x10),1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        local_60 = FUN_027e9a10(lVar10,0,0);
        uVar8 = FUN_026792ec(local_60,0);
        if ((uVar8 & 1) == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01f2e2b8(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d20938);
          return;
        }
        goto LAB_02ed796c;
      }
      goto LAB_02ed797c;
    }
  }
  local_44 = param_1[0x12];
  local_68 = 0;
  FUN_02241190(&local_68,&local_44,*(undefined8 *)PTR_DAT_03d20940);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar12 + 0x60) = local_68;
  *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)(param_1 + 0x14);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*(char *)(lVar12 + 0x18) == '\0') && (*(char *)(lVar12 + 0x5d) != '\0')) {
    lVar12 = FUN_02ed5134(lVar12,*(undefined8 *)(param_1 + 0x10));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar14 = FUN_027e9a10(lVar12,0,0);
    local_60 = auVar14;
    uVar8 = FUN_026792ec(local_60,0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d20938);
      return;
    }
LAB_02ed7dc0:
    FUN_02679308(local_60,0);
  }
  *param_1 = -2;
  piVar11 = param_1 + 0x14;
  piVar11[0] = 0;
  piVar11[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar11,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02679adc(param_1 + 2,0);
  return;
}



/*
FUNCTION_NAME: FUN_05d78a58
ENTRY_POINT: 05d78a58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


ulong FUN_05d78a58(long *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined8 local_1e0 [4];
  undefined8 local_1c0 [4];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_98;
  int local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  long local_70;
  undefined1 auStack_68 [24];
  
  puVar9 = local_1e0;
  if ((DAT_06dc3298 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff7e0);
    FUN_02d965b8(PTR_DAT_069fdca8);
    FUN_02d965b8(PTR_DAT_069ff7c8);
    FUN_02d965b8(PTR_DAT_069ff7d0);
    FUN_02d965b8(PTR_DAT_06a144d0);
    FUN_02d965b8(PTR_DAT_06a18280);
    FUN_02d965b8(PTR_DAT_069fca08);
    FUN_02d965b8(PTR_DAT_069fcde0);
    DAT_06dc3298 = 1;
  }
  puVar3 = PTR_DAT_069fb9c0;
  local_78 = 0;
  local_70 = 0;
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  if (param_1 == (long *)0x0) goto LAB_05d78fb0;
  lVar15 = *param_1;
  bVar1 = *(byte *)(*(long *)PTR_DAT_069fdca8 + 0x130);
  if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_069fdca8)) {
    uVar14 = FUN_05d780d8(param_2);
    uVar13 = FUN_05c64de8(param_1,uVar14,0);
    return uVar13;
  }
  if (lVar15 == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
    iVar2 = *param_2;
    if (2 < iVar2) {
      if (iVar2 == 3) {
        uVar13 = FUN_054e7658(param_1,&local_70,0);
        if ((uVar13 & 1) == 0) goto LAB_05d78fb0;
        bVar4 = local_70 == *(long *)(param_2 + 4);
        goto LAB_05d790ac;
      }
      if (iVar2 != 4) goto Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke;
      memcpy(auStack_e0,param_2,0x48);
      FUN_05d77f50(auStack_68,param_1);
      puVar9 = &local_100;
      uStack_f8 = uStack_c0;
      local_100 = local_c8;
      local_f0 = local_b8;
      goto LAB_05d78d44;
    }
    if (iVar2 != 1) {
      if (iVar2 != 2) goto Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke;
      uVar13 = FUN_054cfa18(param_1,&local_78,0);
      if ((uVar13 & 1) == 0) goto LAB_05d78fb0;
      uVar14 = local_78;
      uVar8 = *(undefined8 *)(param_2 + 2);
LAB_05d78cf8:
      uVar5 = Unity_Netcode_NetworkLog__Header(uVar14,uVar8,0);
      goto LAB_05d78fb4;
    }
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      uVar13 = thunk_FUN_0536b75c(param_1,*(undefined8 *)PTR_DAT_06a144d0,0);
      if ((uVar13 & 1) == 0) {
        uVar13 = thunk_FUN_0536b75c(param_1,*(undefined8 *)PTR_DAT_069ff7c8,0);
        puVar9 = (undefined8 *)PTR_DAT_069fcde0;
joined_r0x05d79054:
        if ((uVar13 & 1) == 0) {
          uVar13 = thunk_FUN_0536b75c(param_1,*puVar9,0);
          return uVar13;
        }
      }
    }
    else {
      uVar13 = thunk_FUN_0536b75c(param_1,*(undefined8 *)PTR_DAT_069fca08,0);
      if ((uVar13 & 1) == 0) {
        uVar13 = thunk_FUN_0536b75c(param_1,*(undefined8 *)PTR_DAT_069ff7d0,0);
        puVar9 = (undefined8 *)PTR_DAT_06a18280;
        goto joined_r0x05d79054;
      }
    }
    goto LAB_05d79138;
  }
Unity_Netcode_NetworkObject_OnOwnershipRequestedDelegateHandler__Invoke:
  if (lVar15 == *(long *)(PTR_DAT_069fb9c0 + 0x78)) {
    pfVar6 = (float *)thunk_FUN_02dd328c(param_1);
    fVar17 = *pfVar6;
    if (*param_2 == 2) {
      dVar19 = *(double *)(param_2 + 2);
      if (DAT_06dc32b3 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06dc32b3 = '\x01';
      }
      dVar18 = (double)fVar17;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      dVar16 = (double)FUN_054e90d8(ABS(dVar18),ABS(dVar19),0);
      dVar16 = (double)FUN_054e90d8(dVar16 * DAT_010fbee0,8,0);
      uVar5 = (uint)(ABS(dVar19 - dVar18) < dVar16);
      goto LAB_05d78fb4;
    }
    if (*param_2 == 4) {
      uVar14 = FUN_05d780d8(param_2);
      uVar13 = FUN_054fb124(uVar14,&local_7c,0);
      if ((uVar13 & 1) != 0) {
        uVar5 = FUN_05d7d920(fVar17,local_7c,0);
        goto LAB_05d78fb4;
      }
      goto LAB_05d78fb0;
    }
    lVar15 = *param_1;
  }
  if (lVar15 == *(long *)(puVar3 + 0x80)) {
    puVar7 = (undefined8 *)thunk_FUN_02dd328c(param_1);
    uVar14 = *puVar7;
    if (*param_2 == 2) {
      uVar13 = Unity_Netcode_NetworkLog__Header(uVar14,*(undefined8 *)(param_2 + 2),0);
      return uVar13;
    }
    if (*param_2 == 4) {
      uVar8 = FUN_05d780d8(param_2);
      uVar13 = FUN_054cfa18(uVar8,&local_88,0);
      uVar8 = local_88;
      if ((uVar13 & 1) != 0) goto LAB_05d78cf8;
      goto LAB_05d78fb0;
    }
    lVar15 = *param_1;
  }
  if (lVar15 == *(long *)(puVar3 + 0x48)) {
    piVar10 = (int *)FUN_02982d2c(param_1);
    iVar2 = *piVar10;
    if (*param_2 == 3) {
      bVar4 = *(long *)(param_2 + 4) == (long)iVar2;
    }
    else {
      if (*param_2 != 4) {
        lVar15 = *param_1;
        goto LAB_05d78b78;
      }
      uVar14 = FUN_05d780d8(param_2);
      uVar13 = FUN_054e5e7c(uVar14,&local_8c,0);
      if ((uVar13 & 1) == 0) goto LAB_05d78fb0;
      bVar4 = iVar2 == local_8c;
    }
  }
  else {
LAB_05d78b78:
    if (lVar15 == *(long *)(puVar3 + 0x68)) {
      plVar11 = (long *)FUN_02982d2c(param_1);
      lVar15 = *plVar11;
      if (*param_2 == 3) {
        local_98 = *(long *)(param_2 + 4);
      }
      else {
        if (*param_2 != 4) {
          lVar15 = *param_1;
          goto LAB_05d78b84;
        }
        uVar14 = FUN_05d780d8(param_2);
        uVar13 = FUN_054e7658(uVar14,&local_98,0);
        if ((uVar13 & 1) == 0) goto LAB_05d78fb0;
      }
      bVar4 = lVar15 == local_98;
    }
    else {
LAB_05d78b84:
      if (lVar15 != *(long *)(puVar3 + 0x28)) {
LAB_05d78b90:
        bVar1 = *(byte *)(*(long *)(puVar3 + 0x98) + 0x130);
        if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar3 + 0x98)))
        {
          if (*param_2 == 4) {
            memcpy(auStack_e0,param_2,0x48);
            uVar14 = thunk_FUN_02da6564(param_1,0);
            if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar3 + 0x98));
            }
            FUN_0551b994(uVar14,param_1,0);
            FUN_05d77f50(auStack_68);
LAB_05d78d44:
            uVar5 = FUN_05d77c88(puVar9,auStack_68);
            goto LAB_05d78fb4;
          }
          if (*param_2 == 3) {
            if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar15 = FUN_0545e1e4(param_1,0);
            bVar4 = lVar15 == *(long *)(param_2 + 4);
            goto LAB_05d790ac;
          }
        }
LAB_05d78fb0:
        uVar5 = 0;
        goto LAB_05d78fb4;
      }
      pbVar12 = (byte *)FUN_02982d2c(param_1);
      if (*param_2 != 1) {
        if (*param_2 != 4) {
          lVar15 = *param_1;
          goto LAB_05d78b90;
        }
        if (*pbVar12 == 0) {
          memcpy(auStack_e0,param_2,0x48);
          FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_069ff7c8);
          uStack_178 = uStack_c0;
          local_180 = local_c8;
          local_170 = local_b8;
          uVar13 = FUN_05d77c88(&local_180,auStack_68);
          if ((uVar13 & 1) == 0) {
            memcpy(auStack_e0,param_2,0x48);
            FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_06a144d0);
            uStack_198 = uStack_c0;
            local_1a0 = local_c8;
            local_190 = local_b8;
            uVar13 = FUN_05d77c88(&local_1a0,auStack_68);
            if ((uVar13 & 1) == 0) {
              memcpy(auStack_e0,param_2,0x48);
              FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_069fcde0);
              puVar9 = local_1c0;
              goto LAB_05d78d44;
            }
          }
        }
        else {
          memcpy(auStack_e0,param_2,0x48);
          FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_069ff7d0);
          uStack_118 = uStack_c0;
          local_120 = local_c8;
          local_110 = local_b8;
          uVar13 = FUN_05d77c88(&local_120,auStack_68);
          if ((uVar13 & 1) == 0) {
            memcpy(auStack_e0,param_2,0x48);
            FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_069fca08);
            uStack_138 = uStack_c0;
            local_140 = local_c8;
            local_130 = local_b8;
            uVar13 = FUN_05d77c88(&local_140,auStack_68);
            if ((uVar13 & 1) == 0) {
              memcpy(auStack_e0,param_2,0x48);
              FUN_05d77f50(auStack_68,*(undefined8 *)PTR_DAT_06a18280);
              puVar9 = local_160;
              goto LAB_05d78d44;
            }
          }
        }
LAB_05d79138:
        uVar5 = 1;
        goto LAB_05d78fb4;
      }
      bVar4 = *pbVar12 == (*(byte *)(param_2 + 1) & 1);
    }
  }
LAB_05d790ac:
  uVar5 = (uint)bVar4;
LAB_05d78fb4:
  return (ulong)(uVar5 & 1);
}



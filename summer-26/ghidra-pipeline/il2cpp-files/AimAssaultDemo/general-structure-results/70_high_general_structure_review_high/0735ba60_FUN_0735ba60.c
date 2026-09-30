/*
FUNCTION_NAME: FUN_0735ba60
ENTRY_POINT: 0735ba60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_7;strong_file_logging_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0735be3c) */

void FUN_0735ba60(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_08269100 & 1) == 0) {
    FUN_0373b518(Hostage_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_0373b518(PTR_DAT_07d863e8);
    FUN_0373b518(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_0373b518(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_0373b518(SteamAudio_HRTF_TypeInfo);
    DAT_08269100 = 1;
  }
  puVar6 = System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  local_d0 = FUN_0738b640(*(long *)(param_1 + 0x20),2,0);
  uVar13 = local_d0._8_8_;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar8 = FUN_06243eac(uVar3,uVar13 & 0xffffffff,0);
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo;
  puVar5 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  lVar12 = *(long *)(param_1 + 0x28);
  uVar13 = (ulong)uVar8;
  bVar7 = lVar12 == 0;
  if (0 < (int)uVar8) {
    lVar15 = 0;
    iVar14 = 0;
    do {
      if (bVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_048e45e0(&local_90,lVar12,iVar14,*(undefined8 *)puVar5);
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      uStack_a8 = uStack_78;
      local_b0 = uStack_80;
      uStack_98 = uStack_68;
      local_a0 = local_70;
      puVar2 = (undefined8 *)(local_d0._0_8_ + lVar15);
      local_1d0 = puVar2[4];
      uStack_1e8 = puVar2[1];
      local_1f0 = *puVar2;
      uStack_1d8 = puVar2[3];
      local_1e0 = puVar2[2];
      uStack_118 = uStack_78;
      local_120 = uStack_80;
      uStack_108 = uStack_68;
      uStack_110 = local_70;
      uStack_128 = uStack_88;
      local_130 = local_90;
      local_160 = local_1f0;
      uStack_158 = uStack_1e8;
      uStack_150 = local_1e0;
      uStack_148 = uStack_1d8;
      local_140 = local_1d0;
      FUN_07370d24(&local_90,&local_130,&local_160,0);
      uStack_188 = uStack_88;
      local_190 = local_90;
      uStack_178 = uStack_78;
      uStack_180 = uStack_80;
      uStack_168 = uStack_68;
      local_170 = local_70;
      FUN_048e4648(lVar12,iVar14,&local_90,*(undefined8 *)puVar4);
      lVar12 = *(long *)(param_1 + 0x28);
      lVar15 = lVar15 + 0x28;
      iVar14 = iVar14 + 1;
      bVar7 = lVar12 == 0;
    } while (uVar13 * 0x28 - lVar15 != 0);
  }
  puVar4 = Hostage_TypeInfo;
  if (!bVar7) {
    if ((int)uVar8 < *(int *)(lVar12 + 0x18)) {
      do {
        FUN_048e45e0(&local_90,lVar12,uVar13,*(undefined8 *)puVar5);
        uStack_f8 = uStack_88;
        local_100 = local_90;
        uStack_e8 = uStack_78;
        local_f0 = uStack_80;
        uStack_d8 = uStack_68;
        local_e0 = local_70;
        FUN_07372254(&local_100,0);
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar12 + 0x18));
      FUN_048e658c(lVar12,uVar8,*(int *)(lVar12 + 0x18) - uVar8,
                   *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    }
    else if ((*(int *)(lVar12 + 0x18) < (int)local_d0._8_4_) && ((int)uVar8 < (int)local_d0._8_4_))
    {
      lVar9 = (long)(int)uVar8;
      lVar15 = ((-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2) + (long)(int)uVar8) * 8
      ;
      while( true ) {
        lVar9 = lVar9 + 1;
        puVar2 = (undefined8 *)(local_d0._0_8_ + lVar15);
        local_200 = puVar2[4];
        uStack_218 = puVar2[1];
        local_220 = *puVar2;
        uStack_208 = puVar2[3];
        uStack_210 = puVar2[2];
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1e8 = 0;
        local_1f0 = 0;
        local_1c0 = local_220;
        uStack_1b8 = uStack_218;
        uStack_1b0 = uStack_210;
        uStack_1a8 = uStack_208;
        local_1a0 = local_200;
        FUN_07372270(&local_1f0,&local_220,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *(long *)puVar4;
        uStack_b8 = uStack_1e8;
        local_c0 = local_1f0;
        uStack_a8 = uStack_1d8;
        local_b0 = local_1e0;
        uStack_98 = uStack_1c8;
        local_a0 = local_1d0;
        lVar10 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = *(uint *)(lVar12 + 0x18);
        if (uVar8 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar8 + 1;
          lVar10 = lVar10 + (long)(int)uVar8 * 0x30;
          *(undefined8 *)(lVar10 + 0x38) = uStack_1d8;
          *(undefined8 *)(lVar10 + 0x30) = local_1e0;
          *(undefined8 *)(lVar10 + 0x48) = uStack_1c8;
          *(undefined8 *)(lVar10 + 0x40) = local_1d0;
          *(undefined8 *)(lVar10 + 0x28) = uStack_1e8;
          *(undefined8 *)(lVar10 + 0x20) = local_1f0;
          thunk_FUN_037aeb94(lVar10 + 0x48,0);
        }
        else {
          uStack_88 = uStack_1e8;
          local_90 = local_1f0;
          uStack_78 = uStack_1d8;
          uStack_80 = local_1e0;
          uStack_68 = uStack_1c8;
          local_70 = local_1d0;
          FUN_048e499c(lVar12,&local_90,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if ((int)local_d0._8_4_ <= lVar9) break;
        lVar12 = *(long *)(param_1 + 0x28);
        lVar15 = lVar15 + 0x28;
      }
    }
    if (local_d0._0_8_ != 0) {
      FUN_04d129e4(local_d0,*(undefined8 *)puVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



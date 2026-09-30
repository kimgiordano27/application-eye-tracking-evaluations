/*
FUNCTION_NAME: FUN_07371dd0
ENTRY_POINT: 07371dd0
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


/* WARNING: Removing unreachable block (ram,0x073721bc) */

void FUN_07371dd0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_198;
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
  
  if ((DAT_08269237 & 1) == 0) {
    FUN_0373b518(Hostage_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_0373b518(PTR_DAT_07d863e8);
    FUN_0373b518(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_0373b518(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVROverlay_TypeInfo);
    DAT_08269237 = 1;
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
  local_d0 = FUN_0739ccd4(*(long *)(param_1 + 0x20),2,0);
  uVar14 = local_d0._8_8_;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar8 = FUN_06243eac(uVar3,uVar14 & 0xffffffff,0);
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo;
  puVar5 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  lVar13 = *(long *)(param_1 + 0x28);
  uVar14 = (ulong)uVar8;
  bVar7 = lVar13 == 0;
  if (0 < (int)uVar8) {
    lVar16 = 0;
    iVar15 = 0;
    do {
      if (bVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_048e45e0(&local_90,lVar13,iVar15,*(undefined8 *)puVar5);
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      uStack_a8 = uStack_78;
      local_b0 = uStack_80;
      uStack_98 = uStack_68;
      local_a0 = local_70;
      puVar2 = (undefined8 *)(local_d0._0_8_ + lVar16);
      local_140 = puVar2[4];
      uStack_158 = puVar2[1];
      local_160 = *puVar2;
      uStack_148 = puVar2[3];
      uStack_150 = puVar2[2];
      uStack_118 = uStack_78;
      local_120 = uStack_80;
      uStack_108 = uStack_68;
      uStack_110 = local_70;
      uStack_128 = uStack_88;
      local_130 = local_90;
      FUN_07370d24(&local_90,&local_130,&local_160);
      uStack_188 = uStack_88;
      local_190 = local_90;
      uStack_178 = uStack_78;
      uStack_180 = uStack_80;
      uStack_168 = uStack_68;
      local_170 = local_70;
      FUN_048e4648(lVar13,iVar15,&local_90,*(undefined8 *)puVar4);
      lVar13 = *(long *)(param_1 + 0x28);
      lVar16 = lVar16 + 0x28;
      iVar15 = iVar15 + 1;
      bVar7 = lVar13 == 0;
    } while (uVar14 * 0x28 - lVar16 != 0);
  }
  puVar4 = Hostage_TypeInfo;
  if (!bVar7) {
    if ((int)uVar8 < *(int *)(lVar13 + 0x18)) {
      do {
        FUN_048e45e0(&local_90,lVar13,uVar14,*(undefined8 *)puVar5);
        uStack_f8 = uStack_88;
        local_100 = local_90;
        uStack_e8 = uStack_78;
        local_f0 = uStack_80;
        uStack_d8 = uStack_68;
        local_e0 = local_70;
        FUN_073a599c(&local_100,0);
        FUN_0737de04(&local_100);
        lVar13 = *(long *)(param_1 + 0x28);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar13 + 0x18));
      FUN_048e658c(lVar13,uVar8,*(int *)(lVar13 + 0x18) - uVar8,
                   *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    }
    else if ((*(int *)(lVar13 + 0x18) < (int)local_d0._8_4_) && ((int)uVar8 < (int)local_d0._8_4_))
    {
      lVar11 = (long)(int)uVar8;
      lVar16 = ((-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2) + (long)(int)uVar8) * 8
      ;
      while( true ) {
        lVar11 = lVar11 + 1;
        puVar2 = (undefined8 *)(local_d0._0_8_ + lVar16);
        uVar18 = puVar2[1];
        uVar17 = *puVar2;
        uVar20 = puVar2[3];
        uVar19 = puVar2[2];
        uVar9 = puVar2[4];
        uStack_198 = 0;
        local_90 = uVar17;
        uStack_88 = uVar18;
        uStack_80 = uVar19;
        uStack_78 = uVar20;
        local_70 = uVar9;
        uStack_198 = FUN_0737dd10(&local_90);
        thunk_FUN_037aeb94(&uStack_198);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar12 = *(long *)puVar4;
        uStack_98 = uStack_198;
        lVar10 = *(long *)(lVar13 + 0x10);
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        local_c0 = uVar17;
        uStack_b8 = uVar18;
        local_b0 = uVar19;
        uStack_a8 = uVar20;
        local_a0 = uVar9;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar8 = *(uint *)(lVar13 + 0x18);
        if (uVar8 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar8 + 1;
          lVar10 = lVar10 + (long)(int)uVar8 * 0x30;
          *(undefined8 *)(lVar10 + 0x38) = uVar20;
          *(undefined8 *)(lVar10 + 0x30) = uVar19;
          *(undefined8 *)(lVar10 + 0x48) = uStack_198;
          *(undefined8 *)(lVar10 + 0x40) = uVar9;
          *(undefined8 *)(lVar10 + 0x28) = uVar18;
          *(undefined8 *)(lVar10 + 0x20) = uVar17;
          thunk_FUN_037aeb94(lVar10 + 0x48,0);
        }
        else {
          uStack_68 = uStack_198;
          local_90 = uVar17;
          uStack_88 = uVar18;
          uStack_80 = uVar19;
          uStack_78 = uVar20;
          local_70 = uVar9;
          FUN_048e499c(lVar13,&local_90,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        if ((int)local_d0._8_4_ <= lVar11) break;
        lVar13 = *(long *)(param_1 + 0x28);
        lVar16 = lVar16 + 0x28;
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



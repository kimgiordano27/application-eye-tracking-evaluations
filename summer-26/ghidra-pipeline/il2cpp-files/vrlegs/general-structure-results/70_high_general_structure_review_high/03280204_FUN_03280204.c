/*
FUNCTION_NAME: FUN_03280204
ENTRY_POINT: 03280204
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_5;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03280204(void *param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint local_21c;
  undefined8 local_218;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  
  if ((DAT_0412c98d & 1) == 0) {
    FUN_01ab69ac(CSharpCompiler_CodeCompiler_TypeInfo);
    FUN_01ab69ac(System_Xml_Serialization_CodeIdentifier_TypeInfo);
    FUN_01ab69ac(Unity_Services_Authentication_CodeLinkInfoRequest_TypeInfo);
    FUN_01ab69ac(Mono_Security_ASN1_TypeInfo);
    FUN_01ab69ac(System_Globalization_CodePageDataItem_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4aa0);
    FUN_01ab69ac(Animancer_ClipState_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd82c0);
    FUN_01ab69ac(PTR_DAT_03cd8408);
    FUN_01ab69ac(PTR_DAT_03cc4fe8);
    FUN_01ab69ac(Mono_Globalization_Unicode_CodePointIndexer_TypeInfo);
    FUN_01ab69ac(Photon_Voice_Codec_TypeInfo);
    FUN_01ab69ac(FMODUnity_CodecChannelCount_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_Coins_CoinChallengeClient_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_Coins_CoinChallengeDisplay_TypeInfo);
    FUN_01ab69ac(XRIF__Support_Bubble_CloseAnim_TypeInfo);
    DAT_0412c98d = 1;
  }
  local_68[0] = 0;
  local_70 = 0;
  memset(&local_140,0,0xd0);
  if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(param_3 + 0x28);
  }
  uVar7 = FUN_025be440(lVar16,0);
  if ((uVar7 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_03280a80;
    lVar16 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
  }
  if (lVar16 == 0) {
LAB_03280a80:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = FUN_025c2f58(lVar16,0x2f,0);
  puVar4 = PTR_DAT_03cc4aa0;
  if (param_3 == 0) {
    uVar17 = 0;
    uVar19 = 0;
    local_1b8 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_3 + 0x80);
    uVar17 = *(undefined8 *)(param_3 + 0x88);
    local_1b8 = *(undefined8 *)(param_3 + 0x18);
  }
  uVar7 = FUN_025be440(local_1b8,0);
  if ((iVar6 == -1) && ((uVar7 & 1) != 0)) {
    if (param_2 != (long *)0x0) {
      lVar11 = *(long *)puVar4;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar11)) &&
         (lVar11 = FUN_01f506ac(param_2,0,
                                *(undefined8 *)System_Xml_Serialization_CodeIdentifier_TypeInfo),
         lVar11 != 0)) goto LAB_03280410;
    }
    uVar8 = FUN_03299418(param_2,0);
    if (*(int *)(*(long *)PTR_DAT_03cd82c0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd82c0);
    }
    local_1b8 = FUN_03280a84(uVar8);
  }
LAB_03280410:
  if (param_3 == 0) {
    local_1c8 = 0;
    if (param_2 == (long *)0x0) {
LAB_03280464:
      local_1cc = -1;
    }
    else {
LAB_0328044c:
      lVar11 = *param_2;
      lVar9 = *(long *)puVar4;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(lVar11 + 0x130) < bVar1) goto LAB_03280464;
      local_1cc = -1;
      if ((iVar6 == -1) && (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
        uVar8 = (**(code **)(lVar11 + 0x218))(param_2,*(undefined8 *)(lVar11 + 0x220));
        uVar18 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
        if (*(int *)(*(long *)PTR_DAT_03cc4fe8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4fe8);
        }
        local_70 = thunk_FUN_01a61450(uVar8,uVar18,0);
        local_1cc = FUN_027bdbd0(&local_70,0);
      }
    }
    if (param_3 != 0) goto LAB_0328046c;
    local_1d0 = 0;
    local_1d4 = -1;
    local_68[0] = 0;
LAB_032804bc:
    if ((local_1d4 == -1) && (iVar6 == -1)) {
      uVar8 = FUN_03299418(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_03cd8408 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd8408);
      }
      local_68[0] = FUN_03278174(uVar8,0);
    }
    if (param_3 == 0) {
      local_1ec = 0;
      uVar13 = 0;
      uVar15 = 0;
      uVar8 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      uVar18 = 0;
      local_21c = 0;
      auVar20 = ZEXT816(0);
      auVar21 = ZEXT816(0);
      auVar22 = ZEXT816(0);
      uVar12 = 0;
      goto LAB_032807b0;
    }
  }
  else {
    uVar7 = FUN_025be440(*(undefined8 *)(param_3 + 0x20),0);
    local_1c8 = 0;
    if ((uVar7 & 1) == 0) {
      local_1c8 = *(undefined8 *)(param_3 + 0x20);
    }
    local_1cc = *(int *)(param_3 + 0x74);
    if (local_1cc == -1) {
      if (param_2 != (long *)0x0) goto LAB_0328044c;
      goto LAB_03280464;
    }
LAB_0328046c:
    local_1d4 = *(int *)(param_3 + 0x70);
    local_1d0 = *(undefined4 *)(param_3 + 0x78);
    local_68[0] = 0;
    uVar7 = FUN_025be440(*(undefined8 *)(param_3 + 0x30),0);
    if ((uVar7 & 1) != 0) goto LAB_032804bc;
    FUN_03291134(local_68,*(undefined8 *)(param_3 + 0x30),0);
  }
  puVar5 = CSharpCompiler_CodeCompiler_TypeInfo;
  lVar11 = FUN_01f29df0(*(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x60),
                        *(undefined8 *)CSharpCompiler_CodeCompiler_TypeInfo);
  puVar4 = XRIF__Support_Bubble_CloseAnim_TypeInfo;
  if (lVar11 == 0) {
    local_1e0 = 0;
  }
  else {
    lVar9 = *(long *)XRIF__Support_Bubble_CloseAnim_TypeInfo;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar4;
    }
    lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar9 + 0xb8);
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)Animancer_ClipState_TypeInfo);
      FUN_021de1ac(lVar14,uVar8,
                   *(undefined8 *)
                    _Common_Gameplay_Support_Scripts_Coins_CoinChallengeClient_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar10 = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar14);
    }
    uVar8 = FUN_01f6d39c(lVar11,lVar14,
                         *(undefined8 *)Unity_Services_Authentication_CodeLinkInfoRequest_TypeInfo);
    local_1e0 = FUN_01f70920(uVar8,*(undefined8 *)Mono_Security_ASN1_TypeInfo);
  }
  lVar11 = FUN_01f29df0(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40),
                        *(undefined8 *)puVar5);
  puVar4 = XRIF__Support_Bubble_CloseAnim_TypeInfo;
  if (lVar11 == 0) {
    local_1e8 = 0;
  }
  else {
    lVar9 = *(long *)XRIF__Support_Bubble_CloseAnim_TypeInfo;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar4;
    }
    lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar14 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar9 + 0xb8);
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)Animancer_ClipState_TypeInfo);
      FUN_021de1ac(lVar14,uVar8,
                   *(undefined8 *)
                    _Common_Gameplay_Support_Scripts_Coins_CoinChallengeDisplay_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar10 = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar14);
    }
    uVar8 = FUN_01f6d39c(lVar11,lVar14,
                         *(undefined8 *)Unity_Services_Authentication_CodeLinkInfoRequest_TypeInfo);
    local_1e8 = FUN_01f70920(uVar8,*(undefined8 *)Mono_Security_ASN1_TypeInfo);
  }
  uVar7 = FUN_025be440(*(undefined8 *)(param_3 + 0x48),0);
  uVar8 = 0;
  if ((uVar7 & 1) == 0) {
    uVar8 = FUN_03295e40(*(undefined8 *)(param_3 + 0x48),0);
  }
  uVar7 = FUN_025be440(*(undefined8 *)(param_3 + 0x50),0);
  uVar18 = 0;
  if ((uVar7 & 1) == 0) {
    uVar18 = FUN_03295790(*(undefined8 *)(param_3 + 0x50),0);
    uVar18 = FUN_01f70920(uVar18,*(undefined8 *)System_Globalization_CodePageDataItem_TypeInfo);
  }
  uVar7 = FUN_025be440(*(undefined8 *)(param_3 + 0x68),0);
  uVar15 = 0;
  if ((uVar7 & 1) == 0) {
    uVar15 = *(undefined8 *)(param_3 + 0x68);
  }
  local_1ec = *(undefined4 *)(param_3 + 0x7c);
  bVar1 = *(byte *)(param_3 + 0x90);
  bVar2 = *(byte *)(param_3 + 0x92);
  bVar3 = *(byte *)(param_3 + 0x91);
  auVar20 = FUN_032980c8(*(undefined8 *)(param_3 + 0x98),0);
  auVar21 = FUN_032980c8(*(undefined8 *)(param_3 + 0xa0),0);
  auVar22 = FUN_032980c8(*(undefined8 *)(param_3 + 0xa8),0);
  uVar12 = (uint)bVar3 << 2;
  local_21c = (uint)bVar1 << 1;
  uVar13 = (uint)bVar2 << 4;
LAB_032807b0:
  local_218 = auVar22._0_8_;
  memset(&local_140,0,0xd0);
  local_150 = 0;
  uStack_148 = 0;
  FUN_03291548(&local_150,lVar16,0);
  uStack_138 = uStack_148;
  local_140 = local_150;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_140,0);
  local_108 = uVar19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_108,uVar19);
  local_100 = uVar17;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_100,uVar17);
  local_160 = 0;
  uStack_158 = 0;
  FUN_03291548(&local_160,local_1b8,0);
  uStack_128 = uStack_158;
  local_130 = local_160;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_130,0);
  local_170 = 0;
  uStack_168 = 0;
  FUN_03291548(&local_170,local_1c8,0);
  uStack_118 = uStack_168;
  local_120 = local_170;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_120,0);
  local_110 = uVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_110,uVar15);
  local_b8 = local_1cc;
  local_b4 = local_1d4;
  local_ac = local_68[0];
  local_180 = 0;
  uStack_178 = 0;
  local_b0 = local_1d0;
  FUN_02068b4c(&local_180,uVar8,*(undefined8 *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo)
  ;
  uStack_d0 = uStack_178;
  local_d8 = local_180;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_d8,0);
  local_190 = 0;
  uStack_188 = 0;
  FUN_02068b4c(&local_190,uVar18,*(undefined8 *)FMODUnity_CodecChannelCount_TypeInfo);
  uStack_c0 = uStack_188;
  local_c8 = local_190;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_c8,0);
  puVar4 = Photon_Voice_Codec_TypeInfo;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_02068b4c(&local_1a0,local_1e8,*(undefined8 *)Photon_Voice_Codec_TypeInfo);
  uStack_f0 = uStack_198;
  local_f8 = local_1a0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_f8,0);
  local_1b0 = 0;
  uStack_1a8 = 0;
  FUN_02068b4c(&local_1b0,local_1e0,*(undefined8 *)puVar4);
  uStack_e0 = uStack_1a8;
  local_e8 = local_1b0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_e8,0);
  local_a8 = uVar13 | iVar6 != -1 | local_21c | uVar12 | local_a8 & 0xffffffe0 | 8;
  local_a4 = local_1ec;
  local_80 = local_218;
  uStack_78 = auVar22._8_8_;
  local_90 = auVar21;
  local_a0 = auVar20;
  memcpy(param_1,&local_140,0xd0);
  return;
}



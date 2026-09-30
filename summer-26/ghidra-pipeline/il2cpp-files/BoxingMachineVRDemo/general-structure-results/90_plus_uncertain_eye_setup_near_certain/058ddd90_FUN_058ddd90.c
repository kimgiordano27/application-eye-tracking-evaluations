/*
FUNCTION_NAME: FUN_058ddd90
ENTRY_POINT: 058ddd90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_17;telemetry_or_network_hits_8;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Type propagation algorithm not settling */

ulong FUN_058ddd90(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar15;
  undefined4 uVar13;
  int iVar14;
  ulong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined4 uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  byte bVar25;
  int iVar26;
  undefined8 uVar27;
  long *plVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  long local_150;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_06b80b39 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_74_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_76_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768410);
    FUN_02d6084c(PTR_DAT_06768418);
    FUN_02d6084c(
                Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo);
    DAT_06b80b39 = 1;
  }
  puVar10 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  auVar33 = ZEXT816(0);
  if (param_2 == 0) goto LAB_058de5b8;
  plVar22 = *(long **)(param_2 + 0x78);
  plVar28 = *(long **)(param_2 + 0x80);
  local_310 = *(undefined8 *)(param_1 + 0x158);
  uStack_318 = *(undefined8 *)(param_1 + 0x150);
  local_320 = *(undefined8 *)(param_1 + 0x148);
  uVar16 = FUN_034515c8(&local_320,plVar28,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo);
  auVar33._8_8_ = local_a0._8_8_;
  auVar33._0_8_ = local_a0._0_8_;
  if ((int)uVar16 != -1) {
    uVar29 = uVar16 & 0xffffffff;
    uVar12 = FUN_03794e9c(param_1 + 0x138,uVar29,*(undefined8 *)puVar10);
    uVar13 = 2;
    *(undefined4 *)(param_1 + 0x128) = uVar12;
    *(int *)(param_1 + 300) = (int)uVar16;
LAB_058ddf08:
    *(undefined4 *)(param_1 + 0x130) = uVar13;
    return uVar29;
  }
  if (plVar22 == (long *)0x0) goto LAB_058de5b8;
  iVar26 = (int)plVar22[0x1c];
  if (DAT_06b7297d == '\0') {
    uVar16 = FUN_02d6084c(PTR_DAT_06762360);
    DAT_06b7297d = '\x01';
  }
  auVar33._8_8_ = local_a0._8_8_;
  auVar33._0_8_ = local_a0._0_8_;
  auVar6._8_8_ = local_a0._8_8_;
  auVar6._0_8_ = local_a0._0_8_;
  auVar5._8_8_ = local_a0._8_8_;
  auVar5._0_8_ = local_a0._0_8_;
  uVar32 = **(undefined8 **)(*(long *)PTR_DAT_06762360 + 0xb8);
  if (plVar28 == (long *)0x0) {
LAB_058ddfb0:
    uVar13 = FUN_058ddc20(uVar16,param_2);
LAB_058ddfbc:
    if (*(int *)(param_1 + 0x128) == iVar26) goto LAB_058ddfc8;
    if (0 < *(int *)(param_1 + 0x138)) {
      uVar29 = 0;
      do {
        iVar14 = FUN_03794e9c((int *)(param_1 + 0x138),uVar29,*(undefined8 *)puVar10);
        if (iVar14 == iVar26) {
          *(int *)(param_1 + 0x128) = iVar26;
          *(int *)(param_1 + 300) = (int)uVar29;
          FUN_03799508(&local_320,param_1 + 0x160,uVar29,
                       *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
          auVar33._8_8_ = local_a0._8_8_;
          auVar33._0_8_ = local_a0._0_8_;
          if (local_150 == 0) goto LAB_058de5b8;
          uVar13 = *(undefined4 *)(local_150 + 0x194);
          goto LAB_058ddf08;
        }
        uVar15 = (int)uVar29 + 1;
        uVar29 = (ulong)uVar15;
      } while ((int)uVar15 < *(int *)(param_1 + 0x138));
    }
    puVar10 = OVRPlugin_OVRP_1_45_0_TypeInfo;
    if ((param_3 & 1) == 0) {
      return 0xffffffff;
    }
    uVar27 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_45_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar16 = FUN_058de5bc(plVar22,uVar27);
    if ((uVar16 & 1) == 0) {
      uVar27 = *(undefined8 *)(param_1 + 0xb8);
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar11 = FUN_058de5bc(plVar22,uVar27);
      iVar14 = 0;
      bVar4 = false;
      bVar25 = bVar11 ^ 1;
      bVar1 = true;
      uVar12 = 3;
      if ((bVar11 & 1) == 0) {
        uVar12 = 0;
      }
      goto LAB_058de180;
    }
    iVar14 = 0;
    bVar25 = 0;
    bVar4 = false;
    bVar3 = false;
    bVar1 = true;
    uVar12 = 1;
  }
  else {
    lVar24 = *plVar28;
    bVar25 = *(byte *)(*(long *)
                        Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                      + 0x130);
    if ((*(byte *)(lVar24 + 0x130) < bVar25) ||
       (*(long *)(*(long *)(lVar24 + 200) + (ulong)bVar25 * 8 + -8) !=
        *(long *)
         Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo)) {
      bVar25 = *(byte *)(*(long *)
                          Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                        + 0x130);
      if ((*(byte *)(lVar24 + 0x130) < bVar25) ||
         (*(long *)(*(long *)(lVar24 + 200) + (ulong)bVar25 * 8 + -8) !=
          *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo))
      goto LAB_058ddfb0;
      auVar33 = auVar5;
      if ((plVar28[0x37] == 0) ||
         (lVar24 = *(long *)(plVar28[0x37] + 0x180), auVar33 = auVar6, lVar24 == 0))
      goto LAB_058de5b8;
      piVar17 = (int *)FUN_037b0144(lVar24,*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
      auVar7._8_8_ = local_a0._8_8_;
      auVar7._0_8_ = local_a0._0_8_;
      auVar33._8_8_ = local_a0._8_8_;
      auVar33._0_8_ = local_a0._0_8_;
      if (plVar28[0x37] == 0) goto LAB_058de5b8;
      lVar24 = *(long *)(plVar28[0x37] + 0x188);
      auVar33 = auVar7;
    }
    else {
      if (plVar28[0x30] == 0) goto LAB_058de5b8;
      piVar17 = (int *)FUN_037b0144(plVar28[0x30],*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
      auVar33._8_8_ = local_a0._8_8_;
      auVar33._0_8_ = local_a0._0_8_;
      lVar24 = plVar28[0x31];
    }
    if (lVar24 == 0) goto LAB_058de5b8;
    iVar14 = *piVar17;
    puVar18 = (undefined8 *)FUN_037b9bf0(lVar24,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    uVar32 = *puVar18;
    uVar13 = FUN_058ddc20(puVar18,param_2);
    if (iVar14 == 0) goto LAB_058ddfbc;
    iVar26 = iVar14 + iVar26 * 0x1000000;
    if (*(int *)(param_1 + 0x128) == iVar26) goto LAB_058ddfc8;
    if ((param_3 & 1) == 0) {
      return 0xffffffff;
    }
    bVar1 = false;
    bVar25 = 0;
    uVar12 = 2;
    bVar4 = true;
LAB_058de180:
    bVar3 = true;
  }
  auVar8._8_8_ = local_a0._8_8_;
  auVar8._0_8_ = local_a0._0_8_;
  fVar31 = (float)((ulong)uVar32 >> 0x20);
  if (((*(int *)(param_1 + 0xcc) == 1 & (bVar25 ^ 0xff)) != 0) ||
     (!bVar3 && *(int *)(param_1 + 0xcc) == 0)) {
    if (*(int *)(param_1 + 300) == -1) {
      plVar23 = (long *)0x0;
      if (!bVar1) {
        plVar23 = plVar28;
      }
      iVar2 = 0;
      if (!bVar1) {
        iVar2 = iVar14;
      }
      uVar13 = FUN_058de68c(param_1,iVar26,uVar13,iVar2,uVar12,param_2,plVar22,plVar23);
      *(undefined4 *)(param_1 + 300) = uVar13;
    }
    else {
      lVar24 = FUN_058ddbdc(param_1);
      auVar33._8_8_ = local_a0._8_8_;
      auVar33._0_8_ = local_a0._0_8_;
      lVar24 = *(long *)(lVar24 + 0x1d0);
      if (lVar24 == 0) goto LAB_058de5b8;
      *(long *)(lVar24 + 0x180) = param_2;
      thunk_FUN_02dd37b4(lVar24 + 0x180,param_2);
      *(long **)(lVar24 + 0x188) = plVar22;
      thunk_FUN_02dd37b4(lVar24 + 0x188,plVar22);
      *(undefined4 *)(lVar24 + 0x194) = uVar12;
      *(int *)(lVar24 + 400) = iVar14;
      *(undefined4 *)(lVar24 + 0xfc) = uVar13;
      *(int *)(lVar24 + 0x100) = iVar26;
      *(undefined8 *)(lVar24 + 0x1a4) = 0;
      *(undefined8 *)(lVar24 + 0x1ac) = 0;
      *(undefined8 *)(lVar24 + 0x19c) = 0;
      *(undefined4 *)(lVar24 + 0x1b4) = 0;
    }
    if ((bVar4) &&
       (puVar19 = (undefined1 *)FUN_058ddbdc(param_1,*(undefined4 *)(param_1 + 300)),
       fVar30 = (float)*(undefined8 *)(puVar19 + 0x1d8) - (float)uVar32,
       fVar31 = (float)((ulong)*(undefined8 *)(puVar19 + 0x1d8) >> 0x20) - fVar31,
       DAT_01208240 <= fVar30 * fVar30 + fVar31 * fVar31)) {
      *(undefined8 *)(puVar19 + 0x1d8) = uVar32;
      *puVar19 = 1;
    }
    uVar16 = (ulong)*(uint *)(param_1 + 300);
    *(int *)(param_1 + 0x128) = iVar26;
    goto RenderGraphCompilationCache__Clear;
  }
  iVar2 = iVar26;
  if ((bVar25 & 1) == 0) {
    plVar23 = (long *)0x0;
    if (!bVar1) {
      plVar23 = plVar28;
    }
    iVar20 = 0;
    uVar21 = uVar12;
    if (!bVar1) {
      iVar20 = iVar14;
      local_a0 = auVar8;
    }
  }
  else {
    if (*(int *)(param_1 + 0x128) != -1) {
LAB_058ddfc8:
      return (ulong)*(uint *)(param_1 + 300);
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar24 = FUN_0582a780(*(long *)(param_1 + 0x78),0), lVar24 == 0)) {
      uStack_d8 = 0;
      local_e0 = 0;
      local_d0 = 0;
    }
    else {
      auVar33 = FUN_05814738(lVar24,0);
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      FUN_03dc64dc(&local_320,auVar33._0_8_,auVar33._8_8_,
                   *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
      uStack_d8 = uStack_318;
      local_e0 = local_320;
      local_d0 = local_310;
    }
    puVar10 = OVRPlugin_OVRP_1_76_0_TypeInfo;
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uVar27 = local_90;
    local_90._0_1_ = (char)local_e0;
    local_80 = local_d0;
    bVar1 = (char)local_90 == '\0';
    local_90 = uVar27;
    if ((bVar1) ||
       (local_a0 = FUN_03dc650c(&local_90,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo),
       local_a0._12_4_ < 1)) goto LAB_058de3f8;
    auVar33 = FUN_03dc650c(&local_90,*(undefined8 *)puVar10);
    puVar9 = PTR_DAT_06768418;
    local_a0 = auVar33;
    lVar24 = FUN_03fcdf50(local_a0,0,*(undefined8 *)PTR_DAT_06768418);
    auVar33 = local_a0;
    if (lVar24 == 0) goto LAB_058de5b8;
    plVar28 = *(long **)(lVar24 + 0x78);
    if (plVar28 == (long *)0x0) {
LAB_058de3f8:
      if (*(long *)(param_1 + 0xb8) == 0) {
LAB_058de454:
        uStack_f8 = 0;
        local_100 = 0;
        local_f0 = 0;
      }
      else {
        lVar24 = FUN_0582a780(*(long *)(param_1 + 0xb8),0);
        if (lVar24 == 0) goto LAB_058de454;
        auVar33 = FUN_05814738(lVar24,0);
        local_320 = 0;
        uStack_318 = 0;
        local_310 = 0;
        FUN_03dc64dc(&local_320,auVar33._0_8_,auVar33._8_8_,
                     *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
        uStack_f8 = uStack_318;
        local_100 = local_320;
        local_f0 = local_310;
      }
      puVar10 = OVRPlugin_OVRP_1_76_0_TypeInfo;
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      uVar27 = local_c0;
      local_c0._0_1_ = (char)local_100;
      local_b0 = local_f0;
      bVar1 = (char)local_c0 != '\0';
      local_c0 = uVar27;
      if (bVar1) {
        auVar33 = FUN_03dc650c(&local_c0,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo);
        local_a0 = auVar33;
        if (0 < auVar33._12_4_) {
          auVar33 = FUN_03dc650c(&local_c0,*(undefined8 *)puVar10);
          puVar9 = PTR_DAT_06768418;
          local_a0 = auVar33;
          lVar24 = FUN_03fcdf50(local_a0,0,*(undefined8 *)PTR_DAT_06768418);
          auVar33 = local_a0;
          if (lVar24 == 0) {
LAB_058de5b8:
            local_a0 = auVar33;
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar28 = *(long **)(lVar24 + 0x78);
          if (plVar28 != (long *)0x0) {
            iVar2 = (int)plVar28[0x1c];
            auVar33 = FUN_03dc650c(&local_c0,*(undefined8 *)puVar10);
            local_a0 = auVar33;
            param_2 = FUN_03fcdf50(local_a0,0,*(undefined8 *)puVar9);
            uVar21 = 3;
            goto LAB_058de53c;
          }
        }
      }
      uVar21 = 0;
      plVar28 = plVar22;
    }
    else {
      bVar25 = *(byte *)(*(long *)
                          Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                        + 0x130);
      if ((bVar25 <= *(byte *)(*plVar28 + 0x130)) &&
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar25 * 8 + -8) ==
          *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo))
      goto LAB_058de3f8;
      iVar2 = (int)plVar28[0x1c];
      auVar33 = FUN_03dc650c(&local_90,*(undefined8 *)puVar10);
      local_a0 = auVar33;
      param_2 = FUN_03fcdf50(local_a0,0,*(undefined8 *)puVar9);
      uVar21 = 1;
    }
LAB_058de53c:
    plVar23 = (long *)0x0;
    plVar22 = plVar28;
    iVar20 = 0;
  }
  uVar15 = FUN_058de68c(param_1,iVar2,uVar13,iVar20,uVar21,param_2,plVar22,plVar23);
  uVar16 = (ulong)uVar15;
  if (bVar4) {
    puVar19 = (undefined1 *)FUN_058ddbdc(param_1,uVar16);
    fVar30 = (float)*(undefined8 *)(puVar19 + 0x1d8) - (float)uVar32;
    fVar31 = (float)((ulong)*(undefined8 *)(puVar19 + 0x1d8) >> 0x20) - fVar31;
    if (DAT_01208240 <= fVar30 * fVar30 + fVar31 * fVar31) {
      *(undefined8 *)(puVar19 + 0x1d8) = uVar32;
      *puVar19 = 1;
    }
  }
  *(int *)(param_1 + 0x128) = iVar26;
  *(uint *)(param_1 + 300) = uVar15;
RenderGraphCompilationCache__Clear:
  *(undefined4 *)(param_1 + 0x130) = uVar12;
  return uVar16;
}



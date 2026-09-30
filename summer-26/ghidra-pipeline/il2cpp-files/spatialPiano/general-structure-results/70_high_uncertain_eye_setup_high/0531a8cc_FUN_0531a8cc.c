/*
FUNCTION_NAME: FUN_0531a8cc
ENTRY_POINT: 0531a8cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_0531a8cc(long param_1,float *param_2,ulong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_20c;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  ulong uStack_1b0;
  float fStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  char local_188;
  undefined8 local_180;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined8 local_150;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  ulong local_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulong local_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  
  puVar3 = PTR_DAT_067c9790;
  if ((DAT_06bbb234 & 1) == 0) {
    FUN_02f08768(System_Xml_ReadState___TypeInfo);
    FUN_02f08768(System_Text_DecoderReplacementFallbackBuffer_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_Interpreter_DecrementInstruction_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9790);
    DAT_06bbb234 = 1;
  }
  puVar4 = System_Xml_ReadState___TypeInfo;
  local_c0 = 0;
  fStack_b8 = 0.0;
  uStack_b4 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_100 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  fStack_118 = 0.0;
  uStack_114 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  fStack_e8 = 0.0;
  uStack_e4 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_128 = 0;
  local_130 = 0;
  local_150 = 0;
  fStack_148 = 0.0;
  uStack_144 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_13c = 0;
  local_154 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060fdf88(&local_180,0);
  fStack_b8 = fStack_178;
  local_c0 = local_180;
  uStack_b4 = uStack_174;
  FUN_060fdf88(&uStack_1b0,0);
  FUN_060fdf88(&uStack_1b0,0);
  *(ulong *)((long)param_3 + 0x14) = CONCAT44(uStack_198,uStack_19c);
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_1a0,local_1a4);
  param_3[1] = CONCAT44(local_1a4,fStack_1a8);
  *param_3 = uStack_1b0;
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar10);
    lVar10 = *(long *)puVar4;
  }
  puVar5 = System_Linq_Expressions_Interpreter_DecrementInstruction_TypeInfo;
  puVar4 = PTR_DAT_067c8fa8;
  puVar3 = PTR_DAT_067c8f80;
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    puVar11 = *(undefined4 **)(lVar10 + 0xb8);
    local_20c = 0;
    uStack_1c4 = *puVar11;
    local_1c8 = puVar11[1];
    iVar13 = 0;
    local_1cc = puVar11[2];
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar13) {
        return local_20c;
      }
      FUN_039ef234(&local_180,lVar8,iVar13,*(undefined8 *)puVar5);
      lVar10 = *(long *)(param_1 + 0x20);
      fStack_e8 = fStack_178;
      uStack_e4 = uStack_174;
      local_f0 = local_180;
      uStack_d8 = local_168;
      uStack_e0 = local_170;
      uStack_dc = uStack_16c;
      uStack_cc = uStack_15c;
      local_d4 = local_164;
      uStack_d0 = uStack_160;
      if (lVar10 == 0) break;
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar13 + 1) / iVar1;
      }
      FUN_039ef234(&uStack_1b0,lVar10,(iVar13 + 1) - iVar2 * iVar1,*(undefined8 *)puVar5);
      local_100 = local_190;
      fStack_118 = fStack_1a8;
      uStack_114 = local_1a4;
      local_120 = uStack_1b0;
      uStack_108 = uStack_198;
      uStack_104 = uStack_194;
      uStack_110 = uStack_1a0;
      uStack_10c = uStack_19c;
      if (uStack_cc._4_1_ == '\0') {
        if (local_188 == '\0') goto LAB_0531aac8;
        goto LAB_0531afac;
      }
      if (local_188 == '\0') {
LAB_0531aac8:
        if (*(long *)(param_1 + 0x20) == 0) break;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 1) goto LAB_0531aadc;
        uStack_1b0 = local_f0;
        FUN_052c2dcc(&local_180,param_4,&uStack_1b0,0);
        uVar7 = uStack_174;
        fVar6 = fStack_178;
        uVar9 = local_180;
        fVar18 = local_180._4_4_;
        fStack_1a8 = fStack_118;
        uStack_1b0 = local_120;
        uStack_19c = uStack_10c;
        uStack_198 = uStack_108;
        local_1a4 = uStack_114;
        uStack_1a0 = uStack_110;
        FUN_052c2dcc(&local_180,param_4,&uStack_1b0,0);
        uVar16 = uStack_174;
        uVar20 = local_170;
        fVar27 = (float)FUN_0531a27c(&local_f0,param_4);
        fVar17 = fVar27;
        fVar22 = fVar18;
        fVar26 = fVar6;
        fVar14 = (float)FUN_0531aff4(uVar9 & 0xffffffff);
        fVar23 = *param_2;
        fVar19 = param_2[1];
        fVar24 = param_2[2];
        fVar25 = param_2[3];
        fVar29 = param_2[4];
        fVar28 = param_2[5];
        if (DAT_06bb42c0 == '\0') {
          FUN_02f08768(puVar4);
          DAT_06bb42c0 = '\x01';
        }
        fVar25 = fVar26 * fVar28 + fVar14 * fVar25 + fVar22 * fVar29;
        fVar28 = ABS(fVar25);
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        fVar21 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar29 = fVar28 * DAT_011b0568;
        if (fVar28 * DAT_011b0568 <= fVar21) {
          fVar29 = fVar21;
        }
        if (fVar29 <= ABS(0.0 - fVar25)) {
          fVar26 = fVar26 * fVar24;
          fVar17 = -(fVar26 + fVar23 * fVar14 + fVar22 * fVar19) - fVar17;
          if (fVar17 / fVar25 <= 0.0) goto LAB_0531afac;
          uVar15 = FUN_060ae8a4(param_2,0);
          FUN_0531a29c(uVar15,param_1,&local_154);
          fStack_b8 = fVar6;
          uVar16 = FUN_0531b3e0(uVar9 & 0xffffffff,fVar18,fVar6,fVar27,uVar16,uVar20);
          local_c0 = CONCAT44(fVar18,uVar16);
          uStack_b4 = FUN_060df37c(uVar7,0);
OVRPlugin__GetControllerState4:
          fVar18 = fStack_b8;
          uVar7 = (undefined4)local_c0;
          uVar16 = local_c0._4_4_;
          if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05319588(uVar15,fVar17,fVar26,uVar7,uVar16,fVar18,&local_130,0);
          uVar9 = FUN_05313f18(uStack_1c4,local_1c8,local_1cc,&local_130);
          if ((uVar9 & 1) != 0) {
            local_1c8 = local_130._4_4_;
            uStack_1c4 = (undefined4)local_130;
            local_1cc = local_128;
            FUN_052c2604(param_3,&local_c0,0);
            local_20c = 1;
          }
        }
      }
      else {
LAB_0531aadc:
        fStack_178 = fStack_e8;
        local_180 = local_f0;
        uStack_16c = uStack_dc;
        local_168 = uStack_d8;
        uStack_174 = uStack_e4;
        local_170 = uStack_e0;
        FUN_052c2dcc(&uStack_1b0,param_4,&local_180,0);
        fVar17 = fStack_1a8;
        fVar22 = param_2[3];
        fVar27 = param_2[4];
        fVar26 = param_2[5];
        fStack_148 = fStack_1a8;
        local_150 = uStack_1b0;
        uVar9 = local_150;
        local_150._0_4_ = (float)uStack_1b0;
        fVar18 = (float)local_150;
        local_150._4_4_ = (float)(uStack_1b0 >> 0x20);
        fVar6 = local_150._4_4_;
        uStack_13c = uStack_19c;
        local_138 = uStack_198;
        uStack_144 = local_1a4;
        local_140 = uStack_1a0;
        local_150 = uVar9;
        if (DAT_06bb42bf == '\0') {
          FUN_02f08768(puVar3);
          DAT_06bb42bf = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar14 = SQRT(fVar26 * fVar26 + fVar22 * fVar22 + fVar27 * fVar27);
        if (fVar14 <= DAT_011b06e4) {
          if (DAT_06bb42c1 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f78);
            DAT_06bb42c1 = '\x01';
          }
          pfVar12 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          fVar22 = *pfVar12;
          fVar27 = pfVar12[1];
          fVar14 = pfVar12[2];
        }
        else {
          fVar22 = -fVar22 / fVar14;
          fVar27 = -fVar27 / fVar14;
          fVar14 = -fVar26 / fVar14;
        }
        fVar29 = *param_2;
        fVar23 = param_2[1];
        fVar26 = param_2[2];
        fVar25 = param_2[3];
        fVar28 = param_2[4];
        fVar24 = param_2[5];
        if (DAT_06bb42c0 == '\0') {
          FUN_02f08768(puVar4);
          DAT_06bb42c0 = '\x01';
        }
        fVar24 = fVar14 * fVar24 + fVar22 * fVar25 + fVar27 * fVar28;
        fVar25 = ABS(fVar24);
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar19 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar28 = fVar25 * DAT_011b0568;
        if (fVar25 * DAT_011b0568 <= fVar19) {
          fVar28 = fVar19;
        }
        if (fVar28 <= ABS(0.0 - fVar24)) {
          fVar26 = fVar14 * fVar26 + fVar22 * fVar29 + fVar27 * fVar23;
          fVar17 = (fVar17 * fVar14 + fVar18 * fVar22 + fVar6 * fVar27) - fVar26;
          if (0.0 < fVar17 / fVar24) {
            uVar15 = FUN_060ae8a4(param_2,0);
            FUN_052c2604(&local_c0,&local_150,0);
            goto OVRPlugin__GetControllerState4;
          }
        }
      }
LAB_0531afac:
      lVar8 = *(long *)(param_1 + 0x20);
      iVar13 = iVar13 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



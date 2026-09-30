/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 051b72b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__GetDesiredEyeTextureFormat(long param_1,float *param_2,ulong *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  undefined4 local_1fc;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1a0;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  ulong uStack_170;
  float fStack_168;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  puVar4 = PTR_DAT_065d62a0;
  if ((DAT_06a7133a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606500);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
    DAT_06a7133a = 1;
  }
  puVar5 = PTR_DAT_06606500;
  local_c0 = 0;
  fStack_b8 = 0.0;
  uStack_b4 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_128 = 0;
  local_130 = 0;
  local_150 = 0;
  fStack_148 = 0.0;
  uStack_144 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_e0 = 0;
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_104 = 0;
  uStack_110 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_13c = 0;
  local_154 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f002ac(&local_1a0,0);
  fStack_b8 = fStack_198;
  local_c0 = local_1a0;
  uStack_ac = local_18c;
  local_a8 = local_188;
  uStack_b4 = uStack_194;
  FUN_05f002ac(&local_1a0,0);
  FUN_05f002ac(&uStack_170,0);
  local_18c = (undefined4)uStack_15c;
  local_188 = (undefined4)((ulong)uStack_15c >> 0x20);
  local_190 = uStack_160;
  fStack_198 = fStack_168;
  uStack_194 = local_164;
  local_1a0 = uStack_170;
  *(undefined8 *)((long)param_3 + 0x14) = uStack_15c;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_160,local_164);
  param_3[1] = CONCAT44(local_164,fStack_168);
  *param_3 = uStack_170;
  lVar14 = *(long *)puVar5;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar14);
    lVar14 = *(long *)puVar5;
  }
  puVar6 = PTR_DAT_06608b28;
  puVar5 = PTR_DAT_065c9f70;
  puVar4 = PTR_DAT_065c8d28;
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 != 0) {
    local_1fc = 0;
    puVar15 = *(undefined4 **)(lVar14 + 0xb8);
    uStack_1b4 = *puVar15;
    local_1b8 = puVar15[1];
    iVar17 = 0;
    local_1bc = puVar15[2];
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar17) {
        return local_1fc;
      }
      FUN_038c4204(&local_1a0,lVar12,iVar17,*(undefined8 *)puVar6);
      uStack_e8 = CONCAT44(uStack_194,fStack_198);
      uStack_e0 = CONCAT44(local_18c,local_190);
      local_f0 = local_1a0;
      uStack_d8 = local_188;
      uStack_cc = uStack_17c;
      local_d4 = local_184;
      uStack_d0 = uStack_180;
      lVar14 = *(long *)(param_1 + 0x20);
      if (lVar14 == 0) break;
      iVar2 = *(int *)(lVar14 + 0x18);
      iVar17 = iVar17 + 1;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar17 / iVar2;
      }
      FUN_038c4204(&local_1a0,lVar14,iVar17 - iVar3 * iVar2,*(undefined8 *)puVar6);
      uStack_118 = CONCAT44(uStack_194,fStack_198);
      uVar20 = CONCAT44(local_18c,local_190);
      uStack_fc = uStack_17c;
      uVar9 = uStack_fc;
      uStack_100 = uStack_180;
      uStack_fc._4_1_ = (char)((ulong)uStack_17c >> 0x20);
      local_120 = local_1a0;
      uStack_108 = local_188;
      local_104 = local_184;
      uStack_110 = uVar20;
      uStack_fc = uVar9;
      if (uStack_cc._4_1_ == '\0') {
        bVar1 = uStack_fc._4_1_ == '\0';
        if (bVar1) goto LAB_051b74c0;
        goto LAB_051b797c;
      }
      if (uStack_fc._4_1_ == '\0') {
LAB_051b74c0:
        if (*(long *)(param_1 + 0x20) == 0) break;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 1) goto LAB_051b74d4;
        FUN_051b88b0(&local_1a0,&local_f0,param_4,0);
        uVar11 = local_188;
        uVar10 = local_18c;
        uVar8 = uStack_194;
        fVar7 = fStack_198;
        uVar33 = local_1a0;
        uVar25 = (undefined4)uVar20;
        uVar13 = local_1a0 & 0xffffffff;
        fVar24 = local_1a0._4_4_;
        FUN_051b88b0(&local_1a0,&local_120,param_4,0);
        uVar19 = local_18c;
        fVar32 = (float)FUN_051b895c(&local_f0,param_4,0);
        fVar23 = fVar32;
        fVar27 = fVar24;
        fVar31 = fVar7;
        fVar18 = (float)FUN_051b79c0(uVar13);
        fVar34 = *param_2;
        fVar28 = param_2[1];
        fVar30 = param_2[2];
        fVar21 = param_2[3];
        fVar35 = param_2[4];
        fVar29 = param_2[5];
        if (DAT_06a67231 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar5);
          DAT_06a67231 = '\x01';
        }
        fVar29 = fVar31 * fVar29 + fVar18 * fVar21 + fVar27 * fVar35;
        fVar35 = ABS(fVar29);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        fVar22 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
        fVar21 = fVar35 * DAT_013de160;
        if (fVar35 * DAT_013de160 <= fVar22) {
          fVar21 = fVar22;
        }
        if (fVar21 <= ABS(0.0 - fVar29)) {
          uVar26 = (ulong)(uint)(fVar31 * fVar30);
          fVar23 = -(fVar31 * fVar30 + fVar34 * fVar18 + fVar27 * fVar28) - fVar23;
          uVar13 = (ulong)(uint)fVar23;
          if (fVar23 / fVar29 <= 0.0) goto LAB_051b797c;
          uVar20 = FUN_05eb7ebc(param_2,0);
          FUN_051b6c88(uVar20,param_1,&local_154);
          fStack_b8 = fVar7;
          uVar19 = FUN_051b7d20(uVar33 & 0xffffffff,fVar24,fVar7,fVar32,uVar19,uVar25);
          local_c0 = CONCAT44(fVar24,uVar19);
          uStack_b4 = FUN_05ee9aa8(uVar8,0);
          local_a8 = uVar11;
          uStack_ac = uVar10;
LAB_051b78f4:
          fVar24 = fStack_b8;
          uVar33 = local_c0 & 0xffffffff;
          uVar8 = local_c0._4_4_;
          if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_051a9758(uVar20,uVar13,uVar26,uVar33,uVar8,fVar24,&local_130,0);
          uVar13 = FUN_051b088c(uStack_1b4,local_1b8,local_1bc,&local_130);
          if ((uVar13 & 1) != 0) {
            local_1b8 = local_130._4_4_;
            uStack_1b4 = (undefined4)local_130;
            local_1bc = local_128;
            FUN_05167a3c(param_3,&local_c0,0);
            local_1fc = 1;
          }
        }
      }
      else {
LAB_051b74d4:
        FUN_051b88b0(&local_1a0,&local_f0,param_4,0);
        fVar24 = fStack_198;
        fStack_148 = fStack_198;
        local_150 = local_1a0;
        uVar13 = local_150;
        uStack_13c = local_18c;
        local_138 = local_188;
        uStack_144 = uStack_194;
        local_140 = local_190;
        local_150._0_4_ = (float)local_1a0;
        fVar7 = (float)local_150;
        local_150._4_4_ = (float)(local_1a0 >> 0x20);
        fVar23 = local_150._4_4_;
        fVar32 = param_2[3];
        fVar31 = param_2[4];
        fVar27 = param_2[5];
        local_150 = uVar13;
        if (DAT_06a6722e == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar4);
          DAT_06a6722e = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar18 = SQRT(fVar27 * fVar27 + fVar32 * fVar32 + fVar31 * fVar31);
        if (fVar18 <= DAT_013ddfb8) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            DAT_06a67148 = '\x01';
          }
          pfVar16 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
          fVar32 = *pfVar16;
          fVar31 = pfVar16[1];
          fVar18 = pfVar16[2];
        }
        else {
          fVar32 = -fVar32 / fVar18;
          fVar31 = -fVar31 / fVar18;
          fVar18 = -fVar27 / fVar18;
        }
        fVar27 = *param_2;
        fVar35 = param_2[1];
        fVar28 = param_2[2];
        fVar29 = param_2[3];
        fVar34 = param_2[4];
        fVar30 = param_2[5];
        if (DAT_06a67231 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar5);
          DAT_06a67231 = '\x01';
        }
        fVar29 = fVar18 * fVar30 + fVar32 * fVar29 + fVar31 * fVar34;
        fVar30 = ABS(fVar29);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar21 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
        fVar34 = fVar30 * DAT_013de160;
        if (fVar30 * DAT_013de160 <= fVar21) {
          fVar34 = fVar21;
        }
        if (fVar34 <= ABS(0.0 - fVar29)) {
          fVar27 = fVar18 * fVar28 + fVar32 * fVar27 + fVar31 * fVar35;
          uVar26 = (ulong)(uint)fVar27;
          fVar27 = (fVar24 * fVar18 + fVar7 * fVar32 + fVar23 * fVar31) - fVar27;
          uVar13 = (ulong)(uint)fVar27;
          if (0.0 < fVar27 / fVar29) {
            uVar20 = FUN_05eb7ebc(param_2,0);
            FUN_05167a3c(&local_c0,&local_150,0);
            goto LAB_051b78f4;
          }
        }
      }
LAB_051b797c:
      lVar12 = *(long *)(param_1 + 0x20);
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}



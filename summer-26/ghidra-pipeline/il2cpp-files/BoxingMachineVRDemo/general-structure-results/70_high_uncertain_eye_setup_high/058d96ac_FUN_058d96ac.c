/*
FUNCTION_NAME: FUN_058d96ac
ENTRY_POINT: 058d96ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058d96ac(long *param_1,long param_2,long param_3)

{
  void *__dest;
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_244;
  float local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  long local_1f0;
  long *plStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined1 auStack_140 [80];
  long local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  float local_d4;
  undefined4 local_d0;
  
  puVar3 = PTR_DAT_0675e1b8;
  if ((DAT_06b80b5a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06786178);
    FUN_02d6084c(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06786148);
    FUN_02d6084c(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(PTR_DAT_06762ff8);
    FUN_02d6084c(PTR_DAT_0675e6c8);
    DAT_06b80b5a = 1;
  }
  local_180 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_154 = 0;
  uStack_160 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  local_1b0 = 0;
  uStack_1ac = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  local_1bc = 0;
  plStack_1e8 = (long *)0x0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  uVar6 = FUN_058e0424(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      if (param_2 != 0) {
        uVar22 = *(undefined4 *)(param_2 + 0x19c);
        uVar23 = *(undefined4 *)(param_2 + 0x1a0);
        uVar24 = *(undefined4 *)(param_2 + 0x1a4);
        uVar20 = *(undefined4 *)(param_2 + 0x1a8);
        local_244 = *(float *)(param_2 + 0x1ac);
        fVar21 = *(float *)(param_2 + 0x1b0);
        uVar7 = (ulong)*(uint *)(param_2 + 0x1b4);
        if (DAT_06b72244 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b72244 = '\x01';
        }
        puVar4 = PTR_DAT_0675e318;
        lVar11 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
        local_240 = (float)FUN_06058dfc(uVar20,local_244,fVar21,uVar7,*(undefined4 *)(lVar11 + 0x48)
                                        ,*(undefined4 *)(lVar11 + 0x4c),
                                        *(undefined4 *)(lVar11 + 0x50),0);
        if (DAT_06b72248 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72248 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar19 = (ulong)(uint)(fVar21 * fVar21);
        fVar14 = SQRT(fVar21 * fVar21 + local_240 * local_240 + local_244 * local_244);
        if (fVar14 <= DAT_01208410) {
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
          local_240 = *pfVar12;
          local_244 = pfVar12[1];
          fVar21 = pfVar12[2];
        }
        else {
          local_240 = local_240 / fVar14;
          uVar19 = (ulong)(uint)local_240;
          local_244 = local_244 / fVar14;
          fVar21 = fVar21 / fVar14;
        }
        local_23c = *(float *)((long)param_1 + 0x34);
        if (*(char *)((long)param_1 + 0x32) != '\0') {
          uVar20 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e6c8);
          }
          fStack_1fc = local_240;
          local_1f8 = local_244;
          local_208 = uVar22;
          uStack_204 = uVar23;
          local_200 = uVar24;
          fStack_1f4 = fVar21;
          uVar8 = FUN_060edb58(local_23c,&local_208,&local_170,uVar20,0);
          if ((uVar8 & 1) != 0) {
            local_23c = (float)FUN_060f3470(&local_170,0);
          }
        }
        if (*(char *)((long)param_1 + 0x31) != '\0') {
          uVar20 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_06762ff8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06762ff8);
          }
          fStack_214 = local_240;
          local_210 = local_244;
          local_220 = uVar22;
          uStack_21c = uVar23;
          local_218 = uVar24;
          fStack_20c = fVar21;
          FUN_060e60b0(&local_f0,local_23c,&local_220,uVar20,0);
          uStack_188 = CONCAT44(local_d4,uStack_d8);
          uStack_190 = CONCAT44(local_dc,local_e0);
          uStack_198 = uStack_e8;
          local_1a0 = local_f0;
          local_180 = local_d0;
          uVar6 = FUN_060e68b4(&local_1a0,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar3);
          }
          uVar8 = FUN_0606a004(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            local_23c = (float)FUN_060e68a4(&local_1a0,0);
          }
        }
        lVar11 = param_1[5];
        if (lVar11 != 0) {
          iVar13 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar13) {
            FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar13,0);
          }
          uVar6 = FUN_058e0424(param_1);
          uVar8 = (ulong)(uint)local_244;
          fStack_22c = local_240;
          local_228 = local_244;
          local_238 = uVar22;
          uStack_234 = uVar23;
          local_230 = uVar24;
          fStack_224 = fVar21;
          FUN_058e0748(param_1,uVar6,&local_238,param_1[5]);
          puVar5 = OVRPlugin_OVRP_1_44_0_TypeInfo;
          puVar3 = PTR_DAT_06786178;
          lVar11 = param_1[5];
          if (lVar11 != 0) {
            iVar13 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar13) {
                return;
              }
              FUN_03c170fc(&local_f0,lVar11,iVar13,*(undefined8 *)puVar5);
              fVar14 = local_d4;
              uVar23 = uStack_d8;
              uVar22 = local_dc;
              uVar20 = local_e0;
              uVar6 = uStack_e8;
              lVar11 = local_f0;
              if (local_f0 == 0) break;
              lVar9 = FUN_06066d44(local_f0,0);
              if ((char)param_1[6] == '\0') {
                bVar2 = true;
              }
              else {
                if ((lVar9 == 0) || (lVar10 = FUN_0606a288(lVar9,0), lVar10 == 0)) break;
                uVar16 = FUN_06076fa4(lVar10,0);
                if (DAT_06b72244 == '\0') {
                  FUN_02d6084c(puVar4);
                  DAT_06b72244 = '\x01';
                }
                lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
                fVar15 = (float)FUN_06058dfc(uVar16,uVar8,uVar19,uVar7,
                                             *(undefined4 *)(lVar10 + 0x48),
                                             *(undefined4 *)(lVar10 + 0x4c),
                                             *(undefined4 *)(lVar10 + 0x50),0);
                uVar7 = (ulong)(uint)local_244;
                fVar17 = (float)uVar8;
                fVar18 = fVar21 * (float)uVar19;
                uVar8 = (ulong)(uint)fVar18;
                bVar2 = 0.0 < fVar18 + local_240 * fVar15 + local_244 * fVar17;
              }
              if ((fVar14 < local_23c) && (bVar2)) {
                uStack_1a8 = 0;
                uStack_1a4 = 0;
                local_1b0 = 0;
                uStack_1ac = 0;
                uStack_1c8 = 0;
                uStack_1c4 = 0;
                local_1d0 = 0;
                uStack_1b8 = 0;
                uStack_1c0 = 0;
                local_1bc = 0;
                plStack_1e8 = (long *)0x0;
                local_1d8 = 0;
                local_1e0 = 0;
                local_1f0 = lVar9;
                thunk_FUN_02dd37b4(&local_1f0,lVar9);
                plStack_1e8 = param_1;
                thunk_FUN_02dd37b4((ulong)&local_1f0 | 8,param_1);
                local_1e0 = CONCAT44(local_1e0._4_4_,fVar14);
                if (param_3 == 0) break;
                local_1e0 = CONCAT44((float)*(int *)(param_3 + 0x18),fVar14);
                uVar24 = FUN_061784cc(lVar11,0);
                lVar9 = *(long *)puVar3;
                local_1d8 = CONCAT44(local_1d8._4_4_,uVar24);
                uStack_1c4 = (undefined4)uVar6;
                uStack_1c0 = (undefined4)((ulong)uVar6 >> 0x20);
                local_1bc = uVar20;
                uStack_1ac = uVar22;
                uStack_1a8 = uVar23;
                memcpy(auStack_140,&local_1f0,0x50);
                lVar11 = *(long *)(param_3 + 0x10);
                *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                if (lVar11 == 0) break;
                uVar1 = *(uint *)(param_3 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  __dest = (void *)(lVar11 + (long)(int)uVar1 * 0x50 + 0x20);
                  *(uint *)(param_3 + 0x18) = uVar1 + 1;
                  memcpy(__dest,auStack_140,0x50);
                  thunk_FUN_02dd37b4(__dest,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
                  memcpy(&local_f0,auStack_140,0x50);
                  FUN_03adb370(param_3,&local_f0,uVar6);
                }
              }
              lVar11 = param_1[5];
              iVar13 = iVar13 + 1;
            } while (lVar11 != 0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  return;
}



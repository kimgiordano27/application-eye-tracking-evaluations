/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_xxyx
ENTRY_POINT: 058d96cc
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


void Unity_Mathematics_uint3__get_xxyx(long *param_1,long param_2,long param_3)

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
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined1 auStack_a0 [80];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  
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
  uStack_e0 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  plStack_148 = (long *)0x0;
  lStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
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
        fStack_1a4 = *(float *)(param_2 + 0x1ac);
        fVar21 = *(float *)(param_2 + 0x1b0);
        uVar7 = (ulong)*(uint *)(param_2 + 0x1b4);
        if (DAT_06b72244 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b72244 = '\x01';
        }
        puVar4 = PTR_DAT_0675e318;
        lVar11 = *(long *)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fStack_1a0 = (float)FUN_06058dfc(uVar20,fStack_1a4,fVar21,uVar7,
                                         *(undefined4 *)(lVar11 + 0x48),
                                         *(undefined4 *)(lVar11 + 0x4c),
                                         *(undefined4 *)(lVar11 + 0x50),0);
        if (DAT_06b72248 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72248 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar19 = (ulong)(uint)(fVar21 * fVar21);
        fVar14 = SQRT(fVar21 * fVar21 + fStack_1a0 * fStack_1a0 + fStack_1a4 * fStack_1a4);
        if (fVar14 <= DAT_01208410) {
          if (DAT_06b7224b == '\0') {
            FUN_02d6084c(PTR_DAT_0675e318);
            DAT_06b7224b = '\x01';
          }
          pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
          fStack_1a0 = *pfVar12;
          fStack_1a4 = pfVar12[1];
          fVar21 = pfVar12[2];
        }
        else {
          fStack_1a0 = fStack_1a0 / fVar14;
          uVar19 = (ulong)(uint)fStack_1a0;
          fStack_1a4 = fStack_1a4 / fVar14;
          fVar21 = fVar21 / fVar14;
        }
        fStack_19c = *(float *)((long)param_1 + 0x34);
        if (*(char *)((long)param_1 + 0x32) != '\0') {
          uVar20 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e6c8);
          }
          fStack_15c = fStack_1a0;
          fStack_158 = fStack_1a4;
          uStack_168 = uVar22;
          uStack_164 = uVar23;
          uStack_160 = uVar24;
          fStack_154 = fVar21;
          uVar8 = FUN_060edb58(fStack_19c,&uStack_168,&uStack_d0,uVar20,0);
          if ((uVar8 & 1) != 0) {
            fStack_19c = (float)FUN_060f3470(&uStack_d0,0);
          }
        }
        if (*(char *)((long)param_1 + 0x31) != '\0') {
          uVar20 = FUN_0606b4c4((int)param_1[7],0);
          if (*(int *)(*(long *)PTR_DAT_06762ff8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06762ff8);
          }
          fStack_174 = fStack_1a0;
          fStack_170 = fStack_1a4;
          uStack_180 = uVar22;
          uStack_17c = uVar23;
          uStack_178 = uVar24;
          fStack_16c = fVar21;
          FUN_060e60b0(&lStack_50,fStack_19c,&uStack_180,uVar20,0);
          uStack_e8 = CONCAT44(fStack_34,uStack_38);
          uStack_f0 = CONCAT44(uStack_3c,uStack_40);
          uStack_f8 = uStack_48;
          lStack_100 = lStack_50;
          uStack_e0 = uStack_30;
          uVar6 = FUN_060e68b4(&lStack_100,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar3);
          }
          uVar8 = FUN_0606a004(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            fStack_19c = (float)FUN_060e68a4(&lStack_100,0);
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
          uVar8 = (ulong)(uint)fStack_1a4;
          fStack_18c = fStack_1a0;
          fStack_188 = fStack_1a4;
          uStack_198 = uVar22;
          uStack_194 = uVar23;
          uStack_190 = uVar24;
          fStack_184 = fVar21;
          FUN_058e0748(param_1,uVar6,&uStack_198,param_1[5]);
          puVar5 = OVRPlugin_OVRP_1_44_0_TypeInfo;
          puVar3 = PTR_DAT_06786178;
          lVar11 = param_1[5];
          if (lVar11 != 0) {
            iVar13 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar13) {
                return;
              }
              FUN_03c170fc(&lStack_50,lVar11,iVar13,*(undefined8 *)puVar5);
              fVar14 = fStack_34;
              uVar23 = uStack_38;
              uVar22 = uStack_3c;
              uVar20 = uStack_40;
              uVar6 = uStack_48;
              lVar11 = lStack_50;
              if (lStack_50 == 0) break;
              lVar9 = FUN_06066d44(lStack_50,0);
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
                uVar7 = (ulong)(uint)fStack_1a4;
                fVar17 = (float)uVar8;
                fVar18 = fVar21 * (float)uVar19;
                uVar8 = (ulong)(uint)fVar18;
                bVar2 = 0.0 < fVar18 + fStack_1a0 * fVar15 + fStack_1a4 * fVar17;
              }
              if ((fVar14 < fStack_19c) && (bVar2)) {
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_128 = 0;
                uStack_124 = 0;
                uStack_130 = 0;
                uStack_118 = 0;
                uStack_120 = 0;
                uStack_11c = 0;
                plStack_148 = (long *)0x0;
                uStack_138 = 0;
                uStack_140 = 0;
                lStack_150 = lVar9;
                thunk_FUN_02dd37b4(&lStack_150,lVar9);
                plStack_148 = param_1;
                thunk_FUN_02dd37b4((ulong)&lStack_150 | 8,param_1);
                uStack_140 = CONCAT44(uStack_140._4_4_,fVar14);
                if (param_3 == 0) break;
                uStack_140 = CONCAT44((float)*(int *)(param_3 + 0x18),fVar14);
                uVar24 = FUN_061784cc(lVar11,0);
                lVar9 = *(long *)puVar3;
                uStack_138 = CONCAT44(uStack_138._4_4_,uVar24);
                uStack_124 = (undefined4)uVar6;
                uStack_120 = (undefined4)((ulong)uVar6 >> 0x20);
                uStack_11c = uVar20;
                uStack_10c = uVar22;
                uStack_108 = uVar23;
                memcpy(auStack_a0,&lStack_150,0x50);
                lVar11 = *(long *)(param_3 + 0x10);
                *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                if (lVar11 == 0) break;
                uVar1 = *(uint *)(param_3 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  __dest = (void *)(lVar11 + (long)(int)uVar1 * 0x50 + 0x20);
                  *(uint *)(param_3 + 0x18) = uVar1 + 1;
                  memcpy(__dest,auStack_a0,0x50);
                  thunk_FUN_02dd37b4(__dest,0);
                }
                else {
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
                  memcpy(&lStack_50,auStack_a0,0x50);
                  FUN_03adb370(param_3,&lStack_50,uVar6);
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



/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GenerateRandomPositionOnSurface
ENTRY_POINT: 07738d9c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GenerateRandomPositionOnSurface
               (undefined8 param_1,long param_2,long *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  ulong uVar25;
  
  uStack_30 = in_stack_00000090;
  uStack_28 = in_stack_00000098;
  uStack_40 = in_stack_000000a0;
  uStack_38 = in_stack_000000a8;
  uStack_50 = in_stack_000000b0;
  uStack0000000000000008 = in_stack_000000b8;
  uStack_48 = in_stack_000000b8;
  uStack_60 = in_stack_000000c0;
  uStack_58 = in_stack_000000c8;
  uStack_20 = param_7;
  uStack_18 = param_8;
  uStack_10 = param_5;
  uStack_8 = param_6;
  if ((DAT_0a5231fc & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f31928);
    FUN_04447ba8(PTR_DAT_09f30ab8);
    FUN_04447ba8(PTR_DAT_09f31a90);
    FUN_04447ba8(PTR_DAT_09f31a98);
    FUN_04447ba8(PTR_DAT_09f31aa0);
    FUN_04447ba8(PTR_DAT_09f1ed58);
    FUN_04447ba8(PTR_DAT_09f31aa8);
    FUN_04447ba8(PTR_DAT_09f30f68);
    FUN_04447ba8(PTR_DAT_09f31ab0);
    FUN_04447ba8(PTR_DAT_09f30f80);
    FUN_04447ba8(PTR_DAT_09f1e538);
    DAT_0a5231fc = 1;
  }
  plVar20 = (long *)PTR_DAT_09f30ab8;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (param_2 == 0) goto LAB_077394c0;
  plVar11 = *(long **)(param_2 + 200);
  if (plVar11 == (long *)0x0) {
LAB_07738efc:
    plVar11 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f1ed58 + 0x130);
    if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_07738efc;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1ed58) {
      plVar11 = (long *)0x0;
    }
  }
  if (param_3 != (long *)0x0) {
    lVar12 = *param_3;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar17 + 0x26) * 0x10 + 0x138);
          goto LAB_07738f78;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(param_3,*(long *)PTR_DAT_09f30ab8,0x26);
LAB_07738f78:
    uVar15 = (*(code *)*puVar9)(param_3,puVar9[1]);
    if ((plVar11 == (long *)0x0) || ((uVar15 & 1) == 0)) {
LAB_077394c4:
      lVar12 = *param_3;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar20) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_07739514;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(param_3,*plVar20,4);
LAB_07739514:
      puVar3 = PTR_DAT_09f31aa0;
      puVar4 = PTR_DAT_09f31a90;
      uVar15 = (*(code *)*puVar9)(param_3,puVar9[1]);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<ValueTuple<Int32Enum,_int>,_object>__Dispose
                  (param_5,param_6,in_stack_000000a0,in_stack_000000a8,param_4,*(undefined8 *)puVar4
                  );
      }
      lVar12 = *param_3;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar20) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar17 + 6) * 0x10 + 0x138);
            goto LAB_077395a8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(param_3,*plVar20,6);
LAB_077395a8:
      uVar15 = (*(code *)*puVar9)(param_3,puVar9[1]);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e19fc(param_7,param_8,in_stack_000000b0,uStack0000000000000008,param_4,
                     *(undefined8 *)PTR_DAT_09f31a98);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<ValueTuple<Int32Enum,_int>,_object>__Dispose
                (in_stack_00000090,in_stack_00000098,in_stack_000000c0,in_stack_000000c8,param_4,
                 *(undefined8 *)puVar4);
      return;
    }
    lVar12 = *(long *)(param_2 + 0xd8);
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_07739644:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(long *)(param_2 + 0x18) != 0) {
        uVar19 = *(undefined8 *)(lVar12 + 0x20);
        uVar10 = FUN_0952a094(*(long *)(param_2 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar15 = FUN_09531730(uVar19,uVar10,0);
        puVar4 = PTR_DAT_09f30ab8;
        plVar20 = (long *)PTR_DAT_09f30ab8;
        if ((uVar15 & 1) == 0) goto LAB_077394c4;
        if (*(long *)(param_2 + 0xe0) != 0) {
          FUN_05b4c354(&uStack_160,*(long *)(param_2 + 0xe0),0,*(undefined8 *)PTR_DAT_09f31928);
          uStack_118 = uStack_158;
          uStack_120 = uStack_160;
          uStack_108 = uStack_148;
          uStack_110 = uStack_150;
          uStack_f8 = uStack_138;
          uStack_100 = uStack_140;
          uStack_e8 = uStack_128;
          uStack_f0 = uStack_130;
          FUN_09512574(&uStack_1a0,&uStack_120,0);
          uStack_158 = uStack_198;
          uStack_160 = uStack_1a0;
          uStack_148 = uStack_188;
          uStack_150 = uStack_190;
          uStack_138 = uStack_178;
          uStack_140 = uStack_180;
          uStack_128 = uStack_168;
          uStack_130 = uStack_170;
          lVar12 = *(long *)(param_2 + 0xd8);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07739644;
            if (*(long *)(lVar12 + 0x20) != 0) {
              FUN_0953ae04(&uStack_1a0,*(long *)(lVar12 + 0x20),0);
              uStack_258 = uStack_198;
              uStack_260 = uStack_1a0;
              uStack_248 = uStack_188;
              uStack_250 = uStack_190;
              uStack_238 = uStack_178;
              uStack_240 = uStack_180;
              uStack_228 = uStack_168;
              uStack_230 = uStack_170;
              uStack_218 = uStack_158;
              uStack_220 = uStack_160;
              uStack_208 = uStack_148;
              uStack_210 = uStack_150;
              uStack_1f8 = uStack_138;
              uStack_200 = uStack_140;
              uStack_1e8 = uStack_128;
              uStack_1f0 = uStack_130;
              FUN_09513338(&uStack_1e0,&uStack_220,&uStack_260,0);
              uStack_198 = uStack_1d8;
              uStack_1a0 = uStack_1e0;
              uStack_188 = uStack_1c8;
              uStack_190 = uStack_1d0;
              uStack_178 = uStack_1b8;
              uStack_180 = uStack_1c0;
              uStack_168 = uStack_1a8;
              uStack_170 = uStack_1b0;
              if ((*(long *)(param_2 + 0x18) != 0) &&
                 (lVar12 = FUN_0952a094(*(long *)(param_2 + 0x18),0), lVar12 != 0)) {
                FUN_09539898(&uStack_1e0,lVar12,0);
                uStack_2d8 = uStack_1d8;
                uStack_2e0 = uStack_1e0;
                uStack_2c8 = uStack_1c8;
                uStack_2d0 = uStack_1d0;
                uStack_2b8 = uStack_1b8;
                uStack_2c0 = uStack_1c0;
                uStack_2a8 = uStack_1a8;
                uStack_2b0 = uStack_1b0;
                uStack_298 = uStack_198;
                uStack_2a0 = uStack_1a0;
                uStack_288 = uStack_188;
                uStack_290 = uStack_190;
                uStack_278 = uStack_178;
                uStack_280 = uStack_180;
                uStack_268 = uStack_168;
                uStack_270 = uStack_170;
                FUN_09513338(&uStack_1e0,&uStack_2a0,&uStack_2e0,0);
                uStack_78 = uStack_1b8;
                uStack_80 = uStack_1c0;
                uStack_68 = uStack_1a8;
                uStack_70 = uStack_1b0;
                uStack_b8 = uStack_1b8;
                uStack_c0 = uStack_1c0;
                uStack_a8 = uStack_1a8;
                uStack_b0 = uStack_1b0;
                uStack_98 = uStack_1d8;
                uStack_a0 = uStack_1e0;
                uStack_88 = uStack_1c8;
                uStack_90 = uStack_1d0;
                uStack_d8 = uStack_1d8;
                uStack_e0 = uStack_1e0;
                uStack_c8 = uStack_1c8;
                uStack_d0 = uStack_1d0;
                FUN_09512d4c(0,&uStack_e0,0xe,0);
                FUN_09512d4c(0,&uStack_e0,0xd,0);
                FUN_09512d4c(0,&uStack_e0,0xc,0);
                FUN_09512574(&uStack_1e0,&uStack_e0,0);
                uStack_118 = uStack_1d8;
                uStack_120 = uStack_1e0;
                uStack_108 = uStack_1c8;
                uStack_110 = uStack_1d0;
                uStack_f8 = uStack_1b8;
                uStack_100 = uStack_1c0;
                uStack_e8 = uStack_1a8;
                uStack_f0 = uStack_1b0;
                FUN_095126ac(&uStack_1e0,&uStack_120,0);
                puVar7 = PTR_DAT_09f31aa8;
                puVar6 = PTR_DAT_09f30f80;
                puVar5 = PTR_DAT_09f30f68;
                puVar3 = PTR_DAT_09f1e748;
                fVar2 = DAT_01c7607c;
                uStack_d8 = uStack_1d8;
                uStack_e0 = uStack_1e0;
                uStack_c8 = uStack_1c8;
                uStack_d0 = uStack_1d0;
                uStack_b8 = uStack_1b8;
                uStack_c0 = uStack_1c0;
                uStack_a8 = uStack_1a8;
                uStack_b0 = uStack_1b0;
                lVar12 = *(long *)(param_2 + 0xc0);
                if (lVar12 != 0) {
                  iVar18 = 0;
                  uVar15 = uStack_1d0;
                  uVar25 = uStack_1c0;
                  uVar10 = uStack_1b0;
                  do {
                    iVar8 = FUN_094f3ae4(lVar12,0);
                    if (iVar8 <= iVar18) {
                      return;
                    }
                    iVar8 = iVar18 + param_4;
                    FUN_060f7584(&uStack_30,iVar18,*(undefined8 *)puVar5);
                    FUN_09513720(&uStack_a0,0);
                    FUN_060f75c8(&uStack_60,iVar8,*(undefined8 *)puVar6);
                    lVar13 = *param_3;
                    lVar12 = *(long *)puVar4;
                    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar16 != 0) {
                      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == lVar12) {
                          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                          goto LAB_0773928c;
                        }
                        uVar16 = uVar16 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac(param_3,lVar12,4);
LAB_0773928c:
                    uVar16 = (*(code *)*puVar9)(param_3,puVar9[1]);
                    fVar24 = (float)uVar25;
                    fVar22 = (float)uVar15;
                    if ((uVar16 & 1) != 0) {
                      FUN_060f7584(&uStack_10,iVar18,*(undefined8 *)puVar5);
                      fVar21 = (float)FUN_09513720(&uStack_e0,0);
                      if (DAT_0a51bf42 == '\0') {
                        FUN_04447ba8(puVar3);
                        DAT_0a51bf42 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      fVar23 = SQRT(fVar24 * fVar24 + fVar21 * fVar21 + fVar22 * fVar22);
                      if (fVar23 <= fVar2) {
                        if (DAT_0a51bf43 == '\0') {
                          FUN_04447ba8(PTR_DAT_09f1e740);
                          DAT_0a51bf43 = '\x01';
                        }
                        pfVar14 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                        fVar21 = *pfVar14;
                        fVar22 = pfVar14[1];
                        fVar24 = pfVar14[2];
                      }
                      else {
                        fVar21 = fVar21 / fVar23;
                        fVar22 = fVar22 / fVar23;
                        fVar24 = fVar24 / fVar23;
                      }
                      uVar25 = (ulong)(uint)fVar24;
                      uVar15 = (ulong)(uint)fVar22;
                      FUN_060f75c8(fVar21,&uStack_40,iVar8,*(undefined8 *)puVar6);
                    }
                    lVar13 = *param_3;
                    lVar12 = *(long *)puVar4;
                    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar16 != 0) {
                      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == lVar12) {
                          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                          goto LAB_077393b8;
                        }
                        uVar16 = uVar16 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac(param_3,lVar12,6);
LAB_077393b8:
                    uVar16 = (*(code *)*puVar9)(param_3,puVar9[1]);
                    fVar24 = (float)uVar25;
                    fVar22 = (float)uVar15;
                    if ((uVar16 & 1) != 0) {
                      FUN_060f7bfc(&uStack_20,iVar18,*(undefined8 *)puVar7);
                      FUN_060f7bfc(&uStack_20,iVar18,*(undefined8 *)puVar7);
                      fVar21 = (float)FUN_09513720(&uStack_e0,0);
                      if (DAT_0a51bf42 == '\0') {
                        FUN_04447ba8(puVar3);
                        DAT_0a51bf42 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      fVar23 = SQRT(fVar24 * fVar24 + fVar21 * fVar21 + fVar22 * fVar22);
                      if (fVar23 <= fVar2) {
                        if (DAT_0a51bf43 == '\0') {
                          FUN_04447ba8(PTR_DAT_09f1e740);
                          DAT_0a51bf43 = '\x01';
                        }
                        pfVar14 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                        fVar21 = *pfVar14;
                        fVar22 = pfVar14[1];
                        fVar24 = pfVar14[2];
                      }
                      else {
                        fVar21 = fVar21 / fVar23;
                        fVar22 = fVar22 / fVar23;
                        fVar24 = fVar24 / fVar23;
                      }
                      uVar25 = (ulong)(uint)fVar24;
                      uVar15 = (ulong)(uint)fVar22;
                      FUN_060f7c40(fVar21,uVar15,uVar25,uVar10,&uStack_50,iVar8,
                                   *(undefined8 *)PTR_DAT_09f31ab0);
                    }
                    lVar12 = *(long *)(param_2 + 0xc0);
                    iVar18 = iVar18 + 1;
                  } while (lVar12 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_077394c0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



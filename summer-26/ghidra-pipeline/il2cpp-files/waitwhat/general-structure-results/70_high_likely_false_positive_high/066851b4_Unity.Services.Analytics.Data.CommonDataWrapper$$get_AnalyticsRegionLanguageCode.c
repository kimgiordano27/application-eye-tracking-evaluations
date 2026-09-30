/*
FUNCTION_NAME: Unity.Services.Analytics.Data.CommonDataWrapper$$get_AnalyticsRegionLanguageCode
ENTRY_POINT: 066851b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


long Unity_Services_Analytics_Data_CommonDataWrapper__get_AnalyticsRegionLanguageCode
               (long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long alStack_120 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  long lStack_10;
  undefined8 uStack_8;
  
  puVar8 = Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo;
  if ((DAT_07557e7e & 1) == 0) {
    FUN_03188a78(Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo);
    FUN_03188a78(Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_HierarchyEvent_TypeInfo);
    DAT_07557e7e = 1;
  }
  lStack_10 = 0;
  uStack_8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uVar10 = FUN_064b5b9c(param_2,0);
  alStack_120[0] = 0;
  FUN_04613c1c(alStack_120,uVar10,*(undefined8 *)puVar8);
  lStack_10 = alStack_120[0];
  uStack_8 = 0;
  if ((*(int *)((long)param_1 + 0x7c) == 2) && ((int)param_1[0x15] != 0)) {
    if (0 < (int)param_1[3]) {
      memcpy(alStack_120,(void *)param_1[2],0x60);
      uStack_48 = uStack_f8;
      uStack_50 = uStack_100;
      uStack_38 = uStack_e8;
      uStack_40 = uStack_f0;
      uStack_28 = uStack_d8;
      uStack_30 = uStack_e0;
      uStack_18 = uStack_c8;
      uStack_20 = uStack_d0;
      fVar15 = (float)FUN_069c2578(&uStack_50,0xf,0);
      if ((((fVar15 == 1.0) && (fVar15 = (float)FUN_069c2578(&uStack_50,0xb,0), fVar15 == 0.0)) &&
          (fVar15 = (float)FUN_069c2578(&uStack_50,7,0), fVar15 == 0.0)) &&
         (fVar15 = (float)FUN_069c2578(&uStack_50,3,0), fVar15 == 0.0)) {
        uStack_88 = *(undefined8 *)((long)param_1 + 0x44);
        uStack_90 = *(undefined8 *)((long)param_1 + 0x3c);
        uStack_78 = *(undefined8 *)((long)param_1 + 0x54);
        uVar25 = *(undefined8 *)((long)param_1 + 0x4c);
        uStack_68 = *(undefined8 *)((long)param_1 + 100);
        uVar28 = *(undefined8 *)((long)param_1 + 0x5c);
        uStack_58 = *(undefined8 *)((long)param_1 + 0x74);
        uStack_60 = *(undefined8 *)((long)param_1 + 0x6c);
        uStack_80 = uVar25;
        uStack_70 = uVar28;
        fVar15 = (float)FUN_069c28f8(&uStack_90,2,0);
        puVar8 = Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo;
        iVar11 = (int)param_1[0x15];
        uVar13 = 0;
        if (0 < iVar11) {
          uVar12 = 0;
          do {
            puVar6 = (undefined8 *)
                     (*param_1 + (long)(int)(uVar12 + *(int *)((long)param_1 + 0xa4)) * 0x10);
            uStack_98 = puVar6[1];
            uVar21 = *puVar6;
            uStack_a0._0_4_ = (float)uVar21;
            uStack_a0._4_4_ = (float)((ulong)uVar21 >> 0x20);
            uStack_a0 = uVar21;
            if ((int)((uStack_a0._4_4_ * -(float)uVar25 - fVar15 * (float)uStack_a0) -
                     (float)uVar28 * (float)uStack_98) < 0) {
              uVar13 = 1 << (ulong)(uVar12 & 0x1f) | uVar13;
            }
            else {
              FUN_04613e84(&lStack_10,&uStack_a0,*(undefined8 *)puVar8);
              iVar11 = (int)param_1[0x15];
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < iVar11);
        }
        lVar9 = lStack_10;
        if ((*(ushort *)
              (*(long *)(*(long *)UnityEngine_UIElements_HierarchyEvent_TypeInfo + 0x20) + 0x135) &
            1) == 0) {
          FUN_031c09d4();
          iVar11 = (int)param_1[0x15];
        }
        puVar8 = PTR_DAT_070c22f8;
        fVar35 = DAT_012e3cb4;
        uStack_8 = CONCAT44(uStack_8._4_4_,*(undefined4 *)(lVar9 + 8));
        if (iVar11 != 6) {
          return lStack_10;
        }
        iVar11 = 6;
        uVar12 = 0;
        do {
          uVar3 = uVar12 + 1;
          if ((int)uVar3 < iVar11) {
            uVar4 = (int)uVar13 >> (uVar12 & 0x1f);
            uVar14 = uVar3;
            do {
              if ((1 < (uVar14 ^ uVar12)) && (((uVar13 >> (ulong)(uVar14 & 0x1f) ^ uVar4) & 1) != 0)
                 ) {
                uVar5 = uVar14;
                uVar7 = uVar12;
                if ((uVar4 & 1) != 0) {
                  uVar5 = uVar12;
                  uVar7 = uVar14;
                }
                puVar1 = (undefined4 *)
                         (*param_1 + (long)(int)(*(int *)((long)param_1 + 0xa4) + uVar7) * 0x10);
                puVar2 = (undefined4 *)
                         (*param_1 + (long)(int)(*(int *)((long)param_1 + 0xa4) + uVar5) * 0x10);
                fVar26 = (float)puVar1[2];
                fVar29 = (float)puVar1[3];
                fVar23 = (float)puVar1[1];
                uVar10 = *puVar2;
                fVar33 = (float)puVar2[1];
                fVar36 = (float)puVar2[2];
                fVar30 = (float)puVar2[3];
                fVar16 = (float)FUN_065b2eec(*puVar1,0);
                fVar17 = (float)FUN_065b2eec(uVar10,0);
                fVar34 = -(float)uVar25;
                fVar20 = -(float)uVar28;
                fVar18 = (float)FUN_065b2eec(-fVar15,0);
                if (DAT_075576bd == '\0') {
                  FUN_03188a78(puVar8);
                  DAT_075576bd = '\x01';
                }
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar19 = fVar16 * fVar33 - fVar23 * fVar17;
                fVar24 = fVar26 * fVar17 - fVar16 * fVar36;
                fVar27 = fVar23 * fVar36 - fVar26 * fVar33;
                fVar31 = fVar20 * fVar24 - fVar34 * fVar19;
                fVar32 = fVar18 * fVar19 - fVar20 * fVar27;
                fVar19 = fVar34 * fVar27 - fVar18 * fVar24;
                fVar24 = SQRT(fVar19 * fVar19 + fVar31 * fVar31 + fVar32 * fVar32);
                fVar32 = fVar32 / fVar24;
                fVar19 = fVar19 / fVar24;
                fVar34 = -(fVar20 * (fVar29 * fVar36 - fVar30 * fVar26) +
                          fVar18 * (fVar29 * fVar17 - fVar30 * fVar16) +
                          fVar34 * (fVar29 * fVar33 - fVar30 * fVar23)) / fVar24;
                if ((((uint)ABS(fVar31 / fVar24) < 0x7f800001 && (uint)ABS(fVar19) < 0x7f800001) &&
                    (uint)ABS(fVar34) < 0x7f800001) && (uint)ABS(fVar32) < 0x7f800001) {
                  fVar20 = (float)FUN_065b2ee8(0);
                  if (DAT_07546bbf == '\0') {
                    FUN_03188a78(puVar8);
                    DAT_07546bbf = '\x01';
                  }
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  fVar16 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar32 * fVar32);
                  if (fVar16 <= fVar35) {
                    if (DAT_075457d6 == '\0') {
                      FUN_03188a78(PTR_DAT_070c1a80);
                      DAT_075457d6 = '\x01';
                    }
                    uStack_b0 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                    fVar19 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                  }
                  else {
                    uStack_b0 = CONCAT44(fVar32 / fVar16,fVar20 / fVar16);
                    fVar19 = fVar19 / fVar16;
                  }
                  uStack_a8 = CONCAT44(fVar34,fVar19);
                  FUN_04613e84(&lStack_10,&uStack_b0,
                               *(undefined8 *)
                                Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo
                              );
                }
              }
              iVar11 = (int)param_1[0x15];
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < iVar11);
          }
          uVar12 = uVar3;
        } while ((int)uVar3 < iVar11);
        return lStack_10;
      }
    }
    uStack_88 = *(undefined8 *)((long)param_1 + 0x44);
    uStack_90 = *(undefined8 *)((long)param_1 + 0x3c);
    uStack_78 = *(undefined8 *)((long)param_1 + 0x54);
    uVar25 = *(undefined8 *)((long)param_1 + 0x4c);
    uStack_68 = *(undefined8 *)((long)param_1 + 100);
    uVar28 = *(undefined8 *)((long)param_1 + 0x5c);
    uStack_58 = *(undefined8 *)((long)param_1 + 0x74);
    uStack_60 = *(undefined8 *)((long)param_1 + 0x6c);
    uStack_80 = uVar25;
    uStack_70 = uVar28;
    fVar15 = (float)FUN_069c2d04(&uStack_90,0);
    puVar8 = Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo;
    iVar11 = (int)param_1[0x15];
    uVar13 = 0;
    if (0 < iVar11) {
      uVar12 = 0;
      do {
        puVar6 = (undefined8 *)
                 (*param_1 + (long)(int)(uVar12 + *(int *)((long)param_1 + 0xa4)) * 0x10);
        uVar22 = puVar6[1];
        uVar21 = *puVar6;
        uStack_c0._0_4_ = (float)uVar21;
        uStack_c0._4_4_ = (float)((ulong)uVar21 >> 0x20);
        uStack_b8._0_4_ = (float)uVar22;
        uStack_b8._4_4_ = (float)((ulong)uVar22 >> 0x20);
        uStack_c0 = uVar21;
        uStack_b8 = uVar22;
        if ((int)(uStack_b8._4_4_ +
                 (float)uVar28 * (float)uStack_b8 +
                 fVar15 * (float)uStack_c0 + (float)uVar25 * uStack_c0._4_4_) < 0) {
          uVar13 = 1 << (ulong)(uVar12 & 0x1f) | uVar13;
        }
        else {
          FUN_04613e84(&lStack_10,&uStack_c0,*(undefined8 *)puVar8);
          iVar11 = (int)param_1[0x15];
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar11);
    }
    lVar9 = lStack_10;
    if ((*(ushort *)
          (*(long *)(*(long *)UnityEngine_UIElements_HierarchyEvent_TypeInfo + 0x20) + 0x135) & 1)
        == 0) {
      FUN_031c09d4();
      iVar11 = (int)param_1[0x15];
    }
    puVar8 = PTR_DAT_070c22f8;
    uStack_8 = CONCAT44(uStack_8._4_4_,*(undefined4 *)(lVar9 + 8));
    if (iVar11 == 6) {
      iVar11 = 6;
      uVar12 = 0;
      do {
        uVar3 = uVar12 + 1;
        if ((int)uVar3 < iVar11) {
          uVar4 = (int)uVar13 >> (uVar12 & 0x1f);
          uVar14 = uVar3;
          do {
            if ((1 < (uVar14 ^ uVar12)) && (((uVar13 >> (ulong)(uVar14 & 0x1f) ^ uVar4) & 1) != 0))
            {
              uVar5 = uVar14;
              uVar7 = uVar12;
              if ((uVar4 & 1) != 0) {
                uVar5 = uVar12;
                uVar7 = uVar14;
              }
              puVar1 = (undefined4 *)
                       (*param_1 + (long)(int)(*(int *)((long)param_1 + 0xa4) + uVar7) * 0x10);
              puVar2 = (undefined4 *)
                       (*param_1 + (long)(int)(*(int *)((long)param_1 + 0xa4) + uVar5) * 0x10);
              fVar33 = (float)puVar1[2];
              fVar36 = (float)puVar1[3];
              fVar18 = (float)puVar1[1];
              uVar10 = *puVar2;
              fVar23 = (float)puVar2[1];
              fVar26 = (float)puVar2[2];
              fVar29 = (float)puVar2[3];
              fVar20 = (float)FUN_065b2eec(*puVar1,0);
              fVar16 = (float)FUN_065b2eec(uVar10,0);
              fVar35 = (float)uVar25;
              fVar34 = (float)uVar28;
              fVar17 = (float)FUN_065b2eec(fVar15,0);
              if (DAT_075576bd == '\0') {
                FUN_03188a78(puVar8);
                DAT_075576bd = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              fVar30 = fVar20 * fVar23 - fVar18 * fVar16;
              fVar19 = fVar33 * fVar16 - fVar20 * fVar26;
              fVar24 = fVar18 * fVar26 - fVar33 * fVar23;
              fVar32 = fVar36 * fVar16 - fVar29 * fVar20;
              fVar23 = fVar36 * fVar23 - fVar29 * fVar18;
              fVar33 = fVar36 * fVar26 - fVar29 * fVar33;
              fVar20 = fVar32 + (fVar34 * fVar19 - fVar35 * fVar30);
              fVar18 = fVar23 + (fVar17 * fVar30 - fVar34 * fVar24);
              fVar16 = fVar33 + (fVar35 * fVar24 - fVar17 * fVar19);
              fVar26 = SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar18 * fVar18);
              fVar18 = fVar18 / fVar26;
              fVar16 = fVar16 / fVar26;
              fVar35 = -(fVar34 * fVar33 + fVar17 * fVar32 + fVar35 * fVar23) / fVar26;
              if ((((uint)ABS(fVar20 / fVar26) < 0x7f800001 && (uint)ABS(fVar16) < 0x7f800001) &&
                  (uint)ABS(fVar35) < 0x7f800001) && (uint)ABS(fVar18) < 0x7f800001) {
                fVar34 = (float)FUN_065b2ee8(0);
                if (DAT_07546bbf == '\0') {
                  FUN_03188a78(puVar8);
                  DAT_07546bbf = '\x01';
                }
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar20 = SQRT(fVar16 * fVar16 + fVar34 * fVar34 + fVar18 * fVar18);
                if (fVar20 <= DAT_012e3cb4) {
                  if (DAT_075457d6 == '\0') {
                    FUN_03188a78(PTR_DAT_070c1a80);
                    DAT_075457d6 = '\x01';
                  }
                  uStack_b0 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                  fVar16 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                }
                else {
                  uStack_b0 = CONCAT44(fVar18 / fVar20,fVar34 / fVar20);
                  fVar16 = fVar16 / fVar20;
                }
                uStack_a8 = CONCAT44(fVar35,fVar16);
                FUN_04613e84(&lStack_10,&uStack_b0,
                             *(undefined8 *)
                              Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo);
              }
            }
            iVar11 = (int)param_1[0x15];
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar11);
        }
        uVar12 = uVar3;
      } while ((int)uVar3 < iVar11);
    }
  }
  return lStack_10;
}



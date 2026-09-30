/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Locale$$AnalyticsRegionLanguageCode
ENTRY_POINT: 066851b8
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


long Unity_Services_Analytics_Internal_Locale__AnalyticsRegionLanguageCode
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
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack000000000000000c;
  float fStack0000000000000014;
  long in_stack_00000040;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  
  puVar8 = Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo;
  if ((DAT_07557e7e & 1) == 0) {
    FUN_03188a78(Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo);
    FUN_03188a78(Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_HierarchyEvent_TypeInfo);
    DAT_07557e7e = 1;
  }
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  _fStack00000000000000c0 = 0;
  _fStack00000000000000c8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  _fStack00000000000000a0 = 0;
  _fStack00000000000000a8 = 0;
  uVar10 = FUN_064b5b9c(param_2,0);
  in_stack_00000040 = 0;
  FUN_04613c1c(&stack0x00000040,uVar10,*(undefined8 *)puVar8);
  in_stack_00000150 = in_stack_00000040;
  in_stack_00000158 = 0;
  if ((*(int *)((long)param_1 + 0x7c) == 2) && ((int)param_1[0x15] != 0)) {
    if (0 < (int)param_1[3]) {
      memcpy(&stack0x00000040,(void *)param_1[2],0x60);
      in_stack_00000118 = in_stack_00000068;
      in_stack_00000110 = in_stack_00000060;
      in_stack_00000128 = in_stack_00000078;
      in_stack_00000120 = in_stack_00000070;
      in_stack_00000138 = in_stack_00000088;
      in_stack_00000130 = in_stack_00000080;
      in_stack_00000148 = in_stack_00000098;
      in_stack_00000140 = in_stack_00000090;
      fVar15 = (float)FUN_069c2578(&stack0x00000110,0xf,0);
      if ((((fVar15 == 1.0) && (fVar15 = (float)FUN_069c2578(&stack0x00000110,0xb,0), fVar15 == 0.0)
           ) && (fVar15 = (float)FUN_069c2578(&stack0x00000110,7,0), fVar15 == 0.0)) &&
         (fVar15 = (float)FUN_069c2578(&stack0x00000110,3,0), fVar15 == 0.0)) {
        in_stack_000000d8 = *(undefined8 *)((long)param_1 + 0x44);
        in_stack_000000d0 = *(undefined8 *)((long)param_1 + 0x3c);
        in_stack_000000e8 = *(undefined8 *)((long)param_1 + 0x54);
        uVar22 = *(undefined8 *)((long)param_1 + 0x4c);
        in_stack_000000f8 = *(undefined8 *)((long)param_1 + 100);
        uVar27 = *(undefined8 *)((long)param_1 + 0x5c);
        in_stack_00000108 = *(undefined8 *)((long)param_1 + 0x74);
        in_stack_00000100 = *(undefined8 *)((long)param_1 + 0x6c);
        in_stack_000000e0 = uVar22;
        in_stack_000000f0 = uVar27;
        fVar15 = (float)FUN_069c28f8(&stack0x000000d0,2,0);
        puVar8 = Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo;
        iVar11 = (int)param_1[0x15];
        uVar13 = 0;
        if (0 < iVar11) {
          uVar12 = 0;
          do {
            puVar6 = (undefined8 *)
                     (*param_1 + (long)(int)(uVar12 + *(int *)((long)param_1 + 0xa4)) * 0x10);
            _fStack00000000000000c8 = puVar6[1];
            uVar21 = *puVar6;
            fStack00000000000000c0 = (float)uVar21;
            fStack00000000000000c4 = (float)((ulong)uVar21 >> 0x20);
            _fStack00000000000000c0 = uVar21;
            if ((int)((fStack00000000000000c4 * -(float)uVar22 - fVar15 * fStack00000000000000c0) -
                     (float)uVar27 * fStack00000000000000c8) < 0) {
              uVar13 = 1 << (ulong)(uVar12 & 0x1f) | uVar13;
            }
            else {
              FUN_04613e84(&stack0x00000150,&stack0x000000c0,*(undefined8 *)puVar8);
              iVar11 = (int)param_1[0x15];
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < iVar11);
        }
        lVar9 = in_stack_00000150;
        if ((*(ushort *)
              (*(long *)(*(long *)UnityEngine_UIElements_HierarchyEvent_TypeInfo + 0x20) + 0x135) &
            1) == 0) {
          FUN_031c09d4();
          iVar11 = (int)param_1[0x15];
        }
        puVar8 = PTR_DAT_070c22f8;
        in_stack_00000158 = CONCAT44(in_stack_00000158._4_4_,*(undefined4 *)(lVar9 + 8));
        if (iVar11 != 6) {
          return in_stack_00000150;
        }
        fStack0000000000000014 = -fVar15;
        fStack000000000000000c = DAT_012e3cb4;
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
                fVar25 = (float)puVar1[2];
                fVar28 = (float)puVar1[3];
                fVar23 = (float)puVar1[1];
                uVar10 = *puVar2;
                fVar32 = (float)puVar2[1];
                fVar33 = (float)puVar2[2];
                fVar29 = (float)puVar2[3];
                fVar16 = (float)FUN_065b2eec(*puVar1,0);
                fVar17 = (float)FUN_065b2eec(uVar10,0);
                fVar15 = -(float)uVar22;
                fVar20 = -(float)uVar27;
                fVar18 = (float)FUN_065b2eec(fStack0000000000000014,0);
                if (DAT_075576bd == '\0') {
                  FUN_03188a78(puVar8);
                  DAT_075576bd = '\x01';
                }
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar19 = fVar16 * fVar32 - fVar23 * fVar17;
                fVar24 = fVar25 * fVar17 - fVar16 * fVar33;
                fVar26 = fVar23 * fVar33 - fVar25 * fVar32;
                fVar30 = fVar20 * fVar24 - fVar15 * fVar19;
                fVar31 = fVar18 * fVar19 - fVar20 * fVar26;
                fVar19 = fVar15 * fVar26 - fVar18 * fVar24;
                fVar24 = SQRT(fVar19 * fVar19 + fVar30 * fVar30 + fVar31 * fVar31);
                fVar31 = fVar31 / fVar24;
                fVar19 = fVar19 / fVar24;
                fVar15 = -(fVar20 * (fVar28 * fVar33 - fVar29 * fVar25) +
                          fVar18 * (fVar28 * fVar17 - fVar29 * fVar16) +
                          fVar15 * (fVar28 * fVar32 - fVar29 * fVar23)) / fVar24;
                if ((((uint)ABS(fVar30 / fVar24) < 0x7f800001 && (uint)ABS(fVar19) < 0x7f800001) &&
                    (uint)ABS(fVar15) < 0x7f800001) && (uint)ABS(fVar31) < 0x7f800001) {
                  fVar20 = (float)FUN_065b2ee8(0);
                  if (DAT_07546bbf == '\0') {
                    FUN_03188a78(puVar8);
                    DAT_07546bbf = '\x01';
                  }
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  fVar16 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar31 * fVar31);
                  if (fVar16 <= fStack000000000000000c) {
                    if (DAT_075457d6 == '\0') {
                      FUN_03188a78(PTR_DAT_070c1a80);
                      DAT_075457d6 = '\x01';
                    }
                    in_stack_000000b0 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                    fVar19 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                  }
                  else {
                    in_stack_000000b0 = CONCAT44(fVar31 / fVar16,fVar20 / fVar16);
                    fVar19 = fVar19 / fVar16;
                  }
                  in_stack_000000b8 = CONCAT44(fVar15,fVar19);
                  FUN_04613e84(&stack0x00000150,&stack0x000000b0,
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
        return in_stack_00000150;
      }
    }
    in_stack_000000d8 = *(undefined8 *)((long)param_1 + 0x44);
    in_stack_000000d0 = *(undefined8 *)((long)param_1 + 0x3c);
    in_stack_000000e8 = *(undefined8 *)((long)param_1 + 0x54);
    uVar22 = *(undefined8 *)((long)param_1 + 0x4c);
    in_stack_000000f8 = *(undefined8 *)((long)param_1 + 100);
    uVar27 = *(undefined8 *)((long)param_1 + 0x5c);
    in_stack_00000108 = *(undefined8 *)((long)param_1 + 0x74);
    in_stack_00000100 = *(undefined8 *)((long)param_1 + 0x6c);
    in_stack_000000e0 = uVar22;
    in_stack_000000f0 = uVar27;
    fVar15 = (float)FUN_069c2d04(&stack0x000000d0,0);
    puVar8 = Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton_TypeInfo;
    iVar11 = (int)param_1[0x15];
    uVar13 = 0;
    fStack0000000000000014 = (float)uVar22;
    if (0 < iVar11) {
      uVar12 = 0;
      do {
        puVar6 = (undefined8 *)
                 (*param_1 + (long)(int)(uVar12 + *(int *)((long)param_1 + 0xa4)) * 0x10);
        uVar21 = puVar6[1];
        uVar22 = *puVar6;
        fStack00000000000000a0 = (float)uVar22;
        fStack00000000000000a4 = (float)((ulong)uVar22 >> 0x20);
        fStack00000000000000a8 = (float)uVar21;
        fStack00000000000000ac = (float)((ulong)uVar21 >> 0x20);
        _fStack00000000000000a0 = uVar22;
        _fStack00000000000000a8 = uVar21;
        if ((int)(fStack00000000000000ac +
                 (float)uVar27 * fStack00000000000000a8 +
                 fVar15 * fStack00000000000000a0 + fStack0000000000000014 * fStack00000000000000a4)
            < 0) {
          uVar13 = 1 << (ulong)(uVar12 & 0x1f) | uVar13;
        }
        else {
          FUN_04613e84(&stack0x00000150,&stack0x000000a0,*(undefined8 *)puVar8);
          iVar11 = (int)param_1[0x15];
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar11);
    }
    lVar9 = in_stack_00000150;
    if ((*(ushort *)
          (*(long *)(*(long *)UnityEngine_UIElements_HierarchyEvent_TypeInfo + 0x20) + 0x135) & 1)
        == 0) {
      FUN_031c09d4();
      iVar11 = (int)param_1[0x15];
    }
    puVar8 = PTR_DAT_070c22f8;
    in_stack_00000158 = CONCAT44(in_stack_00000158._4_4_,*(undefined4 *)(lVar9 + 8));
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
              fVar29 = (float)puVar1[3];
              fVar32 = (float)puVar1[1];
              uVar10 = *puVar2;
              fVar25 = (float)puVar2[1];
              fVar28 = (float)puVar2[2];
              fVar19 = (float)puVar2[3];
              fVar17 = (float)FUN_065b2eec(*puVar1,0);
              fVar18 = (float)FUN_065b2eec(uVar10,0);
              fVar20 = fStack0000000000000014;
              fVar16 = (float)uVar27;
              fVar23 = (float)FUN_065b2eec(fVar15,0);
              if (DAT_075576bd == '\0') {
                FUN_03188a78(puVar8);
                DAT_075576bd = '\x01';
              }
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              fVar24 = fVar17 * fVar25 - fVar32 * fVar18;
              fVar31 = fVar33 * fVar18 - fVar17 * fVar28;
              fVar26 = fVar32 * fVar28 - fVar33 * fVar25;
              fVar30 = fVar29 * fVar18 - fVar19 * fVar17;
              fVar25 = fVar29 * fVar25 - fVar19 * fVar32;
              fVar33 = fVar29 * fVar28 - fVar19 * fVar33;
              fVar17 = fVar30 + (fVar16 * fVar31 - fVar20 * fVar24);
              fVar32 = fVar25 + (fVar23 * fVar24 - fVar16 * fVar26);
              fVar18 = fVar33 + (fVar20 * fVar26 - fVar23 * fVar31);
              fVar28 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar32 * fVar32);
              fVar32 = fVar32 / fVar28;
              fVar18 = fVar18 / fVar28;
              fVar20 = -(fVar16 * fVar33 + fVar23 * fVar30 + fVar20 * fVar25) / fVar28;
              if ((((uint)ABS(fVar17 / fVar28) < 0x7f800001 && (uint)ABS(fVar18) < 0x7f800001) &&
                  (uint)ABS(fVar20) < 0x7f800001) && (uint)ABS(fVar32) < 0x7f800001) {
                fVar16 = (float)FUN_065b2ee8(0);
                if (DAT_07546bbf == '\0') {
                  FUN_03188a78(puVar8);
                  DAT_07546bbf = '\x01';
                }
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar17 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar32 * fVar32);
                if (fVar17 <= DAT_012e3cb4) {
                  if (DAT_075457d6 == '\0') {
                    FUN_03188a78(PTR_DAT_070c1a80);
                    DAT_075457d6 = '\x01';
                  }
                  in_stack_000000b0 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                  fVar18 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                }
                else {
                  in_stack_000000b0 = CONCAT44(fVar32 / fVar17,fVar16 / fVar17);
                  fVar18 = fVar18 / fVar17;
                }
                in_stack_000000b8 = CONCAT44(fVar20,fVar18);
                FUN_04613e84(&stack0x00000150,&stack0x000000b0,
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
  return in_stack_00000150;
}



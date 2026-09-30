/*
FUNCTION_NAME: FUN_071a9b38
ENTRY_POINT: 071a9b38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_071a9b38(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  
  if ((DAT_0826815e & 1) == 0) {
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo);
    FUN_0373b518(PTR_DAT_07da58e8);
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo);
    FUN_0373b518(PTR_DAT_07df27b0);
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_Dictionary<Column,_float>_TypeInfo);
    DAT_0826815e = 1;
  }
  puVar15 = Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo;
  puVar14 = Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo;
  puVar13 = Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo;
  puVar12 = PTR_DAT_07df27b0;
  puVar11 = PTR_DAT_07da58e8;
  lVar17 = param_1[2];
  if (0x3ffe < param_2) {
    param_2 = 0x3fff;
  }
  if (lVar17 != 0) {
    iVar8 = *(int *)(lVar17 + 0x18);
    iVar10 = param_2 << 2;
    iVar1 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar1 = iVar8;
    }
    FUN_03e0536c(param_1 + 2,iVar10,*(undefined8 *)PTR_DAT_07df27b0);
    plVar5 = param_1 + 3;
    FUN_03e0536c(plVar5,iVar10,*(undefined8 *)puVar12);
    plVar6 = param_1 + 4;
    FUN_03e05490(plVar6,iVar10,*(undefined8 *)puVar15);
    FUN_03e05490(param_1 + 5,iVar10,*(undefined8 *)puVar15);
    System_Net_Http_Headers_CollectionParser__TryParse<object>
              (param_1 + 6,iVar10,*(undefined8 *)puVar14);
    Unity_Collections_CollectionHelper__CreateNativeArray<AttachmentDescriptor>
              (param_1 + 7,iVar10,*(undefined8 *)puVar13);
    plVar7 = param_1 + 8;
    FUN_03e01dd0(plVar7,param_2 * 6,*(undefined8 *)puVar11);
    puVar11 = System_Collections_Generic_Dictionary<Column,_float>_TypeInfo;
    iVar1 = iVar1 >> 2;
    if (iVar1 < param_2) {
      uVar18 = iVar1 << 2;
      lVar17 = (long)param_2 - (long)iVar1;
      uVar19 = iVar1 * 6;
      do {
        lVar16 = *(long *)puVar11;
        lVar20 = *plVar5;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar16 = *(long *)puVar11;
        }
        if (lVar20 == 0) goto LAB_071a9fa8;
        if (*(uint *)(lVar20 + 0x18) <= uVar18) {
LAB_071a9fa4:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar22 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0xc);
        lVar20 = lVar20 + (long)(int)uVar18 * 0xc;
        *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 4);
        *(undefined4 *)(lVar20 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_071a9fa8;
        uVar2 = uVar18 + 1;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_071a9fa4;
        lVar16 = lVar16 + (long)(int)uVar2 * 0xc;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_071a9fa8;
        uVar3 = uVar18 + 2;
        if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_071a9fa4;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar5;
        if (lVar16 == 0) goto LAB_071a9fa8;
        uVar4 = uVar18 + 3;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_071a9fa4;
        uVar22 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        lVar16 = lVar16 + (long)(int)uVar4 * 0xc;
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + 0x28) = uVar22;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_071a9fa8;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_071a9fa4;
        lVar16 = lVar16 + (long)(int)uVar18 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_071a9fa8;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_071a9fa4;
        lVar16 = lVar16 + (long)(int)uVar2 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_071a9fa8;
        if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_071a9fa4;
        lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar6;
        if (lVar16 == 0) goto LAB_071a9fa8;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_071a9fa4;
        lVar16 = lVar16 + (long)(int)uVar4 * 0x10;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = uVar21;
        lVar16 = *plVar7;
        if (lVar16 == 0) goto LAB_071a9fa8;
        uVar9 = *(uint *)(lVar16 + 0x18);
        if (uVar9 <= uVar19) goto LAB_071a9fa4;
        *(uint *)(lVar16 + (long)(int)uVar19 * 4 + 0x20) = uVar18;
        if (uVar9 <= uVar19 + 1) goto LAB_071a9fa4;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 1) * 4 + 0x20) = uVar2;
        if (uVar9 <= uVar19 + 2) goto LAB_071a9fa4;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 2) * 4 + 0x20) = uVar3;
        if (uVar9 <= uVar19 + 3) goto LAB_071a9fa4;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 3) * 4 + 0x20) = uVar3;
        if (uVar9 <= uVar19 + 4) goto LAB_071a9fa4;
        uVar2 = uVar19 + 5;
        *(uint *)(lVar16 + (long)(int)(uVar19 + 4) * 4 + 0x20) = uVar4;
        if (uVar9 <= uVar2) goto LAB_071a9fa4;
        uVar19 = uVar19 + 6;
        lVar17 = lVar17 + -1;
        *(uint *)(lVar16 + (long)(int)uVar2 * 4 + 0x20) = uVar18;
        uVar18 = uVar18 + 4;
      } while (lVar17 != 0);
      if (*param_1 != 0) {
        FUN_07580bc4(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_07580c70(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_07580d1c(*param_1,param_1[4],0);
            if (*param_1 != 0) {
              FUN_07582c1c(*param_1,*plVar7,0);
              return;
            }
          }
        }
      }
    }
    else if (*param_1 != 0) {
      FUN_07582c1c(*param_1,param_1[8],0);
      if (*param_1 != 0) {
        FUN_07580bc4(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_07580c70(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_07580d1c(*param_1,*plVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_071a9fa8:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



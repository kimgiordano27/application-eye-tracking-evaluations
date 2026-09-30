/*
FUNCTION_NAME: FUN_065defb4
ENTRY_POINT: 065defb4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_3;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_065defb4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  long local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined2 local_94 [2];
  undefined1 local_90 [16];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  puVar2 = UnityEngine_PhysicsShapeGroup2D_GroupState_var;
  if ((DAT_073a0806 & 1) == 0) {
    FUN_02fe925c(UnityEngine_PhysicsShapeGroup2D_GroupState_var);
    FUN_02fe925c(PlayMakerFSM_AddEventHandlerDelegate_var);
    FUN_02fe925c(Pathfinding_PointKDTree_Node_var);
    FUN_02fe925c(UnityEngine_UIElements_PointerDeviceState_PointerLocation_var);
    FUN_02fe925c(PTR_DAT_06f998e0);
    FUN_02fe925c(PTR_DAT_06f99928);
    FUN_02fe925c(PTR_DAT_06f6dc70);
    FUN_02fe925c(PTR_DAT_06f6dc90);
    FUN_02fe925c(PTR_DAT_06f73150);
    FUN_02fe925c(UnityEngine_InputSystem_UI_PointerModel_ButtonState_var);
    FUN_02fe925c(PTR_DAT_06f6dc38);
    FUN_02fe925c(Pathfinding_Polygon_ClosestPointOnTriangleByRef_0000034B_PostfixBurstDelegate_var);
    FUN_02fe925c(
                Pathfinding_PathTracer_RemainingDistanceLowerBound_00000A12_PostfixBurstDelegate_var
                );
    FUN_02fe925c(PTR_DAT_06f6dc40);
    FUN_02fe925c(PTR_DAT_06f97b40);
    FUN_02fe925c(Pathfinding_Util_PathInterpolator_Cursor_var);
    FUN_02fe925c(
                Pathfinding_Polygon_ClosestPointOnTriangleProjected_0000034E_PostfixBurstDelegate_var
                );
    FUN_02fe925c(UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var);
    FUN_02fe925c(PTR_DAT_06f7b808);
    FUN_02fe925c(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_var);
    FUN_02fe925c(Pathfinding_Polygon_ContainsPoint_00000345_PostfixBurstDelegate_var);
    FUN_02fe925c(Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_PoolDesc_var);
    FUN_02fe925c(PrefabLightmapData_LightInfo_var);
    FUN_02fe925c(Pathfinding_PathProcessor_GraphUpdateLock_var);
    FUN_02fe925c(
                Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D9_PostfixBurstDelegate_var
                );
    FUN_02fe925c(PTR_DAT_06f78ba0);
    FUN_02fe925c(
                Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A52_PostfixBurstDelegate_var
                );
    FUN_02fe925c(PTR_DAT_06fc27b8);
    DAT_073a0806 = 1;
  }
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  lVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_0661af14(lVar8,0);
  local_b0 = 0;
  FUN_0654cdac(&local_b0,0x58,0x52,0x53,0x30,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x28) = local_b0;
    puVar4 = PTR_DAT_06f97b40;
    puVar3 = PTR_DAT_06f6dc40;
    puVar2 = PTR_DAT_06f6dc38;
    FUN_0661aa1c(lVar8,*(undefined8 *)(param_1 + 0x10),0);
    local_94[0] = 0;
    FUN_04818664(local_94,1,*(undefined8 *)puVar4);
    *(undefined2 *)(lVar8 + 0x38) = local_94[0];
    uVar9 = System_Convert__ToDouble(*(undefined8 *)(param_1 + 0x10),0);
    local_b8 = 0;
    if ((uVar9 & 1) == 0) {
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_06f99928 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      local_b8 = FUN_065628d0(uVar17,0);
    }
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_0442fab4(lVar10,*(undefined8 *)puVar2);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_0442fab4(lVar11,*(undefined8 *)puVar2);
    puVar4 = Pathfinding_PointKDTree_Node_var;
    puVar3 = PTR_DAT_06f998e0;
    puVar2 = PTR_DAT_06f6dc70;
    lVar14 = *(long *)(param_1 + 0x20);
    if (lVar14 != 0) {
      uVar19 = 0;
      iVar18 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 0x18) <= iVar18) {
          FUN_0661acd8(lVar8,0);
          return;
        }
        FUN_044cd52c(&local_b0,lVar14,iVar18,
                     *(undefined8 *)
                      Pathfinding_PathTracer_RemainingDistanceLowerBound_00000A12_PostfixBurstDelegate_var
                    );
        uVar6 = uStack_9c;
        uVar13 = local_a0;
        lVar14 = lStack_a8;
        if (lVar11 == 0) break;
        iVar1 = *(int *)(lVar11 + 0x18);
        uVar17 = CONCAT44(uStack_ac,local_b0);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05b11f04(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        if (lVar14 != 0) {
          FUN_044bc520(&local_b0,lVar14,
                       *(undefined8 *)UnityEngine_InputSystem_UI_PointerModel_ButtonState_var);
          local_80 = CONCAT44(uStack_ac,local_b0);
          local_70 = CONCAT44(uStack_9c,local_a0);
          lStack_78 = lStack_a8;
          while( true ) {
            uVar9 = FUN_0551f200(&local_80,*(undefined8 *)puVar4);
            uVar7 = local_70;
            if ((uVar9 & 1) == 0) break;
            uVar9 = System_Convert__ToDouble(local_70,0);
            if ((uVar9 & 1) == 0) {
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
              uVar20 = *(uint *)(lVar11 + 0x18);
              if (uVar20 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar20 + 1;
                puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar20 * 8 + 0x20);
                *puVar12 = uVar7;
                thunk_FUN_03048534(puVar12,uVar7);
              }
              else {
                FUN_044302e8(lVar11,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_0551f1fc(&local_80,*(undefined8 *)PlayMakerFSM_AddEventHandlerDelegate_var);
        }
        if (*(int *)(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar14 = FUN_065de6e4(uVar17,1);
        if (local_b8 != 0) {
          if (*(int *)(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar14 = FUN_065dec90(local_b8,lVar14);
        }
        if (lVar14 == 0) break;
        lVar14 = FUN_05975c64(lVar14,0);
        if (lVar14 == 0) break;
        uVar9 = FUN_059762f4(lVar14,0x2f,0);
        if ((uVar9 & 1) != 0) {
          uVar17 = FUN_065dee28(uVar9,lVar14);
          if (lVar10 == 0) break;
          uVar9 = FUN_04430678(lVar10,uVar17,*(undefined8 *)PTR_DAT_06f73150);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x20) == 0) break;
            uVar9 = FUN_065dee60(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),iVar18);
            if ((uVar9 & 1) != 0) {
              auVar21 = FUN_0661aadc(lVar8,uVar17,0);
              local_90 = auVar21;
              auVar21 = FUN_0661af68(local_90,*(undefined8 *)PTR_DAT_06f7b808,0);
              local_90 = auVar21;
              FUN_0661b0d4(local_90,0,0);
              lVar16 = *(long *)puVar2;
              lVar15 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 == 0) break;
              uVar20 = *(uint *)(lVar10 + 0x18);
              if (uVar20 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar20 + 1;
                puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
                *puVar12 = uVar17;
                thunk_FUN_03048534(puVar12,uVar17);
              }
              else {
                FUN_044302e8(lVar10,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        if (*(int *)(*(long *)Pathfinding_Util_PathInterpolator_Cursor_var + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar20 = 4;
        switch(uVar13) {
        case 0:
          uVar20 = uVar6;
          break;
        case 1:
          uVar20 = 1;
          break;
        case 2:
        case 3:
          break;
        case 4:
          uVar20 = 8;
          break;
        case 5:
          uVar20 = 0xc;
          break;
        case 6:
          uVar20 = 0x10;
          break;
        case 7:
          uVar20 = 0x68;
          break;
        case 8:
          uVar20 = 0x20;
          break;
        case 9:
          uVar20 = 0x4c;
          break;
        default:
          uVar20 = 0;
        }
        uVar9 = thunk_FUN_05971620(*(undefined8 *)(param_1 + 0x18),
                                   *(undefined8 *)Pathfinding_PathProcessor_GraphUpdateLock_var,0);
        if ((uVar9 & 1) == 0) {
          if ((3 < uVar20) && ((uVar19 & 3) != 0)) {
            uVar19 = uVar19 + 4 & 0xfffffffc;
          }
        }
        else if (uVar20 < 5) {
          uVar20 = 4;
        }
        switch(uVar13) {
        case 1:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)PTR_DAT_06f78ba0,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar14 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
          break;
        case 2:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)PTR_DAT_06fc27b8,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar14 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc);
          break;
        case 3:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)
                                           UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var
                                 ,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b2cc(0xbf800000,0x3f800000,local_90,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar14 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x2c);
          break;
        case 4:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)
                                           Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D9_PostfixBurstDelegate_var
                                 ,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar15 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar15 = *(long *)puVar3;
          }
          auVar21 = FUN_0661b058(local_90,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x34),0);
          local_90 = auVar21;
          FUN_0661b540(local_90,lVar11,0);
          uVar17 = FUN_059687dc(lVar14,*(undefined8 *)PrefabLightmapData_LightInfo_var,0);
          auVar21 = FUN_0661aadc(lVar8,uVar17,0);
          puVar5 = UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var;
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)
                                           UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var
                                 ,0);
          local_90 = auVar21;
          FUN_0661b2cc(0xbf800000,0x3f800000,local_90,0);
          uVar17 = FUN_059687dc(lVar14,*(undefined8 *)
                                        Pathfinding_Polygon_ClosestPointOnTriangleProjected_0000034E_PostfixBurstDelegate_var
                                ,0);
          auVar21 = FUN_0661aadc(lVar8,uVar17,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)puVar5,0);
          local_90 = auVar21;
          FUN_0661b2cc(0xbf800000,0x3f800000,local_90,0);
          goto switchD_065df5d0_caseD_7;
        case 5:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)
                                           Unity_Entities_ChunkIterationUtility_CalculateChunkCount_00000A52_PostfixBurstDelegate_var
                                 ,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar14 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          break;
        case 6:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*(undefined8 *)
                                           Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_var
                                 ,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          lVar14 = *(long *)puVar3;
          local_90 = auVar21;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x3c);
          break;
        default:
          goto switchD_065df5d0_caseD_7;
        case 8:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          puVar12 = (undefined8 *)
                    Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_PoolDesc_var;
          goto LAB_065df74c;
        case 9:
          auVar21 = FUN_0661aadc(lVar8,lVar14,0);
          puVar12 = (undefined8 *)
                    Pathfinding_Polygon_ContainsPoint_00000345_PostfixBurstDelegate_var;
LAB_065df74c:
          local_90 = auVar21;
          auVar21 = FUN_0661af68(local_90,*puVar12,0);
          local_90 = auVar21;
          auVar21 = FUN_0661b0d4(local_90,uVar19,0);
          goto LAB_065df9bc;
        }
        auVar21 = FUN_0661b058(local_90,uVar13,0);
LAB_065df9bc:
        local_90 = auVar21;
        FUN_0661b540(local_90,lVar11,0);
switchD_065df5d0_caseD_7:
        lVar14 = *(long *)(param_1 + 0x20);
        uVar19 = uVar19 + uVar20;
        iVar18 = iVar18 + 1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



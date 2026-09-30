/*
FUNCTION_NAME: FUN_036cecd8
ENTRY_POINT: 036cecd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x036cf108) */

void FUN_036cecd8(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  if ((DAT_0483422f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__);
    thunk_FUN_01efb3a4(Method_System_Guid_GuidResult_SetFailure__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Shapes_ShapesMeshGen_<>c_<GenPolygonMesh>b__12_0__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Gameplay_ShootingController_<>c_<Initialize>b__18_1__);
    thunk_FUN_01efb3a4(Method_Gameplay_ShootingController_<>c_<Initialize>b__18_4__);
    DAT_0483422f = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x50), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__) {
        puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_036cedec;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar13,*(long *)
                                 Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__
                        ,0);
LAB_036cedec:
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
  puVar8 = Method_Shapes_ShapesMeshGen_<>c_<GenPolygonMesh>b__12_0__;
  puVar7 = Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__;
  puVar6 = Method_System_Guid_GuidResult_SetFailure__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  fVar3 = DAT_00c92488;
  fVar2 = DAT_00c92384;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036cee8c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_036cee8c:
    uVar11 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_036cf098;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036ceee8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar8,0);
LAB_036ceee8:
    auVar22 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    if (auVar22._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar14 = *(long **)(param_1 + 0x30);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar14;
    uVar1 = *(undefined4 *)(auVar22._0_8_ + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_036cef58;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar6,4);
LAB_036cef58:
    uVar11 = (*(code *)*puVar9)(plVar14,uVar1,&local_c0,puVar9[1]);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = local_c0 >> 0x20;
      uVar18 = uStack_b8 & 0xffffffff;
      uVar16 = FUN_0407ba80(local_c0 & 0xffffffff,uVar11,uVar18,*(long *)(param_1 + 0x38),0);
      fVar15 = auVar22._12_4_;
      if (auVar22._8_4_ <= fVar15) {
        fVar21 = 1.0;
        fVar15 = 0.0;
LAB_036cf00c:
        fVar20 = 0.0;
        fVar17 = 1.0;
      }
      else {
        if (fVar15 <= 0.0) {
          fVar15 = 1.0;
          fVar21 = 0.0;
          goto LAB_036cf00c;
        }
        fVar15 = (auVar22._8_4_ / fVar15) * 0.5;
        fVar17 = fVar15;
        if (1.0 < fVar15) {
          fVar17 = 1.0;
        }
        if (fVar15 < 0.0) {
          fVar17 = 0.0;
        }
        fVar15 = fVar17 * 0.0 + 1.0;
        fVar21 = fVar2 - fVar17 * fVar2;
        fVar20 = fVar3 - fVar17 * fVar3;
        fVar17 = fVar15;
      }
      lVar10 = *(long *)puVar7;
      fVar19 = *(float *)(param_1 + 0x40);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *(long *)puVar7;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      *(float *)(lVar10 + 0x18) = fVar17;
      *(float *)(lVar10 + 0x1c) = fVar19 * 0.5;
      *(float *)(lVar10 + 0xc) = fVar15;
      *(float *)(lVar10 + 0x10) = fVar21;
      *(float *)(lVar10 + 0x14) = fVar20;
      FUN_0364e460(uVar16,uVar11,uVar18,0,0);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036cf0b4;
    }
  }
LAB_036cf098:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_036cf0b4:
  (*(code *)*puVar9)(plVar13,puVar9[1]);
  return;
}



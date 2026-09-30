/*
FUNCTION_NAME: OVRControllerHelper$$InitializeControllerModels
ENTRY_POINT: 036cecdc
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

void OVRControllerHelper__InitializeControllerModels(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fStack000000000000006c;
  
                    /* try { // try from 036cece4 to 037cecef has its CatchHandler @ 036ced28 */
                    /* try { // try from 036cecf0 to 037ced3f has its CatchHandler @ 036cec60 */
  if ((DAT_0483422f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036cecd4 with catch @ 036ced24
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036cece4 with catch @ 036ced28
                        */
    thunk_FUN_01efb3a4(Method_System_Guid_GuidResult_SetFailure__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 036ced40 to 037ced43 has its CatchHandler @ 036ced50 */
    thunk_FUN_01efb3a4(
                      Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Shapes_ShapesMeshGen_<>c_<GenPolygonMesh>b__12_0__);
                    /* catch() { ... } // from try @ 036ced40 with catch @ 036ced50 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 036ced5c to 037ced63 has its CatchHandler @ 036ced78 */
                    /* try { // try from 036ced64 to 037ced6f has its CatchHandler @ 036cec60 */
    thunk_FUN_01efb3a4(Method_Gameplay_ShootingController_<>c_<Initialize>b__18_1__);
                    /* try { // try from 036ced70 to 037ced77 has its CatchHandler @ 036ced78 */
    thunk_FUN_01efb3a4(Method_Gameplay_ShootingController_<>c_<Initialize>b__18_4__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036ced5c with catch @ 036ced78
                       catch(type#2 @ 00000000) { ... } // from try @ 036ced70 with catch @ 036ced78
                        */
    DAT_0483422f = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x50), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_036cedec;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Shapes_ShapesMath_<GetArcPoints>d__36_System_Collections_IEnumerator_Reset__
                        ,0);
LAB_036cedec:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
  puVar7 = Method_Shapes_ShapesMeshGen_<>c_<GenPolygonMesh>b__12_0__;
  puVar6 = Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__;
  puVar5 = Method_System_Guid_GuidResult_SetFailure__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  fVar2 = DAT_00c92488;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fStack000000000000006c = DAT_00c92384;
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036cee8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,0);
LAB_036cee8c:
    uVar10 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_036cf098;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036ceee8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar7,0);
LAB_036ceee8:
    auVar22 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (auVar22._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar13;
    uVar1 = *(undefined4 *)(auVar22._0_8_ + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_036cef58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,4);
LAB_036cef58:
    uVar10 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar17 = 0;
      uVar18 = 0;
      uVar15 = FUN_0407ba80(0,0,0,*(long *)(param_1 + 0x38),0);
      fVar14 = auVar22._12_4_;
      if (auVar22._8_4_ <= fVar14) {
        fVar21 = 1.0;
        fVar14 = 0.0;
LAB_036cf00c:
        fVar20 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar21 = 0.0;
          goto LAB_036cf00c;
        }
        fVar14 = (auVar22._8_4_ / fVar14) * 0.5;
        fVar16 = fVar14;
        if (1.0 < fVar14) {
          fVar16 = 1.0;
        }
        if (fVar14 < 0.0) {
          fVar16 = 0.0;
        }
        fVar14 = fVar16 * 0.0 + 1.0;
        fVar21 = fStack000000000000006c - fVar16 * fStack000000000000006c;
        fVar20 = fVar2 - fVar16 * fVar2;
        fVar16 = fVar14;
      }
      lVar9 = *(long *)puVar6;
      fVar19 = *(float *)(param_1 + 0x40);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar6;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      *(float *)(lVar9 + 0x18) = fVar16;
      *(float *)(lVar9 + 0x1c) = fVar19 * 0.5;
      *(float *)(lVar9 + 0xc) = fVar14;
      *(float *)(lVar9 + 0x10) = fVar21;
      *(float *)(lVar9 + 0x14) = fVar20;
      FUN_0364e460(uVar15,uVar17,uVar18,0,0);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036cf0b4;
    }
  }
LAB_036cf098:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_036cf0b4:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
  return;
}



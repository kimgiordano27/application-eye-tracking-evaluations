/*
FUNCTION_NAME: FUN_03d49390
ENTRY_POINT: 03d49390
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03d495d8) */

void FUN_03d49390(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_0483a1c4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__
                      );
    DAT_0483a1c4 = 1;
  }
  lVar6 = FUN_04070398(param_1,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar7 = (long *)FUN_0407eda0(lVar6,0);
  puVar5 = Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__;
  puVar4 = Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03d49474;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03d49474:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)puVar2);
      if (plVar7 == (long *)0x0) goto LAB_03d495ac;
      lVar11 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03d49584;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03d494d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_03d494d4:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar10 = FUN_040703d4(plVar9,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03d33fc8(uVar10,0);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar6) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03d495a0;
    }
  }
LAB_03d49584:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03d495a0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03d495ac:
  FUN_03d49a34(param_1);
  return;
}



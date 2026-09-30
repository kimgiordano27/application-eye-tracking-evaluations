/*
FUNCTION_NAME: FUN_03d4c008
ENTRY_POINT: 03d4c008
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03d4c324) */

long FUN_03d4c008(ulong param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04574de0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04574de8);
    thunk_FUN_01efb3a4(PTR_DAT_04574dd8);
    thunk_FUN_01efb3a4(PTR_DAT_04574dd0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__
                      );
    *(undefined1 *)(unaff_x21 + 0x1e0) = 1;
  }
  lVar9 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_030f2380(lVar9,*unaff_x19);
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)FUN_0407eda0(*(long *)(param_2 + 0x20),0);
  puVar8 = PTR_DAT_04574de8;
  puVar7 = PTR_DAT_04574de0;
  puVar6 = Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar15 = *plVar10;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03d4c120;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_03d4c120:
    uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar16 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)puVar4);
      if (plVar10 == (long *)0x0) {
        return lVar9;
      }
      lVar15 = *plVar10;
      lVar14 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 == 0) goto LAB_03d4c2bc;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar10;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_03d4c180;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,1);
LAB_03d4c180:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar12);
    }
    lVar14 = FUN_040703d4(plVar12,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar16 = FUN_04073394(lVar14,0);
    if ((uVar16 & 1) != 0) {
      uVar13 = FUN_022c59ec(plVar12,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_04073094(uVar13,0,0);
      if ((uVar16 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = *(long *)(lVar9 + 0x10);
        lVar15 = *(long *)puVar8;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          *puVar11 = uVar13;
          thunk_FUN_01f51358(puVar11,uVar13);
        }
        else {
          FUN_030f2bb4(lVar9,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == lVar14) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03d4c2d8;
    }
  }
LAB_03d4c2bc:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_03d4c2d8:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return lVar9;
}



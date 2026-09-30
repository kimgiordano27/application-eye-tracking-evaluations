/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Leaderboard_GetEntriesByIds_Native
ENTRY_POINT: 035e78b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035e7bc8) */
/* WARNING: Removing unreachable block (ram,0x035e7af0) */

void Oculus_Platform_CAPI__ovr_Leaderboard_GetEntriesByIds_Native(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOffscreen>b__12_0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOverlay>b__13_0__
                    );
  thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_33__);
  *(undefined1 *)(unaff_x19 + 0x7ad) = 1;
  puVar2 = Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0__;
  puVar1 = Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOffscreen>b__12_0__
                              );
    FUN_0329d1a8(lVar5,*(undefined8 *)puVar2);
    lVar11 = *unaff_x20;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto FUN_035e797c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
FUN_035e797c:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar4 = 
    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOverlay>b__13_0__;
    puVar3 = 
    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_035e79fc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_035e79fc:
      uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_035e7ae4;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_035e7abc;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_035e7aa4;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_035e7a58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_035e7a58:
      lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar11 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                  );
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                   );
        FUN_034efd98(uVar8,uVar9,uVar10,0);
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_34__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,uVar9);
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0329d8fc(lVar5,lVar11,*(undefined8 *)puVar4);
    } while( true );
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar8 = thunk_FUN_01f117cc();
  uVar9 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                            );
  FUN_034efd20(uVar8,uVar9,0);
  goto LAB_035e7c18;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_035e7aa4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_035e7ad8;
    }
  }
LAB_035e7abc:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_035e7ad8:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_035e7ae4:
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    FUN_035e7640(lVar5);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar8 = thunk_FUN_01f117cc();
  uVar9 = thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_3__
                            );
  uVar10 = thunk_FUN_01efb3a4(
                             Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                             );
  FUN_034efd98(uVar8,uVar9,uVar10,0);
LAB_035e7c18:
  uVar9 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_34__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}



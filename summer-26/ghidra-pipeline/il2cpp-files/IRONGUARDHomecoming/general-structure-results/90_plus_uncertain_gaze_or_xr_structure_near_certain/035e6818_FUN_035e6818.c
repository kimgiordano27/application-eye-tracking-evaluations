/*
FUNCTION_NAME: FUN_035e6818
ENTRY_POINT: 035e6818
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 231
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_11;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_16;strong_file_logging_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x035e6ed0) */
/* WARNING: Removing unreachable block (ram,0x035e6c04) */
/* WARNING: Removing unreachable block (ram,0x035e6d98) */
/* WARNING: Removing unreachable block (ram,0x035e6de8) */

void FUN_035e6818(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  
  puVar2 = Method_System_DateTimeParse_<>c_<DoStrictParse>b__98_0__;
                    /* catch() { ... } // from try @ 035e6848 with catch @ 035e683c
                       catch() { ... } // from try @ 035e6880 with catch @ 035e683c
                       catch() { ... } // from try @ 035e68b4 with catch @ 035e683c */
                    /* try { // try from 035e6840 to 036e6847 has its CatchHandler @ 035e6850 */
  if ((DAT_048337a9 & 1) == 0) {
                    /* try { // try from 035e6848 to 036e6867 has its CatchHandler @ 035e683c */
    thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_21__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035e6840 with catch @ 035e6850
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__);
                    /* try { // try from 035e6868 to 036e687f has its CatchHandler @ 035e68ac */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__
                      );
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
    thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_22__);
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_<>c_<DoStrictParse>b__98_0__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__
                      );
    DAT_048337a9 = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__;
  lVar7 = thunk_FUN_01f116d0(param_1,*(undefined8 *)puVar2);
  puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_21__;
  if (lVar7 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035e70a8(lVar7);
    return;
  }
  plVar8 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_21__
                                     );
  if (plVar8 == (long *)0x0) {
    if (param_1 == (long *)0x0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar12 = thunk_FUN_01f117cc();
      uVar13 = thunk_FUN_01efb3a4(
                                 Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                 );
      FUN_034efd20(uVar12,uVar13,0);
      uVar13 = thunk_FUN_01efb3a4(
                                 Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar12,uVar13);
    }
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOffscreen>b__12_0__
                              );
    FUN_0329d1a8(lVar7,*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0__
                );
    lVar11 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_035e6c24;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__
                          ,0);
LAB_035e6c24:
    plVar8 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
    puVar5 = 
    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOverlay>b__13_0__;
    puVar4 = 
    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_035e6c9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_035e6c9c:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_035e6d8c;
        lVar11 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_035e6d64;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_035e6d4c;
      }
      lVar11 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_035e6cf8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_035e6cf8:
      lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar11 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar12 = thunk_FUN_01f117cc();
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                   );
        uVar14 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                   );
        FUN_034efd98(uVar12,uVar13,uVar14,0);
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,uVar13);
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0329d8fc(lVar7,lVar11,*(undefined8 *)puVar5);
    } while( true );
  }
  lVar7 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_035e69f0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_035e69f0:
  uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  plVar8 = (long *)FUN_01f08890(*(undefined8 *)puVar2,uVar6);
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_035e6a68;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__
                          ,0);
LAB_035e6a68:
    plVar10 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
    puVar4 = 
    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar17 = 0;
    do {
      lVar7 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_035e6adc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_035e6adc:
      uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_035e6bf8;
        lVar7 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 == 0) goto LAB_035e6bd0;
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_035e6bb8;
      }
      lVar7 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_035e6b38;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_035e6b38:
      lVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (lVar7 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar12 = thunk_FUN_01f117cc();
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                   );
        uVar14 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                   );
        FUN_034efd98(uVar12,uVar13,uVar14,0);
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,uVar13);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar11 == 0) {
        uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar11 = (long)(int)uVar17;
      plVar8[lVar11 + 4] = lVar7;
      uVar17 = uVar17 + 1;
      thunk_FUN_01f51358(plVar8 + lVar11 + 4,lVar7);
    } while( true );
  }
LAB_035e6ed8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_035e6d4c:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_035e6d80;
    }
  }
LAB_035e6d64:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e6d80:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_035e6d8c:
  if (lVar7 != 0) {
    plVar8 = (long *)FUN_0329e490(lVar7,*(undefined8 *)
                                         Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_22__
                                 );
    lVar7 = *(long *)puVar3;
    iVar1 = *(int *)(lVar7 + 0xe0);
    goto joined_r0x035e6dc0;
  }
  goto LAB_035e6ed8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_035e6bb8:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_035e6bec;
    }
  }
LAB_035e6bd0:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e6bec:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_035e6bf8:
  lVar7 = *(long *)puVar3;
  iVar1 = *(int *)(lVar7 + 0xe0);
joined_r0x035e6dc0:
  if (iVar1 == 0) {
    thunk_FUN_01ee6d7c(lVar7);
  }
  FUN_035e7260(plVar8);
  return;
}



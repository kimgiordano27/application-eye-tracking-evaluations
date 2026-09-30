/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_Get_Native
ENTRY_POINT: 035e6880
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 188
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_9;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_12;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035e6ed0) */
/* WARNING: Removing unreachable block (ram,0x035e6c04) */
/* WARNING: Removing unreachable block (ram,0x035e6d98) */
/* WARNING: Removing unreachable block (ram,0x035e6de8) */

void Oculus_Platform_CAPI__ovr_HTTP_Get_Native(void)

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
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar17;
  
                    /* try { // try from 035e6880 to 036e689b has its CatchHandler @ 035e683c */
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0__
                    );
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOffscreen>b__12_0__
                    );
                    /* try { // try from 035e689c to 036e68ab has its CatchHandler @ 035e68ac */
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c_<RenderOverlay>b__13_0__
                    );
                    /* catch() { ... } // from try @ 035e6868 with catch @ 035e68ac
                       catch() { ... } // from try @ 035e689c with catch @ 035e68ac */
  thunk_FUN_01efb3a4(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_22__);
                    /* try { // try from 035e68b0 to 036e68b3 has its CatchHandler @ 035e68bc */
                    /* try { // try from 035e68b4 to 036e68bf has its CatchHandler @ 035e683c */
  thunk_FUN_01efb3a4(Method_System_DateTimeParse_<>c_<DoStrictParse>b__98_0__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e68b0 with catch @ 035e68bc
                        */
                    /* catch() { ... } // from try @ 035e68cc with catch @ 035e68c0
                       catch() { ... } // from try @ 035e6904 with catch @ 035e68c0
                       catch() { ... } // from try @ 035e6938 with catch @ 035e68c0 */
                    /* try { // try from 035e68c4 to 036e68cb has its CatchHandler @ 035e68d4 */
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__)
  ;
                    /* try { // try from 035e68cc to 036e68eb has its CatchHandler @ 035e68c0 */
  *(undefined1 *)(unaff_x19 + 0x7a9) = 1;
  puVar3 = Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035e68c4 with catch @ 035e68d4
                        */
  lVar7 = thunk_FUN_01f116d0();
  puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_21__;
  if (lVar7 != 0) {
                    /* try { // try from 035e68ec to 036e6903 has its CatchHandler @ 035e6930 */
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035e70a8(lVar7);
    return;
  }
                    /* try { // try from 035e6920 to 036e692f has its CatchHandler @ 035e6930 */
  plVar8 = (long *)thunk_FUN_01f116d0();
  if (plVar8 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
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
                    /* try { // try from 035e6988 to 036e69a3 has its CatchHandler @ 035e6944 */
    FUN_0329d1a8(lVar7,*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0__
                );
    lVar11 = *unaff_x20;
                    /* try { // try from 035e69a4 to 036e69b3 has its CatchHandler @ 035e69b4 */
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 035e6970 with catch @ 035e69b4
                       catch() { ... } // from try @ 035e69a4 with catch @ 035e69b4 */
                    /* try { // try from 035e69b8 to 036e69bb has its CatchHandler @ 035e69c4 */
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 035e69bc to 036e69c7 has its CatchHandler @ 035e6944 */
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_035e6c24;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035e6c24:
    plVar8 = (long *)(*(code *)*puVar9)();
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
                    /* catch() { ... } // from try @ 035e68ec with catch @ 035e6930
                       catch() { ... } // from try @ 035e6920 with catch @ 035e6930 */
  lVar7 = *plVar8;
                    /* try { // try from 035e6934 to 036e6937 has its CatchHandler @ 035e6940 */
                    /* try { // try from 035e6938 to 036e6943 has its CatchHandler @ 035e68c0 */
  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e6934 with catch @ 035e6940
                        */
  if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 035e6950 with catch @ 035e6944
                       catch() { ... } // from try @ 035e6988 with catch @ 035e6944
                       catch() { ... } // from try @ 035e69bc with catch @ 035e6944 */
                    /* try { // try from 035e6948 to 036e694f has its CatchHandler @ 035e6958 */
    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
                    /* try { // try from 035e6950 to 036e696f has its CatchHandler @ 035e6944 */
      if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_035e69f0;
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035e6948 with catch @ 035e6958
                        */
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
                    /* try { // try from 035e6970 to 036e6987 has its CatchHandler @ 035e69b4 */
LAB_035e69f0:
  uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  plVar8 = (long *)FUN_01f08890(*unaff_x21,uVar6);
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
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
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035e6a68:
    plVar10 = (long *)(*(code *)*puVar9)();
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



/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 020ced34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 315
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_21
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar19;
  long unaff_x21;
  ulong unaff_x22;
  long lVar20;
  ulong uVar21;
  float unaff_w23;
  long *plVar22;
  long unaff_x24;
  long lVar23;
  uint uVar24;
  long *unaff_x29;
  undefined4 uVar25;
  ulong unaff_d8;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while (unaff_x24 != 0) {
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    *(undefined4 *)(unaff_x24 + unaff_x21 + 0x20) = param_1;
    if (*(long *)(unaff_x19 + 0xe8) == 0) break;
    lVar23 = *(long *)(unaff_x19 + 0x340);
    uVar25 = FUN_04063670(unaff_d8,*(long *)(unaff_x19 + 0xe8),0);
    if (lVar23 == 0) break;
    if (*(uint *)(lVar23 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    lVar23 = lVar23 + unaff_x21 * 4;
    unaff_x21 = unaff_x21 + 4;
    unaff_x22 = unaff_x22 + 1;
    *(undefined4 *)(lVar23 + 0x20) = uVar25;
    *(float *)(lVar23 + 0x24) = param_2;
    *(undefined4 *)(lVar23 + 0x28) = param_3;
    *(undefined4 *)(lVar23 + 0x2c) = param_4;
    if (unaff_x21 == 0x400) {
      if (DAT_0482ee19 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee19 = '\x01';
      }
      plVar1 = (long *)(unaff_x19 + 0x2c0);
      uVar25 = *(undefined4 *)
                (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                          + 0xb8) + 0x20);
      *(undefined8 *)(unaff_x19 + 0x2f4) =
           *(undefined8 *)
            (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8) + 0x18);
      *(undefined4 *)(unaff_x19 + 0x2fc) = uVar25;
      *(undefined8 *)(unaff_x19 + 0x2c0) = 0;
      thunk_FUN_01f51358(plVar1,0);
      plVar22 = (long *)(unaff_x19 + 0x2d0);
      *(undefined8 *)(unaff_x19 + 0x2d0) = 0;
      thunk_FUN_01f51358(plVar22,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) break;
      uVar8 = FUN_022c5c50(*(long *)(unaff_x19 + 0x30),*unaff_x20);
      plVar2 = (long *)(unaff_x19 + 0x218);
      *(undefined8 *)(unaff_x19 + 0x218) = uVar8;
      thunk_FUN_01f51358(plVar2,uVar8);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x218);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
        thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
        if (*(int *)(*(long *)
                      Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_04039d34(0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        goto LAB_020cf864;
      }
      *(undefined1 *)(unaff_x19 + 0x30c) = 0;
      uVar9 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 400),0);
      if ((uVar9 & 1) != 0) goto LAB_020cf1e4;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x198);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      puVar19 = (undefined8 *)(unaff_x19 + 0x198);
      uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x30) == 0) break;
        uVar8 = FUN_022c5c50(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnUploadProgressChange__
                            );
        *puVar19 = uVar8;
        thunk_FUN_01f51358(puVar19,uVar8);
        uVar8 = *puVar19;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) break;
          uVar8 = FUN_022c60a8(*(long *)(unaff_x19 + 0x30),
                               *(undefined8 *)
                                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_SetDownloadProgress__
                              );
          *puVar19 = uVar8;
          thunk_FUN_01f51358(puVar19,uVar8);
        }
      }
      uVar8 = *puVar19;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar5 = FUN_04073094(uVar8,0,0);
      *(byte *)(unaff_x19 + 0x30c) = bVar5 & 1;
      if ((bVar5 & 1) == 0) goto LAB_020cf1e4;
      lVar23 = *(long *)(unaff_x19 + 400);
      if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((lVar23 != 0) &&
         (lVar23 = FUN_034111c4(lVar23,*(undefined8 *)
                                        (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                  0xb8) + 0x20),1,0), lVar23 != 0)) {
        uVar24 = *(uint *)(lVar23 + 0x18);
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnSuccess__
                             ,uVar24);
        plVar16 = (long *)(unaff_x19 + 0x310);
        *(undefined8 *)(unaff_x19 + 0x310) = uVar8;
        thunk_FUN_01f51358(plVar16,uVar8);
        if ((int)uVar24 < 1) goto LAB_020cf1e4;
        uVar15 = 0;
        goto LAB_020ceff8;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x98) == 0) break;
    lVar23 = *(long *)(unaff_x19 + 0x338);
    unaff_d8 = (ulong)(uint)((float)(int)unaff_x22 * unaff_w23);
    param_2 = unaff_w23;
    uVar25 = FUN_04063670(unaff_d8,*(long *)(unaff_x19 + 0x98),0);
    if (lVar23 == 0) break;
    if (*(uint *)(lVar23 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    lVar23 = lVar23 + unaff_x21 * 4;
    *(undefined4 *)(lVar23 + 0x20) = uVar25;
    *(float *)(lVar23 + 0x24) = param_2;
    *(undefined4 *)(lVar23 + 0x28) = param_3;
    *(undefined4 *)(lVar23 + 0x2c) = param_4;
    if (*(long *)(unaff_x19 + 0x138) == 0) break;
    unaff_x24 = *(long *)(unaff_x19 + 0x348);
    param_1 = FUN_040390ac(unaff_d8,*(long *)(unaff_x19 + 0x138),0);
  }
  goto LAB_020cfbb4;
  while( true ) {
    lVar20 = (long)(int)uVar15;
    lVar10 = *(long *)(lVar23 + lVar20 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = FUN_03412ab4(lVar10,0), lVar10 == 0)) goto LAB_020cfbb4;
    uVar6 = FUN_034134c8(lVar10,*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__,0);
    iVar7 = FUN_034134c8(lVar10,*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                         ,0);
    if ((0 < (int)uVar6) && ((int)uVar6 < iVar7)) {
      lVar11 = FUN_03410500(lVar10,0,uVar6,0);
      if (lVar11 == 0) goto LAB_020cfbb4;
      lVar11 = FUN_03412ab4(lVar11,0);
      lVar10 = FUN_03410500(lVar10,uVar6 + 1,iVar7 + ~uVar6,0);
      if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__);
      }
      if ((lVar10 == 0) ||
         (lVar12 = FUN_034111c4(lVar10,*(undefined8 *)
                                        (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                  0xb8) + 0x28),1,0), lVar12 == 0))
      goto LAB_020cfbb4;
      lVar10 = lVar11;
      if (*(int *)(lVar12 + 0x18) == 2) {
        uVar8 = *(undefined8 *)(lVar12 + 0x20);
        if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03532f80(0);
        FUN_0357d99c(uVar8,0x1ff,uVar13,(long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_020cfe90;
        uVar13 = *(undefined8 *)(lVar12 + 0x28);
        uVar8 = FUN_03532f80(0);
        FUN_0357d99c(uVar13,0x1ff,uVar8,&stack0x00000028,0);
      }
    }
    lVar11 = *plVar16;
    if (lVar11 == 0) goto LAB_020cfbb4;
    uVar25 = FUN_04030fb8(lVar10,0);
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_020cfe90;
    *(undefined4 *)(lVar11 + lVar20 * 0xc + 0x20) = uVar25;
    lVar10 = *plVar16;
    if (lVar10 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_020cfe90;
    lVar10 = lVar10 + lVar20 * 0xc;
    uVar15 = uVar15 + 1;
    *(undefined4 *)(lVar10 + 0x24) = uStack000000000000002c;
    *(undefined4 *)(lVar10 + 0x28) = uStack0000000000000028;
    if (uVar24 == uVar15) break;
LAB_020ceff8:
    _uStack0000000000000028 = 0;
    if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_020cfe90;
  }
LAB_020cf1e4:
  puVar3 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_set_Results__
  ;
  plVar16 = (long *)*plVar2;
  if (plVar16 == (long *)0x0) {
    *(undefined1 *)(unaff_x19 + 0x2d8) = 0;
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar20 = *plVar16;
  lVar10 = *(long *)
            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Results__
  ;
  *(bool *)(unaff_x19 + 0x2d8) = lVar20 == lVar10;
  lVar23 = *(long *)puVar3;
  bVar5 = *(byte *)(lVar23 + 0x130);
  if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
     (lVar11 = (ulong)bVar5 - 1, *(long *)(*(long *)(*plVar16 + 200) + lVar11 * 8) != lVar23)) {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
    if (lVar20 == lVar10) {
      if ((*plVar16 != lVar10) || (*plVar22 = (long)plVar16, *plVar16 != lVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar16,lVar10);
      }
      thunk_FUN_01f51358(plVar22,plVar16);
      if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
        iVar7 = *(int *)(unaff_x19 + 0x1bc);
      }
      else {
        iVar7 = 1;
      }
      lVar23 = *(long *)(unaff_x19 + 0x1e0);
      plVar1 = (long *)(unaff_x19 + 0x1e0);
      if ((lVar23 == 0) || (iVar7 != *(int *)(lVar23 + 0x18))) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                             ,*(undefined4 *)(unaff_x19 + 0x1bc));
        *(undefined8 *)(unaff_x19 + 0x1e0) = uVar8;
        thunk_FUN_01f51358(plVar1,uVar8);
        lVar23 = *(long *)(unaff_x19 + 0x1e0);
        if (lVar23 == 0) goto LAB_020cfbb4;
      }
      puVar3 = 
      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
      uVar9 = *(ulong *)(lVar23 + 0x18);
      if (0 < (int)uVar9) {
        if (lVar23 != 0) {
          uVar17 = 0;
          do {
            if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
            uVar8 = *(undefined8 *)(lVar23 + uVar17 * 8 + 0x20);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar21 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                               (uVar8,0,0);
            if ((uVar21 & 1) != 0) {
              lVar23 = *plVar1;
              uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
              FUN_04051010(uVar8,0);
              if (lVar23 == 0) break;
              if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
              puVar19 = (undefined8 *)(lVar23 + uVar17 * 8 + 0x20);
              *puVar19 = uVar8;
              thunk_FUN_01f51358(puVar19,uVar8);
              lVar23 = *plVar1;
              if (lVar23 == 0) break;
              if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
              lVar23 = *(long *)(lVar23 + uVar17 * 8 + 0x20);
              if (lVar23 == 0) break;
              FUN_04077338(lVar23,0x34,0);
            }
            uVar17 = uVar17 + 1;
            if (uVar17 == (uVar9 & 0xffffffff)) goto LAB_020cf644;
            lVar23 = *plVar1;
          } while (lVar23 != 0);
        }
        goto LAB_020cfbb4;
      }
    }
    else {
      lVar23 = FUN_022c59ec(plVar16,*(undefined8 *)
                                     Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                           );
      plVar1 = (long *)(unaff_x19 + 0x1e0);
      if ((*(long *)(unaff_x19 + 0x1e0) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1e0) + 0x18) != 1)) {
        lVar10 = FUN_01f08890(*(undefined8 *)
                               Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                              ,1);
        *plVar1 = lVar10;
        thunk_FUN_01f51358(plVar1,lVar10);
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_04073094(lVar23,0,0);
      if ((uVar9 & 1) == 0) {
        if (*plVar2 == 0) goto LAB_020cfbb4;
        lVar23 = FUN_022c59ec(*plVar2,*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<TextMeshPro>_Clear__)
        ;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x29);
        }
        uVar9 = FUN_04073094(lVar23,0,0);
        if ((uVar9 & 1) == 0) goto LAB_020cf644;
        if (lVar23 == 0) goto LAB_020cfbb4;
        lVar10 = *plVar1;
        uVar8 = FUN_04050c14(lVar23,0);
        if (lVar10 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_020cfe90;
        puVar19 = (undefined8 *)(lVar10 + 0x20);
        *puVar19 = uVar8;
      }
      else {
        if (lVar23 == 0) goto LAB_020cfbb4;
        lVar10 = *plVar1;
        uVar8 = FUN_040c22f8(lVar23,0);
        if (lVar10 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_020cfe90;
        puVar19 = (undefined8 *)(lVar10 + 0x20);
        *puVar19 = uVar8;
      }
      thunk_FUN_01f51358(puVar19,uVar8);
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 1;
    if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*plVar16 + 200) + lVar11 * 8) != lVar23)) {
LAB_020cfeac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar16);
    }
    *plVar1 = (long)plVar16;
    if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*plVar16 + 200) + lVar11 * 8) != lVar23)) goto LAB_020cfeac;
    thunk_FUN_01f51358(plVar1,plVar16);
    if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
      iVar7 = *(int *)(unaff_x19 + 0x1bc);
    }
    else {
      iVar7 = 1;
    }
    lVar23 = *(long *)(unaff_x19 + 0x1e0);
    plVar1 = (long *)(unaff_x19 + 0x1e0);
    if ((lVar23 == 0) || (iVar7 != *(int *)(lVar23 + 0x18))) {
      uVar8 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                           ,*(undefined4 *)(unaff_x19 + 0x1bc));
      *(undefined8 *)(unaff_x19 + 0x1e0) = uVar8;
      thunk_FUN_01f51358(plVar1,uVar8);
      lVar23 = *(long *)(unaff_x19 + 0x1e0);
      if (lVar23 == 0) goto LAB_020cfbb4;
    }
    puVar3 = 
    Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
    uVar9 = *(ulong *)(lVar23 + 0x18);
    if (0 < (int)uVar9) {
      if (lVar23 != 0) {
        uVar17 = 0;
        do {
          if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
          uVar8 = *(undefined8 *)(lVar23 + uVar17 * 8 + 0x20);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar21 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar8,0,0);
          if ((uVar21 & 1) != 0) {
            lVar23 = *plVar1;
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_04051010(uVar8,0);
            if (lVar23 == 0) break;
            if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
            puVar19 = (undefined8 *)(lVar23 + uVar17 * 8 + 0x20);
            *puVar19 = uVar8;
            thunk_FUN_01f51358(puVar19,uVar8);
            lVar23 = *plVar1;
            if (lVar23 == 0) break;
            if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_020cfe90;
            lVar23 = *(long *)(lVar23 + uVar17 * 8 + 0x20);
            if (lVar23 == 0) break;
            FUN_04077338(lVar23,0x34,0);
          }
          uVar17 = uVar17 + 1;
          if (uVar17 == (uVar9 & 0xffffffff)) goto LAB_020cf644;
          lVar23 = *plVar1;
        } while (lVar23 != 0);
      }
      goto LAB_020cfbb4;
    }
  }
LAB_020cf644:
  if (*(char *)(unaff_x19 + 0x3a) == '\0') {
    if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_04039d34(0);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x200);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404ea1c(*(long *)(unaff_x19 + 0x200),
               *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__,0)
  ;
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404e2f4(*(long *)(unaff_x19 + 0x200),0,0);
  puVar3 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  lVar23 = *(long *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar23 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
  case 0:
    break;
  case 1:
    lVar23 = FUN_020d1ad4();
    puVar4 = Method_System_Numerics_Vector<ulong>_get_Count__;
    lVar10 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar4;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = FUN_020d1cfc();
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar4;
      }
      puVar19 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
      *puVar19 = uVar8;
      thunk_FUN_01f51358(puVar19,uVar8);
    }
    if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
       (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x1a0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar5 = FUN_04073094(uVar8,0,0);
      bVar5 = bVar5 & 1;
    }
    else {
      bVar5 = 1;
    }
    *(byte *)(unaff_x19 + 0x2f0) = bVar5;
    goto LAB_020cf830;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    lVar23 = *(long *)(unaff_x19 + 0x100);
    goto LAB_020cf830;
  default:
    lVar23 = 0;
    goto LAB_020cf830;
  }
  lVar23 = FUN_020d1ad4();
LAB_020cf830:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (lVar23,0,0);
  if ((uVar9 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
LAB_020cf864:
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar23 == 0) goto LAB_020cfbb4;
  uVar9 = FUN_0404f968(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar5 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar5 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar5 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar5;
  if (bVar5 == 0) {
    uVar14 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar14 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar14 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar14;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar5 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_04073094(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
      bVar5 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_04073094(uVar8,0,0);
      if ((uVar9 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_04073094(uVar8,0,0);
        bVar5 = (byte)uVar9 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar5;
  lVar10 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar10 == 0) {
LAB_020cf9f4:
    uVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar8;
    thunk_FUN_01f51358(plVar1,uVar8);
    lVar10 = *(long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) {
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    iVar7 = (int)*(ulong *)(lVar10 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar7) {
      uVar17 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      if (0 < iVar7) {
        uVar21 = 0;
        do {
          if (uVar17 <= uVar21) goto LAB_020cfe90;
          uVar9 = FUN_020ce6cc(uVar9,*(undefined8 *)(lVar10 + uVar21 * 8 + 0x20));
          lVar10 = *plVar1;
          if (lVar10 == 0) goto LAB_020cfbb4;
          uVar17 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar21 = uVar21 + 1;
        } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  puVar4 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
  lVar20 = 4;
  lVar11 = 0x20;
  while( true ) {
    uVar24 = (int)lVar20 - 4;
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar24) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar24) goto LAB_020cfe90;
    uVar8 = *(undefined8 *)(lVar10 + lVar20 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar8,0,0);
    if ((uVar9 & 1) == 0) {
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar10 + 0x18) <= uVar24) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar20 * 8);
      if (lVar10 == 0) goto LAB_020cfbb4;
      uVar8 = FUN_0404de9c(lVar10,0);
      uVar13 = FUN_0404de9c(lVar23,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar9 = FUN_04073094(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar22 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_023aa7e0(lVar23,*(undefined8 *)puVar4);
      if (plVar22 == (long *)0x0) goto LAB_020cfbb4;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar22 + 0x40)), lVar12 == 0)) {
        uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,0);
      }
      if (*(uint *)(plVar22 + 3) <= uVar24) goto LAB_020cfe90;
      plVar22[lVar20] = lVar10;
      thunk_FUN_01f51358((long)plVar22 + lVar11,lVar10);
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar10 + 0x18) <= uVar24) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar20 * 8);
      if (lVar10 == 0) goto LAB_020cfbb4;
      FUN_04077338(lVar10,0x34,0);
    }
    if (*plVar1 == 0) goto LAB_020cfbb4;
    if (*(uint *)(*plVar1 + 0x18) <= uVar24) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar10 = *(long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar10 + 0x18) <= uVar24) goto LAB_020cfe90;
    lVar10 = *(long *)(lVar10 + lVar20 * 8);
    if (lVar10 == 0) goto LAB_020cfbb4;
    FUN_0404e958(lVar10,(int)lVar20 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar10 = *(long *)(unaff_x19 + 0x210);
    lVar20 = lVar20 + 1;
    lVar11 = lVar11 + 8;
    if (lVar10 == 0) goto LAB_020cfbb4;
  }
  if (*(long *)(unaff_x19 + 0x208) == 0) goto LAB_020cfbb4;
  FUN_0404e958(*(long *)(unaff_x19 + 0x208),
               *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
  puVar4 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
  lVar23 = *(long *)(unaff_x19 + 0x208);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar23 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
     (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
  goto LAB_020cfc98;
  plVar1 = (long *)(unaff_x19 + 0x1c8);
  lVar23 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                       );
  *plVar1 = lVar23;
  thunk_FUN_01f51358(plVar1,lVar23);
  lVar23 = *plVar1;
  if (lVar23 == 0) goto LAB_020cfbb4;
  uVar24 = *(uint *)(lVar23 + 0x18);
  if ((long)((ulong)uVar24 << 0x20) < 1) goto LAB_020cfc90;
  uVar9 = 0;
  puVar18 = (undefined4 *)(lVar23 + 0xa0);
  while (uVar9 < uVar24) {
    uVar9 = uVar9 + 1;
    *puVar18 = 0xff7fffff;
    puVar18 = puVar18 + 0x2c;
    if ((long)(int)uVar24 <= (long)uVar9) {
LAB_020cfc90:
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
      if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
         (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                            );
        *(undefined8 *)(unaff_x19 + 0x1d0) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x278) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x278) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x280) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x280) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x288) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x288) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)puVar4,0x3ff);
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x290) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x290) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar8);
      }
      if ((*(long *)(unaff_x19 + 0x298) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
        uVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x298) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar8);
      }
      FUN_020d1458();
      return;
    }
  }
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}



/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Bone>
ENTRY_POINT: 020ceca4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_21
*/


void System_Array__InternalArray__Insert<OVRPlugin_Bone>
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long unaff_x19;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar9 = FUN_01f08890(param_5,0x100);
  *(undefined8 *)(unaff_x19 + 0x340) = uVar9;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x340),uVar9);
  puVar4 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnComplete__
  ;
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar19 = 0;
  uVar20 = 0;
  do {
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_020cfbb4;
    lVar24 = *(long *)(unaff_x19 + 0x338);
    uVar27 = 0x3b800000;
    fVar28 = (float)(int)uVar20 * 0.00390625;
    uVar26 = FUN_04063670(fVar28,*(long *)(unaff_x19 + 0x98),0);
    if (lVar24 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_020cfe90;
    lVar24 = lVar24 + lVar19 * 4;
    *(undefined4 *)(lVar24 + 0x20) = uVar26;
    *(undefined4 *)(lVar24 + 0x24) = uVar27;
    *(undefined4 *)(lVar24 + 0x28) = param_3;
    *(undefined4 *)(lVar24 + 0x2c) = param_4;
    if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_020cfbb4;
    lVar24 = *(long *)(unaff_x19 + 0x348);
    uVar26 = FUN_040390ac(fVar28,*(long *)(unaff_x19 + 0x138),0);
    if (lVar24 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_020cfe90;
    *(undefined4 *)(lVar24 + lVar19 + 0x20) = uVar26;
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_020cfbb4;
    lVar24 = *(long *)(unaff_x19 + 0x340);
    uVar26 = FUN_04063670(fVar28,*(long *)(unaff_x19 + 0xe8),0);
    if (lVar24 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_020cfe90;
    lVar24 = lVar24 + lVar19 * 4;
    lVar19 = lVar19 + 4;
    uVar20 = uVar20 + 1;
    *(undefined4 *)(lVar24 + 0x20) = uVar26;
    *(undefined4 *)(lVar24 + 0x24) = uVar27;
    *(undefined4 *)(lVar24 + 0x28) = param_3;
    *(undefined4 *)(lVar24 + 0x2c) = param_4;
  } while (lVar19 != 0x400);
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  plVar1 = (long *)(unaff_x19 + 0x2c0);
  uVar27 = *(undefined4 *)
            (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x2f4) =
       *(undefined8 *)
        (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
        + 0x18);
  *(undefined4 *)(unaff_x19 + 0x2fc) = uVar27;
  *(undefined8 *)(unaff_x19 + 0x2c0) = 0;
  thunk_FUN_01f51358(plVar1,0);
  plVar23 = (long *)(unaff_x19 + 0x2d0);
  *(undefined8 *)(unaff_x19 + 0x2d0) = 0;
  thunk_FUN_01f51358(plVar23,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_020cfbb4;
  uVar9 = FUN_022c5c50(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar4);
  plVar2 = (long *)(unaff_x19 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar9;
  thunk_FUN_01f51358(plVar2,uVar9);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x218);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (uVar9,0,0);
  if ((uVar20 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar20 = FUN_04039d34(0);
    if ((uVar20 & 1) == 0) {
      return;
    }
    goto LAB_020cf864;
  }
  *(undefined1 *)(unaff_x19 + 0x30c) = 0;
  uVar20 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 400),0);
  if ((uVar20 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x198);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar18 = (undefined8 *)(unaff_x19 + 0x198);
    uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar9,0,0);
    if ((uVar20 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_020cfbb4;
      uVar9 = FUN_022c5c50(*(long *)(unaff_x19 + 0x30),
                           *(undefined8 *)
                            Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnUploadProgressChange__
                          );
      *puVar18 = uVar9;
      thunk_FUN_01f51358(puVar18,uVar9);
      uVar9 = *puVar18;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                         (uVar9,0,0);
      if ((uVar20 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_020cfbb4;
        uVar9 = FUN_022c60a8(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_SetDownloadProgress__
                            );
        *puVar18 = uVar9;
        thunk_FUN_01f51358(puVar18,uVar9);
      }
    }
    uVar9 = *puVar18;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar6 = FUN_04073094(uVar9,0,0);
    *(byte *)(unaff_x19 + 0x30c) = bVar6 & 1;
    if ((bVar6 & 1) != 0) {
      lVar19 = *(long *)(unaff_x19 + 400);
      if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((lVar19 == 0) ||
         (lVar19 = FUN_034111c4(lVar19,*(undefined8 *)
                                        (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                  0xb8) + 0x20),1,0), lVar19 == 0))
      goto LAB_020cfbb4;
      uVar25 = *(uint *)(lVar19 + 0x18);
      uVar9 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnSuccess__
                           ,uVar25);
      plVar15 = (long *)(unaff_x19 + 0x310);
      *(undefined8 *)(unaff_x19 + 0x310) = uVar9;
      thunk_FUN_01f51358(plVar15,uVar9);
      if (0 < (int)uVar25) {
        uVar14 = 0;
        do {
          _uStack0000000000000028 = 0;
          if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_020cfe90;
          lVar21 = (long)(int)uVar14;
          lVar24 = *(long *)(lVar19 + lVar21 * 8 + 0x20);
          if ((lVar24 == 0) || (lVar24 = FUN_03412ab4(lVar24,0), lVar24 == 0)) goto LAB_020cfbb4;
          uVar7 = FUN_034134c8(lVar24,*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__,0
                              );
          iVar8 = FUN_034134c8(lVar24,*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                               ,0);
          if ((0 < (int)uVar7) && ((int)uVar7 < iVar8)) {
            lVar10 = FUN_03410500(lVar24,0,uVar7,0);
            if (lVar10 == 0) goto LAB_020cfbb4;
            lVar10 = FUN_03412ab4(lVar10,0);
            lVar24 = FUN_03410500(lVar24,uVar7 + 1,iVar8 + ~uVar7,0);
            if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__);
            }
            if ((lVar24 == 0) ||
               (lVar11 = FUN_034111c4(lVar24,*(undefined8 *)
                                              (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                  0xb8) + 0x28),1,0), lVar11 == 0))
            goto LAB_020cfbb4;
            lVar24 = lVar10;
            if (*(int *)(lVar11 + 0x18) == 2) {
              uVar9 = *(undefined8 *)(lVar11 + 0x20);
              if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_03532f80(0);
              FUN_0357d99c(uVar9,0x1ff,uVar12,(long)&stack0x00000028 + 4,0);
              if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_020cfe90;
              uVar12 = *(undefined8 *)(lVar11 + 0x28);
              uVar9 = FUN_03532f80(0);
              FUN_0357d99c(uVar12,0x1ff,uVar9,&stack0x00000028,0);
            }
          }
          lVar10 = *plVar15;
          if (lVar10 == 0) goto LAB_020cfbb4;
          uVar27 = FUN_04030fb8(lVar24,0);
          if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_020cfe90;
          *(undefined4 *)(lVar10 + lVar21 * 0xc + 0x20) = uVar27;
          lVar24 = *plVar15;
          if (lVar24 == 0) goto LAB_020cfbb4;
          if (*(uint *)(lVar24 + 0x18) <= uVar14) goto LAB_020cfe90;
          lVar24 = lVar24 + lVar21 * 0xc;
          uVar14 = uVar14 + 1;
          *(undefined4 *)(lVar24 + 0x24) = uStack000000000000002c;
          *(undefined4 *)(lVar24 + 0x28) = uStack0000000000000028;
        } while (uVar25 != uVar14);
      }
    }
  }
  puVar4 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_set_Results__
  ;
  plVar15 = (long *)*plVar2;
  if (plVar15 == (long *)0x0) {
    *(undefined1 *)(unaff_x19 + 0x2d8) = 0;
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar21 = *plVar15;
  lVar24 = *(long *)
            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Results__
  ;
  *(bool *)(unaff_x19 + 0x2d8) = lVar21 == lVar24;
  lVar19 = *(long *)puVar4;
  bVar6 = *(byte *)(lVar19 + 0x130);
  if ((*(byte *)(*plVar15 + 0x130) < bVar6) ||
     (lVar10 = (ulong)bVar6 - 1, *(long *)(*(long *)(*plVar15 + 200) + lVar10 * 8) != lVar19)) {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
    if (lVar21 == lVar24) {
      if ((*plVar15 != lVar24) || (*plVar23 = (long)plVar15, *plVar15 != lVar24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15,lVar24);
      }
      thunk_FUN_01f51358(plVar23,plVar15);
      if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
        iVar8 = *(int *)(unaff_x19 + 0x1bc);
      }
      else {
        iVar8 = 1;
      }
      lVar19 = *(long *)(unaff_x19 + 0x1e0);
      plVar1 = (long *)(unaff_x19 + 0x1e0);
      if ((lVar19 == 0) || (iVar8 != *(int *)(lVar19 + 0x18))) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                             ,*(undefined4 *)(unaff_x19 + 0x1bc));
        *(undefined8 *)(unaff_x19 + 0x1e0) = uVar9;
        thunk_FUN_01f51358(plVar1,uVar9);
        lVar19 = *(long *)(unaff_x19 + 0x1e0);
        if (lVar19 == 0) goto LAB_020cfbb4;
      }
      puVar4 = 
      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
      uVar20 = *(ulong *)(lVar19 + 0x18);
      if (0 < (int)uVar20) {
        if (lVar19 != 0) {
          uVar16 = 0;
          do {
            if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
            uVar9 = *(undefined8 *)(lVar19 + uVar16 * 8 + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar22 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                               (uVar9,0,0);
            if ((uVar22 & 1) != 0) {
              lVar19 = *plVar1;
              uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
              FUN_04051010(uVar9,0);
              if (lVar19 == 0) break;
              if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
              puVar18 = (undefined8 *)(lVar19 + uVar16 * 8 + 0x20);
              *puVar18 = uVar9;
              thunk_FUN_01f51358(puVar18,uVar9);
              lVar19 = *plVar1;
              if (lVar19 == 0) break;
              if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
              lVar19 = *(long *)(lVar19 + uVar16 * 8 + 0x20);
              if (lVar19 == 0) break;
              FUN_04077338(lVar19,0x34,0);
            }
            uVar16 = uVar16 + 1;
            if (uVar16 == (uVar20 & 0xffffffff)) goto LAB_020cf644;
            lVar19 = *plVar1;
          } while (lVar19 != 0);
        }
        goto LAB_020cfbb4;
      }
    }
    else {
      lVar19 = FUN_022c59ec(plVar15,*(undefined8 *)
                                     Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                           );
      plVar1 = (long *)(unaff_x19 + 0x1e0);
      if ((*(long *)(unaff_x19 + 0x1e0) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1e0) + 0x18) != 1)) {
        lVar24 = FUN_01f08890(*(undefined8 *)
                               Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                              ,1);
        *plVar1 = lVar24;
        thunk_FUN_01f51358(plVar1,lVar24);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar20 = FUN_04073094(lVar19,0,0);
      if ((uVar20 & 1) == 0) {
        if (*plVar2 == 0) goto LAB_020cfbb4;
        lVar19 = FUN_022c59ec(*plVar2,*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<TextMeshPro>_Clear__)
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar20 = FUN_04073094(lVar19,0,0);
        if ((uVar20 & 1) == 0) goto LAB_020cf644;
        if (lVar19 == 0) goto LAB_020cfbb4;
        lVar24 = *plVar1;
        uVar9 = FUN_04050c14(lVar19,0);
        if (lVar24 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_020cfe90;
        puVar18 = (undefined8 *)(lVar24 + 0x20);
        *puVar18 = uVar9;
      }
      else {
        if (lVar19 == 0) goto LAB_020cfbb4;
        lVar24 = *plVar1;
        uVar9 = FUN_040c22f8(lVar19,0);
        if (lVar24 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_020cfe90;
        puVar18 = (undefined8 *)(lVar24 + 0x20);
        *puVar18 = uVar9;
      }
      thunk_FUN_01f51358(puVar18,uVar9);
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 1;
    if ((*(byte *)(*plVar15 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(*plVar15 + 200) + lVar10 * 8) != lVar19)) {
LAB_020cfeac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
    *plVar1 = (long)plVar15;
    if ((*(byte *)(*plVar15 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(*plVar15 + 200) + lVar10 * 8) != lVar19)) goto LAB_020cfeac;
    thunk_FUN_01f51358(plVar1,plVar15);
    if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
      iVar8 = *(int *)(unaff_x19 + 0x1bc);
    }
    else {
      iVar8 = 1;
    }
    lVar19 = *(long *)(unaff_x19 + 0x1e0);
    plVar1 = (long *)(unaff_x19 + 0x1e0);
    if ((lVar19 == 0) || (iVar8 != *(int *)(lVar19 + 0x18))) {
      uVar9 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                           ,*(undefined4 *)(unaff_x19 + 0x1bc));
      *(undefined8 *)(unaff_x19 + 0x1e0) = uVar9;
      thunk_FUN_01f51358(plVar1,uVar9);
      lVar19 = *(long *)(unaff_x19 + 0x1e0);
      if (lVar19 == 0) goto LAB_020cfbb4;
    }
    puVar4 = 
    Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
    uVar20 = *(ulong *)(lVar19 + 0x18);
    if (0 < (int)uVar20) {
      if (lVar19 != 0) {
        uVar16 = 0;
        do {
          if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
          uVar9 = *(undefined8 *)(lVar19 + uVar16 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar9,0,0);
          if ((uVar22 & 1) != 0) {
            lVar19 = *plVar1;
            uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
            FUN_04051010(uVar9,0);
            if (lVar19 == 0) break;
            if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
            puVar18 = (undefined8 *)(lVar19 + uVar16 * 8 + 0x20);
            *puVar18 = uVar9;
            thunk_FUN_01f51358(puVar18,uVar9);
            lVar19 = *plVar1;
            if (lVar19 == 0) break;
            if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_020cfe90;
            lVar19 = *(long *)(lVar19 + uVar16 * 8 + 0x20);
            if (lVar19 == 0) break;
            FUN_04077338(lVar19,0x34,0);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == (uVar20 & 0xffffffff)) goto LAB_020cf644;
          lVar19 = *plVar1;
        } while (lVar19 != 0);
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
    uVar20 = FUN_04039d34(0);
    if ((uVar20 & 1) == 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (uVar9,0,0);
  if ((uVar20 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404ea1c(*(long *)(unaff_x19 + 0x200),
               *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__,0)
  ;
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404e2f4(*(long *)(unaff_x19 + 0x200),0,0);
  puVar4 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  lVar19 = *(long *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar19 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
  case 0:
    break;
  case 1:
    lVar19 = FUN_020d1ad4();
    puVar5 = Method_System_Numerics_Vector<ulong>_get_Count__;
    lVar24 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar24);
      lVar24 = *(long *)puVar5;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar9,0,0);
    if ((uVar20 & 1) != 0) {
      uVar9 = FUN_020d1cfc();
      lVar24 = *(long *)puVar5;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar24);
        lVar24 = *(long *)puVar5;
      }
      puVar18 = (undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x18);
      *puVar18 = uVar9;
      thunk_FUN_01f51358(puVar18,uVar9);
    }
    if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
       (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x1a0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar6 = FUN_04073094(uVar9,0,0);
      bVar6 = bVar6 & 1;
    }
    else {
      bVar6 = 1;
    }
    *(byte *)(unaff_x19 + 0x2f0) = bVar6;
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
    lVar19 = *(long *)(unaff_x19 + 0x100);
    goto LAB_020cf830;
  default:
    lVar19 = 0;
    goto LAB_020cf830;
  }
  lVar19 = FUN_020d1ad4();
LAB_020cf830:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (lVar19,0,0);
  if ((uVar20 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
LAB_020cf864:
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar19 == 0) goto LAB_020cfbb4;
  uVar20 = FUN_0404f968(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),
                        *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar6 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar6 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar6 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar6;
  if (bVar6 == 0) {
    uVar13 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar13 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar13 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar13;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar6 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar20 = FUN_04073094(uVar9,0,0);
    if ((uVar20 & 1) == 0) {
      bVar6 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar20 = FUN_04073094(uVar9,0,0);
      if ((uVar20 & 1) == 0) {
        bVar6 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar20 = FUN_04073094(uVar9,0,0);
        bVar6 = (byte)uVar20 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar6;
  lVar24 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar24 == 0) {
LAB_020cf9f4:
    uVar9 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar9;
    thunk_FUN_01f51358(plVar1,uVar9);
    lVar24 = *(long *)(unaff_x19 + 0x210);
    if (lVar24 == 0) {
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    iVar8 = (int)*(ulong *)(lVar24 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar8) {
      uVar16 = *(ulong *)(lVar24 + 0x18) & 0xffffffff;
      if (0 < iVar8) {
        uVar22 = 0;
        do {
          if (uVar16 <= uVar22) goto LAB_020cfe90;
          uVar20 = FUN_020ce6cc(uVar20,*(undefined8 *)(lVar24 + uVar22 * 8 + 0x20));
          lVar24 = *plVar1;
          if (lVar24 == 0) goto LAB_020cfbb4;
          uVar16 = (ulong)*(uint *)(lVar24 + 0x18);
          uVar22 = uVar22 + 1;
        } while ((long)uVar22 < (long)(int)*(uint *)(lVar24 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  puVar5 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
  lVar21 = 4;
  lVar10 = 0x20;
  while( true ) {
    uVar25 = (int)lVar21 - 4;
    if ((int)*(uint *)(lVar24 + 0x18) <= (int)uVar25) break;
    if (*(uint *)(lVar24 + 0x18) <= uVar25) goto LAB_020cfe90;
    uVar9 = *(undefined8 *)(lVar24 + lVar21 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar9,0,0);
    if ((uVar20 & 1) == 0) {
      lVar24 = *plVar1;
      if (lVar24 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar24 + 0x18) <= uVar25) goto LAB_020cfe90;
      lVar24 = *(long *)(lVar24 + lVar21 * 8);
      if (lVar24 == 0) goto LAB_020cfbb4;
      uVar9 = FUN_0404de9c(lVar24,0);
      uVar12 = FUN_0404de9c(lVar19,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar20 = FUN_04073094(uVar9,uVar12,0);
      if ((uVar20 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar23 = (long *)*plVar1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar24 = FUN_023aa7e0(lVar19,*(undefined8 *)puVar5);
      if (plVar23 == (long *)0x0) goto LAB_020cfbb4;
      if ((lVar24 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(lVar24,*(undefined8 *)(*plVar23 + 0x40)), lVar11 == 0)) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(plVar23 + 3) <= uVar25) goto LAB_020cfe90;
      plVar23[lVar21] = lVar24;
      thunk_FUN_01f51358((long)plVar23 + lVar10,lVar24);
      lVar24 = *plVar1;
      if (lVar24 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar24 + 0x18) <= uVar25) goto LAB_020cfe90;
      lVar24 = *(long *)(lVar24 + lVar21 * 8);
      if (lVar24 == 0) goto LAB_020cfbb4;
      FUN_04077338(lVar24,0x34,0);
    }
    if (*plVar1 == 0) goto LAB_020cfbb4;
    if (*(uint *)(*plVar1 + 0x18) <= uVar25) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar24 = *(long *)(unaff_x19 + 0x210);
    if (lVar24 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar24 + 0x18) <= uVar25) goto LAB_020cfe90;
    lVar24 = *(long *)(lVar24 + lVar21 * 8);
    if (lVar24 == 0) goto LAB_020cfbb4;
    FUN_0404e958(lVar24,(int)lVar21 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar24 = *(long *)(unaff_x19 + 0x210);
    lVar21 = lVar21 + 1;
    lVar10 = lVar10 + 8;
    if (lVar24 == 0) goto LAB_020cfbb4;
  }
  if (*(long *)(unaff_x19 + 0x208) == 0) goto LAB_020cfbb4;
  FUN_0404e958(*(long *)(unaff_x19 + 0x208),
               *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
  puVar3 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
  lVar19 = *(long *)(unaff_x19 + 0x208);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar19 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
     (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
  goto LAB_020cfc98;
  plVar1 = (long *)(unaff_x19 + 0x1c8);
  lVar19 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                       );
  *plVar1 = lVar19;
  thunk_FUN_01f51358(plVar1,lVar19);
  lVar19 = *plVar1;
  if (lVar19 == 0) goto LAB_020cfbb4;
  uVar25 = *(uint *)(lVar19 + 0x18);
  if ((long)((ulong)uVar25 << 0x20) < 1) goto LAB_020cfc90;
  uVar20 = 0;
  puVar17 = (undefined4 *)(lVar19 + 0xa0);
  while (uVar20 < uVar25) {
    uVar20 = uVar20 + 1;
    *puVar17 = 0xff7fffff;
    puVar17 = puVar17 + 0x2c;
    if ((long)(int)uVar25 <= (long)uVar20) {
LAB_020cfc90:
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
      if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
         (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                            );
        *(undefined8 *)(unaff_x19 + 0x1d0) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x278) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x278) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x280) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x280) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x288) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x288) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)puVar3,0x3ff);
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x290) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x290) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar9);
      }
      if ((*(long *)(unaff_x19 + 0x298) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
        uVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x298) = uVar9;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar9);
      }
      FUN_020d1458();
      return;
    }
  }
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}



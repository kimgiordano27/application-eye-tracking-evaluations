/*
FUNCTION_NAME: FUN_03b4bfac
ENTRY_POINT: 03b4bfac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


byte FUN_03b4bfac(long *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  byte bVar4;
  float *pfVar5;
  double *pdVar6;
  int *piVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a0 [16];
  undefined8 local_290;
  undefined8 local_280 [4];
  undefined1 local_260 [16];
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_a0;
  int local_94;
  double local_90;
  float local_84;
  double local_80;
  long local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b4bfa0 with catch @ 03b4bfac
                        */
  if ((DAT_048394dd & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XListPool_Free<GraphReference>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__);
    DAT_048394dd = 1;
  }
  local_78 = 0;
  local_80 = 0.0;
  local_84 = 0.0;
  local_90 = 0.0;
  local_94 = 0;
  local_a0 = 0;
  if (param_1 == (long *)0x0) goto LAB_03b4c658;
  lVar13 = *param_1;
  bVar4 = *(byte *)(*(long *)Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__ +
                   0x130);
  if ((bVar4 <= *(byte *)(lVar13 + 0x130)) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) ==
      *(long *)Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__)) {
    uVar12 = FUN_03b4b678(param_2);
    bVar4 = FUN_03a13264(param_1,uVar12,0);
    goto LAB_03b4c65c;
  }
  if (lVar13 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
    switch(*param_2) {
    case 1:
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        uVar10 = thunk_FUN_0340e318(param_1,*(undefined8 *)
                                             Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__
                                    ,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = thunk_FUN_0340e318(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__
                                      ,0);
          puVar11 = (undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__;
joined_r0x03b4c738:
          if ((uVar10 & 1) == 0) {
            bVar4 = thunk_FUN_0340e318(param_1,*puVar11,0);
            goto LAB_03b4c65c;
          }
        }
      }
      else {
        uVar10 = thunk_FUN_0340e318(param_1,*(undefined8 *)
                                             Method_Unity_VisualScripting_XListPool_Free<GraphReference>__
                                    ,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = thunk_FUN_0340e318(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__
                                      ,0);
          puVar11 = (undefined8 *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
          ;
          goto joined_r0x03b4c738;
        }
      }
      goto LAB_03b4c908;
    case 2:
      uVar10 = FUN_03553254(param_1,&local_80,0);
      dVar19 = local_80;
      if ((uVar10 & 1) == 0) break;
LAB_03b4c5bc:
      dVar20 = *(double *)(param_2 + 2);
      if (DAT_048394fa == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_048394fa = '\x01';
      }
      goto LAB_03b4c5e8;
    case 3:
      uVar10 = FUN_0356a410(param_1,&local_78,0);
      if ((uVar10 & 1) != 0) {
        bVar4 = local_78 == *(long *)(param_2 + 4);
        goto LAB_03b4c65c;
      }
      break;
    case 4:
      memcpy(auStack_e8,param_2,0x48);
      local_60 = 0;
      local_70 = FUN_03b534d0(param_1,0);
      thunk_FUN_01f51358(local_70,0);
      local_110 = local_60;
      uStack_f8 = uStack_c8;
      local_100 = local_d0;
      local_f0 = local_c0;
      puVar11 = &local_100;
      local_120 = local_70;
      goto LAB_03b4c6dc;
    default:
      goto switchD_03b4c1f8_default;
    }
  }
  else {
switchD_03b4c1f8_default:
    if (lVar13 == *(long *)
                   Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
       ) {
      pfVar5 = (float *)thunk_FUN_01f11920(param_1);
      fVar18 = *pfVar5;
      if (*param_2 != 2) {
        if (*param_2 == 4) {
          uVar12 = FUN_03b4b678(param_2);
          uVar10 = FUN_0357d664(uVar12,&local_84,0);
          fVar3 = local_84;
          if ((uVar10 & 1) != 0) {
            if (DAT_0482ef73 == '\0') {
              thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                                );
              DAT_0482ef73 = '\x01';
            }
            fVar17 = ABS(fVar3);
            fVar15 = ABS(fVar18);
            if (ABS(fVar18) <= fVar17) {
              fVar15 = fVar17;
            }
            fVar16 = **(float **)
                       (*(long *)
                         Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                       + 0xb8) * 8.0;
            fVar17 = fVar15 * DAT_00c927dc;
            if (fVar15 * DAT_00c927dc <= fVar16) {
              fVar17 = fVar16;
            }
            bVar4 = ABS(fVar3 - fVar18) < fVar17;
            goto LAB_03b4c65c;
          }
          goto LAB_03b4c658;
        }
        lVar13 = *param_1;
        goto LAB_03b4c110;
      }
      dVar20 = *(double *)(param_2 + 2);
      if (DAT_048394fa == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_048394fa = '\x01';
      }
      dVar19 = (double)fVar18;
LAB_03b4c5e8:
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar14 = (double)FUN_0356bc5c(ABS(dVar19),ABS(dVar20),0);
      dVar14 = (double)FUN_0356bc5c(dVar14 * DAT_00c8e110,8,0);
      bVar4 = 0;
      if (!NAN(ABS(dVar20 - dVar19)) && !NAN(dVar14)) {
        bVar4 = ABS(dVar20 - dVar19) < dVar14;
      }
      goto LAB_03b4c65c;
    }
LAB_03b4c110:
    if (lVar13 == *(long *)Method_System_Globalization_Calendar_TimeToTicks__) {
      pdVar6 = (double *)thunk_FUN_01f11920(param_1);
      dVar19 = *pdVar6;
      if (*param_2 == 2) goto LAB_03b4c5bc;
      if (*param_2 == 4) {
        uVar12 = FUN_03b4b678(param_2);
        uVar10 = FUN_03553254(uVar12,&local_90,0);
        dVar20 = local_90;
        if ((uVar10 & 1) == 0) goto LAB_03b4c658;
        if (DAT_048394fa == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          DAT_048394fa = '\x01';
        }
        goto LAB_03b4c5e8;
      }
      lVar13 = *param_1;
    }
    if (lVar13 == *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
      piVar7 = (int *)thunk_FUN_01f11920(param_1);
      iVar1 = *piVar7;
      if (*param_2 == 3) {
        bVar4 = *(long *)(param_2 + 4) == (long)iVar1;
        goto LAB_03b4c65c;
      }
      if (*param_2 == 4) {
        uVar12 = FUN_03b4b678(param_2);
        uVar10 = FUN_03568ae4(uVar12,&local_94,0);
        if ((uVar10 & 1) != 0) {
          bVar4 = iVar1 == local_94;
          goto LAB_03b4c65c;
        }
        goto LAB_03b4c658;
      }
      lVar13 = *param_1;
    }
    if (lVar13 == *(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__) {
      plVar8 = (long *)thunk_FUN_01f11920(param_1);
      lVar13 = *plVar8;
      if (*param_2 == 3) {
        local_a0 = *(long *)(param_2 + 4);
      }
      else {
        if (*param_2 != 4) {
          lVar13 = *param_1;
          goto LAB_03b4c14c;
        }
        uVar12 = FUN_03b4b678(param_2);
        uVar10 = FUN_0356a410(uVar12,&local_a0,0);
        if ((uVar10 & 1) == 0) goto LAB_03b4c658;
      }
      bVar4 = lVar13 == local_a0;
      goto LAB_03b4c65c;
    }
LAB_03b4c14c:
    if (lVar13 == *(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
       ) {
      pbVar9 = (byte *)thunk_FUN_01f11920(param_1);
      if (*param_2 == 1) {
        bVar4 = *pbVar9 == (*(byte *)(param_2 + 1) & 1);
        goto LAB_03b4c65c;
      }
      if (*param_2 != 4) {
        lVar13 = *param_1;
        goto LAB_03b4c160;
      }
      if (*pbVar9 == 0) {
        memcpy(auStack_e8,param_2,0x48);
        local_60 = 0;
        local_70 = FUN_03b534d0(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__,0);
        thunk_FUN_01f51358(local_70,0);
        local_210 = local_60;
        uStack_1f8 = uStack_c8;
        local_200 = local_d0;
        local_1f0 = local_c0;
        local_220 = local_70;
        uVar10 = FUN_03b4b1dc(&local_200,local_70);
        if ((uVar10 & 1) == 0) {
          memcpy(auStack_e8,param_2,0x48);
          local_60 = 0;
          auVar21 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__
                                 ,0);
          local_70 = auVar21;
          thunk_FUN_01f51358(local_70,0);
          local_250 = local_60;
          uStack_238 = uStack_c8;
          local_240 = local_d0;
          local_230 = local_c0;
          local_260 = local_70;
          uVar10 = FUN_03b4b1dc(&local_240,local_70);
          if ((uVar10 & 1) == 0) {
            memcpy(auStack_e8,param_2,0x48);
            local_60 = 0;
            auVar21 = FUN_03b534d0(*(undefined8 *)
                                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__
                                   ,0);
            local_70 = auVar21;
            thunk_FUN_01f51358(local_70,0);
            local_290 = local_60;
            puVar11 = local_280;
            local_2a0 = local_70;
            goto LAB_03b4c6dc;
          }
        }
      }
      else {
        memcpy(auStack_e8,param_2,0x48);
        local_60 = 0;
        local_70 = FUN_03b534d0(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__
                                ,0);
        thunk_FUN_01f51358(local_70,0);
        local_150 = local_60;
        uStack_138 = uStack_c8;
        local_140 = local_d0;
        local_130 = local_c0;
        local_160 = local_70;
        uVar10 = FUN_03b4b1dc(&local_140,local_70);
        if ((uVar10 & 1) == 0) {
          memcpy(auStack_e8,param_2,0x48);
          local_60 = 0;
          auVar21 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XListPool_Free<GraphReference>__,0);
          local_70 = auVar21;
          thunk_FUN_01f51358(local_70,0);
          local_190 = local_60;
          uStack_178 = uStack_c8;
          local_180 = local_d0;
          local_170 = local_c0;
          local_1a0 = local_70;
          uVar10 = FUN_03b4b1dc(&local_180,local_70);
          if ((uVar10 & 1) == 0) {
            memcpy(auStack_e8,param_2,0x48);
            local_60 = 0;
            auVar21 = FUN_03b534d0(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                   ,0);
            local_70 = auVar21;
            thunk_FUN_01f51358(local_70,0);
            local_1d0 = local_60;
            uStack_1b8 = uStack_c8;
            local_1c0 = local_d0;
            local_1b0 = local_c0;
            puVar11 = &local_1c0;
            local_1e0 = local_70;
            goto LAB_03b4c6dc;
          }
        }
      }
LAB_03b4c908:
      bVar4 = 1;
      goto LAB_03b4c65c;
    }
LAB_03b4c160:
    puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    bVar4 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                     + 0x130);
    if ((bVar4 <= *(byte *)(lVar13 + 0x130)) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__))
    {
      if (*param_2 == 4) {
        memcpy(auStack_e8,param_2,0x48);
        uStack_2b8 = uStack_c8;
        local_2c0 = local_d0;
        local_2b0 = local_c0;
        uVar12 = thunk_FUN_01ecaf38(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar12 = FUN_0359d008(uVar12,param_1,0);
        local_60 = 0;
        local_70 = FUN_03b534d0(uVar12,0);
        thunk_FUN_01f51358(local_70,0);
        uStack_2d8 = uStack_2b8;
        local_2e0 = local_2c0;
        local_2d0 = local_2b0;
        puVar11 = &local_2e0;
LAB_03b4c6dc:
        bVar4 = FUN_03b4b1dc(puVar11,local_70);
        goto LAB_03b4c65c;
      }
      if (*param_2 == 3) {
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar13 = FUN_035028b4(param_1,0);
        bVar4 = lVar13 == *(long *)(param_2 + 4);
        goto LAB_03b4c65c;
      }
    }
  }
LAB_03b4c658:
  bVar4 = 0;
LAB_03b4c65c:
  return bVar4 & 1;
}



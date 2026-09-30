/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<ProbeVolumeSceneData.SerializableBoundItem>
ENTRY_POINT: 020cf3ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_20;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__Insert<ProbeVolumeSceneData_SerializableBoundItem>
               (long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  undefined1 in_w9;
  int iVar13;
  ulong uVar14;
  uint in_w10;
  long in_x11;
  undefined4 *puVar15;
  long unaff_x19;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long *unaff_x29;
  
  *(undefined1 *)(unaff_x19 + 0x2c8) = in_w9;
  if ((*(byte *)(*param_1 + 0x130) < in_w10) ||
     (*(long *)(*(long *)(*param_1 + 200) + in_x11 * 8) != param_3)) {
LAB_020cfeac:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_1);
  }
  *param_2 = param_1;
  if ((*(byte *)(*param_1 + 0x130) < in_w10) ||
     (*(long *)(*(long *)(*param_1 + 200) + in_x11 * 8) != param_3)) goto LAB_020cfeac;
  thunk_FUN_01f51358(param_2,param_1);
  if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
    iVar13 = *(int *)(unaff_x19 + 0x1bc);
  }
  else {
    iVar13 = 1;
  }
  lVar11 = *(long *)(unaff_x19 + 0x1e0);
  plVar1 = (long *)(unaff_x19 + 0x1e0);
  if ((lVar11 == 0) || (iVar13 != *(int *)(lVar11 + 0x18))) {
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                         ,*(undefined4 *)(unaff_x19 + 0x1bc));
    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar5;
    thunk_FUN_01f51358(plVar1,uVar5);
    lVar11 = *(long *)(unaff_x19 + 0x1e0);
    if (lVar11 == 0) goto LAB_020cfbb4;
  }
  puVar2 = 
  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
  uVar14 = *(ulong *)(lVar11 + 0x18);
  if (0 < (int)uVar14) {
    if (lVar11 != 0) {
      uVar16 = 0;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_020cfe90;
        uVar5 = *(undefined8 *)(lVar11 + uVar16 * 8 + 0x20);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          lVar11 = *plVar1;
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_04051010(uVar5,0);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_020cfe90;
          puVar7 = (undefined8 *)(lVar11 + uVar16 * 8 + 0x20);
          *puVar7 = uVar5;
          thunk_FUN_01f51358(puVar7,uVar5);
          lVar11 = *plVar1;
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_020cfe90;
          lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
          if (lVar11 == 0) break;
          FUN_04077338(lVar11,0x34,0);
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == (uVar14 & 0xffffffff)) goto LAB_020cf644;
        lVar11 = *plVar1;
      } while (lVar11 != 0);
    }
    goto LAB_020cfbb4;
  }
LAB_020cf644:
  if (*(char *)(unaff_x19 + 0x3a) == '\0') {
    if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_04039d34(0);
    if ((uVar14 & 1) == 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x200);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (uVar5,0,0);
  if ((uVar14 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404ea1c(*(long *)(unaff_x19 + 0x200),
               *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__,0)
  ;
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404e2f4(*(long *)(unaff_x19 + 0x200),0,0);
  puVar2 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  lVar11 = *(long *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar11 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar11,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
  case 0:
    break;
  case 1:
    lVar11 = FUN_020d1ad4();
    puVar3 = Method_System_Numerics_Vector<ulong>_get_Count__;
    lVar12 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar3;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar5,0,0);
    if ((uVar14 & 1) != 0) {
      uVar5 = FUN_020d1cfc();
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar3;
      }
      puVar7 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
      *puVar7 = uVar5;
      thunk_FUN_01f51358(puVar7,uVar5);
    }
    if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
       (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x1a0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar4 = FUN_04073094(uVar5,0,0);
      bVar4 = bVar4 & 1;
    }
    else {
      bVar4 = 1;
    }
    *(byte *)(unaff_x19 + 0x2f0) = bVar4;
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
    lVar11 = *(long *)(unaff_x19 + 0x100);
    goto LAB_020cf830;
  default:
    lVar11 = 0;
    goto LAB_020cf830;
  }
  lVar11 = FUN_020d1ad4();
LAB_020cf830:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (lVar11,0,0);
  if ((uVar14 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar11 == 0) goto LAB_020cfbb4;
  uVar14 = FUN_0404f968(lVar11,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),
                        *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar4 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar4 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar4 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar4;
  if (bVar4 == 0) {
    uVar10 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar10 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar10;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_04073094(uVar5,0,0);
    if ((uVar14 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_04073094(uVar5,0,0);
      if ((uVar14 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_04073094(uVar5,0,0);
        bVar4 = (byte)uVar14 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar4;
  lVar12 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar12 == 0) {
LAB_020cf9f4:
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar5;
    thunk_FUN_01f51358(plVar1,uVar5);
    lVar12 = *(long *)(unaff_x19 + 0x210);
    if (lVar12 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar13 = (int)*(ulong *)(lVar12 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar13) {
      uVar16 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      if (0 < iVar13) {
        uVar6 = 0;
        do {
          if (uVar16 <= uVar6) goto LAB_020cfe90;
          uVar14 = FUN_020ce6cc(uVar14,*(undefined8 *)(lVar12 + uVar6 * 8 + 0x20));
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_020cfbb4;
          uVar16 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  puVar3 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
  lVar18 = 4;
  lVar19 = 0x20;
  do {
    uVar20 = (int)lVar18 - 4;
    if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar20) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar3 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar11 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar11 != 0) {
          FUN_0404f968(lVar11,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar11 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                               );
          *plVar1 = lVar11;
          thunk_FUN_01f51358(plVar1,lVar11);
          lVar11 = *plVar1;
          if (lVar11 != 0) {
            uVar20 = *(uint *)(lVar11 + 0x18);
            if (0 < (long)((ulong)uVar20 << 0x20)) {
              uVar14 = 0;
              puVar15 = (undefined4 *)(lVar11 + 0xa0);
              do {
                if (uVar20 <= uVar14) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar14 = uVar14 + 1;
                *puVar15 = 0xff7fffff;
                puVar15 = puVar15 + 0x2c;
              } while ((long)uVar14 < (long)(int)uVar20);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                  );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)puVar3,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar5);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar5);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_020cfe90;
    uVar5 = *(undefined8 *)(lVar12 + lVar18 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar5,0,0);
    if ((uVar14 & 1) == 0) {
      lVar12 = *plVar1;
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_020cfe90;
      lVar12 = *(long *)(lVar12 + lVar18 * 8);
      if (lVar12 == 0) break;
      uVar5 = FUN_0404de9c(lVar12,0);
      uVar8 = FUN_0404de9c(lVar11,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar14 = FUN_04073094(uVar5,uVar8,0);
      if ((uVar14 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar17 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar12 = FUN_023aa7e0(lVar11,*(undefined8 *)puVar3);
      if (plVar17 == (long *)0x0) break;
      if ((lVar12 != 0) &&
         (lVar9 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar9 == 0)) {
        uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,0);
      }
      if (*(uint *)(plVar17 + 3) <= uVar20) goto LAB_020cfe90;
      plVar17[lVar18] = lVar12;
      thunk_FUN_01f51358((long)plVar17 + lVar19,lVar12);
      lVar12 = *plVar1;
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_020cfe90;
      lVar12 = *(long *)(lVar12 + lVar18 * 8);
      if (lVar12 == 0) break;
      FUN_04077338(lVar12,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar20) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar12 = *(long *)(unaff_x19 + 0x210);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_020cfe90;
    lVar12 = *(long *)(lVar12 + lVar18 * 8);
    if (lVar12 == 0) break;
    FUN_0404e958(lVar12,(int)lVar18 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar12 = *(long *)(unaff_x19 + 0x210);
    lVar18 = lVar18 + 1;
    lVar19 = lVar19 + 8;
  } while (lVar12 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



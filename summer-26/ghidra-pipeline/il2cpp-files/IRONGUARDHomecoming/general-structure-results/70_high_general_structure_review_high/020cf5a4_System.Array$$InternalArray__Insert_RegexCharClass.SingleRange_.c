/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<RegexCharClass.SingleRange>
ENTRY_POINT: 020cf5a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_15;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__Insert<RegexCharClass_SingleRange>(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  ulong unaff_x22;
  ulong uVar15;
  ulong unaff_x23;
  long *plVar16;
  undefined8 *unaff_x24;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long *unaff_x29;
  
code_r0x020cf5a4:
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    lVar17 = *unaff_x20;
    uVar14 = thunk_FUN_01f117cc(*unaff_x24);
    FUN_04051010(uVar14,0);
    if (lVar17 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar17 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    puVar6 = (undefined8 *)(lVar17 + unaff_x22 * 8 + 0x20);
    *puVar6 = uVar14;
    thunk_FUN_01f51358(puVar6,uVar14);
    lVar17 = *unaff_x20;
    if (lVar17 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar17 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    lVar17 = *(long *)(lVar17 + unaff_x22 * 8 + 0x20);
    if (lVar17 == 0) goto LAB_020cfbb4;
    FUN_04077338(lVar17,0x34,0);
  }
  unaff_x22 = unaff_x22 + 1;
  if (unaff_x22 == unaff_x23) {
    if (*(char *)(unaff_x19 + 0x3a) == '\0') {
      if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_04039d34(0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x200);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
    FUN_0404ea1c(*(long *)(unaff_x19 + 0x200),
                 *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__,
                 0);
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
    FUN_0404e2f4(*(long *)(unaff_x19 + 0x200),0,0);
    puVar3 = 
    Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
    ;
    lVar17 = *(long *)(unaff_x19 + 0x200);
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar17 == 0) goto LAB_020cfbb4;
    FUN_0404f968(lVar17,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                 *(undefined4 *)(unaff_x19 + 0x8c),0);
    switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
    case 0:
      break;
    case 1:
      lVar17 = FUN_020d1ad4();
      puVar2 = Method_System_Numerics_Vector<ulong>_get_Count__;
      lVar10 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar2;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        uVar14 = FUN_020d1cfc();
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar10);
          lVar10 = *(long *)puVar2;
        }
        puVar6 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
        *puVar6 = uVar14;
        thunk_FUN_01f51358(puVar6,uVar14);
      }
      if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
         (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
        uVar14 = *(undefined8 *)(unaff_x19 + 0x1a0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        bVar4 = FUN_04073094(uVar14,0,0);
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
      lVar17 = *(long *)(unaff_x19 + 0x100);
      goto LAB_020cf830;
    default:
      lVar17 = 0;
      goto LAB_020cf830;
    }
    lVar17 = FUN_020d1ad4();
LAB_020cf830:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar17,0,0);
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
      thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
      FUN_0406f8a4();
      return;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar17 == 0) goto LAB_020cfbb4;
    uVar5 = FUN_0404f968(lVar17,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                         *(undefined4 *)(unaff_x19 + 0x8c),0);
    bVar4 = 0;
    if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar4 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0'))
    {
      bVar4 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
    }
    *(byte *)(unaff_x19 + 0x351) = bVar4;
    if (bVar4 == 0) {
      uVar9 = 0;
      if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
        uVar9 = *(undefined1 *)(unaff_x19 + 0x1c0);
      }
    }
    else {
      uVar9 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0x351) = uVar9;
    if (*(char *)(unaff_x19 + 0xa0) == '\0') {
      bVar4 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_04073094(uVar14,0,0);
      if ((uVar5 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x19 + 0xb0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_04073094(uVar14,0,0);
        if ((uVar5 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(unaff_x19 + 0xb8);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_04073094(uVar14,0,0);
          bVar4 = (byte)uVar5 & 1;
        }
      }
      if (unaff_x19 == 0) goto LAB_020cfbb4;
    }
    *(byte *)(unaff_x19 + 0x352) = bVar4;
    lVar10 = *(long *)(unaff_x19 + 0x210);
    plVar1 = (long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) goto LAB_020cf9f4;
    iVar11 = (int)*(ulong *)(lVar10 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) == iVar11) goto LAB_020cfa20;
    uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
    if (iVar11 < 1) goto LAB_020cf9f4;
    uVar15 = 0;
    goto LAB_020cf9c8;
  }
  param_1 = *unaff_x20;
  if (param_1 == 0) goto LAB_020cfbb4;
  if (unaff_x22 < *(uint *)(param_1 + 0x18)) goto code_r0x020cf59c;
  goto LAB_020cfe90;
code_r0x020cf59c:
  param_2 = *unaff_x29;
  param_1 = param_1 + unaff_x22 * 8;
  goto code_r0x020cf5a4;
  while( true ) {
    uVar5 = FUN_020ce6cc(uVar5,*(undefined8 *)(lVar10 + uVar15 * 8 + 0x20));
    lVar10 = *plVar1;
    if (lVar10 == 0) goto LAB_020cfbb4;
    uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
    uVar15 = uVar15 + 1;
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) break;
LAB_020cf9c8:
    if (uVar12 <= uVar15) goto LAB_020cfe90;
  }
LAB_020cf9f4:
  uVar14 = FUN_01f08890(*(undefined8 *)
                         Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                        ,*(undefined4 *)(unaff_x19 + 0x1b8));
  *(undefined8 *)(unaff_x19 + 0x210) = uVar14;
  thunk_FUN_01f51358(plVar1,uVar14);
  lVar10 = *(long *)(unaff_x19 + 0x210);
  if (lVar10 != 0) {
LAB_020cfa20:
    puVar2 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
    lVar18 = 4;
    lVar19 = 0x20;
    do {
      uVar20 = (int)lVar18 - 4;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar20) {
        if (*(long *)(unaff_x19 + 0x208) != 0) {
          FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                       *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
          puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
          lVar17 = *(long *)(unaff_x19 + 0x208);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar17 != 0) {
            FUN_0404f968(lVar17,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                         *(undefined4 *)(unaff_x19 + 0x8c),0);
            if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
               (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
            goto LAB_020cfc98;
            plVar1 = (long *)(unaff_x19 + 0x1c8);
            lVar17 = FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                                 );
            *plVar1 = lVar17;
            thunk_FUN_01f51358(plVar1,lVar17);
            lVar17 = *plVar1;
            if (lVar17 != 0) {
              uVar20 = *(uint *)(lVar17 + 0x18);
              if (0 < (long)((ulong)uVar20 << 0x20)) {
                uVar5 = 0;
                puVar13 = (undefined4 *)(lVar17 + 0xa0);
                do {
                  if (uVar20 <= uVar5) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  uVar5 = uVar5 + 1;
                  *puVar13 = 0xff7fffff;
                  puVar13 = puVar13 + 0x2c;
                } while ((long)uVar5 < (long)(int)uVar20);
              }
              *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
              if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
                 (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                     );
                *(undefined8 *)(unaff_x19 + 0x1d0) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x278) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                      ,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x278) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x280) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                      ,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x280) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x288) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                      ,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x288) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x1f8) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x290) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                      ,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x290) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar14);
              }
              if ((*(long *)(unaff_x19 + 0x298) == 0) ||
                 (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
                uVar14 = FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                      ,0x3ff);
                *(undefined8 *)(unaff_x19 + 0x298) = uVar14;
                thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar14);
              }
              FUN_020d1458();
              return;
            }
          }
        }
        break;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
      uVar14 = *(undefined8 *)(lVar10 + lVar18 * 8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar14,0,0);
      if ((uVar5 & 1) == 0) {
        lVar10 = *plVar1;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
        lVar10 = *(long *)(lVar10 + lVar18 * 8);
        if (lVar10 == 0) break;
        uVar14 = FUN_0404de9c(lVar10,0);
        uVar7 = FUN_0404de9c(lVar17,0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x29);
        }
        uVar5 = FUN_04073094(uVar14,uVar7,0);
        if ((uVar5 & 1) != 0) goto LAB_020cfad0;
      }
      else {
LAB_020cfad0:
        plVar16 = (long *)*plVar1;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = FUN_023aa7e0(lVar17,*(undefined8 *)puVar2);
        if (plVar16 == (long *)0x0) break;
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
          uVar14 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar14,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar20) goto LAB_020cfe90;
        plVar16[lVar18] = lVar10;
        thunk_FUN_01f51358((long)plVar16 + lVar19,lVar10);
        lVar10 = *plVar1;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
        lVar10 = *(long *)(lVar10 + lVar18 * 8);
        if (lVar10 == 0) break;
        FUN_04077338(lVar10,0x34,0);
      }
      if (*plVar1 == 0) break;
      if (*(uint *)(*plVar1 + 0x18) <= uVar20) goto LAB_020cfe90;
      FUN_020d1f98();
      lVar10 = *(long *)(unaff_x19 + 0x210);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar18 * 8);
      if (lVar10 == 0) break;
      FUN_0404e958(lVar10,(int)lVar18 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
      lVar10 = *(long *)(unaff_x19 + 0x210);
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 8;
    } while (lVar10 != 0);
  }
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



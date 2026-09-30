/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<RenderGraphDebugData.PassDebugData>
ENTRY_POINT: 020cf6c4
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


void System_Array__InternalArray__Insert<RenderGraphDebugData_PassDebugData>
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long *unaff_x29;
  
  FUN_0404e2f4(param_1,param_2,0);
  puVar3 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  lVar14 = *(long *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar14 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar14,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
  case 0:
    break;
  case 1:
    lVar14 = FUN_020d1ad4();
    puVar2 = Method_System_Numerics_Vector<ulong>_get_Count__;
    lVar10 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar2;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar15,0,0);
    if ((uVar6 & 1) != 0) {
      uVar15 = FUN_020d1cfc();
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar2;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
      *puVar5 = uVar15;
      thunk_FUN_01f51358(puVar5,uVar15);
    }
    if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
       (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
      uVar15 = *(undefined8 *)(unaff_x19 + 0x1a0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar4 = FUN_04073094(uVar15,0,0);
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
    lVar14 = *(long *)(unaff_x19 + 0x100);
    goto LAB_020cf830;
  default:
    lVar14 = 0;
    goto LAB_020cf830;
  }
  lVar14 = FUN_020d1ad4();
LAB_020cf830:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (lVar14,0,0);
  if ((uVar6 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar14 == 0) goto LAB_020cfbb4;
  uVar6 = FUN_0404f968(lVar14,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar4 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar4 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
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
    uVar15 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_04073094(uVar15,0,0);
    if ((uVar6 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_04073094(uVar15,0,0);
      if ((uVar6 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_04073094(uVar15,0,0);
        bVar4 = (byte)uVar6 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar4;
  lVar10 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar10 == 0) {
LAB_020cf9f4:
    uVar15 = FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                          ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar15;
    thunk_FUN_01f51358(plVar1,uVar15);
    lVar10 = *(long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar11 = (int)*(ulong *)(lVar10 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar11) {
      uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      if (0 < iVar11) {
        uVar16 = 0;
        do {
          if (uVar12 <= uVar16) goto LAB_020cfe90;
          uVar6 = FUN_020ce6cc(uVar6,*(undefined8 *)(lVar10 + uVar16 * 8 + 0x20));
          lVar10 = *plVar1;
          if (lVar10 == 0) goto LAB_020cfbb4;
          uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
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
        lVar14 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar14 != 0) {
          FUN_0404f968(lVar14,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar14 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                               );
          *plVar1 = lVar14;
          thunk_FUN_01f51358(plVar1,lVar14);
          lVar14 = *plVar1;
          if (lVar14 != 0) {
            uVar20 = *(uint *)(lVar14 + 0x18);
            if (0 < (long)((ulong)uVar20 << 0x20)) {
              uVar6 = 0;
              puVar13 = (undefined4 *)(lVar14 + 0xa0);
              do {
                if (uVar20 <= uVar6) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar6 = uVar6 + 1;
                *puVar13 = 0xff7fffff;
                puVar13 = puVar13 + 0x2c;
              } while ((long)uVar6 < (long)(int)uVar20);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                   );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar15);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar15 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar15);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
    uVar15 = *(undefined8 *)(lVar10 + lVar18 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar15,0,0);
    if ((uVar6 & 1) == 0) {
      lVar10 = *plVar1;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar20) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar18 * 8);
      if (lVar10 == 0) break;
      uVar15 = FUN_0404de9c(lVar10,0);
      uVar7 = FUN_0404de9c(lVar14,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar6 = FUN_04073094(uVar15,uVar7,0);
      if ((uVar6 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar17 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_023aa7e0(lVar14,*(undefined8 *)puVar2);
      if (plVar17 == (long *)0x0) break;
      if ((lVar10 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0)) {
        uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar15,0);
      }
      if (*(uint *)(plVar17 + 3) <= uVar20) goto LAB_020cfe90;
      plVar17[lVar18] = lVar10;
      thunk_FUN_01f51358((long)plVar17 + lVar19,lVar10);
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
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



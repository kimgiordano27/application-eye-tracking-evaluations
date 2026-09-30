/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<SelfValidationResult.ContextMenuItem>
ENTRY_POINT: 020cf754
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_5
*/


void System_Array__InternalArray__Insert<SelfValidationResult_ContextMenuItem>(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x24;
  long lVar16;
  long lVar17;
  uint uVar18;
  long *unaff_x29;
  
  puVar2 = Method_System_Numerics_Vector<ulong>_get_Count__;
  lVar9 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *(long *)puVar2;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar13,0,0);
  if ((uVar4 & 1) != 0) {
    uVar13 = FUN_020d1cfc();
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
    *puVar5 = uVar13;
    thunk_FUN_01f51358(puVar5,uVar13);
  }
  if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
     (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
    uVar13 = *(undefined8 *)(unaff_x19 + 0x1a0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar3 = FUN_04073094(uVar13,0,0);
    bVar3 = bVar3 & 1;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)(unaff_x19 + 0x2f0) = bVar3;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,0,0);
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (param_1 == 0) goto LAB_020cfbb4;
  uVar4 = FUN_0404f968(param_1,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar3 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar3 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar3 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar3;
  if (bVar3 == 0) {
    uVar8 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar8 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar8;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar3 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_04073094(uVar13,0,0);
    if ((uVar4 & 1) == 0) {
      bVar3 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(uVar13,0,0);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_04073094(uVar13,0,0);
        bVar3 = (byte)uVar4 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar3;
  lVar9 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar9 == 0) {
LAB_020cf9f4:
    uVar13 = FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                          ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
    thunk_FUN_01f51358(plVar1,uVar13);
    lVar9 = *(long *)(unaff_x19 + 0x210);
    if (lVar9 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar10 = (int)*(ulong *)(lVar9 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar10) {
      uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      if (0 < iVar10) {
        uVar14 = 0;
        do {
          if (uVar11 <= uVar14) goto LAB_020cfe90;
          uVar4 = FUN_020ce6cc(uVar4,*(undefined8 *)(lVar9 + uVar14 * 8 + 0x20));
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_020cfbb4;
          uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  puVar2 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
  lVar16 = 4;
  lVar17 = 0x20;
  do {
    uVar18 = (int)lVar16 - 4;
    if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar18) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar9 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar9 != 0) {
          FUN_0404f968(lVar9,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar9 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                              );
          *plVar1 = lVar9;
          thunk_FUN_01f51358(plVar1,lVar9);
          lVar9 = *plVar1;
          if (lVar9 != 0) {
            uVar18 = *(uint *)(lVar9 + 0x18);
            if (0 < (long)((ulong)uVar18 << 0x20)) {
              uVar4 = 0;
              puVar12 = (undefined4 *)(lVar9 + 0xa0);
              do {
                if (uVar18 <= uVar4) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar4 = uVar4 + 1;
                *puVar12 = 0xff7fffff;
                puVar12 = puVar12 + 0x2c;
              } while ((long)uVar4 < (long)(int)uVar18);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                   );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar13);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar13);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_020cfe90;
    uVar13 = *(undefined8 *)(lVar9 + lVar16 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar13,0,0);
    if ((uVar4 & 1) == 0) {
      lVar9 = *plVar1;
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_020cfe90;
      lVar9 = *(long *)(lVar9 + lVar16 * 8);
      if (lVar9 == 0) break;
      uVar13 = FUN_0404de9c(lVar9,0);
      uVar6 = FUN_0404de9c(param_1,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar4 = FUN_04073094(uVar13,uVar6,0);
      if ((uVar4 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar15 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_023aa7e0(param_1,*(undefined8 *)puVar2);
      if (plVar15 == (long *)0x0) break;
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)) {
        uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar13,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_020cfe90;
      plVar15[lVar16] = lVar9;
      thunk_FUN_01f51358((long)plVar15 + lVar17,lVar9);
      lVar9 = *plVar1;
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_020cfe90;
      lVar9 = *(long *)(lVar9 + lVar16 * 8);
      if (lVar9 == 0) break;
      FUN_04077338(lVar9,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar18) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar9 = *(long *)(unaff_x19 + 0x210);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_020cfe90;
    lVar9 = *(long *)(lVar9 + lVar16 * 8);
    if (lVar9 == 0) break;
    FUN_0404e958(lVar9,(int)lVar16 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar9 = *(long *)(unaff_x19 + 0x210);
    lVar16 = lVar16 + 1;
    lVar17 = lVar17 + 8;
  } while (lVar9 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



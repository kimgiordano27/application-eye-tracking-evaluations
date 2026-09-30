/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<SelfValidationResult.ResultItem>
ENTRY_POINT: 020cf79c
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


void System_Array__InternalArray__Insert<SelfValidationResult_ResultItem>(void)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong uVar14;
  long *plVar15;
  long *unaff_x24;
  long lVar16;
  long lVar17;
  uint uVar18;
  long *unaff_x29;
  
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_020d1cfc();
    lVar10 = *unaff_x22;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *unaff_x22;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
    *puVar6 = uVar5;
    thunk_FUN_01f51358(puVar6,uVar5);
  }
  if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
     (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x1a0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar3 = FUN_04073094(uVar5,0,0);
    bVar3 = bVar3 & 1;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)(unaff_x19 + 0x2f0) = bVar3;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (unaff_x20 == 0) goto LAB_020cfbb4;
  uVar4 = FUN_0404f968();
  bVar3 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar3 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar3 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar3;
  if (bVar3 == 0) {
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
    bVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_04073094(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      bVar3 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(uVar5,0,0);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_04073094(uVar5,0,0);
        bVar3 = (byte)uVar4 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar3;
  lVar10 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar10 == 0) {
LAB_020cf9f4:
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar5;
    thunk_FUN_01f51358(plVar1,uVar5);
    lVar10 = *(long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar11 = (int)*(ulong *)(lVar10 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar11) {
      uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      if (0 < iVar11) {
        uVar14 = 0;
        do {
          if (uVar12 <= uVar14) goto LAB_020cfe90;
          uVar4 = FUN_020ce6cc(uVar4,*(undefined8 *)(lVar10 + uVar14 * 8 + 0x20));
          lVar10 = *plVar1;
          if (lVar10 == 0) goto LAB_020cfbb4;
          uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  lVar16 = 4;
  lVar17 = 0x20;
  do {
    uVar18 = (int)lVar16 - 4;
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar18) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar10 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar10 != 0) {
          FUN_0404f968(lVar10,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar10 = FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                               );
          *plVar1 = lVar10;
          thunk_FUN_01f51358(plVar1,lVar10);
          lVar10 = *plVar1;
          if (lVar10 != 0) {
            uVar18 = *(uint *)(lVar10 + 0x18);
            if (0 < (long)((ulong)uVar18 << 0x20)) {
              uVar4 = 0;
              puVar13 = (undefined4 *)(lVar10 + 0xa0);
              do {
                if (uVar18 <= uVar4) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar4 = uVar4 + 1;
                *puVar13 = 0xff7fffff;
                puVar13 = puVar13 + 0x2c;
              } while ((long)uVar4 < (long)(int)uVar18);
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
              uVar5 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
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
    if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_020cfe90;
    uVar5 = *(undefined8 *)(lVar10 + lVar16 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      lVar10 = *plVar1;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar16 * 8);
      if (lVar10 == 0) break;
      uVar5 = FUN_0404de9c(lVar10,0);
      uVar7 = FUN_0404de9c();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar4 = FUN_04073094(uVar5,uVar7,0);
      if ((uVar4 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar15 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_023aa7e0();
      if (plVar15 == (long *)0x0) break;
      if ((lVar10 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
        uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_020cfe90;
      plVar15[lVar16] = lVar10;
      thunk_FUN_01f51358((long)plVar15 + lVar17,lVar10);
      lVar10 = *plVar1;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_020cfe90;
      lVar10 = *(long *)(lVar10 + lVar16 * 8);
      if (lVar10 == 0) break;
      FUN_04077338(lVar10,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar18) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar10 = *(long *)(unaff_x19 + 0x210);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_020cfe90;
    lVar10 = *(long *)(lVar10 + lVar16 * 8);
    if (lVar10 == 0) break;
    FUN_0404e958(lVar10,(int)lVar16 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar10 = *(long *)(unaff_x19 + 0x210);
    lVar16 = lVar16 + 1;
    lVar17 = lVar17 + 8;
  } while (lVar10 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



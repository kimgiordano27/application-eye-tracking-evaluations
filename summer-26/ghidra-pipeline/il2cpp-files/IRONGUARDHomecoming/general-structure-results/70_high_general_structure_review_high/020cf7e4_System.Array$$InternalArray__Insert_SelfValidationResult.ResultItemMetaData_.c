/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<SelfValidationResult.ResultItemMetaData>
ENTRY_POINT: 020cf7e4
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


void System_Array__InternalArray__Insert<SelfValidationResult_ResultItemMetaData>(void)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *unaff_x24;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *unaff_x29;
  
  if (*(char *)(unaff_x19 + 0x1a8) == '\0') {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x1a0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar3 = FUN_04073094(uVar12,0,0);
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
    uVar7 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar7 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar7;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar3 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_04073094(uVar12,0,0);
    if ((uVar4 & 1) == 0) {
      bVar3 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_04073094(uVar12,0,0);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_04073094(uVar12,0,0);
        bVar3 = (byte)uVar4 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar3;
  lVar8 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar8 == 0) {
LAB_020cf9f4:
    uVar12 = FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                          ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar12;
    thunk_FUN_01f51358(plVar1,uVar12);
    lVar8 = *(long *)(unaff_x19 + 0x210);
    if (lVar8 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar9 = (int)*(ulong *)(lVar8 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar9) {
      uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      if (0 < iVar9) {
        uVar13 = 0;
        do {
          if (uVar10 <= uVar13) goto LAB_020cfe90;
          uVar4 = FUN_020ce6cc(uVar4,*(undefined8 *)(lVar8 + uVar13 * 8 + 0x20));
          lVar8 = *plVar1;
          if (lVar8 == 0) goto LAB_020cfbb4;
          uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  lVar15 = 4;
  lVar16 = 0x20;
  do {
    uVar17 = (int)lVar15 - 4;
    if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar17) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar8 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar8 != 0) {
          FUN_0404f968(lVar8,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar8 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                              );
          *plVar1 = lVar8;
          thunk_FUN_01f51358(plVar1,lVar8);
          lVar8 = *plVar1;
          if (lVar8 != 0) {
            uVar17 = *(uint *)(lVar8 + 0x18);
            if (0 < (long)((ulong)uVar17 << 0x20)) {
              uVar4 = 0;
              puVar11 = (undefined4 *)(lVar8 + 0xa0);
              do {
                if (uVar17 <= uVar4) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar4 = uVar4 + 1;
                *puVar11 = 0xff7fffff;
                puVar11 = puVar11 + 0x2c;
              } while ((long)uVar4 < (long)(int)uVar17);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                   );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar12);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar12);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_020cfe90;
    uVar12 = *(undefined8 *)(lVar8 + lVar15 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar12,0,0);
    if ((uVar4 & 1) == 0) {
      lVar8 = *plVar1;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_020cfe90;
      lVar8 = *(long *)(lVar8 + lVar15 * 8);
      if (lVar8 == 0) break;
      uVar12 = FUN_0404de9c(lVar8,0);
      uVar5 = FUN_0404de9c();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar4 = FUN_04073094(uVar12,uVar5,0);
      if ((uVar4 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar14 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_023aa7e0();
      if (plVar14 == (long *)0x0) break;
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0)) {
        uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,0);
      }
      if (*(uint *)(plVar14 + 3) <= uVar17) goto LAB_020cfe90;
      plVar14[lVar15] = lVar8;
      thunk_FUN_01f51358((long)plVar14 + lVar16,lVar8);
      lVar8 = *plVar1;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_020cfe90;
      lVar8 = *(long *)(lVar8 + lVar15 * 8);
      if (lVar8 == 0) break;
      FUN_04077338(lVar8,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar17) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar8 = *(long *)(unaff_x19 + 0x210);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_020cfe90;
    lVar8 = *(long *)(lVar8 + lVar15 * 8);
    if (lVar8 == 0) break;
    FUN_0404e958(lVar8,(int)lVar15 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar8 = *(long *)(unaff_x19 + 0x210);
    lVar15 = lVar15 + 1;
    lVar16 = lVar16 + 8;
  } while (lVar8 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



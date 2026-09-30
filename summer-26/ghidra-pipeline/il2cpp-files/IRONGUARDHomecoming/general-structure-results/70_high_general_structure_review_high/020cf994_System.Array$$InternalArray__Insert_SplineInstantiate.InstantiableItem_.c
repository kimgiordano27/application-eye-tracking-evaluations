/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<SplineInstantiate.InstantiableItem>
ENTRY_POINT: 020cf994
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__Insert<SplineInstantiate_InstantiableItem>(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 in_w8;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x22;
  ulong uVar10;
  long *plVar11;
  long *unaff_x24;
  long lVar12;
  long lVar13;
  uint uVar14;
  long *unaff_x29;
  
  if (unaff_x22 == 0) goto LAB_020cfbb4;
  *(undefined1 *)(unaff_x22 + 0x352) = in_w8;
  lVar6 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar6 == 0) {
LAB_020cf9f4:
    uVar3 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar3;
    thunk_FUN_01f51358(plVar1,uVar3);
    lVar6 = *(long *)(unaff_x19 + 0x210);
    if (lVar6 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar7 = (int)*(ulong *)(lVar6 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar7) {
      uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      if (0 < iVar7) {
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) goto LAB_020cfe90;
          param_1 = FUN_020ce6cc(param_1,*(undefined8 *)(lVar6 + uVar10 * 8 + 0x20));
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_020cfbb4;
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  lVar12 = 4;
  lVar13 = 0x20;
  do {
    uVar14 = (int)lVar12 - 4;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar14) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar6 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar6 != 0) {
          FUN_0404f968(lVar6,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar6 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                              );
          *plVar1 = lVar6;
          thunk_FUN_01f51358(plVar1,lVar6);
          lVar6 = *plVar1;
          if (lVar6 != 0) {
            uVar14 = *(uint *)(lVar6 + 0x18);
            if (0 < (long)((ulong)uVar14 << 0x20)) {
              uVar8 = 0;
              puVar9 = (undefined4 *)(lVar6 + 0xa0);
              do {
                if (uVar14 <= uVar8) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar8 = uVar8 + 1;
                *puVar9 = 0xff7fffff;
                puVar9 = puVar9 + 0x2c;
              } while ((long)uVar8 < (long)(int)uVar14);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                  );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar3);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar3 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar3);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_020cfe90;
    uVar3 = *(undefined8 *)(lVar6 + lVar12 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar3,0,0);
    if ((uVar8 & 1) == 0) {
      lVar6 = *plVar1;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_020cfe90;
      lVar6 = *(long *)(lVar6 + lVar12 * 8);
      if (lVar6 == 0) break;
      uVar3 = FUN_0404de9c(lVar6,0);
      uVar4 = FUN_0404de9c();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar8 = FUN_04073094(uVar3,uVar4,0);
      if ((uVar8 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar11 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_023aa7e0();
      if (plVar11 == (long *)0x0) break;
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
        uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar3,0);
      }
      if (*(uint *)(plVar11 + 3) <= uVar14) goto LAB_020cfe90;
      plVar11[lVar12] = lVar6;
      thunk_FUN_01f51358((long)plVar11 + lVar13,lVar6);
      lVar6 = *plVar1;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_020cfe90;
      lVar6 = *(long *)(lVar6 + lVar12 * 8);
      if (lVar6 == 0) break;
      FUN_04077338(lVar6,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar14) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar6 = *(long *)(unaff_x19 + 0x210);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_020cfe90;
    lVar6 = *(long *)(lVar6 + lVar12 * 8);
    if (lVar6 == 0) break;
    FUN_0404e958(lVar6,(int)lVar12 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar6 = *(long *)(unaff_x19 + 0x210);
    lVar12 = lVar12 + 1;
    lVar13 = lVar13 + 8;
  } while (lVar6 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<SplineMesh.Settings>
ENTRY_POINT: 020cf9dc
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


void System_Array__InternalArray__Insert<SplineMesh_Settings>(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long *plVar8;
  long *unaff_x24;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *unaff_x29;
  
  while (lVar6 = *unaff_x21, lVar6 != 0) {
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)unaff_x22) {
      uVar2 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                           ,*(undefined4 *)(unaff_x19 + 0x1b8));
      *(undefined8 *)(unaff_x19 + 0x210) = uVar2;
      thunk_FUN_01f51358();
      lVar6 = *(long *)(unaff_x19 + 0x210);
      if (lVar6 != 0) {
        lVar9 = 4;
        lVar10 = 0x20;
        goto LAB_020cfa30;
      }
      break;
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_020cfe90;
    param_1 = FUN_020ce6cc(param_1,*(undefined8 *)(lVar6 + unaff_x22 * 8 + 0x20));
  }
  goto LAB_020cfbb4;
LAB_020cfa30:
  do {
    uVar11 = (int)lVar9 - 4;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar11) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar1 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
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
          plVar8 = (long *)(unaff_x19 + 0x1c8);
          lVar6 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                              );
          *plVar8 = lVar6;
          thunk_FUN_01f51358(plVar8,lVar6);
          lVar6 = *plVar8;
          if (lVar6 != 0) {
            uVar11 = *(uint *)(lVar6 + 0x18);
            if (0 < (long)((ulong)uVar11 << 0x20)) {
              uVar3 = 0;
              puVar7 = (undefined4 *)(lVar6 + 0xa0);
              do {
                if (uVar11 <= uVar3) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar3 = uVar3 + 1;
                *puVar7 = 0xff7fffff;
                puVar7 = puVar7 + 0x2c;
              } while ((long)uVar3 < (long)(int)uVar11);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                  );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,
                                   0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)puVar1,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar2);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar2 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                   ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar2;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar2);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_020cfe90;
    uVar2 = *(undefined8 *)(lVar6 + lVar9 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      lVar6 = *unaff_x21;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_020cfe90;
      lVar6 = *(long *)(lVar6 + lVar9 * 8);
      if (lVar6 == 0) break;
      uVar2 = FUN_0404de9c(lVar6,0);
      uVar4 = FUN_0404de9c();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar3 = FUN_04073094(uVar2,uVar4,0);
      if ((uVar3 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar8 = (long *)*unaff_x21;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_023aa7e0();
      if (plVar8 == (long *)0x0) break;
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar5 == 0)) {
        uVar2 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar2,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar11) goto LAB_020cfe90;
      plVar8[lVar9] = lVar6;
      thunk_FUN_01f51358((long)plVar8 + lVar10,lVar6);
      lVar6 = *unaff_x21;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_020cfe90;
      lVar6 = *(long *)(lVar6 + lVar9 * 8);
      if (lVar6 == 0) break;
      FUN_04077338(lVar6,0x34,0);
    }
    if (*unaff_x21 == 0) break;
    if (*(uint *)(*unaff_x21 + 0x18) <= uVar11) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar6 = *(long *)(unaff_x19 + 0x210);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_020cfe90;
    lVar6 = *(long *)(lVar6 + lVar9 * 8);
    if (lVar6 == 0) break;
    FUN_0404e958(lVar6,(int)lVar9 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar6 = *(long *)(unaff_x19 + 0x210);
    lVar9 = lVar9 + 1;
    lVar10 = lVar10 + 8;
  } while (lVar6 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



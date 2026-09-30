/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<ShadowUtility.Edge>
ENTRY_POINT: 020cf8bc
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


void System_Array__InternalArray__Insert<ShadowUtility_Edge>(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  byte in_w8;
  undefined1 uVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x24;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *unaff_x29;
  
  *(byte *)(unaff_x19 + 0x351) = in_w8 ^ 1;
  if ((in_w8 ^ 1) == 0) {
    uVar5 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar5 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar5;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar6 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = FUN_04073094(uVar11,0,0);
    if ((param_1 & 1) == 0) {
      bVar6 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      param_1 = FUN_04073094(uVar11,0,0);
      if ((param_1 & 1) == 0) {
        bVar6 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        param_1 = FUN_04073094(uVar11,0,0);
        bVar6 = (byte)param_1 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar6;
  lVar7 = *(long *)(unaff_x19 + 0x210);
  plVar1 = (long *)(unaff_x19 + 0x210);
  if (lVar7 == 0) {
LAB_020cf9f4:
    uVar11 = FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                          ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar11;
    thunk_FUN_01f51358(plVar1,uVar11);
    lVar7 = *(long *)(unaff_x19 + 0x210);
    if (lVar7 == 0) goto LAB_020cfbb4;
  }
  else {
    iVar8 = (int)*(ulong *)(lVar7 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar8) {
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      if (0 < iVar8) {
        uVar12 = 0;
        do {
          if (uVar9 <= uVar12) goto LAB_020cfe90;
          param_1 = FUN_020ce6cc(param_1,*(undefined8 *)(lVar7 + uVar12 * 8 + 0x20));
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_020cfbb4;
          uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  lVar14 = 4;
  lVar15 = 0x20;
  do {
    uVar16 = (int)lVar14 - 4;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar16) {
      if (*(long *)(unaff_x19 + 0x208) != 0) {
        FUN_0404e958(*(long *)(unaff_x19 + 0x208),
                     *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
        puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
        lVar7 = *(long *)(unaff_x19 + 0x208);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar7 != 0) {
          FUN_0404f968(lVar7,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c),
                       *(undefined4 *)(unaff_x19 + 0x8c),0);
          if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
             (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
          goto LAB_020cfc98;
          plVar1 = (long *)(unaff_x19 + 0x1c8);
          lVar7 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                              );
          *plVar1 = lVar7;
          thunk_FUN_01f51358(plVar1,lVar7);
          lVar7 = *plVar1;
          if (lVar7 != 0) {
            uVar16 = *(uint *)(lVar7 + 0x18);
            if (0 < (long)((ulong)uVar16 << 0x20)) {
              uVar9 = 0;
              puVar10 = (undefined4 *)(lVar7 + 0xa0);
              do {
                if (uVar16 <= uVar9) {
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                uVar9 = uVar9 + 1;
                *puVar10 = 0xff7fffff;
                puVar10 = puVar10 + 0x2c;
              } while ((long)uVar9 < (long)(int)uVar16);
            }
            *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
            if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
               (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                                   );
              *(undefined8 *)(unaff_x19 + 0x1d0) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x278) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x278) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x280) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x280) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x288) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x288) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x290) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x290) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar11);
            }
            if ((*(long *)(unaff_x19 + 0x298) == 0) ||
               (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__
                                    ,0x3ff);
              *(undefined8 *)(unaff_x19 + 0x298) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar11);
            }
            FUN_020d1458();
            return;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_020cfe90;
    uVar11 = *(undefined8 *)(lVar7 + lVar14 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar11,0,0);
    if ((uVar9 & 1) == 0) {
      lVar7 = *plVar1;
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_020cfe90;
      lVar7 = *(long *)(lVar7 + lVar14 * 8);
      if (lVar7 == 0) break;
      uVar11 = FUN_0404de9c(lVar7,0);
      uVar3 = FUN_0404de9c();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar9 = FUN_04073094(uVar11,uVar3,0);
      if ((uVar9 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar13 = (long *)*plVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_023aa7e0();
      if (plVar13 == (long *)0x0) break;
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar4 == 0)) {
        uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar11,0);
      }
      if (*(uint *)(plVar13 + 3) <= uVar16) goto LAB_020cfe90;
      plVar13[lVar14] = lVar7;
      thunk_FUN_01f51358((long)plVar13 + lVar15,lVar7);
      lVar7 = *plVar1;
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_020cfe90;
      lVar7 = *(long *)(lVar7 + lVar14 * 8);
      if (lVar7 == 0) break;
      FUN_04077338(lVar7,0x34,0);
    }
    if (*plVar1 == 0) break;
    if (*(uint *)(*plVar1 + 0x18) <= uVar16) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar7 = *(long *)(unaff_x19 + 0x210);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_020cfe90;
    lVar7 = *(long *)(lVar7 + lVar14 * 8);
    if (lVar7 == 0) break;
    FUN_0404e958(lVar7,(int)lVar14 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar7 = *(long *)(unaff_x19 + 0x210);
    lVar14 = lVar14 + 1;
    lVar15 = lVar15 + 8;
  } while (lVar7 != 0);
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



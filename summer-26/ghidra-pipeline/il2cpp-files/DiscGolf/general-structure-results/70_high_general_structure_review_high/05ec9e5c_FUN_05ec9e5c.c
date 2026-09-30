/*
FUNCTION_NAME: FUN_05ec9e5c
ENTRY_POINT: 05ec9e5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05ecb398) */
/* WARNING: Removing unreachable block (ram,0x05ecb4d0) */

void FUN_05ec9e5c(long param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  long local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long **pplStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long *local_68;
  
  puVar1 = Method_System_Nullable<TimeZoneInfo_TransitionTime>_get_HasValue__;
  if ((DAT_06dc3e97 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
    FUN_02d965b8(Method_System_Nullable<XRBaseInteractable_MovementType>_GetValueOrDefault__);
    FUN_02d965b8(Method_System_Nullable<XRBaseInteractable_MovementType>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<XRBaseInteractable_MovementType>_get_Value__);
    FUN_02d965b8(PTR_DAT_06a00438);
    FUN_02d965b8(Method_System_Collections_Generic_List<TextureBlitter_BlitInfo>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<TextureBlitter_BlitInfo>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a0e4b8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<Vector4>_get_IsCreated__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_06a0e238);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Count__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<XRRaycastHit>_Copy__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_get_Count__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_Add__)
    ;
    FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_Insert__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__);
    FUN_02d965b8(Method_OVREnumerable<KeyValuePair<OVRAnchor,_Transform>>_GetEnumerator__);
    FUN_02d965b8(Method_System_Nullable<TimeZoneInfo_TransitionTime>_get_HasValue__);
    FUN_02d965b8(Method_OVREnumerable<Guid>_GetEnumerator__);
    FUN_02d965b8(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    FUN_02d965b8(Method_OVREnumerable<OVRAnchor>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
    FUN_02d965b8(Method_OVREnumerable<OVRSpaceUser>_GetEnumerator__);
    FUN_02d965b8(Method_OVREnumerable<OVRSpaceUser>_get_Count__);
    FUN_02d965b8(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    FUN_02d965b8(Method_OVREnumerable<OVRSpatialAnchor>_get_Count__);
    FUN_02d965b8(Method_OVREnumerable<Type>_GetEnumerator__);
    FUN_02d965b8(Method_OVREnumerable<OVRAnchor_TrackableType>_GetEnumerator__);
    FUN_02d965b8(Method_OVRNativeList<Guid>_Add__);
    FUN_02d965b8(Method_OVRNativeList<Guid>_Dispose__);
    FUN_02d965b8(Method_OVRNativeList<Guid>_get_Count__);
    FUN_02d965b8(Method_OVRNativeList<Guid>_get_Data__);
    FUN_02d965b8(PTR_DAT_069fc208);
    FUN_02d965b8(Method_OVRNativeList<Guid>_op_Implicit__);
    DAT_06dc3e97 = 1;
  }
  local_68 = (long *)0x0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0552aca4(lVar7,0);
  uVar9 = local_f0;
  uVar11 = uStack_e8;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  if (lVar7 == 0) goto LAB_05ecaa1c;
  *(long *)(lVar7 + 0x10) = param_1;
  LeanTween__value((long *)(lVar7 + 0x10),param_1);
  plVar18 = (long *)(lVar7 + 0x18);
  *plVar18 = param_2;
  LeanTween__value(plVar18,param_2);
  lVar14 = *plVar18;
  uVar9 = local_f0;
  uVar11 = uStack_e8;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  if (lVar14 == 0) goto LAB_05ecaa1c;
  lVar15 = *(long *)(param_1 + 0x50);
  if (*(long *)(lVar14 + 0x88) == param_3) {
    if (lVar15 != 0) {
      if (0 < *(int *)(lVar15 + 0x9c)) {
        return;
      }
      plVar8 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
      puVar1 = Method_OVREnumerable<OVRSpatialAnchor>_get_Count__;
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if (plVar8 != (long *)0x0) {
        if ((*(long *)Method_OVREnumerable<OVRSpatialAnchor>_get_Count__ != 0) &&
           (lVar7 = thunk_FUN_02dd3048(*(long *)Method_OVREnumerable<OVRSpatialAnchor>_get_Count__,
                                       *(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_05ecad88:
          uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar9,0);
        }
        if ((int)plVar8[3] != 0) {
          plVar8[4] = *(long *)puVar1;
          LeanTween__value();
          puVar1 = Method_OVRNativeList<Guid>_get_Count__;
          if ((*(long *)Method_OVRNativeList<Guid>_get_Count__ != 0) &&
             (lVar7 = thunk_FUN_02dd3048(*(long *)Method_OVRNativeList<Guid>_get_Count__,
                                         *(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
          goto LAB_05ecad88;
          if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
            plVar8[5] = *(long *)puVar1;
            LeanTween__value();
            puVar1 = PTR_DAT_069fb9c0;
            local_118 = param_3;
            lVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_118);
            if ((lVar7 != 0) &&
               (lVar14 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
            goto LAB_05ecad88;
            if (2 < *(uint *)(plVar8 + 3)) {
              plVar8[6] = lVar7;
              LeanTween__value(plVar8 + 6,lVar7);
              uVar9 = local_f0;
              uVar11 = uStack_e8;
              uVar4 = local_e0;
              uVar5 = uStack_d8;
              if (*plVar18 == 0) goto LAB_05ecaa1c;
              local_108 = *(long *)(*plVar18 + 0x88);
              lVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x70),&local_108);
              if ((lVar7 != 0) &&
                 (lVar14 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
              goto LAB_05ecad88;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                plVar8[7] = lVar7;
                LeanTween__value(plVar8 + 7,lVar7);
                uVar9 = FUN_0536e164(*(undefined8 *)Method_OVRNativeList<Guid>_get_Data__,plVar8,0);
                if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                }
                FUN_06309d28(uVar9,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
    }
    goto LAB_05ecaa1c;
  }
  if (lVar15 == 0) goto LAB_05ecaa1c;
  if ((*(int *)(lVar15 + 0x9c) == 0) && (*(char *)(lVar15 + 0x30) == '\0')) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_05ecaa1c;
    uVar10 = FUN_04ff538c(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar14 + 0x80),
                          *(undefined8 *)
                           Method_System_Nullable<XRBaseInteractable_MovementType>_GetValueOrDefault__
                         );
    if ((uVar10 & 1) != 0) {
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if ((*plVar18 == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_05ecaa1c;
      fVar20 = (float)FUN_04ff50f4(*(long *)(param_1 + 0x70),*(undefined8 *)(*plVar18 + 0x80),
                                   *(undefined8 *)
                                    Method_System_Nullable<XRBaseInteractable_MovementType>_get_HasValue__
                                  );
      fVar21 = (float)FUN_06356d50(0);
      puVar1 = Method_System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_Add__;
      if (fVar21 < fVar20) {
        lVar14 = *plVar18;
        uVar9 = local_f0;
        uVar11 = uStack_e8;
        uVar4 = local_e0;
        uVar5 = uStack_d8;
        if (lVar14 != 0) {
          iVar6 = 0;
          while (lVar14 = UnityEngine_Rendering_ProbeVolumeBakingSet__Initialize(lVar14,0),
                uVar9 = local_f0, uVar11 = uStack_e8, uVar4 = local_e0, uVar5 = uStack_d8,
                lVar14 != 0) {
            if (*(int *)(lVar14 + 0x18) <= iVar6) goto LAB_05eca3c0;
            if ((((*plVar18 == 0) ||
                 (lVar14 = UnityEngine_Rendering_ProbeVolumeBakingSet__Initialize(*plVar18,0),
                 uVar9 = local_f0, uVar11 = uStack_e8, uVar4 = local_e0, uVar5 = uStack_d8,
                 lVar14 == 0)) ||
                (lVar14 = FUN_0400ff1c(lVar14,iVar6,*(undefined8 *)puVar1),
                puVar2 = PTR_DAT_069fb9c0, uVar9 = local_f0, uVar11 = uStack_e8, uVar4 = local_e0,
                uVar5 = uStack_d8, lVar14 == 0)) || (*(long *)(lVar14 + 0x70) == 0)) break;
            if (0 < *(int *)(*(long *)(lVar14 + 0x70) + 0x18)) {
              local_118 = CONCAT44(local_118._4_4_,6);
              uVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_118);
              local_108 = CONCAT44(local_108._4_4_,6);
              uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48),&local_108);
              uVar9 = FUN_0536e0dc(*(undefined8 *)Method_OVRNativeList<Guid>_Add__,uVar9,uVar11,0);
              FUN_05e70208(uVar9,0);
              goto LAB_05eca3c0;
            }
            lVar14 = *plVar18;
            iVar6 = iVar6 + 1;
            if (lVar14 == 0) break;
          }
        }
        goto LAB_05ecaa1c;
      }
    }
  }
LAB_05eca3c0:
  uVar9 = local_f0;
  uVar11 = uStack_e8;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecaa1c;
  if (*(char *)(*(long *)(param_1 + 0x50) + 0x30) == '\0') {
    if ((param_4 & 1) == 0) {
      thunk_FUN_02dfd288(
                        Method_System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_Sort__
                        );
      uVar9 = thunk_FUN_02dd3144();
      uVar11 = thunk_FUN_02dfd288(Method_OVRNativeList<long>_Add__);
      FUN_05e713f4(uVar9,uVar11,0);
      goto LAB_05ecadf8;
    }
  }
  else {
    if (*plVar18 == 0) goto LAB_05ecaa1c;
    uVar10 = FUN_05e6ffe8(*plVar18,0);
    if ((uVar10 & 1) != 0) {
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar14 = FUN_05e5e6f4(*(long *)(param_1 + 0x50),0), uVar9 = local_f0, uVar11 = uStack_e8,
         uVar4 = local_e0, uVar5 = uStack_d8, lVar14 == 0)) goto LAB_05ecaa1c;
      lVar15 = *(long *)(param_1 + 0x50);
      if (*(char *)(lVar14 + 0x19) == '\0') {
        if (lVar15 == 0) goto LAB_05ecaa1c;
      }
      else {
        if (lVar15 == 0) goto LAB_05ecaa1c;
        if (*(long *)(lVar15 + 0x58) == param_3) goto LAB_05eca414;
      }
      if (*(int *)(lVar15 + 0x9c) < 1) {
        if (*plVar18 == 0) goto LAB_05ecaa1c;
        uVar9 = thunk_FUN_06354368(*plVar18,0);
        local_118 = CONCAT44(local_118._4_4_,8);
        uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                     Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__
                                    ,&local_118);
        uVar9 = FUN_0536e120(*(undefined8 *)Method_OVREnumerable<OVRSpaceUser>_GetEnumerator__,uVar9
                             ,*(undefined8 *)
                               Method_System_Collections_Generic_LowLevelList<object>_set_Item__,
                             uVar11,0);
        FUN_05e7195c(uVar9,0);
      }
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if (*plVar18 == 0) goto LAB_05ecaa1c;
      lVar7 = *(long *)(*plVar18 + 0x60);
      if (lVar7 == 0) {
        return;
      }
      pcVar16 = *(code **)(lVar7 + 0x18);
      uVar9 = *(undefined8 *)(lVar7 + 0x40);
      uVar11 = 4;
LAB_05eca9ac:
      (*pcVar16)(uVar9,uVar11,*(undefined8 *)(lVar7 + 0x28));
      return;
    }
LAB_05eca414:
    if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if (*plVar18 == 0) goto LAB_05ecaa1c;
      uVar10 = FUN_05e6fff4(*plVar18,0);
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) < 1) {
            if (*plVar18 == 0) goto LAB_05ecaa1c;
            uVar9 = thunk_FUN_06354368(*plVar18,0);
            uVar9 = FUN_0536d554(*(undefined8 *)PTR_DAT_069fc208,uVar9,
                                 *(undefined8 *)Method_OVREnumerable<OVRAnchor>_get_Count__,0);
            FUN_05e7195c(uVar9,0);
          }
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (*plVar18 != 0) {
            lVar7 = *(long *)(*plVar18 + 0x60);
            if (lVar7 == 0) {
              return;
            }
            pcVar16 = *(code **)(lVar7 + 0x18);
            uVar9 = *(undefined8 *)(lVar7 + 0x40);
            uVar11 = 0;
            goto LAB_05eca9ac;
          }
        }
        goto LAB_05ecaa1c;
      }
      if (*plVar18 == 0) goto LAB_05ecaa1c;
      uVar10 = FUN_05e70018(*plVar18,0);
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) < 1) {
            if (*plVar18 == 0) goto LAB_05ecaa1c;
            uVar9 = thunk_FUN_06354368(*plVar18,0);
            uVar9 = FUN_0536d554(*(undefined8 *)PTR_DAT_069fc208,uVar9,
                                 *(undefined8 *)Method_OVREnumerable<OVRSpaceUser>_get_Count__,0);
            FUN_05e7195c(uVar9,0);
          }
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (*plVar18 != 0) {
            lVar7 = *(long *)(*plVar18 + 0x60);
            if (lVar7 == 0) {
              return;
            }
            pcVar16 = *(code **)(lVar7 + 0x18);
            uVar9 = *(undefined8 *)(lVar7 + 0x40);
            uVar11 = 2;
            goto LAB_05eca9ac;
          }
        }
        goto LAB_05ecaa1c;
      }
      if (*plVar18 == 0) goto LAB_05ecaa1c;
      uVar10 = FUN_05e7000c(*plVar18,0);
      uVar9 = local_f0;
      uVar11 = uStack_e8;
      uVar4 = local_e0;
      uVar5 = uStack_d8;
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) < 1) {
            if (*plVar18 == 0) goto LAB_05ecaa1c;
            uVar9 = thunk_FUN_06354368(*plVar18,0);
            local_118 = CONCAT44(local_118._4_4_,4);
            uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                         Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__
                                        ,&local_118);
            uVar9 = FUN_0536e120(*(undefined8 *)
                                  Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__,uVar9,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__,
                                 uVar11,0);
            FUN_05e7195c(uVar9,0);
          }
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (*plVar18 != 0) {
            lVar7 = *(long *)(*plVar18 + 0x60);
            if (lVar7 == 0) {
              return;
            }
            pcVar16 = *(code **)(lVar7 + 0x18);
            uVar9 = *(undefined8 *)(lVar7 + 0x40);
            uVar11 = 1;
            goto LAB_05eca9ac;
          }
        }
        goto LAB_05ecaa1c;
      }
      if (*plVar18 == 0) goto LAB_05ecaa1c;
      uVar10 = FUN_05e70000(*plVar18,0);
      if ((uVar10 & 1) == 0) {
        uVar9 = local_f0;
        uVar11 = uStack_e8;
        uVar4 = local_e0;
        uVar5 = uStack_d8;
        if (*(long *)(param_1 + 0x50) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) < 1) {
            if (*plVar18 == 0) goto LAB_05ecaa1c;
            uVar9 = thunk_FUN_06354368(*plVar18,0);
            local_118 = CONCAT44(local_118._4_4_,2);
            uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                         Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__
                                        ,&local_118);
            uVar9 = FUN_0536e120(*(undefined8 *)Method_OVREnumerable<OVRAnchor>_GetEnumerator__,
                                 uVar9,*(undefined8 *)
                                        Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                 ,uVar11,0);
            FUN_05e7195c(uVar9,0);
          }
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (*plVar18 != 0) {
            lVar7 = *(long *)(*plVar18 + 0x60);
            if (lVar7 == 0) {
              return;
            }
            pcVar16 = *(code **)(lVar7 + 0x18);
            uVar9 = *(undefined8 *)(lVar7 + 0x40);
            uVar11 = 3;
            goto LAB_05eca9ac;
          }
        }
        goto LAB_05ecaa1c;
      }
    }
  }
  puVar1 = PTR_DAT_06a0e4b8;
  lVar14 = *plVar18;
  uVar9 = local_f0;
  uVar11 = uStack_e8;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  if (lVar14 == 0) goto LAB_05ecaa1c;
  if (*(char *)(lVar14 + 0x9b) == '\0') {
    thunk_FUN_02dfd288(
                      Method_UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>__ctor__
                      );
    uVar9 = thunk_FUN_02dd3144();
    uVar11 = thunk_FUN_02dfd288(
                               Method_UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_GetValue__
                               );
    FUN_05e7138c(uVar9,uVar11,0);
LAB_05ecadf8:
    uVar11 = thunk_FUN_02dfd288(Method_OVRNativeList<long>_Dispose__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar11);
  }
  if ((*(long *)(lVar14 + 0x88) == param_3) && (*(long *)(lVar14 + 0x90) == param_3)) {
    if (*(long *)(param_1 + 0x50) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) != 0) {
        return;
      }
      uVar9 = thunk_FUN_06354368(lVar14,0);
      local_118 = param_3;
      uVar11 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_118);
      uVar9 = FUN_0536e0dc(*(undefined8 *)Method_OVRNativeList<Guid>_op_Implicit__,uVar9,uVar11,0);
LAB_05eca910:
      FUN_05e70208(uVar9,0);
      return;
    }
  }
  else if (*(long *)(lVar14 + 0xd0) != 0) {
    uVar10 = FUN_03c5ecb0(*(long *)(lVar14 + 0xd0),param_3,*(undefined8 *)PTR_DAT_06a0e4b8);
    uVar9 = local_f0;
    uVar11 = uStack_e8;
    uVar4 = local_e0;
    uVar5 = uStack_d8;
    if ((uVar10 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) != 0) {
          return;
        }
        local_118 = param_3;
        uVar19 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_118);
        uVar9 = local_f0;
        uVar11 = uStack_e8;
        uVar4 = local_e0;
        uVar5 = uStack_d8;
        if (*plVar18 != 0) {
          uVar9 = thunk_FUN_06354368(*plVar18,0);
          uVar9 = FUN_0536e120(*(undefined8 *)Method_OVREnumerable<Type>_GetEnumerator__,uVar19,
                               uVar9,*(undefined8 *)Method_OVREnumerable<Guid>_GetEnumerator__,0);
          goto LAB_05eca910;
        }
      }
    }
    else {
      lVar14 = *plVar18;
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar14 + 0x88);
        uVar19 = *(undefined8 *)(lVar14 + 0x90);
        *(long *)(lVar14 + 0x88) = param_3;
        *(long *)(lVar14 + 0x90) = lVar15;
        FUN_05e73b6c(lVar14,0);
        lVar14 = *plVar18;
        uVar9 = local_f0;
        uVar11 = uStack_e8;
        uVar4 = local_e0;
        uVar5 = uStack_d8;
        if (lVar14 != 0) {
          FUN_05ec92c0(param_1,lVar14,*(undefined8 *)(lVar14 + 0x88),0);
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (*plVar18 != 0) {
            FUN_05e73c68(*plVar18,0);
            uVar9 = local_f0;
            uVar11 = uStack_e8;
            uVar4 = local_e0;
            uVar5 = uStack_d8;
            if (*(long *)(param_1 + 0x50) != 0) {
              lVar14 = FUN_05e5e724(*(long *)(param_1 + 0x50),0);
              if (lVar15 == lVar14) {
                uVar9 = local_f0;
                uVar11 = uStack_e8;
                uVar4 = local_e0;
                uVar5 = uStack_d8;
                if (*plVar18 == 0) goto LAB_05ecaa1c;
                FUN_05e763a4(*plVar18,lVar15,uVar19,0);
              }
              uVar9 = local_f0;
              uVar11 = uStack_e8;
              uVar4 = local_e0;
              uVar5 = uStack_d8;
              if (*(long *)(param_1 + 0x50) != 0) {
                if (*(char *)(*(long *)(param_1 + 0x50) + 0x30) == '\0') {
                  uStack_b8 = 0;
                  local_c0 = 0;
                  uStack_a8 = 0;
                  local_b0 = 0;
                  lVar7 = *plVar18;
                  uStack_c8 = 0;
                  local_d0 = 0;
                  if (lVar7 != 0) {
                    uStack_f8 = *(undefined8 *)(lVar7 + 0x88);
                    local_100 = *(undefined8 *)(lVar7 + 0x80);
                    uStack_d8 = 0;
                    local_e0 = 0;
                    uStack_e8 = 0;
                    local_f0 = 0;
                    uVar9 = 0;
                    uVar11 = 0;
                    uVar4 = 0;
                    uVar5 = 0;
                    local_d0 = local_100;
                    uStack_c8 = uStack_f8;
                    if ((*(long *)(param_1 + 0x50) != 0) &&
                       (plVar8 = (long *)FUN_05e62808(*(long *)(param_1 + 0x50),0), uVar9 = local_f0
                       , uVar11 = uStack_e8, uVar4 = local_e0, uVar5 = uStack_d8,
                       plVar8 != (long *)0x0)) {
                      lVar7 = *plVar8;
                      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar10 != 0) {
                        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) ==
                              *(long *)Method_Unity_Collections_NativeArray<Vector4>_get_IsCreated__
                             ) {
                            puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                            goto LAB_05ecaf20;
                          }
                          uVar10 = uVar10 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar12 = (undefined8 *)
                                FUN_02dd004c(plVar8,*(long *)
                                                  Method_Unity_Collections_NativeArray<Vector4>_get_IsCreated__
                                             ,0);
LAB_05ecaf20:
                      plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
                      puVar3 = Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__;
                      puVar2 = PTR_DAT_069fbff8;
                      pplStack_110 = &local_68;
                      local_118 = 0;
                      do {
                        local_68 = plVar8;
                        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        lVar7 = *plVar8;
                        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar10 != 0) {
                          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                              puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                              goto LAB_05ecafa0;
                            }
                            uVar10 = uVar10 - 1;
                            piVar17 = piVar17 + 4;
                          } while (uVar10 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar2,0);
LAB_05ecafa0:
                        uVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                        plVar8 = local_68;
                        if ((uVar10 & 1) == 0) {
                          if (local_68 == (long *)0x0) goto LAB_05ecb39c;
                          lVar7 = *local_68;
                          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar10 == 0) goto LAB_05ecb364;
                          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          goto LAB_05ecb34c;
                        }
                        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        lVar7 = *local_68;
                        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar10 != 0) {
                          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                              puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                              goto LAB_05ecb004;
                            }
                            uVar10 = uVar10 - 1;
                            piVar17 = piVar17 + 4;
                          } while (uVar10 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar3,0);
LAB_05ecb004:
                        auVar23 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                        lVar14 = auVar23._8_8_;
                        lVar7 = auVar23._0_8_;
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        plVar8 = local_68;
                        if ((*(long *)(lVar14 + 0x20) != 0) &&
                           (uVar10 = FUN_05eb9b7c(param_1,lVar7,plVar18,0), plVar8 = local_68,
                           (uVar10 & 1) == 0)) {
                          lVar15 = *plVar18;
                          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          uVar9 = *(undefined8 *)(lVar14 + 0x20);
                          if (DAT_06dc3b9b == '\0') {
                            FUN_02d965b8(puVar1);
                            DAT_06dc3b9b = '\x01';
                          }
                          plVar8 = local_68;
                          if (*(char *)(lVar15 + 0x9b) != '\0') {
                            if (*(long *)(lVar15 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            uVar10 = FUN_03c5ecb0(*(long *)(lVar15 + 0xd0),uVar9,
                                                  *(undefined8 *)puVar1);
                            plVar8 = local_68;
                            if ((uVar10 & 1) != 0) {
                              if (lVar7 == *(long *)(lVar14 + 0x20)) {
                                if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                lVar14 = *(long *)(*(long *)(param_1 + 0x50) + 0x128);
                                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                iVar6 = FUN_036f2ed4(lVar14,&local_100,3,lVar7,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_LowLevelList<object>_Insert__
                                                  );
                                if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                plVar8 = (long *)FUN_05e63228(*(long *)(param_1 + 0x50),0);
                                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                lVar14 = *plVar8;
                                lVar15 = *plVar18;
                                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                if (uVar10 != 0) {
                                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06a0e238) {
                                      puVar12 = (undefined8 *)
                                                (lVar14 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
                                      goto LAB_05ecb2f4;
                                    }
                                    uVar10 = uVar10 - 1;
                                    piVar17 = piVar17 + 4;
                                  } while (uVar10 != 0);
                                }
                                puVar12 = (undefined8 *)
                                          FUN_02dd004c(plVar8,*(long *)PTR_DAT_06a0e238,0xd);
LAB_05ecb2f4:
                                (*(code *)*puVar12)(plVar8,lVar7,lVar15,(long)iVar6,puVar12[1]);
                                plVar8 = local_68;
                              }
                              else {
                                plVar8 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,5);
                                local_108 = lVar7;
                                lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70)
                                                            ,&local_108);
                                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                if ((lVar15 != 0) &&
                                   (lVar13 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)
                                                                        (*plVar8 + 0x40)),
                                   lVar13 == 0)) {
                                  uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96724(uVar9,0);
                                }
                                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96868();
                                }
                                plVar8[4] = lVar15;
                                LeanTween__value(plVar8 + 4,lVar15);
                                local_120 = lVar7;
                                lVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70)
                                                            ,&local_120);
                                if ((lVar15 != 0) &&
                                   (lVar13 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)
                                                                        (*plVar8 + 0x40)),
                                   lVar13 == 0)) {
                                  uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96724(uVar9,0);
                                }
                                if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96868();
                                }
                                plVar8[5] = lVar15;
                                LeanTween__value(plVar8 + 5,lVar15);
                                if ((*(long *)Method_OVRNativeList<Guid>_Dispose__ != 0) &&
                                   (lVar15 = thunk_FUN_02dd3048(*(long *)
                                                  Method_OVRNativeList<Guid>_Dispose__,
                                                  *(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
                                  uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96724(uVar9,0);
                                }
                                if (*(uint *)(plVar8 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96868();
                                }
                                plVar8[6] = *(long *)Method_OVRNativeList<Guid>_Dispose__;
                                LeanTween__value();
                                local_128 = *(undefined8 *)(lVar14 + 0x20);
                                lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70)
                                                            ,&local_128);
                                if ((lVar14 != 0) &&
                                   (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                        (*plVar8 + 0x40)),
                                   lVar15 == 0)) {
                                  uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96724(uVar9,0);
                                }
                                if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96868();
                                }
                                plVar8[7] = lVar14;
                                LeanTween__value(plVar8 + 7,lVar14);
                                local_130 = lVar7;
                                lVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                                           &local_130);
                                if ((lVar7 != 0) &&
                                   (lVar14 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar14 == 0)) {
                                  uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96724(uVar9,0);
                                }
                                if (*(uint *)(plVar8 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96868();
                                }
                                plVar8[8] = lVar7;
                                LeanTween__value(plVar8 + 8,lVar7);
                                uVar9 = FUN_0536e164(*(undefined8 *)
                                                                                                            
                                                  Method_OVREnumerable<OVRAnchor_TrackableType>_GetEnumerator__
                                                  ,plVar8,0);
                                FUN_05e6f7ec(uVar9,0);
                                plVar8 = local_68;
                              }
                            }
                          }
                        }
                      } while( true );
                    }
                  }
                }
                else {
                  uStack_b8 = 0;
                  local_c0 = 0;
                  uStack_a8 = 0;
                  local_b0 = 0;
                  lVar14 = *plVar18;
                  uStack_c8 = 0;
                  local_d0 = 0;
                  if (lVar14 != 0) {
                    uStack_c8 = *(undefined8 *)(lVar14 + 0x88);
                    local_d0 = *(undefined8 *)(lVar14 + 0x80);
                    uStack_a8 = 1;
                    FUN_05e829cc(&local_d0,param_5 & 1,0);
                    FUN_05e82978(&local_d0,1,0);
                    lVar14 = *plVar18;
                    uVar9 = local_f0;
                    uVar11 = uStack_e8;
                    uVar4 = local_e0;
                    uVar5 = uStack_d8;
                    if (lVar14 != 0) {
                      local_c0 = *(undefined8 *)(lVar14 + 0x90);
                      uStack_a8._0_4_ =
                           CONCAT22((short)*(undefined4 *)(lVar14 + 0x58),(undefined2)uStack_a8);
                      uStack_98 = uStack_c8;
                      local_a0 = local_d0;
                      uStack_88 = uStack_b8;
                      uStack_78 = uStack_a8;
                      local_80 = local_b0;
                      local_90 = local_c0;
                      if (*(long *)(param_1 + 0x50) != 0) {
                        uVar10 = FUN_05e5db2c(*(long *)(param_1 + 0x50),0);
                        if ((uVar10 & 1) == 0) {
                          uVar9 = local_f0;
                          uVar11 = uStack_e8;
                          uVar4 = local_e0;
                          uVar5 = uStack_d8;
                          if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecaa1c;
                          uVar10 = FUN_05e62820(*(long *)(param_1 + 0x50),0);
                          if ((uVar10 & 1) != 0) {
                            uVar9 = local_f0;
                            uVar11 = uStack_e8;
                            uVar4 = local_e0;
                            uVar5 = uStack_d8;
                            if ((*(long *)(param_1 + 0x50) != 0) &&
                               (lVar7 = FUN_05e62808(*(long *)(param_1 + 0x50),0), uVar9 = local_f0,
                               uVar11 = uStack_e8, uVar4 = local_e0, uVar5 = uStack_d8, lVar7 != 0))
                            {
                              plVar8 = (long *)FUN_0297bd6c(0,*(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Collections_NativeArray<Vector4>_get_IsCreated__
                                                  ,lVar7);
                              puVar3 = Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__;
                              puVar2 = PTR_DAT_069fbff8;
                              pplStack_110 = &local_68;
                              local_118 = 0;
                              do {
                                local_68 = plVar8;
                                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                lVar7 = *plVar8;
                                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar10 != 0) {
                                  piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                                      puVar12 = (undefined8 *)
                                                (lVar7 + (long)*piVar17 * 0x10 + 0x138);
                                      goto LAB_05eca6fc;
                                    }
                                    uVar10 = uVar10 - 1;
                                    piVar17 = piVar17 + 4;
                                  } while (uVar10 != 0);
                                }
                                puVar12 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar2,0);
LAB_05eca6fc:
                                uVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                                plVar8 = local_68;
                                if ((uVar10 & 1) == 0) {
                                  FUN_029794b4(&local_118);
                                  goto LAB_05ecb39c;
                                }
                                if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                lVar7 = *local_68;
                                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar10 != 0) {
                                  piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                                      puVar12 = (undefined8 *)
                                                (lVar7 + (long)*piVar17 * 0x10 + 0x138);
                                      goto LAB_05eca760;
                                    }
                                    uVar10 = uVar10 - 1;
                                    piVar17 = piVar17 + 4;
                                  } while (uVar10 != 0);
                                }
                                puVar12 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar3,0);
LAB_05eca760:
                                auVar23 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                                lVar7 = auVar23._8_8_;
                                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d96860();
                                }
                                plVar8 = local_68;
                                if ((*(long *)(lVar7 + 0x20) != 0) &&
                                   (uVar10 = FUN_05eb9b7c(param_1,auVar23._0_8_,plVar18,0),
                                   plVar8 = local_68, (uVar10 & 1) == 0)) {
                                  lVar14 = *plVar18;
                                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02d96860();
                                  }
                                  uVar9 = *(undefined8 *)(lVar7 + 0x20);
                                  if (DAT_06dc3b9b == '\0') {
                                    FUN_02d965b8(puVar1);
                                    DAT_06dc3b9b = '\x01';
                                  }
                                  plVar8 = local_68;
                                  if (*(char *)(lVar14 + 0x9b) != '\0') {
                                    if (*(long *)(lVar14 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02d96860();
                                    }
                                    uVar10 = FUN_03c5ecb0(*(long *)(lVar14 + 0xd0),uVar9,
                                                          *(undefined8 *)puVar1);
                                    plVar8 = local_68;
                                    if ((uVar10 & 1) != 0) {
                                      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02d96860();
                                      }
                                      lVar14 = *(long *)(*(long *)(param_1 + 0x50) + 0x128);
                                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02d96860();
                                      }
                                      iVar6 = FUN_036f2ed4(lVar14,&local_a0,3,
                                                           *(undefined8 *)(lVar7 + 0x20),
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_LowLevelList<object>_Insert__
                                                  );
                                      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02d96860();
                                      }
                                      plVar8 = (long *)FUN_05e63228(*(long *)(param_1 + 0x50),0);
                                      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02d96860();
                                      }
                                      lVar7 = *plVar8;
                                      lVar14 = *plVar18;
                                      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                      if (uVar10 != 0) {
                                        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06a0e238)
                                          {
                                            puVar12 = (undefined8 *)
                                                      (lVar7 + (long)(*piVar17 + 0xd) * 0x10 + 0x138
                                                      );
                                            goto LAB_05eca880;
                                          }
                                          uVar10 = uVar10 - 1;
                                          piVar17 = piVar17 + 4;
                                        } while (uVar10 != 0);
                                      }
                                      puVar12 = (undefined8 *)
                                                FUN_02dd004c(plVar8,*(long *)PTR_DAT_06a0e238,0xd);
LAB_05eca880:
                                      (*(code *)*puVar12)(plVar8,auVar23._0_8_,lVar14,(long)iVar6,
                                                          puVar12[1]);
                                      plVar8 = local_68;
                                    }
                                  }
                                }
                              } while( true );
                            }
                            goto LAB_05ecaa1c;
                          }
                        }
                        puVar1 = 
                        Method_System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_Add__
                        ;
                        lVar14 = *plVar18;
                        uVar9 = local_f0;
                        uVar11 = uStack_e8;
                        uVar4 = local_e0;
                        uVar5 = uStack_d8;
                        if (lVar14 != 0) {
                          iVar6 = 0;
                          while (lVar14 = UnityEngine_Rendering_ProbeVolumeBakingSet__Initialize
                                                    (lVar14,0), uVar9 = local_f0, uVar11 = uStack_e8
                                , uVar4 = local_e0, uVar5 = uStack_d8, lVar14 != 0) {
                            if (*(int *)(lVar14 + 0x18) <= iVar6) {
                              if (*(long *)(param_1 + 0x50) != 0) {
                                uVar9 = FUN_05e5e70c(*(long *)(param_1 + 0x50),0);
                                uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List<TextureBlitter_BlitInfo>_get_Count__
                                                  );
                                FUN_03b7b758(uVar11,lVar7,
                                             *(undefined8 *)
                                              Method_OVREnumerable<KeyValuePair<OVRAnchor,_Transform>>_GetEnumerator__
                                             ,0);
                                uVar9 = FUN_036173b8(uVar9,uVar11,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List<TextureBlitter_BlitInfo>_Clear__
                                                  );
                                local_80 = FUN_0361482c(uVar9,*(undefined8 *)PTR_DAT_06a00438);
                                LeanTween__value(&local_80,local_80);
                                uVar9 = local_f0;
                                uVar11 = uStack_e8;
                                uVar4 = local_e0;
                                uVar5 = uStack_d8;
                                if (local_80 != 0) {
                                  uStack_88 = CONCAT44(uStack_88._4_4_,
                                                       (int)*(undefined8 *)(local_80 + 0x18));
                                  if ((*(long *)(param_1 + 0x50) != 0) &&
                                     (lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x128),
                                     lVar7 != 0)) {
                                    iVar6 = FUN_036f2ed4(lVar7,&local_a0,3,0,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_LowLevelList<object>_Insert__
                                                  );
                                    uVar9 = local_f0;
                                    uVar11 = uStack_e8;
                                    uVar4 = local_e0;
                                    uVar5 = uStack_d8;
                                    if (*(long *)(param_1 + 0x50) != 0) {
                                      plVar8 = (long *)FUN_05e63228(*(long *)(param_1 + 0x50),0);
                                      uVar9 = local_f0;
                                      uVar11 = uStack_e8;
                                      uVar4 = local_e0;
                                      uVar5 = uStack_d8;
                                      if ((*(long *)(param_1 + 0x50) != 0) &&
                                         (uVar19 = FUN_05e5e724(*(long *)(param_1 + 0x50),0),
                                         uVar9 = local_f0, uVar11 = uStack_e8, uVar4 = local_e0,
                                         uVar5 = uStack_d8, plVar8 != (long *)0x0)) {
                                        lVar7 = *plVar8;
                                        lVar14 = *plVar18;
                                        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                        if (uVar10 == 0) goto LAB_05ecab54;
                                        piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                        goto LAB_05ecab3c;
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            if (((*plVar18 == 0) ||
                                (lVar14 = UnityEngine_Rendering_ProbeVolumeBakingSet__Initialize
                                                    (*plVar18,0), uVar9 = local_f0,
                                uVar11 = uStack_e8, uVar4 = local_e0, uVar5 = uStack_d8, lVar14 == 0
                                )) || (lVar14 = FUN_0400ff1c(lVar14,iVar6,*(undefined8 *)puVar1),
                                      uVar9 = local_f0, uVar11 = uStack_e8, uVar4 = local_e0,
                                      uVar5 = uStack_d8, lVar14 == 0)) break;
                            FUN_05e66874(lVar14,0);
                            lVar14 = *plVar18;
                            iVar6 = iVar6 + 1;
                            uVar9 = local_f0;
                            uVar11 = uStack_e8;
                            uVar4 = local_e0;
                            uVar5 = uStack_d8;
                            if (lVar14 == 0) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_05ecaa1c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_05ecb34c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05ecb380;
    }
  }
LAB_05ecb364:
  puVar12 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_05ecb380:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  goto LAB_05ecb39c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_05ecab3c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06a0e238) {
      puVar12 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
      goto LAB_05ecacb4;
    }
  }
LAB_05ecab54:
  puVar12 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_06a0e238,0xd);
LAB_05ecacb4:
  (*(code *)*puVar12)(plVar8,uVar19,lVar14,(long)iVar6,puVar12[1]);
LAB_05ecb39c:
  lVar7 = *plVar18;
  uVar9 = local_f0;
  uVar11 = uStack_e8;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  if (lVar7 != 0) {
    FUN_05e73eb0(lVar7,*(undefined8 *)(lVar7 + 0x90),param_3,0);
    uVar9 = local_f0;
    uVar11 = uStack_e8;
    uVar4 = local_e0;
    uVar5 = uStack_d8;
    if (*(long *)(param_1 + 0x50) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x50) + 0x30) != '\0') {
        return;
      }
      if ((*plVar18 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
        uVar10 = FUN_04ff538c(*(long *)(param_1 + 0x70),*(undefined8 *)(*plVar18 + 0x80),
                              *(undefined8 *)
                               Method_System_Nullable<XRBaseInteractable_MovementType>_GetValueOrDefault__
                             );
        if ((uVar10 & 1) == 0) {
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if ((*plVar18 == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_05ecaa1c;
          System_Collections_Generic_ArraySortHelper<ERCell>__InternalBinarySearch
                    (0,*(long *)(param_1 + 0x70),*(undefined8 *)(*plVar18 + 0x80),
                     *(undefined8 *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__)
          ;
        }
        uVar9 = local_f0;
        uVar11 = uStack_e8;
        uVar4 = local_e0;
        uVar5 = uStack_d8;
        if (((*(long *)(param_1 + 0x50) != 0) &&
            (lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x90), lVar7 != 0)) && (*plVar18 != 0)) {
          uVar22 = *(undefined4 *)(lVar7 + 0x30);
          lVar7 = *(long *)(param_1 + 0x70);
          uVar19 = *(undefined8 *)(*plVar18 + 0x80);
          fVar20 = (float)FUN_06356d50(0);
          uVar9 = local_f0;
          uVar11 = uStack_e8;
          uVar4 = local_e0;
          uVar5 = uStack_d8;
          if (lVar7 != 0) {
            fVar21 = (float)NEON_ucvtf(uVar22);
            FUN_04ff5180((1.0 / fVar21) * 6.0 + fVar20,lVar7,uVar19,
                         *(undefined8 *)
                          Method_System_Nullable<XRBaseInteractable_MovementType>_get_Value__);
            return;
          }
        }
      }
    }
  }
LAB_05ecaa1c:
  uStack_d8 = uVar5;
  local_e0 = uVar4;
  uStack_e8 = uVar11;
  local_f0 = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



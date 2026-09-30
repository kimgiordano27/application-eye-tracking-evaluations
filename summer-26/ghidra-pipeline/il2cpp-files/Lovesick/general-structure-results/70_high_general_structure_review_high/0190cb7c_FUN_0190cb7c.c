/*
FUNCTION_NAME: FUN_0190cb7c
ENTRY_POINT: 0190cb7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0190cb7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03779fbe & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Specialized_OrderedDictionary_Clear__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetStateMachine__
                      );
    thunk_FUN_00d48444(StringLiteral_10055);
    thunk_FUN_00d48444(Method_System_DefaultBinder_SelectMethod__);
    thunk_FUN_00d48444(StringLiteral_2166);
    thunk_FUN_00d48444(Method_ColliderHighlighter_Solver_OnCollision__);
    thunk_FUN_00d48444(Method_System_Numerics_Vector_AsVectorUInt64<ushort>__);
    thunk_FUN_00d48444(StringLiteral_12464);
    thunk_FUN_00d48444(PTR_DAT_033f3230);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(OVRRoomLayout_var);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_GetMethodBasedBinaryOperator__);
    thunk_FUN_00d48444(StringLiteral_4160);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JValue_WriteToAsync__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<MemberInfo>_MoveNext__);
    thunk_FUN_00d48444(Oculus_Interaction_Collections_IEnumerableHashSet<PokeInteractor>_TypeInfo);
    thunk_FUN_00d48444(System_Net_TimerThread_InfiniteTimer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12438);
    thunk_FUN_00d48444(StringLiteral_12307);
    thunk_FUN_00d48444(StringLiteral_9182);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_Add__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BitmapAllocator32_Page>_get_Capacity__
                      );
    thunk_FUN_00d48444(GrapplingHook_<AttachHook>d__13_TypeInfo);
    DAT_03779fbe = 1;
  }
  puVar6 = StringLiteral_2166;
  puVar5 = Method_Newtonsoft_Json_Linq_JValue_WriteToAsync__;
  puVar4 = GrapplingHook_<AttachHook>d__13_TypeInfo;
  puVar3 = PTR_DAT_033f3230;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = (long *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = (long *)0x0;
  plVar15 = (long *)(param_1 + 0x10);
  lVar8 = *plVar15;
  if (lVar8 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar13) {
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x18),&local_d8,*(undefined8 *)OVRRoomLayout_var);
          puVar3 = StringLiteral_12464;
          uStack_78 = uStack_d0;
          local_80 = local_d8;
          local_70 = local_c8;
          while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf4714(&local_80,*(undefined8 *)puVar3);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar4);
          }
          FUN_012b8948(&local_80,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Add__
                      );
        }
        puVar3 = Method_System_Collections_Generic_List<BitmapAllocator32_Page>_get_Capacity__;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x48),&local_d8,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>_SliceWithStride<Vector3>__
                      );
          puVar6 = Method_System_DefaultBinder_SelectMethod__;
          puVar5 = Method_ColliderHighlighter_Solver_OnCollision__;
          puVar4 = 
          Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_Add__;
          uStack_98 = uStack_d0;
          local_a0 = local_d8;
          local_90 = local_c8;
          while (uVar11 = FUN_012b894c(&local_a0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf481c(&local_a0,*(undefined8 *)puVar5);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar4);
          }
          FUN_012b8948(&local_a0,
                       *(undefined8 *)
                        Method_System_Collections_Specialized_OrderedDictionary_Clear__);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x38),&local_d8,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_Expression_GetMethodBasedBinaryOperator__);
          puVar5 = StringLiteral_10055;
          puVar4 = Method_System_Numerics_Vector_AsVectorUInt64<ushort>__;
          uStack_b8 = uStack_d0;
          local_c0 = local_d8;
          local_b0 = local_c8;
          while (uVar11 = FUN_012b894c(&local_c0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf4924(&local_c0,*(undefined8 *)puVar4);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar3);
          }
          FUN_012b8948(&local_c0,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetStateMachine__
                      );
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *plVar15 = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_01357b44(*(long *)(param_1 + 0x20),
                       *(undefined8 *)System_Net_TimerThread_InfiniteTimer_TypeInfo);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_01357b44(*(long *)(param_1 + 0x28),*(undefined8 *)StringLiteral_9182);
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_01357b44(*(long *)(param_1 + 0x30),*(undefined8 *)StringLiteral_12438);
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_01357b44(*(long *)(param_1 + 0x40),*(undefined8 *)StringLiteral_12307);
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_01357b44(*(long *)(param_1 + 0x50),
                       *(undefined8 *)
                        Oculus_Interaction_Collections_IEnumerableHashSet<PokeInteractor>_TypeInfo);
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          FUN_0190d20c();
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_0190d2d0();
        }
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_0190d394();
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          FUN_0190d410();
        }
        **(undefined8 **)
          (*(long *)Method_System_Collections_Generic_List_Enumerator<MemberInfo>_MoveNext__ + 0xb8)
             = 0;
        return;
      }
      FUN_0132138c(lVar8,iVar13,&local_d8,*(undefined8 *)puVar5);
      plVar7 = local_d8;
      if (local_d8 == (long *)0x0) break;
      lVar10 = *local_d8;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto Oculus_Interaction_HandGrab_HandGrabUseInteractable__Reset;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(local_d8,lVar8,2);
Oculus_Interaction_HandGrab_HandGrabUseInteractable__Reset:
      (*(code *)*puVar9)(plVar7,uVar1,uVar2,uVar14,0,puVar9[1]);
      if (*plVar15 == 0) break;
      FUN_0132138c(*plVar15,iVar13,&local_d8,*(undefined8 *)puVar5);
      plVar7 = local_d8;
      if (local_d8 == (long *)0x0) break;
      lVar10 = *local_d8;
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0190ce20;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(local_d8,lVar8,1);
LAB_0190ce20:
      (*(code *)*puVar9)(0,plVar7,puVar9[1]);
      lVar8 = *plVar15;
      iVar13 = iVar13 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



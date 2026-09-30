/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandPose$$set_JointRotations
ENTRY_POINT: 0190cc6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Oculus_Interaction_HandGrab_HandPose__set_JointRotations(long param_1)

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
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  undefined8 uVar14;
  long *plVar15;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x920));
  thunk_FUN_00d48444(System_Net_TimerThread_InfiniteTimer_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12438);
  thunk_FUN_00d48444(StringLiteral_12307);
  thunk_FUN_00d48444(StringLiteral_9182);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_Add__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<BitmapAllocator32_Page>_get_Capacity__);
  thunk_FUN_00d48444(GrapplingHook_<AttachHook>d__13_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xfbe) = 1;
  puVar6 = StringLiteral_2166;
  puVar5 = Method_Newtonsoft_Json_Linq_JValue_WriteToAsync__;
  puVar4 = GrapplingHook_<AttachHook>d__13_TypeInfo;
  puVar3 = PTR_DAT_033f3230;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = (long *)0x0;
  plVar15 = (long *)(unaff_x19 + 0x10);
  lVar8 = *plVar15;
  if (lVar8 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar13) {
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_01323390(*(long *)(unaff_x19 + 0x18),&stack0x00000008,*(undefined8 *)OVRRoomLayout_var
                      );
          puVar3 = StringLiteral_12464;
          in_stack_00000068 = in_stack_00000010;
          in_stack_00000060 = in_stack_00000008;
          in_stack_00000070 = in_stack_00000018;
          while (uVar11 = FUN_012b894c(&stack0x00000060,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf4714(&stack0x00000060,*(undefined8 *)puVar3);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar4);
          }
          FUN_012b8948(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Add__
                      );
        }
        puVar3 = Method_System_Collections_Generic_List<BitmapAllocator32_Page>_get_Capacity__;
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          FUN_01323390(*(long *)(unaff_x19 + 0x48),&stack0x00000008,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76>_SliceWithStride<Vector3>__
                      );
          puVar6 = Method_System_DefaultBinder_SelectMethod__;
          puVar5 = Method_ColliderHighlighter_Solver_OnCollision__;
          puVar4 = 
          Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_Add__;
          in_stack_00000048 = in_stack_00000010;
          in_stack_00000040 = in_stack_00000008;
          in_stack_00000050 = in_stack_00000018;
          while (uVar11 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf481c(&stack0x00000040,*(undefined8 *)puVar5);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar4);
          }
          FUN_012b8948(&stack0x00000040,
                       *(undefined8 *)
                        Method_System_Collections_Specialized_OrderedDictionary_Clear__);
        }
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_01323390(*(long *)(unaff_x19 + 0x38),&stack0x00000008,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_Expression_GetMethodBasedBinaryOperator__);
          puVar5 = StringLiteral_10055;
          puVar4 = Method_System_Numerics_Vector_AsVectorUInt64<ushort>__;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          while (uVar11 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            lVar8 = FUN_00bf4924(&stack0x00000020,*(undefined8 *)puVar4);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0135b580(lVar8,*(undefined8 *)puVar3);
          }
          FUN_012b8948(&stack0x00000020,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetStateMachine__
                      );
        }
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        *(undefined8 *)(unaff_x19 + 0x38) = 0;
        *plVar15 = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_01357b44(*(long *)(unaff_x19 + 0x20),
                       *(undefined8 *)System_Net_TimerThread_InfiniteTimer_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_01357b44(*(long *)(unaff_x19 + 0x28),*(undefined8 *)StringLiteral_9182);
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_01357b44(*(long *)(unaff_x19 + 0x30),*(undefined8 *)StringLiteral_12438);
        }
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          FUN_01357b44(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_12307);
        }
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          FUN_01357b44(*(long *)(unaff_x19 + 0x50),
                       *(undefined8 *)
                        Oculus_Interaction_Collections_IEnumerableHashSet<PokeInteractor>_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x58) != 0) {
          FUN_0190d20c();
        }
        if (*(long *)(unaff_x19 + 0x60) != 0) {
          FUN_0190d2d0();
        }
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          FUN_0190d394();
        }
        if (*(long *)(unaff_x19 + 0x70) != 0) {
          FUN_0190d410();
        }
        **(undefined8 **)
          (*(long *)Method_System_Collections_Generic_List_Enumerator<MemberInfo>_MoveNext__ + 0xb8)
             = 0;
        return;
      }
      FUN_0132138c(lVar8,iVar13,&stack0x00000008,*(undefined8 *)puVar5);
      plVar7 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) break;
      lVar10 = *in_stack_00000008;
      uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
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
      puVar9 = (undefined8 *)FUN_00d59724(in_stack_00000008,lVar8,2);
Oculus_Interaction_HandGrab_HandGrabUseInteractable__Reset:
      (*(code *)*puVar9)(plVar7,uVar1,uVar2,uVar14,0,puVar9[1]);
      if (*plVar15 == 0) break;
      FUN_0132138c(*plVar15,iVar13,&stack0x00000008,*(undefined8 *)puVar5);
      plVar7 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) break;
      lVar10 = *in_stack_00000008;
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
      puVar9 = (undefined8 *)FUN_00d59724(in_stack_00000008,lVar8,1);
LAB_0190ce20:
      (*(code *)*puVar9)(0,plVar7,puVar9[1]);
      lVar8 = *plVar15;
      iVar13 = iVar13 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



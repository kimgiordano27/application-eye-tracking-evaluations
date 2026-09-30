/*
FUNCTION_NAME: FUN_0155b72c
ENTRY_POINT: 0155b72c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


void FUN_0155b72c(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03777bb6 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetOfType<IXRInteractor,_XRBaseInteractor>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3858);
    thunk_FUN_00d48444(StringLiteral_7773);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>__ctor__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Edge>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<EventEntry>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<TextureId>_get_Count__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(StringLiteral_2019);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HandGrabPose>_Add__);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_Smoothing_<>c_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_902);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<GrabbableObject>_get_Current__
                      );
    DAT_03777bb6 = 1;
  }
  puVar4 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52>_SliceWithStride<Vector3>__
  ;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0129de0c(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)PTR_DAT_033f3858);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if ((lVar5 != 0) &&
       (FUN_01320e50(lVar5,*(undefined8 *)
                            Method_System_Collections_Generic_Stack<TextureId>_get_Count__),
       param_2 != (long *)0x0)) {
      lVar6 = (**(code **)(*param_2 + 0x738))(param_2,0x143c,*(undefined8 *)(*param_2 + 0x740));
      puVar3 = 
      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetOfType<IXRInteractor,_XRBaseInteractor>__
      ;
      puVar2 = Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__;
      puVar4 = Method_System_Collections_Generic_List_Enumerator<GrabbableObject>_get_Current__;
      if (lVar6 != 0) {
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar11 = 0;
          uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar9 = *(undefined8 *)(lVar6 + 0x20 + uVar11 * 8);
            lVar7 = FUN_010c8190(uVar9,*(undefined8 *)puVar3);
            if ((lVar7 != 0) && (uVar8 = FUN_0155bac8(uVar9), (uVar8 & 1) != 0)) {
              local_70 = 0;
              uStack_68 = 0;
              FUN_011e70d8(&local_70,uVar9,lVar7,*(undefined8 *)puVar4);
              FUN_00bccea0(lVar5,local_70,uStack_68,*(undefined8 *)puVar2);
            }
            uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        puVar4 = StringLiteral_902;
        lVar6 = *(long *)StringLiteral_902;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar4;
        }
        puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__;
        lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar7 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar6 + 0xb8);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar7 == 0) goto LAB_0155bac4;
          FUN_012d24b0(lVar7,uVar9,
                       *(undefined8 *)Method_System_Collections_Generic_List<HandGrabPose>_Add__,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar7;
        }
        puVar3 = Method_System_Collections_Generic_List_Enumerator<EventEntry>_Dispose__;
        puVar2 = 
        Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>__ctor__
        ;
        if (*(int *)(*(long *)Method_Obi_ObiNativeList<Edge>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_010f9330(param_2,lVar7,*(undefined8 *)puVar2);
        FUN_01322050(lVar5,uVar9,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_01299e64(*(long *)(param_1 + 0x10),param_2,lVar5,*(undefined8 *)StringLiteral_7773);
          lVar6 = *(long *)puVar4;
          uVar9 = *(undefined8 *)(param_1 + 0x18);
          uVar1 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar4;
          }
          puVar2 = 
          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__;
          lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
          if (lVar7 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar6 = *(long *)puVar4;
            }
            uVar10 = **(undefined8 **)(lVar6 + 0xb8);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_0155bac4;
            FUN_0138bf0c(lVar7,uVar10,*(undefined8 *)UnityEngine_ProBuilder_Smoothing_<>c_TypeInfo,0
                        );
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar7;
          }
          FUN_0111c550(uVar9,uVar1,param_2,lVar5,lVar7,*(undefined8 *)StringLiteral_2019);
          return;
        }
      }
    }
  }
LAB_0155bac4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



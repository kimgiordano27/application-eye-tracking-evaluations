/*
FUNCTION_NAME: FUN_01557388
ENTRY_POINT: 01557388
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior
*/


void FUN_01557388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = System_Security_Claims_Claim_TypeInfo;
  if ((DAT_03777b88 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetOfType<IXRInteractor,_XRBaseInteractor>__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13489);
    thunk_FUN_00d48444(PTR_DAT_033eaae0);
    thunk_FUN_00d48444(StringLiteral_4645);
    thunk_FUN_00d48444(
                      Method_Messenger<Haptics_VibrationForce,_OVRInput_Controller,_float>_RemoveListener__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>__ctor__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Edge>__ctor__);
    thunk_FUN_00d48444(Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
    thunk_FUN_00d48444(PTR_DAT_033f2720);
    thunk_FUN_00d48444(UnityEngine_Plane_____TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<TextureId>_get_Count__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<byte>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2019);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__1__
                      );
    thunk_FUN_00d48444(System_Security_Claims_Claim_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<GrabbableObject>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0d70);
    DAT_03777b88 = 1;
  }
  local_68 = 0;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_1;
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    FUN_015577e8(param_1,param_2);
    puVar2 = Method_System_ReadOnlySpan<byte>__ctor__;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0129de0c(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                   *(undefined8 *)UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_TypeInfo
                  );
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = 
      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52>_SliceWithStride<Vector3>__
      ;
      if (lVar5 != 0) {
        FUN_01320e50(lVar5,*(undefined8 *)UnityEngine_Plane_____TypeInfo);
        *(long *)(lVar4 + 0x20) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = 
        Method_Messenger<Haptics_VibrationForce,_OVRInput_Controller,_float>_RemoveListener__;
        if (lVar5 != 0) {
          FUN_01320e50(lVar5,*(undefined8 *)
                              Method_System_Collections_Generic_Stack<TextureId>_get_Count__);
          *(long *)(lVar4 + 0x28) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar5 != 0) {
            FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_13489);
            plVar6 = *(long **)(lVar4 + 0x18);
            *(long *)(lVar4 + 0x30) = lVar5;
            if (plVar6 != (long *)0x0) {
              lVar5 = (**(code **)(*plVar6 + 0x738))(plVar6,0x143c,*(undefined8 *)(*plVar6 + 0x740))
              ;
              puVar3 = StringLiteral_4645;
              puVar2 = 
              Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_GetOfType<IXRInteractor,_XRBaseInteractor>__
              ;
              if (lVar5 != 0) {
                if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                  uVar13 = 0;
                  uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                  do {
                    if (uVar8 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    uVar9 = *(undefined8 *)(lVar5 + 0x20 + uVar13 * 8);
                    lVar7 = FUN_010c8190(uVar9,*(undefined8 *)puVar2);
                    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) &&
                       (uVar8 = FUN_015579f0(param_1,*(undefined8 *)(lVar4 + 0x18),uVar9,lVar7,
                                             &local_68), uVar1 = local_68, (uVar8 & 1) != 0)) {
                      lVar12 = *(long *)(lVar4 + 0x20);
                      local_78 = 0;
                      uStack_70 = 0;
                      FUN_011e70d8(&local_78,uVar9,local_68,*(undefined8 *)PTR_DAT_033f0d70);
                      if (lVar12 == 0) goto LAB_015577dc;
                      FUN_00bccca4(lVar12,local_78,uStack_70,*(undefined8 *)PTR_DAT_033f2720);
                      lVar12 = *(long *)(lVar4 + 0x28);
                      local_88 = 0;
                      uStack_80 = 0;
                      FUN_011e70d8(&local_88,uVar9,lVar7,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<GrabbableObject>_get_Current__
                                  );
                      if (lVar12 == 0) goto LAB_015577dc;
                      FUN_00bccea0(lVar12,local_88,uStack_80,
                                   *(undefined8 *)
                                    Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
                      if (*(long *)(lVar4 + 0x30) == 0) goto LAB_015577dc;
                      FUN_01299e64(*(long *)(lVar4 + 0x30),uVar9,uVar1,*(undefined8 *)puVar3);
                    }
                    uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                    uVar13 = uVar13 + 1;
                  } while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18));
                }
                uVar9 = *(undefined8 *)(lVar4 + 0x18);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
                puVar3 = Method_Obi_ObiNativeList<Edge>__ctor__;
                puVar2 = 
                Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>__ctor__
                ;
                if (lVar5 != 0) {
                  FUN_012d24b0(lVar5,lVar4,
                               *(undefined8 *)
                                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                               ,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_010f9330(uVar9,lVar5,*(undefined8 *)puVar2);
                  puVar2 = 
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                  ;
                  if (*(long *)(param_1 + 0x10) != 0) {
                    FUN_01299e64(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                                 *(undefined8 *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_033eaae0);
                    uVar9 = *(undefined8 *)(param_1 + 0x18);
                    uVar1 = *(undefined8 *)(param_1 + 0x20);
                    uVar10 = *(undefined8 *)(lVar4 + 0x18);
                    uVar11 = *(undefined8 *)(lVar4 + 0x28);
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    puVar2 = StringLiteral_2019;
                    if (lVar5 != 0) {
                      FUN_0138bf0c(lVar5,lVar4,
                                   *(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass73_0_<DOBlendableLocalMoveBy>b__1__
                                   ,0);
                      FUN_0111c550(uVar9,uVar1,uVar10,uVar11,lVar5,*(undefined8 *)puVar2);
                      return;
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
LAB_015577dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: FUN_0156e4b0
ENTRY_POINT: 0156e4b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0156e4b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_033f6148;
  if ((DAT_03777c47 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_Vector4s___TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_TypeInformation>__ctor__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<double,_double,_NoOptions>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_3224);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_int>__ctor__);
    thunk_FUN_00d48444(System_Data_Common_SqlByteStorage_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                      );
    DAT_03777c47 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03777c7e == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    DAT_03777c7e = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
    return;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)System_Data_Common_SqlByteStorage_TypeInfo);
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_int>__ctor__;
  if (lVar4 != 0) {
    FUN_012dd38c(lVar4,*(undefined8 *)
                        Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<double,_double,_NoOptions>__ctor__
                );
    *(long *)(param_1 + 0x38) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_012dd38c(lVar4,*(undefined8 *)StringLiteral_3224);
      *(long *)(param_1 + 0x40) = lVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03777c7e == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033f6148);
        DAT_03777c7e = '\x01';
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar1;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (FUN_026c8404(lVar4,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_TypeInformation>__ctor__,
                       0), lVar5 != 0)) {
        FUN_01576fd0(lVar5,lVar4,0);
        if (*(char *)(param_1 + 0x1c) == '\0') {
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03777c7e == '\0') {
          thunk_FUN_00d48444(PTR_DAT_033f6148);
          DAT_03777c7e = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar1;
        }
        puVar2 = 
        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
        ;
        if (**(long **)(lVar4 + 0xb8) != 0) {
          lVar5 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                                    );
          if ((lVar4 != 0) &&
             (FUN_013df2bc(lVar4,param_1,*(undefined8 *)OVRPlugin_Vector4s___TypeInfo,0),
             puVar3 = 
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
             , lVar5 != 0)) {
            FUN_013df780(lVar5,lVar4,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                        );
            if (DAT_03777c7e == '\0') {
              thunk_FUN_00d48444(PTR_DAT_033f6148);
              DAT_03777c7e = '\x01';
            }
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar4 = *(long *)puVar1;
            }
            if (**(long **)(lVar4 + 0xb8) != 0) {
              lVar5 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x38);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if ((lVar4 != 0) &&
                 (FUN_013df2bc(lVar4,param_1,
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s32__,0),
                 lVar5 != 0)) {
                FUN_013df780(lVar5,lVar4,*(undefined8 *)puVar3);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



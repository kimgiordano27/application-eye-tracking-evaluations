/*
FUNCTION_NAME: FUN_015a31a0
ENTRY_POINT: 015a31a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void FUN_015a31a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = StringLiteral_8255;
  puVar1 = 
  Method_RCG_Lovesick_Events_PowerUnlockOnGrabSequence_<PowerUpSequence>d__19_System_Collections_IEnumerator_Reset__
  ;
                    /* try { // try from 015a31c0 to 016a31c3 has its CatchHandler @ 015a33c8 */
  if ((DAT_03777d81 & 1) == 0) {
                    /* try { // try from 015a31d0 to 016a31d7 has its CatchHandler @ 015a33d4 */
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DecalCachedChunk_TypeInfo);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Events_PowerUnlockOnGrabSequence_<PowerUpSequence>d__19_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 015a31e8 to 016a31f7 has its CatchHandler @ 015a33d8 */
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(StringLiteral_8255);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpadalq_s32__);
    thunk_FUN_00d48444(StringLiteral_3700);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TextInputBaseField_UxmlTraits<string>_Init__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MB_TexSet>_Add__);
    thunk_FUN_00d48444(FullSerializer_fsBaseConverter_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__);
    thunk_FUN_00d48444(PTR_DAT_033ed8f0);
    DAT_03777d81 = 1;
  }
  uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,2);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    FUN_01298da0(lVar6,*(undefined8 *)UnityEngine_Rendering_Universal_DecalCachedChunk_TypeInfo);
    *(long *)(param_1 + 0x118) = lVar6;
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar4 = FUN_0269b164(*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_033ed8f0,0);
      *(undefined4 *)(param_1 + 0xf0) = uVar4;
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar4 = FUN_0269b164(*(long *)(param_1 + 0x50),
                             *(undefined8 *)Method_System_Collections_Generic_List<MB_TexSet>_Add__,
                             0);
        *(undefined4 *)(param_1 + 0xf4) = uVar4;
        puVar2 = StringLiteral_11347;
        puVar1 = Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__;
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar4 = FUN_0269b164(*(long *)(param_1 + 0x50),
                               *(undefined8 *)FullSerializer_fsBaseConverter_TypeInfo,0);
          *(undefined4 *)(param_1 + 0xf8) = uVar4;
          uVar5 = FUN_0267c994(*(undefined8 *)puVar1,0);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            FUN_0267d648(lVar6,uVar5,0);
            *(long *)(param_1 + 0xc0) = lVar6;
            uVar5 = FUN_0267c994(*(undefined8 *)puVar1,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar6 != 0) {
              FUN_0267d648(lVar6,uVar5,0);
              *(long *)(param_1 + 200) = lVar6;
              if (*(long *)(param_1 + 0xc0) != 0) {
                FUN_0267d974(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
                             *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                             *(long *)(param_1 + 0xc0),0);
                puVar1 = PTR_DAT_033f6148;
                if (*(long *)(param_1 + 200) != 0) {
                  FUN_0267d974(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0),
                               *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
                               *(long *)(param_1 + 200),0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (DAT_03777c7e == '\0') {
                    thunk_FUN_00d48444(PTR_DAT_033f6148);
                    DAT_03777c7e = '\x01';
                  }
                  lVar6 = *(long *)puVar1;
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar6 = *(long *)puVar1;
                  }
                  if (**(long **)(lVar6 + 0xb8) == 0) {
                    return;
                  }
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (DAT_03777c7e == '\0') {
                    thunk_FUN_00d48444(PTR_DAT_033f6148);
                    DAT_03777c7e = '\x01';
                  }
                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
                  lVar6 = *(long *)puVar1;
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar6 = *(long *)puVar1;
                  }
                  lVar7 = **(long **)(lVar6 + 0xb8);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if ((lVar6 != 0) &&
                     (FUN_026c8404(lVar6,param_1,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_TextInputBaseField_UxmlTraits<string>_Init__
                                   ,0), lVar7 != 0)) {
                    FUN_01576fd0(lVar7,lVar6,0);
                    if (*(char *)(param_1 + 0x34) == '\0') {
                      return;
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (DAT_03777c7e == '\0') {
                      thunk_FUN_00d48444(PTR_DAT_033f6148);
                      DAT_03777c7e = '\x01';
                    }
                    lVar6 = *(long *)puVar1;
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar6 = *(long *)puVar1;
                    }
                    puVar2 = 
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                    ;
                    if (**(long **)(lVar6 + 0xb8) != 0) {
                      lVar7 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x28);
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                                                );
                      if ((lVar6 != 0) &&
                         (FUN_013df2bc(lVar6,param_1,
                                       *(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vpadalq_s32__,0),
                         puVar3 = 
                         Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                         , lVar7 != 0)) {
                        FUN_013df780(lVar7,lVar6,
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                                    );
                        if (DAT_03777c7e == '\0') {
                          thunk_FUN_00d48444(PTR_DAT_033f6148);
                          DAT_03777c7e = '\x01';
                        }
                        lVar6 = *(long *)puVar1;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar6 = *(long *)puVar1;
                        }
                        if (**(long **)(lVar6 + 0xb8) != 0) {
                          lVar7 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x38);
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          if ((lVar6 != 0) &&
                             (FUN_013df2bc(lVar6,param_1,*(undefined8 *)StringLiteral_3700,0),
                             lVar7 != 0)) {
                            FUN_013df780(lVar7,lVar6,*(undefined8 *)puVar3);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



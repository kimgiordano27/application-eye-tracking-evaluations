/*
FUNCTION_NAME: FUN_015af238
ENTRY_POINT: 015af238
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_015af238(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03777dc7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<LogEntry>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_3581);
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(Method_System_Net_WebSockets_WebSocketValidate_ValidateCloseStatus__);
    thunk_FUN_00d48444(Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo);
    thunk_FUN_00d48444(SuperTextMesh_<UnReadOutText>d__274_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                      );
    DAT_03777dc7 = 1;
  }
  lVar4 = FUN_0268fd4c(param_1,0);
  if (lVar4 != 0) {
    uVar5 = FUN_010e5800(lVar4,*(undefined8 *)StringLiteral_3581);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    lVar4 = FUN_0268fd4c(param_1,0);
    puVar1 = PTR_DAT_033f6148;
    if (lVar4 != 0) {
      uVar5 = FUN_010e5800(lVar4,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<LogEntry>_Dispose__
                          );
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      FUN_015af660(param_1);
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
      if (*(int *)(lVar4 + 0xe0) == 0) {
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
      if (**(long **)(lVar4 + 0xb8) != 0) {
        lVar6 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x20);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
        if ((lVar4 != 0) &&
           (FUN_026c8404(lVar4,param_1,*(undefined8 *)SuperTextMesh_<UnReadOutText>d__274_TypeInfo,0
                        ), lVar6 != 0)) {
          FUN_026c84dc(lVar6,lVar4,0);
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
            if (*(char *)(**(long **)(lVar4 + 0xb8) + 0x18) != '\0') {
              if (*(int *)(param_1 + 0x40) == 2) {
                if (*(int *)(lVar4 + 0xe0) == 0) {
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
                if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_015af65c;
                FUN_015afa6c(param_1,*(undefined8 *)(**(long **)(lVar4 + 0xb8) + 0xd8),
                             *(undefined4 *)(param_1 + 0x34));
              }
              else if (*(int *)(param_1 + 0x40) == 1) {
                if (*(int *)(lVar4 + 0xe0) == 0) {
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
                if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_015af65c;
                uVar5 = FUN_01577150(**(long **)(lVar4 + 0xb8),0);
                FUN_015af904(param_1,uVar5,*(undefined4 *)(param_1 + 0x34));
              }
            }
            if (*(char *)(param_1 + 0x44) == '\0') {
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
              lVar6 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                                        );
              if ((lVar4 != 0) &&
                 (FUN_013df2bc(lVar4,param_1,
                               *(undefined8 *)
                                Method_System_Net_WebSockets_WebSocketValidate_ValidateCloseStatus__
                               ,0),
                 puVar3 = 
                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                 , lVar6 != 0)) {
                FUN_013df780(lVar6,lVar4,
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
                  lVar6 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x38);
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if ((lVar4 != 0) &&
                     (FUN_013df2bc(lVar4,param_1,
                                   *(undefined8 *)
                                    Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo,0),
                     lVar6 != 0)) {
                    FUN_013df780(lVar6,lVar4,*(undefined8 *)puVar3);
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
LAB_015af65c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



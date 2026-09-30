/*
FUNCTION_NAME: HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876
ENTRY_POINT: 0284e108
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876(long param_1)

{
  int iVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  pvVar7 = *(void **)(param_1 + 0x10);
  NullCheck(pvVar7);
  iVar2 = *(int *)((long)pvVar7 + 0x28);
  il2cpp_codegen_memory_barrier();
  if (iVar1 == iVar2) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    pvVar7 = *(void **)(param_1 + 0x10);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x10);
    NullCheck(pvVar7);
    *(int *)(param_1 + 0x18) = (int)*(undefined8 *)((long)pvVar7 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = 0;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x28),(void *)0x0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x30),(void *)0x0);
    return;
  }
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                    );
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar4,uVar5,0);
  pMVar6 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Quatf>__
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar4,pMVar6);
}



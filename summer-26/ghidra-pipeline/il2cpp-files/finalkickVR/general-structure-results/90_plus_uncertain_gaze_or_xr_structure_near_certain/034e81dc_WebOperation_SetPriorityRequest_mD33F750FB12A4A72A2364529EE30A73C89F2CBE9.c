/*
FUNCTION_NAME: WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9
ENTRY_POINT: 034e81dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9
               (WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *param_1,__11 *param_2,
               undefined8 param_3)

{
  long lVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *pWVar6;
  undefined1 *local_70;
  WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 **local_68;
  FinallyHelper<WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9::__11,false>
  aFStack_60 [31];
  undefined1 local_41;
  WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *local_40;
  undefined8 local_38;
  __11 *local_30;
  WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *local_28;
  
  local_68 = &local_40;
  local_41 = 0;
  local_70 = &local_41;
  local_40 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  il2cpp::utils::
  Finally<WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9::__11>
            ((utils *)&local_70,param_2);
  Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(local_40,&local_41,0);
  if (((*(int *)(local_28 + 0x88) == 1) &&
      (lVar1 = WebOperation_get_ServicePoint_mAF2A0E3681196651A6DEDAF678D10E6BB8E76123_inline
                         (local_28,(MethodInfo *)0x0), lVar1 != 0)) &&
     (*(int *)(local_28 + 0x8c) == 0)) {
    pWVar6 = InterlockedCompareExchangeImpl<WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9*>
                       ((WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 **)(local_28 + 0x80)
                        ,(WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *)local_30,
                        (WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *)0x0);
    if (pWVar6 == (WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9 *)0x0) {
      il2cpp::utils::
      FinallyHelper<WebOperation_SetPriorityRequest_mD33F750FB12A4A72A2364529EE30A73C89F2CBE9::$_11,false>
      ::~FinallyHelper(aFStack_60);
      return;
    }
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                       );
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_9635);
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar3,uVar4,0);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_9634);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar5);
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                    );
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar3,uVar4,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_9634);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar5);
}



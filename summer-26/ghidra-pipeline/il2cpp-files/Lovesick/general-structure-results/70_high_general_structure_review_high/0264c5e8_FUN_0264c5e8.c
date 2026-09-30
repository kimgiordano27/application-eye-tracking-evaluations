/*
FUNCTION_NAME: FUN_0264c5e8
ENTRY_POINT: 0264c5e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_0264c5e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = StringLiteral_12220;
  puVar8 = StringLiteral_9896;
  if ((DAT_0378388a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_ValidateNames_SplitQName__);
    thunk_FUN_00d48444(StringLiteral_12220);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_2107);
    thunk_FUN_00d48444(StringLiteral_13070);
    thunk_FUN_00d48444(StringLiteral_7486);
    thunk_FUN_00d48444(System_Resources_ResourceTypeCode_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2897);
    thunk_FUN_00d48444(Obi_OniStretchShearConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_EVRApplicationTransitionState_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3982);
    thunk_FUN_00d48444(StringLiteral_5826);
    thunk_FUN_00d48444(StringLiteral_9896);
    thunk_FUN_00d48444(Method_System_RuntimeType_ListBuilder<Type>_CopyTo__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ulong>_Copy__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<Teleporter>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_TransitionEventBase<TransitionEndEvent>_GetPooled__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_VRequest_<RequestText>d__115>__
                      );
    DAT_0378388a = 1;
  }
  uVar10 = FUN_02642b6c(*(undefined8 *)puVar8);
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar9 = StringLiteral_13070;
  puVar7 = StringLiteral_7486;
  puVar6 = StringLiteral_3982;
  puVar5 = StringLiteral_2897;
  puVar4 = Method_System_Xml_ValidateNames_SplitQName__;
  puVar3 = Method_UnityEngine_UIElements_TransitionEventBase<TransitionEndEvent>_GetPooled__;
  puVar2 = Method_System_RuntimeType_ListBuilder<Type>_CopyTo__;
  puVar1 = Obi_OniStretchShearConstraintsBatchImpl_TypeInfo;
  if (lVar11 != 0) {
    FUN_02647eb0(lVar11,uVar10);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar11;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar10;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,*(undefined8 *)puVar5,*(undefined8 *)puVar9);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar10;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar10;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,*(undefined8 *)puVar1,
                          *(undefined8 *)StringLiteral_2107);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = uVar10;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,
                          *(undefined8 *)System_Resources_ResourceTypeCode_TypeInfo,
                          *(undefined8 *)Method_Unity_Collections_NativeArray<ulong>_Copy__);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = uVar10;
    uVar10 = FUN_0264bd34(*(undefined8 *)puVar8,
                          *(undefined8 *)Method_System_Linq_Enumerable_ToList<Teleporter>__,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_VRequest_<RequestText>d__115>__
                         );
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = uVar10;
    uVar10 = FUN_0264bdd0(*(undefined8 *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TypeInfo
                          ,*(undefined8 *)StringLiteral_5826);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = uVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



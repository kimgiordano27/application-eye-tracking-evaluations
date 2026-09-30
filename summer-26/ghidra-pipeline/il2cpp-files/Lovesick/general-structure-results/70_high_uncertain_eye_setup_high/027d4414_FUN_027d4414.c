/*
FUNCTION_NAME: FUN_027d4414
ENTRY_POINT: 027d4414
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027d4414(void)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar10 = StringLiteral_13263;
  puVar9 = StringLiteral_6583;
  puVar8 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
  ;
  puVar7 = Method_Oculus_Interaction_HandDebugGizmos_HandleHandUpdated__;
  puVar6 = Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__;
  puVar5 = Method_Oculus_Platform_Message<SendInvitesResult>_get_Data__;
  puVar4 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__;
  puVar3 = System_BitConverter_<>c_TypeInfo;
  puVar2 = System_Linq_Expressions_Interpreter_ModuloInstruction_TypeInfo;
  puVar1 = PTR_DAT_033f4458;
  if ((DAT_037888fd & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<MeshTransform>_GetEnumerator__);
    thunk_FUN_00d48444(System_BitConverter_<>c_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6583);
    thunk_FUN_00d48444(Method_Oculus_Interaction_HandDebugGizmos_HandleHandUpdated__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_13263);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>__ctor__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<SendInvitesResult>_get_Data__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_ModuloInstruction_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4458);
    DAT_037888fd = 1;
  }
  puVar12 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
  *puVar12 = DAT_02983ca0;
  uVar11 = *(undefined8 *)puVar4;
  puVar12[1] = 0x10;
  puVar12[2] = uVar11;
  uVar11 = FUN_015f5b28(uVar11,*(undefined8 *)puVar10,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x18) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar7,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x20) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar1,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x28) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar2,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x30) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar8,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x38) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar3,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x40) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar9,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x48) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar5,0);
  lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar13 + 0x50) = uVar11;
  uVar11 = FUN_015f5b28(*(undefined8 *)(lVar13 + 0x10),
                        *(undefined8 *)
                         Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>__ctor__,
                        0);
  *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x58) = uVar11;
  return;
}



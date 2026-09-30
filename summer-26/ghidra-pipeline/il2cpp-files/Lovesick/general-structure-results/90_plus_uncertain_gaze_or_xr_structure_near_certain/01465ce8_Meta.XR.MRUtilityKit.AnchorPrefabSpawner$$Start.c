/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$Start
ENTRY_POINT: 01465ce8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


long Meta_XR_MRUtilityKit_AnchorPrefabSpawner__Start(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar8;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    );
  thunk_FUN_00d48444(StringLiteral_4842);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
  thunk_FUN_00d48444(Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_get_Current__);
  *(undefined1 *)(unaff_x21 + 0xabc) = 1;
  puVar2 = Method_Unity_Collections_NativeArray<Vertex>_Dispose__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_get_Current__;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02660dac(*(undefined8 *)puVar1,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo;
  if (lVar5 != 0) {
    FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_10463);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar6 != 0) &&
       (FUN_01320e50(lVar6,*(undefined8 *)
                            Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    ), puVar3 = Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__,
       puVar2 = System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo,
       puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
       unaff_x19 != 0)) {
      if (0 < *(int *)(unaff_x19 + 0x18)) {
        iVar8 = 0;
        do {
          FUN_0132138c();
          lVar4 = in_stack_00000008;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_02681b9c(lVar4,0,0);
          if ((uVar7 & 1) != 0) {
            FUN_0132138c();
            if (in_stack_00000008 == 0) goto LAB_01465eb4;
            FUN_010e58e8(in_stack_00000008,&stack0x00000008,*(undefined8 *)puVar2);
            FUN_00ad61c4(lVar6,in_stack_00000008,*(undefined8 *)puVar3);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x19 + 0x18));
      }
      FUN_0129a054(lVar5,*(undefined8 *)
                          UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo
                   ,lVar6,*(undefined8 *)UnityEngine_Events_UnityAction<string,_string>_TypeInfo);
      return lVar5;
    }
  }
LAB_01465eb4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



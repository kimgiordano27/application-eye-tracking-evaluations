/*
FUNCTION_NAME: FUN_015afbd0
ENTRY_POINT: 015afbd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_015afbd0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_033f6148;
  if ((DAT_03777dc8 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_WebSockets_WebSocketValidate_ValidateCloseStatus__);
    thunk_FUN_00d48444(Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(StringLiteral_8278);
    DAT_03777dc8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03777c7e == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033f6148);
    DAT_03777c7e = '\x01';
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar5 = FUN_0268b4e0(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
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
    lVar7 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_140>_SliceWithStride<Vector4>__
                              );
    if ((lVar4 != 0) &&
       (FUN_013df2bc(lVar4,param_1,
                     *(undefined8 *)
                      Method_System_Net_WebSockets_WebSocketValidate_ValidateCloseStatus__,0),
       puVar3 = StringLiteral_8278, lVar7 != 0)) {
      FUN_013df7e0(lVar7,lVar4,*(undefined8 *)StringLiteral_8278);
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
        lVar7 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x38);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar4 != 0) &&
           (FUN_013df2bc(lVar4,param_1,
                         *(undefined8 *)Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo,0),
           lVar7 != 0)) {
          FUN_013df7e0(lVar7,lVar4,*(undefined8 *)puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



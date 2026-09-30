/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriterException$$Create
ENTRY_POINT: 0291628c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriterException__Create(undefined8 param_1)

{
  undefined8 uVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  ulong *in_stack_00000038;
  byte bStack0000000000000057;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uStack0000000000000008 = 0;
  uVar1 = AppDomain_LoadAssembly_m49F35B2680EB5538B9206BE14F3A5048C7CBC041
                    (param_1,*(undefined8 *)(unaff_x29 + -0x70),in_stack_00000078,
                     in_stack_00000070._7_1_ & 1,in_stack_00000068);
  bStack0000000000000057 =
       Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(uVar1,uStack0000000000000008);
  bStack0000000000000057 = bStack0000000000000057 & in_stack_00000010._4_1_;
  if ((bStack0000000000000057 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x38) = uVar1;
    return *(undefined8 *)(unaff_x29 + -0x38);
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677(pEVar3,0,uVar1);
  pMVar4 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000038);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}



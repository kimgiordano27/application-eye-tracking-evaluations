/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 02c8eb90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___cctor(undefined8 *param_1)

{
  FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *pFVar1;
  Il2CppArray *in_x9;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  Il2CppArray *pIStack0000000000000030;
  
  pIStack0000000000000030 = in_x9;
  pFVar1 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *)
           il2cpp_codegen_object_new((Il2CppClass *)*param_1);
  FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(pFVar1,3,in_stack_00000008);
  NullCheck(pIStack0000000000000030);
  ArrayElementTypeCheck(pIStack0000000000000030,pFVar1);
  FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2::SetAt
            ((FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 *)
             pIStack0000000000000030,3,pFVar1);
  pFVar1 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
  FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(pFVar1,4,in_stack_00000008);
  NullCheck(pIStack0000000000000030);
  ArrayElementTypeCheck(pIStack0000000000000030,pFVar1);
  FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2::SetAt
            ((FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 *)
             pIStack0000000000000030,4,pFVar1);
  *(Il2CppArray **)(*(long *)(unaff_x29 + -8) + 0x10) = pIStack0000000000000030;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x10),pIStack0000000000000030);
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2
            (*(undefined8 *)(unaff_x29 + -8),in_stack_00000008);
  return;
}



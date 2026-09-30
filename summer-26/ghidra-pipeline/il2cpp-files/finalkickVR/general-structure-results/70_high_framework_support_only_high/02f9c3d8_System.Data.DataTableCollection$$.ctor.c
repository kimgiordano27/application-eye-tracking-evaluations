/*
FUNCTION_NAME: System.Data.DataTableCollection$$.ctor
ENTRY_POINT: 02f9c3d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Data_DataTableCollection___ctor
               (undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 *pBVar4;
  long unaff_x29;
  byte bStack000000000000003f;
  
  *(byte *)(unaff_x29 + -0x11) = param_3 & 1;
  *(undefined8 *)(unaff_x29 + -0x20) = param_4;
  if ((LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x38));
  uVar1 = BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline
                    (*(BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 **)
                      (unaff_x29 + -0x38),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
  uVar1 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x40),
                         *(Il2CppClass **)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        );
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x28);
  NullCheck(*(void **)(unaff_x29 + -0x48));
  uVar1 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                    (*(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)
                      (unaff_x29 + -0x48),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar1;
  if (*(long *)(unaff_x29 + -0x30) != 0) {
    LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x30),0);
  }
  bStack000000000000003f = *(byte *)(unaff_x29 + -0x11) & 1;
  pvVar3 = *(void **)(unaff_x29 + -0x28);
  NullCheck(pvVar3);
  uVar1 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pvVar3);
  pBVar4 = *(BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 **)(unaff_x29 + -0x10);
  NullCheck(pBVar4);
  uVar2 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline
                    (pBVar4,(MethodInfo *)0x0);
  LightCompiler_CompileMemberAssignment_m61549A438B579F89F67B905DB4D6AD7A4649B73B
            (*(undefined8 *)(unaff_x29 + -8),bStack000000000000003f & 1,uVar1,uVar2,0,0);
  return;
}



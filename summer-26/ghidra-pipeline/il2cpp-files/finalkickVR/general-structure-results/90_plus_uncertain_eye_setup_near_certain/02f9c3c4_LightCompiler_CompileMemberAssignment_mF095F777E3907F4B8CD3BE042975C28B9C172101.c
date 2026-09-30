/*
FUNCTION_NAME: LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101
ENTRY_POINT: 02f9c3c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101
               (undefined8 param_1,
               BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 *param_2,byte param_3)

{
  Il2CppObject *pIVar1;
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    LightCompiler_CompileMemberAssignment_mF095F777E3907F4B8CD3BE042975C28B9C172101::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_2);
  pIVar1 = (Il2CppObject *)
           BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline
                     (param_2,(MethodInfo *)0x0);
  pMVar2 = (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *)
           CastclassClass(pIVar1,*(Il2CppClass **)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                         );
  NullCheck(pMVar2);
  lVar3 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                    (pMVar2,(MethodInfo *)0x0);
  if (lVar3 != 0) {
    LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4(param_1,lVar3,0);
  }
  NullCheck(pMVar2);
  uVar4 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pMVar2);
  NullCheck(param_2);
  uVar5 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline
                    (param_2,(MethodInfo *)0x0);
  LightCompiler_CompileMemberAssignment_m61549A438B579F89F67B905DB4D6AD7A4649B73B
            (param_1,param_3 & 1,uVar4,uVar5,0,0);
  return;
}



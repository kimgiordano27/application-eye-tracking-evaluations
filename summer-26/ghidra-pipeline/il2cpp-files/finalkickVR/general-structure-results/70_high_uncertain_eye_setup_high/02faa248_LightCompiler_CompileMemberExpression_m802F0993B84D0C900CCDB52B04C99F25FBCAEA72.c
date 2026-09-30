/*
FUNCTION_NAME: LightCompiler_CompileMemberExpression_m802F0993B84D0C900CCDB52B04C99F25FBCAEA72
ENTRY_POINT: 02faa248
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void LightCompiler_CompileMemberExpression_m802F0993B84D0C900CCDB52B04C99F25FBCAEA72
               (undefined8 param_1,Il2CppObject *param_2)

{
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((LightCompiler_CompileMemberExpression_m802F0993B84D0C900CCDB52B04C99F25FBCAEA72::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    LightCompiler_CompileMemberExpression_m802F0993B84D0C900CCDB52B04C99F25FBCAEA72::
    s_Il2CppMethodInitialized = 1;
  }
  pMVar1 = (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *)
           CastclassClass(param_2,*(Il2CppClass **)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                         );
  NullCheck(pMVar1);
  uVar2 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                    (pMVar1,(MethodInfo *)0x0);
  NullCheck(pMVar1);
  uVar3 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pMVar1,0);
  LightCompiler_CompileMember_mBE0712C3F173379CD47E4907F1BB031CA07C9D80(param_1,uVar2,uVar3,0,0);
  return;
}



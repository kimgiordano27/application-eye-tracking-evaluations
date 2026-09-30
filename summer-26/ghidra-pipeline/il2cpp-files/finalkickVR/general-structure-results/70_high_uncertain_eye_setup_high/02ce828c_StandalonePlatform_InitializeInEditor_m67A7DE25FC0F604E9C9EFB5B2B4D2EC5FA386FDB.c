/*
FUNCTION_NAME: StandalonePlatform_InitializeInEditor_m67A7DE25FC0F604E9C9EFB5B2B4D2EC5FA386FDB
ENTRY_POINT: 02ce828c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
StandalonePlatform_InitializeInEditor_m67A7DE25FC0F604E9C9EFB5B2B4D2EC5FA386FDB(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  
  uVar2 = PlatformSettings_get_MobileAppID_m63FCC131644A67D30ED46AA0505B5DDD2F71D521();
  bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar2,0);
  if ((bVar1 & 1) != 0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_20__);
    UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar5,uVar2,0);
    pMVar6 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_21__);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  uVar2 = PlatformSettings_get_MobileAppID_m63FCC131644A67D30ED46AA0505B5DDD2F71D521();
  uVar3 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_mE98001367FDB92879A7BF86CEFC65F3B49FF76C7_inline
                    ((MethodInfo *)0x0);
  bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(uVar3,0);
  if ((bVar1 & 1) == 0) {
    uVar3 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_mE98001367FDB92879A7BF86CEFC65F3B49FF76C7_inline
                      ((MethodInfo *)0x0);
    uVar2 = UInt64_Parse_m90068CF93B1268DCAD57BD1D8E1FE811E0AABDC7(uVar2,0);
    uVar2 = StandalonePlatform_AsyncInitialize_mBD95C7F432538CC912B187328F15FC036B468A1A
                      (param_1,uVar2,uVar3,0);
    return uVar2;
  }
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
  uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_22__);
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar5,uVar2,0);
  pMVar6 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_21__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar6);
}



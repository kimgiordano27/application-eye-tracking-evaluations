/*
FUNCTION_NAME: U3CU3Ec__DisplayClass66_0_U3CdumpU3Eb__0_mFDF214251CF1C4FFD76CF99AF709D83EB33E305B
ENTRY_POINT: 01f441b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


Action_4_tCFD3F346D48D585C5AD759BFABECC1400FB2CFCA *
U3CU3Ec__DisplayClass66_0_U3CdumpU3Eb__0_mFDF214251CF1C4FFD76CF99AF709D83EB33E305B(void *param_1)

{
  Il2CppObject *pIVar1;
  Action_4_tCFD3F346D48D585C5AD759BFABECC1400FB2CFCA *pAVar2;
  
  if ((U3CU3Ec__DisplayClass66_0_U3CdumpU3Eb__0_mFDF214251CF1C4FFD76CF99AF709D83EB33E305B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
              );
    U3CU3Ec__DisplayClass66_0_U3CdumpU3Eb__0_mFDF214251CF1C4FFD76CF99AF709D83EB33E305B::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar1 = (Il2CppObject *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
                     );
  U3CU3Ec__DisplayClass66_1__ctor_m5BF76BEAB7D2363EF04450AC280DC98774F681CC(pIVar1);
  NullCheck(pIVar1);
  *(void **)(pIVar1 + 0x18) = param_1;
  Il2CppCodeGenWriteBarrier((void **)(pIVar1 + 0x18),param_1);
  NullCheck(pIVar1);
  *(undefined8 *)(pIVar1 + 0x10) = 0;
  pAVar2 = (Action_4_tCFD3F346D48D585C5AD759BFABECC1400FB2CFCA *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
  Action_4__ctor_m5E1FAC16244ED2D14F5755E76E7620B14721751B
            (pAVar2,pIVar1,
             *(long *)
              Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
             ,(MethodInfo *)0x0);
  return pAVar2;
}



/*
FUNCTION_NAME: FUN_027e5e08
ENTRY_POINT: 027e5e08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027e5e08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = System_Xml_XmlUnspecifiedAttribute_TypeInfo;
  if ((DAT_037889ab & 1) == 0) {
    thunk_FUN_00d48444(Method_PullItTogetherPlatform_OnRelease__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRBone>_AsReadOnly__);
    thunk_FUN_00d48444(System_Xml_XmlUnspecifiedAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter__ctor__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    DAT_037889ab = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
  puVar1 = Method_System_Collections_Generic_List<OVRBone>_AsReadOnly__;
  if (lVar3 != 0) {
    FUN_027bc300(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)puVar2;
    *(long *)(param_1 + 0x70) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter__ctor__;
    puVar1 = Method_PullItTogetherPlatform_OnRelease__;
    if (lVar3 != 0) {
      FUN_013e2958(lVar3,*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)puVar2;
      FUN_00cec0b4(lVar3,0,*(undefined8 *)puVar1);
      *(long *)(param_1 + 0x78) = lVar3;
      FUN_02757488(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



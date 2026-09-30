/*
FUNCTION_NAME: FUN_01ebdd10
ENTRY_POINT: 01ebdd10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_01ebdd10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if ((DAT_0377ff43 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<BodyPoseComparerActiveState_JointComparerConfig>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RadioButton>_get_Item__);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    DAT_0377ff43 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  puVar1 = System_Collections_Generic_List<BodyPoseComparerActiveState_JointComparerConfig>_TypeInfo
  ;
  if (lVar3 != 0) {
    FUN_01f75d58(lVar3,*(undefined8 *)Method_System_Collections_Generic_List<RadioButton>_get_Item__
                 ,*(undefined8 *)Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01fbcfac(lVar3,0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



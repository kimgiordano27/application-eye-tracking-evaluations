/*
FUNCTION_NAME: FUN_024f71a0
ENTRY_POINT: 024f71a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024f71a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = StringLiteral_9792;
  puVar5 = StringLiteral_279;
  puVar4 = 
  Field_<PrivateImplementationDetails>_8A10BADD6E85A9E9294CA3FCC00BD3B9894197182B02CF49138C42707AAEA824
  ;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_114__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_MoveNext__
  ;
  puVar1 = Unity_Mathematics_int2_TypeInfo;
  if ((DAT_03782854 & 1) == 0) {
    thunk_FUN_00d48444(Unity_Mathematics_int2_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9792);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_114__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_8A10BADD6E85A9E9294CA3FCC00BD3B9894197182B02CF49138C42707AAEA824
                      );
    thunk_FUN_00d48444(StringLiteral_279);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_MoveNext__
                      );
    DAT_03782854 = 1;
  }
  uVar7 = FUN_0265d800(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar7;
  uVar7 = FUN_0265d800(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar7;
  uVar7 = FUN_0265d800(*(undefined8 *)puVar2,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar7;
  uVar7 = FUN_0265d800(*(undefined8 *)puVar4,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar7;
  uVar7 = FUN_0265d800(*(undefined8 *)puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar7;
  return;
}



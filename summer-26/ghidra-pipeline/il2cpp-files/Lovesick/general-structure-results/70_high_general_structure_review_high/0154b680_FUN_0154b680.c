/*
FUNCTION_NAME: FUN_0154b680
ENTRY_POINT: 0154b680
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0154b680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03777b03 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Sirenix_Serialization_ISerializationPolicy_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UI_LayoutUtility_<>c_<GetPreferredHeight>b__7_0__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_ResizeUninitialized__);
    thunk_FUN_00d48444(StringLiteral_13239);
    thunk_FUN_00d48444(StringLiteral_1031);
    thunk_FUN_00d48444(StringLiteral_2664);
    thunk_FUN_00d48444(StringLiteral_9931);
    thunk_FUN_00d48444(Obi_OniShapeMatchingConstraintsBatchImpl_TypeInfo);
    DAT_03777b03 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar7,0,0);
  puVar2 = StringLiteral_9931;
  puVar1 = Method_Obi_ObiNativeList<int>_ResizeUninitialized__;
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_0154b8bc;
    lVar5 = FUN_010c5fa8(*(long *)(param_1 + 0x80),*(undefined8 *)StringLiteral_2664,
                         *(undefined8 *)Sirenix_Serialization_ISerializationPolicy_TypeInfo);
    *(long *)(param_1 + 0xa8) = lVar5;
    uVar7 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    puVar3 = StringLiteral_1031;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
    ;
    puVar1 = Obi_OniShapeMatchingConstraintsBatchImpl_TypeInfo;
    if (lVar5 == 0) goto LAB_0154b8bc;
    FUN_01541ed8(lVar5,uVar7);
    lVar5 = *(long *)(param_1 + 0xa8);
    uVar7 = FUN_0113a140(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    uVar6 = FUN_0113a140(*(undefined8 *)puVar3,*(undefined8 *)puVar2);
    puVar2 = StringLiteral_13239;
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__;
    if (lVar5 == 0) goto LAB_0154b8bc;
    FUN_01552f84(lVar5,uVar7,uVar6,0);
    plVar8 = *(long **)(param_1 + 0xa8);
    lVar5 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0154b8bc;
    plVar8[0x13] = lVar5;
    puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
    lVar9 = *(long *)(param_1 + 0xa8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (FUN_016f27fc(lVar5,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_UI_LayoutUtility_<>c_<GetPreferredHeight>b__7_0__,0),
       lVar9 == 0)) goto LAB_0154b8bc;
    *(long *)(lVar9 + 0x78) = lVar5;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xb0) = param_2;
    return;
  }
LAB_0154b8bc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



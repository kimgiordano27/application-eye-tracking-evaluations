/*
FUNCTION_NAME: FUN_0154aa0c
ENTRY_POINT: 0154aa0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0154aa0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03777afc & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_ResizeUninitialized__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_get_Interactable__
                      );
    thunk_FUN_00d48444(System_Action<Camera>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>_get_subsystemDescriptor__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Thread_Start__);
    DAT_03777afc = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(uVar6,0,0);
  puVar2 = Method_Obi_ObiNativeList<int>_ResizeUninitialized__;
  puVar1 = Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_get_Interactable__
  ;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_0154abcc;
    lVar4 = FUN_010c5ec8(*(long *)(param_1 + 0x80),
                         *(undefined8 *)Method_System_Threading_Thread_Start__,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
    *(long *)(param_1 + 0xb0) = lVar4;
    uVar6 = FUN_01145518(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
    ;
    puVar1 = System_Action<Camera>_TypeInfo;
    if (lVar4 == 0) goto LAB_0154abcc;
    FUN_01541ed8(lVar4,uVar6);
    lVar4 = *(long *)(param_1 + 0xb0);
    uVar6 = FUN_0113a140(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    puVar2 = 
    Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>_get_subsystemDescriptor__
    ;
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__;
    if ((lVar4 == 0) || (plVar5 = *(long **)(lVar4 + 0x80), plVar5 == (long *)0x0))
    goto LAB_0154abcc;
    (**(code **)(*plVar5 + 0x1c8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x1d0));
    plVar5 = *(long **)(param_1 + 0xb0);
    lVar4 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    if (plVar5 == (long *)0x0) goto LAB_0154abcc;
    plVar5[0x13] = lVar4;
    (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_015558b4(*(long *)(param_1 + 0xb0),param_2,0);
    return;
  }
LAB_0154abcc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: FUN_0107a214
ENTRY_POINT: 0107a214
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
FUN_0107a214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
  ;
  if ((DAT_03776219 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
                      );
    thunk_FUN_00d48444(StringLiteral_4583);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IMarker>_Clear__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Obi_ObiNativeEdgeList_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__);
    thunk_FUN_00d48444(
                      System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_2835);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                      );
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_Formatters_Binary_ObjectMap__ctor__);
    DAT_03776219 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(undefined8 *)(lVar5 + 0x20) = param_6;
    puVar2 = 
    Method_Oculus_Interaction_Interactor<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>_Awake__
    ;
    if ((float)param_4 <= 0.0) {
      if (DAT_03775726 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                          );
        DAT_03775726 = '\x01';
      }
      puVar2 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectMap__ctor__;
      if (0 < **(int **)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<MedleyHourglassTarget>_Dispose__
                        + 0xb8)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(*(undefined8 *)puVar2,0);
      }
      return 0;
    }
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    uVar1 = *(undefined4 *)
             (*(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8) + 1);
    *(undefined8 *)(lVar5 + 0x10) =
         **(undefined8 **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    *(undefined4 *)(lVar5 + 0x18) = uVar1;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = StringLiteral_4583;
    if (lVar6 != 0) {
      FUN_0128180c(lVar6,lVar5,
                   *(undefined8 *)
                    System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo,
                   0);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar4 = Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__;
      puVar3 = Method_System_Collections_Generic_List<IMarker>_Clear__;
      puVar2 = Obi_ObiNativeEdgeList_TypeInfo;
      if (lVar7 != 0) {
        FUN_012819a8(lVar7,lVar5,*(undefined8 *)StringLiteral_2835,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_010690dc(param_1,param_2,param_3,param_4,param_5,lVar6,lVar7,param_7);
        uVar8 = FUN_010e3600(uVar8,*(undefined8 *)puVar2);
        uVar8 = FUN_0114e340(uVar8,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)puVar4);
        return uVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



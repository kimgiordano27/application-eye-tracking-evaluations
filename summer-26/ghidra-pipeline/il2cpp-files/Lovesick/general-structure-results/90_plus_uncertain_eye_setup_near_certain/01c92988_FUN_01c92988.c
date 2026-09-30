/*
FUNCTION_NAME: FUN_01c92988
ENTRY_POINT: 01c92988
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01c92988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = StringLiteral_5552;
  puVar1 = Method_System_Collections_Generic_List<Type[]>_GetEnumerator__;
  if ((DAT_0377ed09 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type[]>_GetEnumerator__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RaycastResult>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11220);
    thunk_FUN_00d48444(StringLiteral_5552);
    DAT_0377ed09 = 1;
  }
  FUN_01d00ed8(param_2,*(undefined8 *)puVar3,0);
  lVar5 = FUN_010c06e0(param_1,*(undefined8 *)puVar1);
  puVar2 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  puVar1 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  if (lVar5 != 0) {
    iVar4 = FUN_013836e0(lVar5,*(undefined8 *)StringLiteral_11220);
    if (iVar4 != 0) {
      uVar6 = FUN_010c06e0(param_2,*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
      }
      FUN_01c9d93c(uVar6,*(undefined8 *)puVar3);
      FUN_01c9e344(0,lVar5,uVar6);
      return;
    }
    lVar5 = thunk_FUN_00d6225c(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_List<RaycastResult>__ctor__
                              );
    if (lVar5 == 0) {
      lVar5 = FUN_010c06e0(param_2,*(undefined8 *)puVar2);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01c9d93c(lVar5,*(undefined8 *)puVar3);
    FUN_01c9da84(lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



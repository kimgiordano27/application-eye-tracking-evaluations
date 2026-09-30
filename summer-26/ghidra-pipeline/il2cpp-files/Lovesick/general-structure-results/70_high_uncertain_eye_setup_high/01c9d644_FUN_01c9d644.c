/*
FUNCTION_NAME: FUN_01c9d644
ENTRY_POINT: 01c9d644
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01c9d644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *local_48;
  
  puVar5 = StringLiteral_5552;
  puVar4 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  puVar1 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  if ((DAT_0377ed0a & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type[]>_GetEnumerator__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_11220);
    thunk_FUN_00d48444(StringLiteral_13249);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    thunk_FUN_00d48444(StringLiteral_5552);
    DAT_0377ed0a = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<Type[]>_GetEnumerator__;
  FUN_01d00ed8(param_1,*(undefined8 *)puVar3,0);
  FUN_01d00ed8(param_3,*(undefined8 *)puVar5,0);
  lVar7 = FUN_010c06e0(param_3,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  FUN_01c9d93c(lVar7,*(undefined8 *)puVar5);
  lVar8 = FUN_010c06e0(param_2,*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    iVar6 = FUN_013836e0(lVar8,*(undefined8 *)StringLiteral_11220);
    puVar3 = StringLiteral_13249;
    if (iVar6 == 0) {
      if (lVar7 == 0) goto LAB_01c9d868;
      iVar6 = FUN_013836e0(lVar7,*(undefined8 *)StringLiteral_13249);
      if ((iVar6 != 0) && (iVar6 = FUN_013836e0(lVar7,*(undefined8 *)puVar3), iVar6 != 0)) {
        FUN_01383784(lVar7,iVar6 + -1,&local_48,
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerable<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                    );
        puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        if (local_48 == (long *)0x0) goto LAB_01c9d868;
        uVar9 = (**(code **)(*local_48 + 0x188))(local_48,*(undefined8 *)(*local_48 + 400));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar10 = FUN_01789ac0(uVar9,param_1,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01c9da84(lVar7);
          return;
        }
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01c9e344(param_1,lVar8,lVar7);
    return;
  }
LAB_01c9d868:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



/*
FUNCTION_NAME: FUN_0244c174
ENTRY_POINT: 0244c174
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void FUN_0244c174(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  
  puVar3 = Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Value__;
  if ((DAT_0378249c & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<MB_BlendShape2CombinedMap>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystemDescriptor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Value__
                      );
    DAT_0378249c = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar3 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystemDescriptor__
  ;
  if (lVar5 != 0) {
    FUN_024507e4();
    *(long *)(param_1 + 0x10) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<MB_BlendShape2CombinedMap>__);
      *(long *)(param_1 + 0x18) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__;
      if (lVar5 != 0) {
        FUN_0267ba9c(lVar5,0);
        *(long *)(param_1 + 0x38) = lVar5;
        FUN_017b46ec(param_1,0);
        FUN_0244a0e4(param_1);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03781f54 == '\0') {
          thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
          DAT_03781f54 = '\x01';
        }
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar3;
        }
        uVar1 = **(undefined4 **)(lVar5 + 0xb8);
        uVar4 = 1;
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar4 = 2;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar4 = FUN_017724a8(uVar1,uVar4,0);
        if (DAT_037824d7 == '\0') {
          thunk_FUN_00d48444(Method_RCG_Lovesick_RhythmGame_FretBoard_<ChordChange>b__24_2__);
          DAT_037824d7 = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar3;
        }
        **(undefined4 **)(lVar5 + 0xb8) = uVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



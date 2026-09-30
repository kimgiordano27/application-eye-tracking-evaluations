/*
FUNCTION_NAME: FUN_0240c4ac
ENTRY_POINT: 0240c4ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0240c4ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = OVRPlugin_OVRP_1_103_0_TypeInfo;
  if ((DAT_037822b8 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__)
    ;
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_remove_onGestureStarted__
                      );
    thunk_FUN_00d48444(
                      Method_GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetValueFromEither__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BaseInputModule>_RemoveAt__);
    thunk_FUN_00d48444(Method_CatchPhrasePuzzle_WordPlaced__);
    thunk_FUN_00d48444(StringLiteral_2860);
    thunk_FUN_00d48444(Obi_OniVolumeConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14083);
    thunk_FUN_00d48444(StringLiteral_3339);
    thunk_FUN_00d48444(Oculus_Interaction_InteractorGroup_InteractorPredicate_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4616);
    thunk_FUN_00d48444(Method_System_ComponentModel_PropertyDescriptorCollection_Add__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_103_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Runtime_InteropServices_MemoryMarshal_AsMemory<byte>__);
    DAT_037822b8 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_remove_onGestureStarted__
  ;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_2860;
    if (lVar4 != 0) {
      FUN_023a9460(lVar4,0);
      lVar7 = *(long *)(lVar4 + 0x48);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = StringLiteral_14083;
      puVar1 = Method_CatchPhrasePuzzle_WordPlaced__;
      if (lVar5 != 0) {
        FUN_023aa638(lVar5,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar2;
        }
        FUN_023aa448(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                     *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = Method_System_Collections_Generic_KeyValuePair<PropertyName,_object>__ctor__;
        if (lVar6 != 0) {
          FUN_012d1810(lVar6,lVar3,*(undefined8 *)StringLiteral_4616,0);
          *(long *)(lVar5 + 0x48) = lVar6;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = Method_System_Runtime_InteropServices_MemoryMarshal_AsMemory<byte>__;
          if (lVar6 != 0) {
            FUN_011c181c(lVar6,lVar3,
                         *(undefined8 *)
                          Method_System_ComponentModel_PropertyDescriptorCollection_Add__,0);
            *(long *)(lVar5 + 0x50) = lVar6;
            *(undefined4 *)(lVar5 + 0x70) = 10;
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar3 = *(long *)puVar2;
            }
            lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
            if (lVar6 == 0) {
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar3 = *(long *)puVar2;
              }
              uVar8 = **(undefined8 **)(lVar3 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar6 == 0) goto LAB_0240c79c;
              FUN_012d1810(lVar6,uVar8,*(undefined8 *)StringLiteral_3339,0);
              lVar3 = *(long *)puVar2;
              *(long *)(*(long *)(lVar3 + 0xb8) + 0x10) = lVar6;
            }
            *(long *)(lVar5 + 0x60) = lVar6;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar3 = *(long *)puVar2;
            }
            lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
            if (lVar6 == 0) {
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar3 = *(long *)puVar2;
              }
              uVar8 = **(undefined8 **)(lVar3 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar6 == 0) goto LAB_0240c79c;
              FUN_012d1810(lVar6,uVar8,
                           *(undefined8 *)
                            Oculus_Interaction_InteractorGroup_InteractorPredicate_TypeInfo,0);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar6;
            }
            *(long *)(lVar5 + 0x68) = lVar6;
            if (lVar7 != 0) {
              FUN_01360964(lVar7,lVar5,*(undefined8 *)Obi_OniVolumeConstraintsBatchImpl_TypeInfo);
              return lVar4;
            }
          }
        }
      }
    }
  }
LAB_0240c79c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



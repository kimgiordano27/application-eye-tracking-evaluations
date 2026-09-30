/*
FUNCTION_NAME: FUN_027cc7b4
ENTRY_POINT: 027cc7b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_027cc7b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = StringLiteral_12917;
  if ((DAT_037888d5 & 1) == 0) {
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<Challenge>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__
                      );
    thunk_FUN_00d48444(StringLiteral_10698);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxq_u32__);
    thunk_FUN_00d48444(StringLiteral_1639);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<InteractableTriggerBroadcaster>_Add__
                      );
    thunk_FUN_00d48444(System_Net_WebExceptionMapping_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12917);
    thunk_FUN_00d48444(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<StatsSystem>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>__ctor__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputControl<TValue>_var);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_Invoke__);
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<ProBuilderMesh>_TypeInfo);
    DAT_037888d5 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = Method_UnityEngine_Component_GetComponent<StatsSystem>__;
  if (lVar5 != 0) {
    FUN_027bd36c();
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
    *(long *)(param_1 + 0x88) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = StringLiteral_10698;
    puVar3 = Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_Invoke__;
    if (lVar5 != 0) {
      FUN_027bd36c();
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
      FUN_00ce94b8(0x41200000,lVar5,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x90) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar3 = StringLiteral_1639;
      puVar1 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>__ctor__;
      if (lVar5 != 0) {
        FUN_027bd36c();
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar1;
        FUN_00ce94b8(0,lVar5,*(undefined8 *)puVar2);
        *(long *)(param_1 + 0x98) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxq_u32__;
        puVar2 = System_Net_WebExceptionMapping_TypeInfo;
        puVar1 = System_Collections_Generic_ICollection<ProBuilderMesh>_TypeInfo;
        if (lVar5 != 0) {
          FUN_027bdeb4();
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar1;
          FUN_00ae5e80(lVar5,0,*(undefined8 *)puVar4);
          *(long *)(param_1 + 0xa0) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = 
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__;
          puVar1 = UnityEngine_InputSystem_InputControl<TValue>_var;
          if (lVar5 != 0) {
            FUN_013e2958(lVar5,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<InteractableTriggerBroadcaster>_Add__
                        );
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar1;
            FUN_00ceb420(lVar5,0,*(undefined8 *)puVar2);
            *(long *)(param_1 + 0xa8) = lVar5;
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar3 = Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__;
            puVar1 = Method_Oculus_Platform_Models_DeserializableList<Challenge>__ctor__;
            if (lVar5 != 0) {
              FUN_027bdeb4();
              *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
              FUN_00ae5e80(lVar5,0,*(undefined8 *)puVar4);
              *(long *)(param_1 + 0xb0) = lVar5;
              FUN_011d3eb8(param_1,*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



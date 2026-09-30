/*
FUNCTION_NAME: FUN_027d9440
ENTRY_POINT: 027d9440
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_027d9440(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = StringLiteral_12917;
  if ((DAT_0378893a & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<InteractableTriggerBroadcaster>_Add__
                      );
    thunk_FUN_00d48444(System_Net_WebExceptionMapping_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12917);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<StatsSystem>__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputControl<TValue>_var);
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_Invoke__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DualShockGamepad>__
                      );
    DAT_0378893a = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_UnityEngine_Component_GetComponent<StatsSystem>__;
  puVar1 = PTR_DAT_033ea8a0;
  if (lVar4 != 0) {
    FUN_027bd36c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar3;
    plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary_ValueCollection<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_GetEnumerator__
    ;
    if (plVar5 != (long *)0x0) {
      if ((*(long *)
            Method_System_Collections_Generic_Dictionary_ValueCollection<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_GetEnumerator__
           != 0) &&
         (lVar6 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_GetEnumerator__
                                     ,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_027d96a0:
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
      if ((int)plVar5[3] == 0) {
LAB_027d969c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar5[4] = *(long *)puVar3;
      FUN_027bcbfc(lVar4,plVar5,0);
      *(long *)(param_1 + 0x70) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_UnityEngine_Events_UnityEvent<CyclingWordSet>_Invoke__;
      if (lVar4 != 0) {
        FUN_027bd36c(lVar4,0);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar3;
        plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
        puVar1 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DualShockGamepad>__;
        if (plVar5 != (long *)0x0) {
          if ((*(long *)
                Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DualShockGamepad>__ != 0)
             && (lVar6 = thunk_FUN_00d6225c(*(long *)
                                             Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DualShockGamepad>__
                                            ,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_027d96a0;
          puVar3 = System_Net_WebExceptionMapping_TypeInfo;
          if ((int)plVar5[3] == 0) goto LAB_027d969c;
          plVar5[4] = *(long *)puVar1;
          FUN_027bcbfc(lVar4,plVar5,0);
          *(long *)(param_1 + 0x78) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar3 = 
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__;
          puVar1 = UnityEngine_InputSystem_InputControl<TValue>_var;
          if (lVar4 != 0) {
            FUN_013e2958(lVar4,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<InteractableTriggerBroadcaster>_Add__
                        );
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar1;
            FUN_00ceb420(lVar4,1,*(undefined8 *)puVar3);
            *(long *)(param_1 + 0x80) = lVar4;
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
            if (lVar4 != 0) {
              FUN_027bd36c(lVar4,0);
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar2;
              *(long *)(param_1 + 0x88) = lVar4;
              FUN_02757488(param_1,0);
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



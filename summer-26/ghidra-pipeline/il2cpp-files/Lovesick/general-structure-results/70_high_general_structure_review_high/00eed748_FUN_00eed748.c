/*
FUNCTION_NAME: FUN_00eed748
ENTRY_POINT: 00eed748
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_00eed748(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03775390 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_DefaultEventSystem_<>c_<SendIMGUIEvents>b__23_1__
                      );
    thunk_FUN_00d48444(System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalDrawCallChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec3e0);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
    DAT_03775390 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b5e4(uVar7,0);
  puVar1 = PTR_DAT_033ec3e0;
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_00eeda40;
    lVar8 = *(long *)(*(long *)(param_1 + 0x140) + 0x18);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec3e0);
    if ((lVar5 == 0) ||
       (FUN_013df2bc(lVar5,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TMP_Character>_get_Count__,0),
       puVar3 = Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__,
       lVar8 == 0)) goto LAB_00eeda40;
    FUN_013df7e0(lVar8,lVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__)
    ;
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_00eeda40;
    lVar8 = *(long *)(*(long *)(param_1 + 0x140) + 0x20);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar5 == 0) ||
       (FUN_013df2bc(lVar5,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<DecalDrawCallChunk>_MoveNext__
                     ,0), lVar8 == 0)) goto LAB_00eeda40;
    FUN_013df7e0(lVar8,lVar5,*(undefined8 *)puVar3);
  }
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b5e4(uVar7,0);
  puVar1 = 
  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__;
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 == 0) goto LAB_00eeda40;
    uVar7 = *(undefined8 *)(lVar5 + 0x90);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                              );
    if (lVar8 == 0) goto LAB_00eeda40;
    FUN_00eed53c(lVar8,param_1,
                 *(undefined8 *)
                  System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo);
    plVar6 = (long *)FUN_017b78c8(uVar7,lVar8,0);
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x90) = 0;
    }
    else {
      lVar8 = *(long *)puVar1;
      if (*plVar6 != lVar8) {
LAB_00eed950:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      *(long **)(lVar5 + 0x90) = plVar6;
      if (*plVar6 != lVar8) goto LAB_00eed950;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b5e4(uVar7,0);
  puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 200) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 200) + 0x150);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__
                              );
    if ((lVar5 != 0) &&
       (FUN_013df3d0(lVar5,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Count__
                     ,0),
       puVar1 = System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo,
       lVar8 != 0)) {
      FUN_013dfe38(lVar8,lVar5,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
      if (*(long *)(param_1 + 200) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 200) + 0x148);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar5 != 0) &&
           (FUN_013df3d0(lVar5,param_1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_DefaultEventSystem_<>c_<SendIMGUIEvents>b__23_1__
                         ,0), lVar8 != 0)) {
          FUN_013dfe38(lVar8,lVar5,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
LAB_00eeda40:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



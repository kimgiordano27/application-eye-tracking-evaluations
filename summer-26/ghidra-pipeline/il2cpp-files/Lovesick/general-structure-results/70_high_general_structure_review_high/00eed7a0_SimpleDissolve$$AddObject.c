/*
FUNCTION_NAME: SimpleDissolve$$AddObject
ENTRY_POINT: 00eed7a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void SimpleDissolve__AddObject(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
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
  *(undefined1 *)(unaff_x20 + 0x390) = 1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x140);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b5e4(uVar6,0);
  puVar1 = PTR_DAT_033ec3e0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_00eeda40;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x18);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec3e0);
    if ((lVar4 == 0) ||
       (FUN_013df2bc(),
       puVar2 = Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__,
       lVar7 == 0)) goto LAB_00eeda40;
    FUN_013df7e0(lVar7,lVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__)
    ;
    if (*(long *)(unaff_x19 + 0x140) == 0) goto LAB_00eeda40;
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x20);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar4 == 0) || (FUN_013df2bc(), lVar7 == 0)) goto LAB_00eeda40;
    FUN_013df7e0(lVar7,lVar4,*(undefined8 *)puVar2);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0xe8);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b5e4(uVar6,0);
  puVar1 = 
  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0xe8);
    if (lVar4 == 0) goto LAB_00eeda40;
    uVar6 = *(undefined8 *)(lVar4 + 0x90);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual_HandleTurnerPostprocessed__
                              );
    if (lVar7 == 0) goto LAB_00eeda40;
    FUN_00eed53c();
    plVar5 = (long *)FUN_017b78c8(uVar6,lVar7,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar4 + 0x90) = 0;
    }
    else {
      lVar7 = *(long *)puVar1;
      if (*plVar5 != lVar7) {
LAB_00eed950:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      *(long **)(lVar4 + 0x90) = plVar5;
      if (*plVar5 != lVar7) goto LAB_00eed950;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 200);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b5e4(uVar6,0);
  puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 200) != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x19 + 200) + 0x150);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__
                              );
    if ((lVar4 != 0) &&
       (FUN_013df3d0(),
       puVar2 = System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo,
       lVar7 != 0)) {
      FUN_013dfe38(lVar7,lVar4,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
      if (*(long *)(unaff_x19 + 200) != 0) {
        lVar7 = *(long *)(*(long *)(unaff_x19 + 200) + 0x148);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar4 != 0) && (FUN_013df3d0(), lVar7 != 0)) {
          FUN_013dfe38(lVar7,lVar4,*(undefined8 *)puVar2);
          return;
        }
      }
    }
  }
LAB_00eeda40:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



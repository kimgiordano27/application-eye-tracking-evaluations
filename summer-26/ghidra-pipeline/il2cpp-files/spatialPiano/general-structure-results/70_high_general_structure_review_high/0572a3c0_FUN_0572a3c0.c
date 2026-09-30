/*
FUNCTION_NAME: FUN_0572a3c0
ENTRY_POINT: 0572a3c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0572a3c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* try { // try from 0572a3dc to 0582a3df has its CatchHandler @ 0572a9bc */
                    /* try { // try from 0572a3e0 to 0582a3ef has its CatchHandler @ 0572aa38 */
  if ((DAT_06bc07e0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9990);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(Method_Unity_AppUI_UI_DropTarget<object>_add_dragStarted__);
    FUN_02f08768(PTR_DAT_067d7c28);
    FUN_02f08768(Method_Unity_AppUI_UI_DropTarget<object>_add_dropped__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_Clear__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_size__
                );
    DAT_06bc07e0 = 1;
  }
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  if (param_2 == 0) goto LAB_0572a728;
  if (*(long *)(param_2 + 0x98) == 0) {
    FUN_05725cd4(param_1,param_2);
    if (*(long *)(param_2 + 0xa0) == 0) goto LAB_0572a728;
    uVar5 = FUN_05825608(*(long *)(param_2 + 0xa0),0);
    if ((uVar5 & 1) == 0) {
      FUN_05729b28(param_1,param_2,*(undefined8 *)PTR_DAT_067d7c28,*(undefined8 *)(param_2 + 0xa0));
    }
    else {
      FUN_058572c8(param_1,*(undefined8 *)
                            Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_size__
                   ,param_2,0);
    }
    if (*(long *)(param_2 + 0xb0) == 0) goto LAB_0572a728;
    uVar5 = FUN_05825608(*(long *)(param_2 + 0xb0),0);
    if ((((((((uVar5 & 1) == 0) || (*(char *)(param_2 + 0x75) != '\0')) ||
           (*(int *)(param_2 + 0x7c) != 0x100)) ||
          ((*(long *)(param_2 + 0xb8) != 0 || (uVar5 = FUN_0576ff1c(param_2,0), (uVar5 & 1) != 0))))
         || ((*(long *)(param_2 + 0x88) != 0 ||
             ((*(int *)(param_2 + 0x84) != 0 || (*(long *)(param_2 + 0x90) != 0)))))) ||
        (*(char *)(param_2 + 0x77) != '\0')) &&
       ((FUN_058572c8(param_1,*(undefined8 *)Method_Unity_AppUI_UI_DropTarget<object>_add_dropped__,
                      param_2,0), *(long *)(param_2 + 0x88) != 0 && (*(long *)(param_2 + 0x90) != 0)
        ))) {
      FUN_058572c8(param_1,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                   ,param_2,0);
    }
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
  }
  else {
    FUN_057294bc(param_1,param_2);
    FUN_0572a09c(param_1,param_2);
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    if ((*(int *)(param_2 + 0x84) == 1) ||
       ((*(int *)(param_2 + 0x84) == 0 && (*(int *)(param_1 + 0x68) == 1)))) {
      uVar8 = *(undefined8 *)(param_1 + 0x50);
    }
    else {
      uVar8 = 0;
    }
    uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_0582534c(uVar4,uVar7,uVar8,0);
  }
  puVar3 = PTR_DAT_067c9990;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0xc0) = uVar4;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_05132f8c(uVar7,uVar1,uVar8,uVar2,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    FUN_05773300(param_2,**(undefined8 **)(lVar6 + 0xb8),(*(undefined8 **)(lVar6 + 0xb8))[1],0);
    FUN_058572c8(param_1,*(undefined8 *)
                          Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_Item__
                 ,param_2,0);
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
  ;
  if (*(char *)(param_2 + 0x75) != '\0') {
    FUN_05857240(param_1,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
                 ,*(undefined8 *)Method_Unity_AppUI_UI_DropTarget<object>_add_dragStarted__,param_2,
                 0);
  }
  if (*(int *)(param_2 + 0x80) != 0x100) {
    FUN_05857240(param_1,*(undefined8 *)puVar3,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_Clear__
                 ,param_2,0);
  }
  if (*(long *)(param_2 + 0xa8) != 0) {
    uVar5 = FUN_05825608(*(long *)(param_2 + 0xa8),0);
    if ((uVar5 & 1) == 0) {
      FUN_05857240(param_1,*(undefined8 *)puVar3,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>__ctor__
                   ,param_2,0);
    }
    FUN_05725d60(param_1,param_2);
    return;
  }
LAB_0572a728:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



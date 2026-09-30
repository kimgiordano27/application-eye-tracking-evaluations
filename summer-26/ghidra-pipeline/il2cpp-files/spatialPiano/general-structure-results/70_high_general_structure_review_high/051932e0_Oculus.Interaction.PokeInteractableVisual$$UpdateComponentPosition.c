/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractableVisual$$UpdateComponentPosition
ENTRY_POINT: 051932e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


undefined8
Oculus_Interaction_PokeInteractableVisual__UpdateComponentPosition(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_06bba337 & 1) == 0) {
    FUN_02f08768(UnityEngine_UIElements_EventBase<DpiChangedEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<GeometryChangedEvent>_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_EventBase<IMEEvent>_TypeInfo);
    FUN_02f08768(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    DAT_06bba337 = 1;
  }
  puVar1 = 
  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
  ;
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x80), lVar4 != 0)) {
    lVar2 = *(long *)
             UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar5 = puVar3[4];
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo);
      FUN_04dfd2e8(lVar5,uVar6,
                   *(undefined8 *)UnityEngine_UIElements_EventBase<GeometryChangedEvent>_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar5;
    }
    uVar6 = FUN_033a7144(lVar4,lVar5,
                         *(undefined8 *)UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar4);
      lVar4 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0xb8);
    lVar2 = puVar3[5];
    if (lVar2 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar4);
        puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar3;
      lVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo);
      FUN_04dfd608(lVar2,uVar7,*(undefined8 *)UnityEngine_UIElements_EventBase<IMEEvent>_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar2;
    }
    uVar6 = FUN_0339a0e4(uVar6,lVar2,
                         *(undefined8 *)
                          UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_TypeInfo);
    return uVar6;
  }
  lVar2 = *(long *)UnityEngine_UIElements_EventBase<DpiChangedEvent>_TypeInfo;
  lVar4 = *(long *)(lVar2 + 0x38);
  if (lVar4 == 0) {
    FUN_02f41ef8(lVar2);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  return **(undefined8 **)(lVar4 + 0xb8);
}



/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.HttpClient$$MakeRequestAsync
ENTRY_POINT: 078096dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Lobbies_Http_HttpClient__MakeRequestAsync(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  uVar2 = FUN_065ce354();
  puVar1 = UnityEngine_UIElements_EventBase<MouseCaptureOutEvent>_TypeInfo;
  plVar4 = *(long **)(unaff_x19 + 0x18);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar3,*unaff_x21,0);
  }
  puVar1 = UnityEngine_UIElements_EventBase<MouseDownEvent>_TypeInfo;
  plVar4 = *(long **)(unaff_x19 + 0x20);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar3,*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo,
                         *(long *)(unaff_x19 + 0x28),*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)UnityEngine_UIElements_EventBase<IMGUIEvent>_TypeInfo,
                         *(long *)(unaff_x19 + 0x30),*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar2 = FUN_065cddf0(uVar2,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo,
                         *(long *)(unaff_x19 + 0x38),0);
  }
  return uVar2;
}



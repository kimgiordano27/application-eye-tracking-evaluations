/*
FUNCTION_NAME: Unity.Services.Lobbies.Models.UpdateRequest$$GetAsQueryParam
ENTRY_POINT: 07808fc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Lobbies_Models_UpdateRequest__GetAsQueryParam(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined1 uStack000000000000002c;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08486bc0);
  *(undefined1 *)(unaff_x21 + 0x347) = 1;
  puVar1 = PTR_DAT_084902d8;
  uVar7 = *unaff_x20;
  uStack000000000000002c = 0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar7 = FUN_065ce354(uVar7,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo,
                         *(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  puVar4 = UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo;
  puVar3 = UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo;
  puVar2 = UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo;
  plVar5 = *(long **)(unaff_x19 + 0x18);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar7 = FUN_065ce354(uVar7,*(undefined8 *)puVar2,uVar6,*(undefined8 *)puVar1,0);
  }
  puVar2 = UnityEngine_UIElements_EventBase<FocusInEvent>_TypeInfo;
  in_stack_00000008 = *(undefined8 *)puVar3;
  in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x20);
  in_stack_00000010 = 0xffffffffffffffff;
  uVar6 = FUN_06786e68(&stack0x00000008,0);
  uVar7 = FUN_065ce354(uVar7,*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar1,0);
  uStack000000000000002c = *(undefined1 *)(unaff_x19 + 0x24);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x28) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_066b8e40(&stack0x0000002c,0);
  FUN_065cddf0(uVar7,*(undefined8 *)puVar2,uVar6,0);
  return;
}



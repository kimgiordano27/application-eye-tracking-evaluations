/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.HttpClient$$.ctor
ENTRY_POINT: 078092bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Lobbies_Http_HttpClient___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0xbc0);
  if ((*(byte *)(unaff_x21 + 0x349) & 1) == 0) {
    FUN_03a8a718(UnityEngine_UIElements_EventBase<IMGUIEvent>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_EventBase<InputEvent>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_DynamicArray<Name>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(UnityEngine_UIElements_EventBase<KeyDownEvent>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486bc0);
    *(undefined1 *)(unaff_x21 + 0x349) = 1;
  }
  puVar2 = UnityEngine_UIElements_EventBase<KeyDownEvent>_TypeInfo;
  puVar1 = PTR_DAT_084902d8;
  uVar5 = *puVar4;
  in_stack_00000008 = 0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)UnityEngine_UIElements_EventBase<IMGUIEvent>_TypeInfo,
                         *(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar3 = FUN_0674f338(&stack0x00000008,0);
  uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar3,*(undefined8 *)puVar1,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar5 = FUN_065cddf0(uVar5,*(undefined8 *)UnityEngine_UIElements_EventBase<InputEvent>_TypeInfo,
                         *(long *)(unaff_x19 + 0x20),0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_065cddf0(uVar5,*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo,
                 *(long *)(unaff_x19 + 0x28),0);
  }
  return;
}



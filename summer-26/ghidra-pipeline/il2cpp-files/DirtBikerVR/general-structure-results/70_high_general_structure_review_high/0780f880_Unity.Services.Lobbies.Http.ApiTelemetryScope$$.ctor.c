/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.ApiTelemetryScope$$.ctor
ENTRY_POINT: 0780f880
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Lobbies_Http_ApiTelemetryScope___ctor(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084902d8);
  FUN_03a8a718(PTR_DAT_08486bc0);
  FUN_03a8a718(UnityEngine_UIElements_EventBase<MouseDownEvent>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x381) = 1;
  puVar1 = PTR_DAT_084902d8;
  uVar4 = *unaff_x20;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar4 = FUN_065ce354(uVar4,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo,
                         *(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar4 = FUN_065ce354(uVar4,*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo,
                         *(long *)(unaff_x19 + 0x18),*(undefined8 *)puVar1,0);
  }
  puVar1 = UnityEngine_UIElements_EventBase<MouseDownEvent>_TypeInfo;
  plVar2 = *(long **)(unaff_x19 + 0x20);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar4 = FUN_065cddf0(uVar4,*(undefined8 *)puVar1,uVar3,0);
    return uVar4;
  }
  return uVar4;
}



/*
FUNCTION_NAME: Unity.Services.Lobbies.Models.Detail$$SerializeAsPathParam
ENTRY_POINT: 07805d0c
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


void Unity_Services_Lobbies_Models_Detail__SerializeAsPathParam(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_08486bc0;
  if ((DAT_08987330 & 1) == 0) {
    FUN_03a8a718(System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo);
    FUN_03a8a718(System_Net_Http_Headers_ElementTryParser<string>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(PTR_DAT_08486bc0);
    DAT_08987330 = 1;
  }
  puVar2 = PTR_DAT_084902d8;
  uVar3 = *(undefined8 *)puVar1;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_065ce354(uVar3,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo,
                         *(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_065ce354(uVar3,*(undefined8 *)
                                System_Net_Http_Headers_ElementTryParser<string>_TypeInfo,
                         *(long *)(param_1 + 0x18),*(undefined8 *)puVar2,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_065cddf0(uVar3,*(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo,
                 *(long *)(param_1 + 0x20),0);
    return;
  }
  return;
}



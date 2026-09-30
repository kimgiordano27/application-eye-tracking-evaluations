/*
FUNCTION_NAME: Unity.Services.Lobbies.Models.UpdateRequest$$.ctor
ENTRY_POINT: 07804614
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Unity_Services_Lobbies_Models_UpdateRequest___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0xbc0);
  if ((*(byte *)(unaff_x21 + 0x322) & 1) == 0) {
    FUN_03a8a718(System_Net_Http_Headers_ElementTryParser<MediaTypeWithQualityHeaderValue>_TypeInfo)
    ;
    FUN_03a8a718(Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(PTR_DAT_08486bc0);
    *(undefined1 *)(unaff_x21 + 0x322) = 1;
  }
  puVar1 = PTR_DAT_084902d8;
  uVar6 = *puVar5;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)
                                System_Net_Http_Headers_ElementTryParser<MediaTypeWithQualityHeaderValue>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  puVar2 = Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_065cddf0(uVar6,*(undefined8 *)
                                UnityEngine_Rendering_DynamicArray<ProcessedProbeData>_TypeInfo,
                         *(long *)(unaff_x19 + 0x20),0);
    return uVar6;
  }
  return uVar6;
}



/*
FUNCTION_NAME: FUN_07af83b4
ENTRY_POINT: 07af83b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07af83b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
  if ((DAT_0899236e & 1) == 0) {
    FUN_03a8a718(Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
    FUN_03a8a718(UnityEngine_Timeline_Extrapolation_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_Eye_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_PostProcessing_EyeAdaptationParameter_TypeInfo);
    FUN_03a8a718(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_03a8a718(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    DAT_0899236e = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar4 = FUN_044e130c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar2);
  puVar3 = UnityEngine_Rendering_HighDefinition_Eye_TypeInfo;
  puVar2 = UnityEngine_Timeline_Extrapolation_TypeInfo;
  if (lVar4 != 0) {
    FUN_04de90b8(&local_48,lVar4,*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    while (uVar5 = FUN_061c1964(&local_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      FUN_07af8534(param_1,local_38);
    }
    FUN_061c1960(&local_48,*(undefined8 *)puVar2);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



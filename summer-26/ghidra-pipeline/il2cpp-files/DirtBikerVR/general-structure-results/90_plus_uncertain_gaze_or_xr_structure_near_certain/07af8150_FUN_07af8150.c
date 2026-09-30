/*
FUNCTION_NAME: FUN_07af8150
ENTRY_POINT: 07af8150
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07af8150(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0899236d & 1) == 0) {
    FUN_03a8a718(UnityEngine_Timeline_Extrapolation_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_Eye_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_PostProcessing_EyeAdaptationParameter_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_EyeCausticLUT_TypeInfo);
    FUN_03a8a718(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_03a8a718(UnityEngine_XR_Eyes_TypeInfo);
    FUN_03a8a718(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    FUN_03a8a718(RootMotion_FinalIK_FBIKChain_TypeInfo);
    DAT_0899236d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    if (lVar4 != 0) {
      FUN_04de90b8(&local_58,lVar4,*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo);
      puVar3 = UnityEngine_Rendering_HighDefinition_EyeCausticLUT_TypeInfo;
      puVar2 = UnityEngine_Rendering_HighDefinition_Eye_TypeInfo;
      while (uVar5 = FUN_061c1964(&local_58,*(undefined8 *)puVar2), uVar6 = local_48,
            (uVar5 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
          FUN_07ac9c48(uVar7,uVar6,0);
          (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),param_1,uVar7,*(undefined8 *)(lVar4 + 0x28));
        }
      }
      FUN_061c1960(&local_58,*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (iVar1 < 1) {
          return;
        }
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
        return;
      }
    }
  }
  else if (lVar4 != 0) {
    uVar5 = FUN_04de894c(lVar4,param_2,*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  UnityEngine_Rendering_HighDefinition_EyeCausticLUT_TypeInfo);
      FUN_07ac9c48(uVar6,param_2,0);
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),param_1,uVar6,*(undefined8 *)(lVar4 + 0x28));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_04de9ad0(*(long *)(param_1 + 0x10),param_2,
                   *(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



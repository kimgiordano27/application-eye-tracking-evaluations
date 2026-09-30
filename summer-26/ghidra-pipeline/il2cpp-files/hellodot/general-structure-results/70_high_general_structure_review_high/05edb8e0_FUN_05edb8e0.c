/*
FUNCTION_NAME: FUN_05edb8e0
ENTRY_POINT: 05edb8e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


bool FUN_05edb8e0(long param_1,int param_2,int param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((DAT_06a7e78b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_UIR_Allocator2D_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_ComponentModel_AmbientValueAttribute_TypeInfo);
    DAT_06a7e78b = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = System_Reflection_AmbiguousMatchException_TypeInfo;
  }
  else if (param_4 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = Unity_VisualScripting_AmbiguousOperatorException_TypeInfo;
  }
  else if (param_2 < 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = Unity_VisualScripting_AnalyticsIdentifier_TypeInfo;
  }
  else {
    if (0 < param_3) {
      *(undefined4 *)(param_4 + 0x18) = 0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      puVar4 = System_ComponentModel_AmbientValueAttribute_TypeInfo;
      if (*(int *)(param_1 + 0x18) == 0) {
        bVar1 = true;
      }
      else {
        FUN_0349f0c0(param_4,*(int *)(param_1 + 0x18),
                     *(undefined8 *)UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo);
        uVar2 = FUN_0349f6c0(param_4,*(undefined8 *)puVar4);
        if (DAT_06a7e6c0 == (code *)0x0) {
          DAT_06a7e6c0 = (code *)FUN_02ce79f8(
                                             "UnityEngine.Texture2D::GenerateAtlasImpl(UnityEngine.Vector2[],System.Int32,System.Int32,UnityEngine.Rect[])"
                                             );
        }
        (*DAT_06a7e6c0)(param_1,param_2,param_3,uVar2);
        bVar1 = *(int *)(param_4 + 0x18) != 0;
      }
      return bVar1;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar2 = thunk_FUN_02cea894();
    puVar4 = UnityEngine_Analytics_AnalyticsSessionInfo_TypeInfo;
  }
  uVar3 = thunk_FUN_02c7737c(puVar4);
  FUN_04e9e938(uVar2,uVar3,0);
  uVar3 = thunk_FUN_02c7737c(
                            Niantic_Platform_Analytics_Telemetry_AnalyticsTelemetryBaseEnvelopeReflection_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar3);
}



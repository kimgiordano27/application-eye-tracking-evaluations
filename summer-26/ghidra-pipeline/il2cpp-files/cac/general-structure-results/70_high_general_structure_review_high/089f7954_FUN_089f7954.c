/*
FUNCTION_NAME: FUN_089f7954
ENTRY_POINT: 089f7954
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_089f7954(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var;
  if ((DAT_096a480f & 1) == 0) {
    FUN_03f13384(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                );
    FUN_03f13384(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_var
                );
    FUN_03f13384(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                );
    FUN_03f13384(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                );
    FUN_03f13384(System_Reflection_Metadata_Ecma335_MetadataBuilder_AssemblyRefTableRow_var);
    FUN_03f13384(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var
                );
    DAT_096a480f = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_03f4e68c(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_var
                              );
    FUN_050369c4(lVar6,uVar7,
                 *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                 ,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_03f86000(plVar4,lVar6);
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = 
  UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
  ;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar5[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                              );
    FUN_072310c8(lVar8,uVar7,
                 *(undefined8 *)
                  System_Reflection_Metadata_Ecma335_MetadataBuilder_AssemblyRefTableRow_var,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar8;
    thunk_FUN_03f86000(plVar4,lVar8);
  }
  FUN_054d9e4c(param_1,lVar6,lVar8,10000,*(undefined8 *)puVar2);
  return;
}



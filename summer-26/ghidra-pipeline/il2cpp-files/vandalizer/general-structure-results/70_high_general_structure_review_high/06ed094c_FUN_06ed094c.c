/*
FUNCTION_NAME: FUN_06ed094c
ENTRY_POINT: 06ed094c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_06ed094c(uint *param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  if ((DAT_07a5865f & 1) == 0) {
    FUN_031f20f4(System_Runtime_Remoting_Channels_IClientChannelSinkProvider_TypeInfo);
    FUN_031f20f4(UnityEngine_UI_IClippable_TypeInfo);
    FUN_031f20f4(UnityEngine_UI_IClipper_TypeInfo);
    FUN_031f20f4(PTR_DAT_07607d38);
    FUN_031f20f4(System_ICloneable_TypeInfo);
    FUN_031f20f4(Unity_VisualScripting_ICloner_TypeInfo);
    FUN_031f20f4(System_Net_ICloseEx_TypeInfo);
    FUN_031f20f4(Unity_Services_Core_Configuration_Internal_ICloudProjectId_TypeInfo);
    FUN_031f20f4(PTR_DAT_07608918);
    FUN_031f20f4(System_Collections_ICollection_TypeInfo);
    FUN_031f20f4(Unity_Properties_ICollectionPropertyBagVisitor_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_ICollidersRef_TypeInfo);
    DAT_07a5865f = 1;
  }
  local_18 = **(undefined8 **)(*(long *)(PTR_DAT_0759b388 + 0x90) + 0xb8);
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)PTR_DAT_07607d38);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)PTR_DAT_07608918);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_06ed132c(&local_18,
                 *(undefined8 *)System_Runtime_Remoting_Channels_IClientChannelSinkProvider_TypeInfo
                );
    uVar1 = *param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)Unity_VisualScripting_ICloner_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)UnityEngine_UI_IClippable_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)UnityEngine_UI_IClipper_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)System_Net_ICloseEx_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)Oculus_Interaction_ICollidersRef_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_06ed132c(&local_18,
                 *(undefined8 *)Unity_Services_Core_Configuration_Internal_ICloudProjectId_TypeInfo)
    ;
    uVar1 = *param_1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)System_ICloneable_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)System_Collections_ICollection_TypeInfo);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    FUN_06ed132c(&local_18,*(undefined8 *)Unity_Properties_ICollectionPropertyBagVisitor_TypeInfo);
  }
  return local_18;
}



/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 051873c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 114
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w20;
  undefined8 uVar5;
  long *unaff_x23;
  
  thunk_FUN_02cd038c(param_1);
  puVar2 = PTR_DAT_066080b8;
  puVar1 = PTR_DAT_066080b0;
  lVar4 = *unaff_x23;
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar4);
      lVar4 = *unaff_x23;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608098);
    FUN_04a4f054(uVar3,uVar5,*(undefined8 *)PTR_DAT_066080a8,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = uVar3;
  }
  uVar3 = FUN_033efc10();
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  UnityEngine_UIElements_BaseField<object>__AlignLabel(uVar5,unaff_w20,uVar3,*(undefined8 *)puVar1);
  return uVar5;
}



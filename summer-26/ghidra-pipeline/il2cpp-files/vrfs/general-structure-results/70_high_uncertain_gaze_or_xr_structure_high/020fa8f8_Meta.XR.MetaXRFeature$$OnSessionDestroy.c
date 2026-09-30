/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 020fa8f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  FUN_04278ab8();
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_01656ef8();
  uVar1 = FUN_0160edfc(*unaff_x21,3);
  FUN_02df8d44(uVar1,*unaff_x23,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_01656ef8(puVar2,uVar1);
  uVar1 = FUN_0160edfc(*unaff_x21,5);
  FUN_02df8d44(uVar1,*unaff_x22,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_01656ef8(puVar2,uVar1);
  return;
}



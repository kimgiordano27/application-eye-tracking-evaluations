/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 020fa82c
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


void Meta_XR_MetaXRFeature__OnSessionExiting(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *puVar3;
  long unaff_x24;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_06d925b0;
  puVar4 = *(undefined8 **)(unaff_x24 + 0xe10);
  puVar3 = *(undefined8 **)(unaff_x23 + 0x38);
  FUN_04277c5c(param_2,*param_1);
  FUN_04278ab8(param_2,10,0x37,*puVar4);
  FUN_04278ab8(param_2,0x15,0x37,*puVar4);
  FUN_04278ab8(param_2,0x16,0x37,*puVar4);
  FUN_04278ab8(param_2,0x17,0x37,*puVar4);
  FUN_04278ab8(param_2,0x13,0x37,*puVar4);
  FUN_04278ab8(param_2,0x14,0x37,*puVar4);
  FUN_04278ab8(param_2,0x11,0x37,*puVar4);
  FUN_04278ab8(param_2,0x12,0x37,*puVar4);
  FUN_04278ab8(param_2,0x1a,0x37,*puVar4);
  FUN_04278ab8(param_2,0x1d,0x37,*puVar4);
  FUN_04278ab8(param_2,0x20,0x37,*puVar4);
  FUN_04278ab8(param_2,0x23,0x37,*puVar4);
  FUN_04278ab8(param_2,0x26,0x37,*puVar4);
  FUN_04278ab8(param_2,0x29,0x37,*puVar4);
  FUN_04278ab8(param_2,0x2c,0x37,*puVar4);
  FUN_04278ab8(param_2,0x2f,0x37,*puVar4);
  FUN_04278ab8(param_2,0x32,0x37,*puVar4);
  FUN_04278ab8(param_2,0x35,0x37,*puVar4);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar4 = param_2;
  thunk_FUN_01656ef8(puVar4,param_2);
  uVar2 = FUN_0160edfc(*unaff_x21,3);
  FUN_02df8d44(uVar2,*puVar3,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar4 = uVar2;
  thunk_FUN_01656ef8(puVar4,uVar2);
  uVar2 = FUN_0160edfc(*unaff_x21,5);
  FUN_02df8d44(uVar2,*(undefined8 *)puVar1,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar4 = uVar2;
  thunk_FUN_01656ef8(puVar4,uVar2);
  return;
}



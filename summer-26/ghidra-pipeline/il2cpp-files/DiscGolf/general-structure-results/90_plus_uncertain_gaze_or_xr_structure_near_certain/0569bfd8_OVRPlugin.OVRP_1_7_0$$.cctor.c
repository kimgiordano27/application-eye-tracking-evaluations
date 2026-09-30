/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 0569bfd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_6
*/


void OVRPlugin_OVRP_1_7_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long unaff_x24;
  undefined8 *puVar6;
  long unaff_x25;
  undefined8 *puVar7;
  long unaff_x26;
  
  puVar2 = Oculus_Platform_Request<bool>_TypeInfo;
  puVar1 = Oculus_Platform_Request<BlockedUserList>_TypeInfo;
  puVar7 = *(undefined8 **)(unaff_x25 + 0x710);
  puVar4 = *(undefined8 **)(unaff_x20 + 0x718);
  puVar6 = *(undefined8 **)(unaff_x24 + 0x228);
  puVar5 = *(undefined8 **)(unaff_x23 + 0x620);
  if ((*(byte *)(unaff_x26 + 0x879) & 1) == 0) {
    FUN_02d965b8(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AchievementProgressList>_TypeInfo);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<bool>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<BlockedUserList>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fd228);
    *(undefined1 *)(unaff_x26 + 0x879) = 1;
  }
  uVar3 = thunk_FUN_02dd3144(*puVar7);
  FUN_04e92874(uVar3,*puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x10),uVar3);
  uVar3 = thunk_FUN_02dd3144(*puVar6);
  FUN_0400f9fc(uVar3,0,*puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x18),uVar3);
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0400f9fc(uVar3,0,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x20),uVar3);
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0400f9fc(uVar3,0,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x28),uVar3);
  FUN_0552aca4(param_1,0);
  return;
}



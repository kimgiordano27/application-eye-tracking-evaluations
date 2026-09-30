/*
FUNCTION_NAME: FUN_054ebb54
ENTRY_POINT: 054ebb54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_054ebb54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar7 = OVRPlugin_OVRP_1_41_0_TypeInfo;
  if ((DAT_066d1283 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e400);
    FUN_02b3c81c(PTR_DAT_0631e420);
    FUN_02b3c81c(PTR_DAT_0631e428);
    FUN_02b3c81c(PTR_DAT_0632ce70);
    FUN_02b3c81c(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e360);
    FUN_02b3c81c(PTR_DAT_06337d18);
    FUN_02b3c81c(PTR_DAT_06321760);
    FUN_02b3c81c(PTR_DAT_0632cea8);
    FUN_02b3c81c(PTR_DAT_0632ceb8);
    FUN_02b3c81c(PTR_DAT_06336f98);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseSlider<int>_set_pageSize__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseSlider<float>__ctor__);
    FUN_02b3c81c(System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo);
    FUN_02b3c81c(System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_066d1283 = 1;
  }
  puVar11 = Method_UnityEngine_UIElements_BaseSlider<float>__ctor__;
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
  ;
  puVar9 = System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo;
  puVar8 = System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo;
  puVar6 = PTR_DAT_06337d18;
  puVar5 = PTR_DAT_0632cea8;
  puVar4 = PTR_DAT_0632ce70;
  puVar3 = PTR_DAT_06321760;
  puVar2 = PTR_DAT_0631e360;
  puVar1 = PTR_DAT_06312310;
  uVar13 = *(undefined8 *)puVar7;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar13 = FUN_04d8a7b0(uVar13,0);
  **(undefined8 **)(*(long *)puVar9 + 0xb8) = uVar13;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar9 + 0xb8),uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar2,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar6,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar3,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar5,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar11,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar4,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x48) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x68) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x90) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar8,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x10) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x18) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x38) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x68);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x30) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x70);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x40) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x78);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x50) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x80);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x70) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x88);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)puVar10,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x90);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x80) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x98);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x78) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xa0);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xa8);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e420,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xb0);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(long *)(puVar1 + 0x28) + 0x20,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xb8);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e400,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xc0);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 200);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_06336f98,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xd0);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0632ceb8,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xd8);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  uVar13 = FUN_04d8a7b0(*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_set_pageSize__,
                        0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe0);
  *puVar12 = uVar13;
  thunk_FUN_02bb0e9c(puVar12,uVar13);
  return;
}



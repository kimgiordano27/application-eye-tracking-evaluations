/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<SceneRef,-AsyncOperationHandle<SceneInstance>>$$ContainsValue
ENTRY_POINT: 02a07da4
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4
System_Collections_Generic_Dictionary<SceneRef,_AsyncOperationHandle<SceneInstance>>__ContainsValue
          (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_SendEvent";
  uStack0000000000000018 = 0xe;
  uStack0000000000000028 = 0x10;
  uStack0000000000000020 = DAT_0533f8a8;
  uStack000000000000002c = 0;
  uVar2 = thunk_FUN_015d07f0();
  *(undefined8 *)(unaff_x21 + 0x6e8) = uVar2;
  uVar2 = thunk_FUN_015d0c84();
  uVar3 = thunk_FUN_015d0c84();
  uVar1 = (**(code **)(unaff_x21 + 0x6e8))(uVar2,uVar3);
  thunk_FUN_015d0c78(uVar2);
  thunk_FUN_015d0c78(uVar3);
  return uVar1;
}



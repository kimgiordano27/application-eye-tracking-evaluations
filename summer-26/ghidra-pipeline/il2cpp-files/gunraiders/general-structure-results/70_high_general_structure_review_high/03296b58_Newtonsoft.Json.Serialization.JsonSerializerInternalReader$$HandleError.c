/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 03296b58
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x21 + 0xc1c) = 1;
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar1 = *unaff_x20;
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    lVar3 = unaff_x19[0x18];
    uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
    lVar1 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
                              );
    FUN_03272b64(lVar1,lVar3,uVar2,0);
  }
  else {
    lVar1 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
                              );
    FUN_03272974(lVar1,0);
  }
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x140) = (char)unaff_x19[2];
    thunk_FUN_01c21c38(0);
    thunk_FUN_01c21c38();
    unaff_x19[7] = lVar1;
    thunk_FUN_01c21c38();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



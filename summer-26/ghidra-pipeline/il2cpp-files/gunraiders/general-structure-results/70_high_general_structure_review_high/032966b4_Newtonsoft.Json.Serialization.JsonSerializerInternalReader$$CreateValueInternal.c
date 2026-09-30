/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 032966b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
               (long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + -8) == param_3) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x10) = 1;
    thunk_FUN_01c21c38();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
      thunk_FUN_01c21c38();
      uVar2 = FUN_0328915c(uVar2,0);
      thunk_FUN_01c21c38();
      *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    }
    lVar1 = *(long *)(unaff_x19 + 0x38);
    thunk_FUN_01c21c38();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
      thunk_FUN_01c21c38();
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_03274fd0(uVar2,0);
      thunk_FUN_01c21c38();
      *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    }
    lVar1 = *(long *)(unaff_x19 + 0x40);
    thunk_FUN_01c21c38();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
      thunk_FUN_01c21c38();
      uVar2 = FUN_0328a808(uVar2,0);
      thunk_FUN_01c21c38();
      *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}



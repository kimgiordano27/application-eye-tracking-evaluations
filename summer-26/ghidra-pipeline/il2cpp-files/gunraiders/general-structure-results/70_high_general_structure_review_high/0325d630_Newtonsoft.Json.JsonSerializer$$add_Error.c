/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 0325d630
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


void Newtonsoft_Json_JsonSerializer__add_Error(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  _in_stack_00000040 = FUN_025a27a4(param_2,0,**(undefined8 **)(param_1 + 0x188));
  uVar3 = System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__get_Item
                    (&stack0x00000040,
                     *(undefined8 *)System_Xml_Serialization_XmlArrayItemAttributes_TypeInfo);
  if ((uVar3 & 1) == 0) {
    in_stack_00000058._4_4_ = 0;
    *in_stack_00000068 = 0;
    *(undefined1 (*) [16])(in_stack_00000068 + 0x12) = _in_stack_00000040;
    FUN_021e0048(in_stack_00000068 + 2,&stack0x00000040,in_stack_00000068,
                 *(undefined8 *)
                  Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationBase<SceneInstance>_get_IsRunning__
                );
    uVar2 = 0;
    iVar6 = 4;
  }
  else {
    uVar2 = FUN_0282d0a8(&stack0x00000040,
                         *(undefined8 *)System_Xml_Serialization_XmlArrayItemAttribute_TypeInfo);
    lVar7 = *(long *)(in_stack_00000068 + 0xc);
    if (lVar7 == 0) {
      if (uVar2 != 0) {
        FUN_032f1cb4(0);
      }
      in_stack_00000030 = 0;
      uStack0000000000000038 = 0;
    }
    else {
      if (*(uint *)(lVar7 + 0x18) < uVar2) {
        FUN_032f1cb4(0);
      }
      in_stack_00000030 = lVar7 + 0x20;
      uStack0000000000000038 = uVar2;
    }
    uStack000000000000003c = 0;
    auVar8 = FUN_02579218(in_stack_00000068 + 0xe,
                          *(undefined8 *)MQTTnet_MqttApplicationMessageBuilder_TypeInfo);
    FUN_030acf14(&stack0x00000030,auVar8._0_8_,auVar8._8_8_,
                 *(undefined8 *)MQTTnet_Client_MqttApplicationMessageReceivedEventArgs_TypeInfo);
    iVar6 = 5;
  }
  FUN_01b8798c(&stack0x00000008);
  uVar1 = in_stack_00000018;
  if (iVar6 == 0) {
    puVar5 = in_stack_00000068 + 2;
    *in_stack_00000068 = 0xfffffffe;
    uVar4 = thunk_FUN_01c273e8(
                              Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_InvokeAsync__
                              );
    FUN_026db630(puVar5,uVar1,uVar4);
  }
  else if (iVar6 == 5) {
    *in_stack_00000068 = 0xfffffffe;
    FUN_026db5a0(in_stack_00000068 + 2,uVar2,
                 *(undefined8 *)
                  Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_AddHandler__);
  }
  return;
}



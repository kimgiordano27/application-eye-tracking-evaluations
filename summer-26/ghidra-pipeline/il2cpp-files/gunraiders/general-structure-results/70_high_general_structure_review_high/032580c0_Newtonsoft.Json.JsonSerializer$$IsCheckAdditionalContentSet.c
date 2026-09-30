/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 032580c0
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


/* WARNING: Removing unreachable block (ram,0x03258174) */
/* WARNING: Removing unreachable block (ram,0x03258314) */

void Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394();
  }
  uVar4 = FUN_0257955c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000010;
    FUN_021e00d0(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    lVar3 = *(long *)(*(long *)Reign_MobileInputCapture_MouseVelocityMode_TypeInfo + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    iVar2 = FUN_02579678(&stack0x00000010,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
    iVar1 = unaff_x19[0x1a];
    if (unaff_w24 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar3 = FUN_03236770();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03338b98(lVar3,0);
    }
    *unaff_x19 = 0xfffffffe;
    FUN_026db5a0(unaff_x19 + 2,iVar1 + iVar2,
                 *(undefined8 *)
                  Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_AddHandler__);
  }
  return;
}



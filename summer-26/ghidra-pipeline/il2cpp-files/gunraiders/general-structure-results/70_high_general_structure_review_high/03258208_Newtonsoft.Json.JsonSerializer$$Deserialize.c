/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 03258208
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03258174) */
/* WARNING: Removing unreachable block (ram,0x03258314) */

void Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 in_w8;
  undefined8 in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x23;
  int unaff_w24;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x10) = in_x9;
  unaff_x19[0x12] = in_w8;
  *(undefined4 *)(unaff_x20 + 0x3c) = 0;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  if (0 < *(int *)(unaff_x20 + 0x44)) {
    lVar7 = FUN_0323745c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    _in_stack_00000020 = FUN_0334498c(lVar7,0,0);
    uVar8 = FUN_03201e70(&stack0x00000020,0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      FUN_021e0158(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    FUN_03201ea0(&stack0x00000020,0);
  }
  iVar3 = FUN_02ec31b4(unaff_x19 + 0xe,*(undefined8 *)MQTTnet_MqttApplicationMessage_TypeInfo);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (iVar3 < *(int *)(unaff_x20 + 0x38)) {
    auVar10 = FUN_03236cbc();
    plVar6 = *(long **)(unaff_x20 + 0x28);
    lVar7 = *(long *)(unaff_x20 + 0x30);
    uVar1 = *(uint *)(unaff_x20 + 0x38);
    if (lVar7 == 0) {
      if (uVar1 != 0) {
        auVar10 = FUN_032f1cb4(0);
      }
      lVar7 = 0;
      lVar9 = 0;
    }
    else {
      if (*(uint *)(lVar7 + 0x18) < uVar1) {
        auVar10 = FUN_032f1cb4(0);
      }
      lVar9 = (ulong)uVar1 << 0x20;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar10._0_8_,auVar10._8_8_,lVar9);
    }
    auVar10 = (**(code **)(*plVar6 + 0x2d8))
                        (plVar6,lVar7,lVar9,*(undefined8 *)(unaff_x19 + 0x14),
                         *(undefined8 *)(*plVar6 + 0x2e0));
    lVar7 = *(long *)MQTTnet_Formatter_MqttBufferReader_TypeInfo;
    uVar2 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_01c72394();
      uVar2 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_01c72394();
    }
    if ((*(byte *)(*(long *)(*(long *)UnityEngine_UIElements_MouseUpEvent_TypeInfo + 0x20) + 0x135)
        & 1) == 0) {
      FUN_01c72394();
    }
    in_stack_00000018 = auVar10._8_8_ & 0xffffffffffff;
    lVar7 = *(long *)(*(long *)UnityEngine_Scripting_APIUpdating_MovedFromAttribute_TypeInfo + 0x20)
    ;
    in_stack_00000010 = auVar10._0_8_;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    uVar8 = FUN_0257955c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 3;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000010;
      FUN_021e00d0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar7 = *(long *)(*(long *)Reign_MobileInputCapture_MouseVelocityMode_TypeInfo + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    uVar4 = FUN_02579678(&stack0x00000010,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x40) = uVar4;
    FUN_02579218(unaff_x19 + 0xe,*(undefined8 *)MQTTnet_MqttApplicationMessageBuilder_TypeInfo);
    iVar5 = FUN_03237594();
    iVar3 = unaff_x19[0x12];
  }
  else {
    unaff_x19[0x1a] = unaff_x19[0x12];
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar10 = (**(code **)(*plVar6 + 0x2d8))
                        (plVar6,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar6 + 0x2e0));
    lVar7 = *(long *)MQTTnet_Formatter_MqttBufferReader_TypeInfo;
    uVar2 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_01c72394();
      uVar2 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_01c72394();
    }
    if ((*(byte *)(*(long *)(*(long *)UnityEngine_UIElements_MouseUpEvent_TypeInfo + 0x20) + 0x135)
        & 1) == 0) {
      FUN_01c72394();
    }
    in_stack_00000018 = auVar10._8_8_ & 0xffffffffffff;
    lVar7 = *(long *)(*(long *)UnityEngine_Scripting_APIUpdating_MovedFromAttribute_TypeInfo + 0x20)
    ;
    in_stack_00000010 = auVar10._0_8_;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    uVar8 = FUN_0257955c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000010;
      FUN_021e00d0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar7 = *(long *)(*(long *)Reign_MobileInputCapture_MouseVelocityMode_TypeInfo + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    iVar5 = FUN_02579678(&stack0x00000010,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    iVar3 = unaff_x19[0x1a];
  }
  if (unaff_w24 < 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar7 = FUN_03236770();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03338b98(lVar7,0);
  }
  *unaff_x19 = 0xfffffffe;
  FUN_026db5a0(unaff_x19 + 2,iVar3 + iVar5,
               *(undefined8 *)
                Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_AddHandler__);
  return;
}



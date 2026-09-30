/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 03257e64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03258174) */
/* WARNING: Removing unreachable block (ram,0x03258314) */

void Newtonsoft_Json_JsonConvert__DeserializeObject(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar9;
  int unaff_w24;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  if (param_1 < *(int *)(unaff_x20 + 0x38)) {
    auVar10 = FUN_03236cbc();
    plVar7 = *(long **)(unaff_x20 + 0x28);
    lVar9 = *(long *)(unaff_x20 + 0x30);
    uVar1 = *(uint *)(unaff_x20 + 0x38);
    if (lVar9 == 0) {
      if (uVar1 != 0) {
        auVar10 = FUN_032f1cb4(0);
      }
      lVar9 = 0;
      lVar8 = 0;
    }
    else {
      if (*(uint *)(lVar9 + 0x18) < uVar1) {
        auVar10 = FUN_032f1cb4(0);
      }
      lVar8 = (ulong)uVar1 << 0x20;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar10._0_8_,auVar10._8_8_,lVar8);
    }
    auVar10 = (**(code **)(*plVar7 + 0x2d8))
                        (plVar7,lVar9,lVar8,*(undefined8 *)(unaff_x19 + 0x14),
                         *(undefined8 *)(*plVar7 + 0x2e0));
    lVar9 = *(long *)MQTTnet_Formatter_MqttBufferReader_TypeInfo;
    uVar3 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_01c72394();
      uVar3 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    }
    if ((uVar3 & 1) == 0) {
      FUN_01c72394();
    }
    if ((*(byte *)(*(long *)(*(long *)UnityEngine_UIElements_MouseUpEvent_TypeInfo + 0x20) + 0x135)
        & 1) == 0) {
      FUN_01c72394();
    }
    in_stack_00000018 = auVar10._8_8_ & 0xffffffffffff;
    lVar9 = *(long *)(*(long *)UnityEngine_Scripting_APIUpdating_MovedFromAttribute_TypeInfo + 0x20)
    ;
    in_stack_00000010 = auVar10._0_8_;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    uVar6 = FUN_0257955c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 3;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000010;
      FUN_021e00d0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar9 = *(long *)(*(long *)Reign_MobileInputCapture_MouseVelocityMode_TypeInfo + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    uVar4 = FUN_02579678(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x40) = uVar4;
    FUN_02579218(unaff_x19 + 0xe,*(undefined8 *)MQTTnet_MqttApplicationMessageBuilder_TypeInfo);
    iVar5 = FUN_03237594();
    iVar2 = unaff_x19[0x12];
  }
  else {
    unaff_x19[0x1a] = unaff_x19[0x12];
    plVar7 = *(long **)(unaff_x20 + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar10 = (**(code **)(*plVar7 + 0x2d8))
                        (plVar7,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar7 + 0x2e0));
    lVar9 = *(long *)MQTTnet_Formatter_MqttBufferReader_TypeInfo;
    uVar3 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_01c72394();
      uVar3 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    }
    if ((uVar3 & 1) == 0) {
      FUN_01c72394();
    }
    if ((*(byte *)(*(long *)(*(long *)UnityEngine_UIElements_MouseUpEvent_TypeInfo + 0x20) + 0x135)
        & 1) == 0) {
      FUN_01c72394();
    }
    in_stack_00000018 = auVar10._8_8_ & 0xffffffffffff;
    lVar9 = *(long *)(*(long *)UnityEngine_Scripting_APIUpdating_MovedFromAttribute_TypeInfo + 0x20)
    ;
    in_stack_00000010 = auVar10._0_8_;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    uVar6 = FUN_0257955c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000010;
      FUN_021e00d0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar9 = *(long *)(*(long *)Reign_MobileInputCapture_MouseVelocityMode_TypeInfo + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    iVar5 = FUN_02579678(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
    iVar2 = unaff_x19[0x1a];
  }
  if (unaff_w24 < 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar9 = FUN_03236770();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03338b98(lVar9,0);
  }
  *unaff_x19 = 0xfffffffe;
  FUN_026db5a0(unaff_x19 + 2,iVar2 + iVar5,
               *(undefined8 *)
                Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_AddHandler__);
  return;
}



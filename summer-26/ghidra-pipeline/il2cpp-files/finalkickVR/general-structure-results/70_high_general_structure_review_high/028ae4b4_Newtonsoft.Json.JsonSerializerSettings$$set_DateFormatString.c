/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 028ae4b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 uVar6;
  uint uStack000000000000000c;
  long in_stack_00000040;
  undefined4 uStack000000000000005c;
  int iStack0000000000000088;
  
  iStack0000000000000088 = *(int *)(unaff_x29 + -100);
  if (iStack0000000000000088 < 1) {
    if (*(int *)(unaff_x29 + -100) < -0x1c) {
      puVar5 = *(undefined8 **)(in_stack_00000040 + 0x1c8);
      bVar3 = *(byte *)(unaff_x29 + -0x68);
      *(undefined8 *)(in_stack_00000040 + 0x1f8) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x1f0) = 0;
      Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
                (unaff_x29 + -0x28,0,0,0,bVar3 & 1,0x1c);
      uVar6 = *(undefined8 *)(in_stack_00000040 + 0x1f0);
      puVar5[1] = *(undefined8 *)(in_stack_00000040 + 0x1f8);
      *puVar5 = uVar6;
    }
    else {
      puVar5 = *(undefined8 **)(in_stack_00000040 + 0x1c8);
      uVar1 = *(undefined4 *)(unaff_x29 + -0x7c);
      bVar3 = *(byte *)(unaff_x29 + -0x68);
      iVar2 = *(int *)(unaff_x29 + -100);
      *(undefined8 *)(in_stack_00000040 + 0x1e8) = 0;
      *(undefined8 *)(in_stack_00000040 + 0x1e0) = 0;
      uStack000000000000005c =
           (undefined4)((ulong)*(undefined8 *)(in_stack_00000040 + 0x1a0) >> 0x20);
      Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
                (unaff_x29 + -0x38,*(ulong *)(in_stack_00000040 + 0x1a0) & 0xffffffff,
                 uStack000000000000005c,uVar1,bVar3 & 1,-iVar2);
      uVar6 = *(undefined8 *)(in_stack_00000040 + 0x1e0);
      puVar5[1] = *(undefined8 *)(in_stack_00000040 + 0x1e8);
      *puVar5 = uVar6;
    }
    *(undefined1 *)(unaff_x29 + -0x39) = 1;
  }
  else {
    *(undefined1 *)(unaff_x29 + -0x39) = 0;
  }
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x39);
  lVar4 = tpidr_el0;
  lVar4 = *(long *)(lVar4 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar4 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}



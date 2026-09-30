/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 0177cf80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
               (undefined1 param_1 [16])

{
  bool in_ZR;
  bool in_CY;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  uStack0000000000000078 = param_1._8_2_;
  uStack000000000000007a = param_1._10_6_;
  uStack0000000000000008 = 0;
  uStack0000000000000020 = uStack0000000000000010;
  uStack0000000000000028 = uStack0000000000000018;
  uStack0000000000000030 = uStack0000000000000010;
  uStack0000000000000038 = uStack0000000000000018;
  uStack0000000000000040 = uStack0000000000000010;
  uStack0000000000000048 = uStack0000000000000018;
  uStack0000000000000050 = uStack0000000000000010;
  uStack0000000000000058 = uStack0000000000000018;
  uStack0000000000000060 = uStack0000000000000010;
  uStack0000000000000068 = uStack0000000000000018;
  uStack0000000000000070 = uStack0000000000000010;
  if (!in_CY || in_ZR) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_0177d0b8();
  }
  else {
    if ((unaff_w19 >> 9 & 1) == 0) {
      uStack0000000000000082 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007a = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000048 = 0;
      uStack0000000000000040 = 0;
      uStack0000000000000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000018 = 0;
      uStack0000000000000010 = 0;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0177bc48();
      uVar1 = FUN_0177b178(&stack0x00000010,&stack0x00000008);
      if ((uVar1 & 1) == 0) {
        FUN_00acb0a4(*unaff_x25);
                    /* WARNING: Subroutine does not return */
        FUN_0177b870(1,*unaff_x24);
      }
      goto LAB_0177d070;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_0177c3cc();
  }
  if ((uVar1 & 1) == 0) {
    FUN_00acb0a4(*unaff_x25);
                    /* WARNING: Subroutine does not return */
    FUN_0177b870(0,*unaff_x24);
  }
LAB_0177d070:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack0000000000000008);
}



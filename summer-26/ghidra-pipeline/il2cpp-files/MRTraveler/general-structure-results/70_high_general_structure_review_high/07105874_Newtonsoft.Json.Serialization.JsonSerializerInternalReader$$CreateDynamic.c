/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 07105874
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_w8;
  undefined4 uVar4;
  long unaff_x19;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  double dVar5;
  double unaff_d8;
  int iStack000000000000000c;
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
  
  *(undefined1 *)(unaff_x23 + 0x1d9) = in_w8;
  iStack000000000000000c = 0;
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
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_07103a7c();
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  uStack0000000000000080 = 0;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x45) {
LAB_071059ac:
      uVar4 = 0xf;
      if (0xe < iStack000000000000000c) {
        uVar4 = 0x11;
      }
    }
    else if (uVar1 == 0x47) {
LAB_07105994:
      uVar4 = 0x11;
      if (iStack000000000000000c < 0x10) {
        uVar4 = 0xf;
      }
    }
    else {
      if (uVar1 == 0x52) goto LAB_07105914;
LAB_071058f4:
      uVar4 = 0xf;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07105d30(uVar4,&stack0x00000010);
    if (uStack0000000000000010._4_4_ == 0x7fffffff) {
      uVar3 = FUN_0710f9c4(&stack0x00000010,0);
joined_r0x07105a8c:
      if (unaff_x19 == 0) goto LAB_07105af8;
      if ((uVar3 & 1) == 0) {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
      }
      goto LAB_07105ac8;
    }
    if (uStack0000000000000010._4_4_ != -0x80000000) {
      if (uVar1 == 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0710438c();
      }
      else {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
LAB_07105ab8:
        FUN_07103dfc();
      }
      uVar2 = 0;
      goto LAB_07105ac8;
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_071059ac;
    if (uVar1 == 0x67) goto LAB_07105994;
    if (uVar1 != 0x72) goto LAB_071058f4;
LAB_07105914:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07105d30(0xf,&stack0x00000010);
    if (uStack0000000000000010._4_4_ == 0x7fffffff) {
      uVar3 = FUN_0710f9c4(&stack0x00000010,0);
      goto joined_r0x07105a8c;
    }
    if (uStack0000000000000010._4_4_ != -0x80000000) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar5 = (double)FUN_07106110(&stack0x00000010);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (dVar5 != unaff_d8) {
        FUN_07105d30(0x11,&stack0x00000010);
      }
      goto LAB_07105ab8;
    }
  }
  if (unaff_x19 == 0) {
LAB_07105af8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
LAB_07105ac8:
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05e1d5f0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  double dVar4;
  float unaff_s8;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined2 in_stack_00000078;
  undefined6 uStack000000000000007a;
  undefined2 in_stack_00000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  FUN_03642964(PTR_DAT_07a115a8);
  *(undefined1 *)(unaff_x23 + 0xcc2) = 1;
  iStack000000000000000c = 0;
  uStack0000000000000082 = 0;
  in_stack_00000080 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007a = 0;
  in_stack_00000070 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_05e1a718();
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000082 = 0;
  uStack000000000000007a = 0;
  in_stack_00000080 = 0;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x45) {
LAB_05e1d740:
      uVar3 = 7;
      if (6 < iStack000000000000000c) {
        uVar3 = 9;
      }
      goto LAB_05e1d754;
    }
    if (uVar1 == 0x47) {
LAB_05e1d728:
      uVar3 = 9;
      if (iStack000000000000000c < 8) {
        uVar3 = 7;
      }
      goto LAB_05e1d754;
    }
    if (uVar1 != 0x52) goto LAB_05e1d680;
LAB_05e1d6a0:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e1cac4((double)unaff_s8,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        dVar4 = (double)FUN_05e1cf70(&stack0x00000010);
        if ((float)dVar4 == unaff_s8) {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_05e1cac4((double)unaff_s8,9,&stack0x00000010);
        }
        goto FUN_05e1d7e4;
      }
      goto LAB_05e1d790;
    }
LAB_05e1d79c:
    uVar2 = FUN_05e26c68(&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_05e1d888;
      uVar2 = *(ulong *)(unaff_x19 + 0x70);
    }
    else {
      if (unaff_x19 == 0) {
LAB_05e1d888:
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_05e1d89c;
      }
      uVar2 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_05e1d740;
    if (uVar1 == 0x67) goto LAB_05e1d728;
    if (uVar1 == 0x72) goto LAB_05e1d6a0;
LAB_05e1d680:
    uVar3 = 7;
LAB_05e1d754:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e1cac4((double)unaff_s8,uVar3,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_05e1d79c;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_05e1d790:
      if (unaff_x19 != 0) {
        uVar2 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_05e1d82c;
      }
      goto LAB_05e1d888;
    }
    if (uVar1 == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      Newtonsoft_Json_JsonContainerAttribute__set_ItemConverterType();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
FUN_05e1d7e4:
      FUN_05e1aa94();
    }
    uVar2 = 0;
  }
LAB_05e1d82c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05e1d89c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



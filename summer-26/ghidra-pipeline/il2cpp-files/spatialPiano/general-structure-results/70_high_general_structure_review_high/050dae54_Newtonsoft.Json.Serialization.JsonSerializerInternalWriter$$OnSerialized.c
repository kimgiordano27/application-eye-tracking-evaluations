/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 050dae54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x25;
  long *unaff_x26;
  double dVar4;
  float unaff_s8;
  undefined8 in_stack_00000008;
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
  
  uVar1 = FUN_050d7f3c();
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
LAB_050daf64:
      uVar3 = 7;
      if (6 < in_stack_00000008._4_4_) {
        uVar3 = 9;
      }
      goto LAB_050daf78;
    }
    if (uVar1 == 0x47) {
LAB_050daf4c:
      uVar3 = 9;
      if (in_stack_00000008._4_4_ < 8) {
        uVar3 = 7;
      }
      goto LAB_050daf78;
    }
    if (uVar1 != 0x52) goto LAB_050daea4;
LAB_050daec4:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050da2e8((double)unaff_s8,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        dVar4 = (double)FUN_050da794(&stack0x00000010);
        if ((float)dVar4 == unaff_s8) {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050da2e8((double)unaff_s8,9,&stack0x00000010);
        }
        goto LAB_050db008;
      }
      goto LAB_050dafb4;
    }
LAB_050dafc0:
    uVar2 = FUN_050e41c4(&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_050db0ac;
      uVar2 = *(ulong *)(unaff_x19 + 0x70);
    }
    else {
      if (unaff_x19 == 0) {
LAB_050db0ac:
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_050db0c0;
      }
      uVar2 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_050daf64;
    if (uVar1 == 0x67) goto LAB_050daf4c;
    if (uVar1 == 0x72) goto LAB_050daec4;
LAB_050daea4:
    uVar3 = 7;
LAB_050daf78:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050da2e8((double)unaff_s8,uVar3,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_050dafc0;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_050dafb4:
      if (unaff_x19 != 0) {
        uVar2 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_050db050;
      }
      goto LAB_050db0ac;
    }
    if (uVar1 == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050d8884();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
LAB_050db008:
      FUN_050d82b8();
    }
    uVar2 = 0;
  }
LAB_050db050:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_050db0c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 074e9640
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long *plVar4;
  double dVar5;
  double unaff_d8;
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
  
  plVar4 = *(long **)(unaff_x26 + 0x500);
  if ((*(byte *)(unaff_x23 + 0xef9) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f9f500);
    *(undefined1 *)(unaff_x23 + 0xef9) = 1;
  }
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
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_074e777c();
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
LAB_074e9794:
      uVar3 = 0xf;
      if (0xe < iStack000000000000000c) {
        uVar3 = 0x11;
      }
      goto LAB_074e97a8;
    }
    if (uVar1 == 0x47) {
LAB_074e977c:
      uVar3 = 0x11;
      if (iStack000000000000000c < 0x10) {
        uVar3 = 0xf;
      }
      goto LAB_074e97a8;
    }
    if (uVar1 != 0x52) goto LAB_074e96dc;
LAB_074e96fc:
    if (*(int *)(*plVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074e9b28(0xf,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*plVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        dVar5 = (double)FUN_074e9fd4(&stack0x00000010);
        if (dVar5 == unaff_d8) {
          if (*(int *)(*plVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
        }
        else {
          if (*(int *)(*plVar4 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_074e9b28(0x11,&stack0x00000010);
        }
        goto LAB_074e9838;
      }
      goto LAB_074e97e4;
    }
LAB_074e97f0:
    uVar2 = FUN_074f3a04(&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_074e98dc;
      uVar2 = *(ulong *)(unaff_x19 + 0x70);
    }
    else {
      if (unaff_x19 == 0) {
LAB_074e98dc:
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_074e98f0;
      }
      uVar2 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_074e9794;
    if (uVar1 == 0x67) goto LAB_074e977c;
    if (uVar1 == 0x72) goto LAB_074e96fc;
LAB_074e96dc:
    uVar3 = 0xf;
LAB_074e97a8:
    if (*(int *)(*plVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074e9b28(uVar3,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_074e97f0;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_074e97e4:
      if (unaff_x19 != 0) {
        uVar2 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_074e9880;
      }
      goto LAB_074e98dc;
    }
    if (uVar1 == 0) {
      if (*(int *)(*plVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074e80c4();
    }
    else {
      if (*(int *)(*plVar4 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
LAB_074e9838:
      FUN_074e7af8();
    }
    uVar2 = 0;
  }
LAB_074e9880:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_074e98f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



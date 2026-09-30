/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 074ea660
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

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
  
  *(undefined1 *)(unaff_x23 + 0xefc) = 1;
  iStack000000000000000c = 0;
  uStack0000000000000082 = 0;
  uStack0000000000000080 = 0;
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
  uStack000000000000007a = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_074e777c();
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
LAB_074ea7a4:
      uVar3 = 7;
      if (6 < iStack000000000000000c) {
        uVar3 = 9;
      }
      goto LAB_074ea7b8;
    }
    if (uVar1 == 0x47) {
LAB_074ea78c:
      uVar3 = 9;
      if (iStack000000000000000c < 8) {
        uVar3 = 7;
      }
      goto LAB_074ea7b8;
    }
    if (uVar1 != 0x52) goto LAB_074ea6e4;
LAB_074ea704:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074e9b28((double)unaff_s8,7,&stack0x00000010);
    if (uStack0000000000000010._4_4_ != 0x7fffffff) {
      if (uStack0000000000000010._4_4_ != -0x80000000) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        dVar4 = (double)FUN_074e9fd4(&stack0x00000010);
        if ((float)dVar4 == unaff_s8) {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_074e9b28((double)unaff_s8,9,&stack0x00000010);
        }
        goto LAB_074ea848;
      }
      goto LAB_074ea7f4;
    }
LAB_074ea800:
    uVar2 = FUN_074f3a04(&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_074ea8ec;
      uVar2 = *(ulong *)(unaff_x19 + 0x70);
    }
    else {
      if (unaff_x19 == 0) {
LAB_074ea8ec:
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_074ea900;
      }
      uVar2 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_074ea7a4;
    if (uVar1 == 0x67) goto LAB_074ea78c;
    if (uVar1 == 0x72) goto LAB_074ea704;
LAB_074ea6e4:
    uVar3 = 7;
LAB_074ea7b8:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074e9b28((double)unaff_s8,uVar3,&stack0x00000010);
    if (uStack0000000000000010._4_4_ == 0x7fffffff) goto LAB_074ea800;
    if (uStack0000000000000010._4_4_ == -0x80000000) {
LAB_074ea7f4:
      if (unaff_x19 != 0) {
        uVar2 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_074ea890;
      }
      goto LAB_074ea8ec;
    }
    if (uVar1 == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074e80c4();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
LAB_074ea848:
      FUN_074e7af8();
    }
    uVar2 = 0;
  }
LAB_074ea890:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_074ea900:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



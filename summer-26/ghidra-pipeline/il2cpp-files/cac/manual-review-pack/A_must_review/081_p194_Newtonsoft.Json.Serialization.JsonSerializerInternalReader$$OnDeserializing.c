/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 074bb0a8
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
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
  long lStack0000000000000098;
  
  puVar3 = PTR_DAT_0912f2c0;
  lVar2 = tpidr_el0;
  lStack0000000000000098 = *(long *)(lVar2 + 0x28);
  if ((DAT_0968e47a & 1) == 0) {
    FUN_03f13384(PTR_DAT_0912f2c0);
    DAT_0968e47a = 1;
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
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar4 = FUN_074b8214(param_3,param_4,&stack0x0000000c);
  uVar1 = uVar4 & 0xffff;
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
LAB_074bb23c:
      uVar7 = 7;
      if (6 < iStack000000000000000c) {
        uVar7 = 9;
      }
      goto LAB_074bb250;
    }
    if (uVar1 == 0x47) {
LAB_074bb224:
      uVar7 = 9;
      if (iStack000000000000000c < 8) {
        uVar7 = 7;
      }
      goto LAB_074bb250;
    }
    if (uVar1 != 0x52) goto LAB_074bb17c;
LAB_074bb19c:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = FUN_074ba5c0((double)param_1,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        dVar8 = (double)FUN_074baa6c(&stack0x00000010);
        if ((float)dVar8 == param_1) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar4 = 0x47;
          iVar6 = 7;
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          FUN_074ba5c0((double)param_1,9,&stack0x00000010);
          uVar4 = 0x47;
          iVar6 = 9;
        }
        goto LAB_074bb2e0;
      }
      goto LAB_074bb28c;
    }
LAB_074bb298:
    uVar5 = FUN_074c4764(&stack0x00000010,0);
    if ((uVar5 & 1) == 0) {
      if (param_5 == 0) goto LAB_074bb384;
      uVar5 = *(ulong *)(param_5 + 0x70);
    }
    else {
      if (param_5 == 0) {
LAB_074bb384:
        if (*(long *)(lVar2 + 0x28) == lStack0000000000000098) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        goto LAB_074bb398;
      }
      uVar5 = *(ulong *)(param_5 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_074bb23c;
    if (uVar1 == 0x67) goto LAB_074bb224;
    if (uVar1 == 0x72) goto LAB_074bb19c;
LAB_074bb17c:
    uVar7 = 7;
LAB_074bb250:
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = FUN_074ba5c0((double)param_1,uVar7,&stack0x00000010);
    iVar6 = iStack000000000000000c;
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_074bb298;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_074bb28c:
      if (param_5 != 0) {
        uVar5 = *(ulong *)(param_5 + 0x68);
        goto LAB_074bb328;
      }
      goto LAB_074bb384;
    }
    if ((uVar4 & 0xffff) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      FUN_074b8b5c(param_2,&stack0x00000010,param_3,param_4,param_5);
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
LAB_074bb2e0:
      FUN_074b8590(param_2,&stack0x00000010,uVar4,iVar6,param_5,0);
    }
    uVar5 = 0;
  }
LAB_074bb328:
  if (*(long *)(lVar2 + 0x28) == lStack0000000000000098) {
    return;
  }
LAB_074bb398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



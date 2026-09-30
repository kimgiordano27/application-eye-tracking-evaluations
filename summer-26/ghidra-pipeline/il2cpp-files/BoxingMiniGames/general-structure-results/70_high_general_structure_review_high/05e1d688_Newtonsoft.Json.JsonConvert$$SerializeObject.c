/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05e1d688
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  ulong uVar1;
  int in_w8;
  undefined4 uVar2;
  long unaff_x19;
  short unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  double dVar3;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000098;
  
  if (in_w8 == 0x65) {
    uVar2 = 7;
    if (6 < in_stack_00000008._4_4_) {
      uVar2 = 9;
    }
LAB_05e1d754:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = FUN_05e1cac4((double)unaff_s8,uVar2,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_05e1d79c;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_05e1d790:
      if (unaff_x19 != 0) {
        uVar1 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_05e1d82c;
      }
      goto LAB_05e1d888;
    }
    if (unaff_w23 == 0) {
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
    uVar1 = 0;
  }
  else {
    if (in_w8 == 0x67) {
      uVar2 = 9;
      if (in_stack_00000008._4_4_ < 8) {
        uVar2 = 7;
      }
      goto LAB_05e1d754;
    }
    if (in_w8 != 0x72) {
      uVar2 = 7;
      goto LAB_05e1d754;
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = FUN_05e1cac4((double)unaff_s8,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        dVar3 = (double)FUN_05e1cf70(&stack0x00000010);
        if ((float)dVar3 == unaff_s8) {
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
    uVar1 = FUN_05e26c68(&stack0x00000010,0);
    if ((uVar1 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_05e1d888;
      uVar1 = *(ulong *)(unaff_x19 + 0x70);
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
      uVar1 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
LAB_05e1d82c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05e1d89c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



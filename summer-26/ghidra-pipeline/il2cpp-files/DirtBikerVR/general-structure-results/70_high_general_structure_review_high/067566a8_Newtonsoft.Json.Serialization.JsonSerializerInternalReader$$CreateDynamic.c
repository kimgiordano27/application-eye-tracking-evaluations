/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 067566a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

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
  
  if (in_w8 == 0x45) {
    uVar2 = 7;
    if (6 < in_stack_00000008._4_4_) {
      uVar2 = 9;
    }
LAB_06756794:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_06755b04((double)unaff_s8,uVar2,&stack0x00000010);
    if (in_stack_00000010._4_4_ == 0x7fffffff) goto LAB_067567dc;
    if (in_stack_00000010._4_4_ == -0x80000000) {
LAB_067567d0:
      if (unaff_x19 != 0) {
        uVar1 = *(ulong *)(unaff_x19 + 0x68);
        goto LAB_0675686c;
      }
      goto LAB_067568c8;
    }
    if (unaff_w23 == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_067540a0();
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
LAB_06756824:
      FUN_06753ad4();
    }
    uVar1 = 0;
  }
  else {
    if (in_w8 == 0x47) {
      uVar2 = 9;
      if (in_stack_00000008._4_4_ < 8) {
        uVar2 = 7;
      }
      goto LAB_06756794;
    }
    if (in_w8 != 0x52) {
      uVar2 = 7;
      goto LAB_06756794;
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_06755b04((double)unaff_s8,7,&stack0x00000010);
    if (in_stack_00000010._4_4_ != 0x7fffffff) {
      if (in_stack_00000010._4_4_ != -0x80000000) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        dVar3 = (double)FUN_06755fb0(&stack0x00000010);
        if ((float)dVar3 == unaff_s8) {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_06755b04((double)unaff_s8,9,&stack0x00000010);
        }
        goto LAB_06756824;
      }
      goto LAB_067567d0;
    }
LAB_067567dc:
    uVar1 = FUN_0675fca8(&stack0x00000010,0);
    if ((uVar1 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_067568c8;
      uVar1 = *(ulong *)(unaff_x19 + 0x70);
    }
    else {
      if (unaff_x19 == 0) {
LAB_067568c8:
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_067568dc;
      }
      uVar1 = *(ulong *)(unaff_x19 + 0x78);
    }
  }
LAB_0675686c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_067568dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



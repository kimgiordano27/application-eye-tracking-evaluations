/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 05065cf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__get_Binder(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(param_1);
  }
  FUN_050654c4();
  FUN_05065990(in_stack_00000018,(long)&stack0x00000010 + 4,&stack0x00000010,
               (long)&stack0x00000008 + 4);
  iVar1 = iStack0000000000000010;
  if (unaff_w19 < 2) {
    if (unaff_w19 != 0) {
      if (unaff_w19 != 1) goto LAB_05065db4;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar1 = FUN_050653fc(iStack0000000000000014,iVar1,in_stack_00000008._4_4_);
      iVar2 = FUN_050653fc(iStack0000000000000014,1,1);
      iStack0000000000000014 = (iVar1 - iVar2) + 1;
    }
  }
  else {
    iStack0000000000000014 = iStack0000000000000010;
    if ((unaff_w19 != 2) && (iStack0000000000000014 = in_stack_00000008._4_4_, unaff_w19 != 3)) {
LAB_05065db4:
      uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067db528);
      uVar3 = FUN_05116b30(uVar3,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar4 = thunk_FUN_02f45270();
      FUN_050d5404(uVar4,uVar3,0);
      uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067dc0b0);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,uVar3);
    }
  }
  return iStack0000000000000014;
}



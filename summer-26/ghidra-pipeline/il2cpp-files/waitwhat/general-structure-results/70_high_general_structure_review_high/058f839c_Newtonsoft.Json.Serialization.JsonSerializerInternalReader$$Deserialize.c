/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 058f839c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x058f850c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  int iVar4;
  long *unaff_x22;
  long *in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_05869164(param_1,0);
  if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  *(undefined4 *)(in_stack_00000058 + 0x3c) = 0;
  *(undefined4 *)(in_stack_00000058 + 0x40) = 0;
  plVar1 = *(long **)(in_stack_00000058 + 0x28);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar2 = (**(code **)(*plVar1 + 600))
                    (plVar1,*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xe],
                     *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar1 + 0x260));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  _in_stack_00000040 = FUN_059a24b0(lVar2,0,0);
  uVar3 = FUN_0585a5a0(&stack0x00000040,0);
  if ((uVar3 & 1) == 0) {
    lVar2 = *unaff_x22;
    in_stack_00000068._4_4_ = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000040;
    iVar4 = *(int *)(lVar2 + 0xe4);
    *unaff_x19 = 3;
    if (iVar4 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_039cd7d8(unaff_x19 + 2,&stack0x00000040);
    iVar4 = 5;
  }
  else {
    FUN_0585a5b8(&stack0x00000040,0);
    iVar4 = 0xf;
  }
  if (in_stack_00000068._4_4_ < 0) {
    if ((*in_stack_00000018 == 0) || (lVar2 = *(long *)(*in_stack_00000018 + 0x50), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(lVar2,0);
  }
  if ((iVar4 == 0) || (iVar4 == 0xf)) {
    lVar2 = *unaff_x22;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(unaff_x19 + 2,0);
  }
  return;
}



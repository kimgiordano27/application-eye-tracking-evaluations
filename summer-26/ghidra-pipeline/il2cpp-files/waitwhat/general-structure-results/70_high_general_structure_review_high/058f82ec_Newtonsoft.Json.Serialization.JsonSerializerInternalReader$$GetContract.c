/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 058f82ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x058f850c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(ulong param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  int iVar4;
  long *unaff_x22;
  long *in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 in_stack_00000068;
  
  if ((param_1 & 1) == 0) {
    lVar1 = *unaff_x22;
    in_stack_00000068._4_4_ = 2;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000048;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000040;
    iVar4 = *(int *)(lVar1 + 0xe4);
    *unaff_x19 = 2;
    if (iVar4 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_039cd7d8(unaff_x19 + 2,&stack0x00000040);
  }
  else {
    FUN_0585a5b8(&stack0x00000040,0);
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar2 = *(long **)(in_stack_00000058 + 0x28);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar1 = (**(code **)(*plVar2 + 600))
                      (plVar2,*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xe],
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar2 + 0x260));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    _in_stack_00000040 = FUN_059a24b0(lVar1,0,0);
    uVar3 = FUN_0585a5a0(&stack0x00000040,0);
    if ((uVar3 & 1) != 0) {
      FUN_0585a5b8(&stack0x00000040,0);
      iVar4 = 0xf;
      goto LAB_058f8454;
    }
    lVar1 = *unaff_x22;
    in_stack_00000068._4_4_ = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000040;
    iVar4 = *(int *)(lVar1 + 0xe4);
    *unaff_x19 = 3;
    if (iVar4 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_039cd7d8(unaff_x19 + 2,&stack0x00000040);
  }
  iVar4 = 5;
LAB_058f8454:
  if (in_stack_00000068._4_4_ < 0) {
    if ((*in_stack_00000018 == 0) || (lVar1 = *(long *)(*in_stack_00000018 + 0x50), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(lVar1,0);
  }
  if ((iVar4 == 0) || (iVar4 == 0xf)) {
    lVar1 = *unaff_x22;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(unaff_x19 + 2,0);
  }
  return;
}



/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 058f8288
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x058f850c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  undefined1 auVar5 [16];
  long *in_stack_00000018;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 in_stack_00000068;
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  lVar2 = *(long *)(param_1 + 0x30);
  plVar4 = *(long **)(unaff_x19 + 10);
  if (lVar2 == 0) {
    auVar5 = FUN_05950030(0);
    uVar1 = 0;
  }
  else {
    if ((*(uint *)(lVar2 + 0x18) < (uint)unaff_x23) ||
       (*(uint *)(lVar2 + 0x18) - (uint)unaff_x23 < unaff_w24)) {
      auVar5 = FUN_05950030(0);
    }
    uVar1 = unaff_x23 | (ulong)unaff_w24 << 0x20;
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8(auVar5._0_8_,auVar5._8_8_,uVar1);
  }
  auVar5 = (**(code **)(*plVar4 + 0x328))
                     (plVar4,lVar2,uVar1,*(undefined8 *)(unaff_x19 + 0xc),
                      *(undefined8 *)(*plVar4 + 0x330));
  if (*(int *)(*(long *)PTR_DAT_070f5948 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  in_stack_00000038 = auVar5._8_8_ & 0xffff;
  in_stack_00000030 = auVar5._0_8_;
  uVar1 = FUN_05869024(&stack0x00000030,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *unaff_x22;
    in_stack_00000068._4_4_ = 1;
    *(ulong *)(unaff_x19 + 0x16) = in_stack_00000038;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000030;
    iVar3 = *(int *)(lVar2 + 0xe4);
    *unaff_x19 = 1;
    if (iVar3 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_039cf010(unaff_x19 + 2,&stack0x00000030);
  }
  else {
    FUN_05869164(&stack0x00000030,0);
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    *(undefined4 *)(in_stack_00000058 + 0x3c) = 0;
    *(undefined4 *)(in_stack_00000058 + 0x40) = 0;
    plVar4 = *(long **)(in_stack_00000058 + 0x28);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar2 = (**(code **)(*plVar4 + 600))
                      (plVar4,*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xe],
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar4 + 0x260));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    _in_stack_00000040 = FUN_059a24b0(lVar2,0,0);
    uVar1 = FUN_0585a5a0(&stack0x00000040,0);
    if ((uVar1 & 1) != 0) {
      FUN_0585a5b8(&stack0x00000040,0);
      iVar3 = 0xf;
      goto LAB_058f8454;
    }
    lVar2 = *unaff_x22;
    in_stack_00000068._4_4_ = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000040;
    iVar3 = *(int *)(lVar2 + 0xe4);
    *unaff_x19 = 3;
    if (iVar3 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_039cd7d8(unaff_x19 + 2,&stack0x00000040);
  }
  iVar3 = 5;
LAB_058f8454:
  if (in_stack_00000068._4_4_ < 0) {
    if ((*in_stack_00000018 == 0) || (lVar2 = *(long *)(*in_stack_00000018 + 0x50), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(lVar2,0);
  }
  if ((iVar3 == 0) || (iVar3 == 0xf)) {
    lVar2 = *unaff_x22;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(unaff_x19 + 2,0);
  }
  return;
}



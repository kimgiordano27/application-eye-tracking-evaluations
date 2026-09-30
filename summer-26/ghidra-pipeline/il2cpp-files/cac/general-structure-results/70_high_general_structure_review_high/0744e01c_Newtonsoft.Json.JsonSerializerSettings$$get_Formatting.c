/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 0744e01c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0744e060) */

undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Formatting(long *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *in_x9;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x28;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x0744e01c:
  iVar2 = (*in_x9)(param_1,param_2);
  if (iVar2 == -1) {
    in_stack_00000010 = unaff_x24[3];
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
    in_stack_00000008._4_4_ =
         (**(code **)(*unaff_x24 + 0x1c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1d0));
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
    if (unaff_x21 == 0) goto LAB_0744e2fc;
    FUN_0733abb0();
    if ((int)unaff_x24[4] != 0xffffff) {
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
      thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
      goto LAB_0744e15c;
    }
  }
  else {
                    /* try { // try from 0744e028 to 0754e02b has its CatchHandler @ 0744e12c */
    uVar3 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
                    /* try { // try from 0744e044 to 0754e0a7 has its CatchHandler @ 0744e134 */
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
    if (unaff_x21 == 0) goto LAB_0744e2fc;
LAB_0744e15c:
    FUN_0733a0d0();
  }
  lVar5 = FUN_0744d474(unaff_x24);
  if (lVar5 == 0) goto LAB_0744e2fc;
  sVar1 = FUN_073213d0(lVar5,0,0);
  if (sVar1 == 0x3c) {
    plVar6 = (long *)(**(code **)(*unaff_x24 + 0x1b8))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if (plVar6 == (long *)0x0) {
LAB_0744e2fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if (plVar6 == (long *)0x0) goto LAB_0744e2fc;
    auVar8 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    _in_stack_00000018 = auVar8;
    uVar7 = thunk_FUN_074aef34(&stack0x00000018,*(undefined8 *)PTR_DAT_09131288,0);
    lVar5 = FUN_0744ddb0();
    iVar2 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    if ((iVar2 == -1) && (lVar5 != 0)) {
      FUN_07327fec(*(undefined8 *)PTR_DAT_091312a8,uVar7,lVar5,0);
    }
    else {
      FUN_0731d5f8(*(undefined8 *)PTR_DAT_09131290,uVar7,0);
    }
  }
  uVar3 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
  in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
  thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
  do {
    FUN_0733abb0();
    while( true ) {
      while( true ) {
        unaff_w23 = unaff_w23 + 1;
        iVar2 = (**(code **)(*unaff_x22 + 0x178))();
        if (iVar2 <= unaff_w23) {
          return 1;
        }
        param_1 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        if (param_1 == (long *)0x0) goto LAB_0744e2fc;
        uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        uVar4 = FUN_073dfe9c(uVar7,0,0);
        if ((uVar4 & 1) != 0) break;
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_0744e300();
        if (in_stack_00000028._4_1_ == '\0') {
          in_x9 = *(code **)(*param_1 + 0x1a8);
          param_2 = *(undefined8 *)(*param_1 + 0x1b0);
          unaff_x24 = param_1;
          goto code_r0x0744e01c;
        }
      }
      FUN_074fcefc(0);
      if (unaff_x21 == 0) goto LAB_0744e2fc;
      FUN_07331848();
      FUN_07331848();
      if (param_1[8] == 0) break;
      FUN_07331848();
    }
    in_stack_00000010 = param_1[3];
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
    in_stack_00000008._4_4_ =
         (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
  } while( true );
}



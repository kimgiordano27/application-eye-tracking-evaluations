/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 0744b6c0
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__Create(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int in_stack_00000008;
  
  do {
    lVar2 = FUN_073213d0();
    puVar1 = PTR_DAT_091310a8;
    if (0x7f < ((uint)lVar2 & 0xffff)) {
      uVar3 = FUN_07325a24();
      if ((uVar3 & 1) != 0) {
        in_stack_00000008 = unaff_w19 + unaff_w22;
        uVar5 = thunk_FUN_03f4e2c4(*(undefined8 *)(PTR_DAT_0910b550 + 0x48),&stack0x00000008);
        uVar4 = thunk_FUN_03f786f8(PTR_DAT_091310c0);
        uVar4 = FUN_0731d5f8(uVar4,uVar5,0);
        thunk_FUN_03f786f8(PTR_DAT_0910e988);
        uVar5 = thunk_FUN_03f4e68c();
        FUN_07419a00(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03f786f8(PTR_DAT_091310b8);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar5,uVar4);
      }
      if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar4 = FUN_0744bcac();
      lVar2 = FUN_0731ca20(*(undefined8 *)puVar1,uVar4,0);
      unaff_x20 = lVar2;
      break;
    }
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 < *(int *)(unaff_x20 + 0x10));
  FUN_0744bff4(lVar2,unaff_x20,unaff_w19);
  return unaff_x20;
}



/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 04ec3ed0
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__PopulateInternal(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x24;
  int iVar4;
  undefined8 in_stack_00000008;
  
  iVar4 = unaff_w21;
  while( true ) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    iVar1 = FUN_04ec5058(uVar2,uVar3,unaff_w20,unaff_w21,(long)&stack0x00000008 + 4);
    if (in_stack_00000008._4_4_ != 0) break;
    iVar4 = iVar4 - iVar1;
    if (iVar4 < 1) {
      *(undefined1 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)*(int *)(unaff_x19 + 100);
      return;
    }
    unaff_w21 = *(int *)(unaff_x19 + 0x60);
    unaff_w20 = iVar1 + unaff_w20;
  }
  uVar2 = FUN_04ec2c20();
  thunk_FUN_02c7737c(PTR_DAT_065f1670);
  FUN_028be084();
  uVar2 = FUN_04ec2c98(uVar2,in_stack_00000008._4_4_);
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065f7e40);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar3);
}



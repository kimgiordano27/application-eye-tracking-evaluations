/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079cb050
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObject(undefined *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined8 unaff_x26;
  uint unaff_w28;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined2 uStack000000000000003c;
  
  while( true ) {
    uStack000000000000003c = (undefined2)in_w9;
    if (*(int *)(*(long *)(param_1 + 0x88) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(param_1 + 0x88));
    }
    FUN_079932d0(&stack0x0000003c,0);
    uVar2 = FUN_079be388(unaff_x23,0,unaff_w24,param_2,unaff_w25,unaff_x26,in_stack_00000038,
                         in_stack_00000030._4_4_);
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0xc0),uVar2);
    unaff_w28 = unaff_w28 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w28) {
      return unaff_x19;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    unaff_x20 = *(long *)(unaff_x19 + (long)(int)unaff_w28 * 8 + 0x20);
    if (unaff_x20 == 0) break;
    puVar3 = *(undefined4 **)(unaff_x20 + 0x90);
    unaff_x23 = *(undefined8 *)(unaff_x20 + 0x48);
    unaff_w24 = *(undefined4 *)(unaff_x20 + 0x1c);
    in_stack_00000038 = *puVar3;
    in_stack_00000030._4_4_ = puVar3[3];
    uVar1 = puVar3[4];
    param_2 = FUN_079cb134(unaff_x20);
    unaff_w25 = *(undefined4 *)(unaff_x20 + 0x20);
    in_w9 = uVar1 >> 8 & 0xff;
    unaff_x26 = *(undefined8 *)(unaff_x20 + 0x68);
    param_1 = PTR_DAT_09f1e5b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



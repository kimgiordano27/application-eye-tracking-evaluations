/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 061d62f0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(undefined **param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 unaff_x23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined8 uVar2;
  uint unaff_w28;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  ushort uStack000000000000003c;
  
  while( true ) {
    uStack000000000000003c = (ushort)((uint)unaff_w21 >> 8) & 0xff;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    if (*(int *)(*(long *)(param_1[0xa9] + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(param_1[0xa9] + 0x88));
    }
    FUN_0619e108(&stack0x0000003c,0);
    uVar2 = FUN_061c9704(unaff_x23,0,unaff_w24,param_2,unaff_w25,uVar2,in_stack_00000038,
                         in_stack_00000030._4_4_);
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x20 + 0xc0),uVar2);
    unaff_w28 = unaff_w28 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w28) {
      return unaff_x19;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x20 = *(long *)(unaff_x19 + (long)(int)unaff_w28 * 8 + 0x20);
    if (unaff_x20 == 0) break;
    puVar1 = *(undefined4 **)(unaff_x20 + 0x90);
    unaff_x23 = *(undefined8 *)(unaff_x20 + 0x48);
    unaff_w24 = *(undefined4 *)(unaff_x20 + 0x1c);
    in_stack_00000038 = *puVar1;
    in_stack_00000030._4_4_ = puVar1[3];
    unaff_w21 = puVar1[4];
    param_2 = FUN_061d63e0(unaff_x20);
    param_1 = &PTR_DAT_07d86000;
    unaff_w25 = *(undefined4 *)(unaff_x20 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



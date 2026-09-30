/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 07607138
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined8 unaff_x27;
  uint unaff_w28;
  undefined4 uStack0000000000000038;
  ushort uStack000000000000003c;
  
  while( true ) {
    FUN_075ca614(param_1,param_2);
    uVar2 = FUN_075fa804(unaff_x24,0,unaff_w23,unaff_w25,unaff_w26,unaff_x27,uStack0000000000000038,
                         unaff_w22);
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0xc0),uVar2);
    unaff_w28 = unaff_w28 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w28) {
      return unaff_x19;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28) break;
    unaff_x20 = *(long *)(unaff_x19 + (long)(int)unaff_w28 * 8 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar3 = *(undefined4 **)(unaff_x20 + 0x90);
    unaff_x24 = *(undefined8 *)(unaff_x20 + 0x48);
    unaff_w23 = *(undefined4 *)(unaff_x20 + 0x1c);
    uStack0000000000000038 = *puVar3;
    unaff_w22 = puVar3[3];
    uVar1 = puVar3[4];
    unaff_w25 = FUN_076071f0(unaff_x20);
    unaff_w26 = *(undefined4 *)(unaff_x20 + 0x20);
    unaff_x27 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack000000000000003c = (ushort)((uint)uVar1 >> 8) & 0xff;
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    param_1 = (long)&stack0x00000038 + 4;
    param_2 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



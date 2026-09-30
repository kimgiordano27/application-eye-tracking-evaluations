/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 07607190
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_w8;
  undefined4 *puVar7;
  long lVar8;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  uint unaff_w28;
  undefined8 in_stack_00000038;
  
  while( true ) {
    if ((int)in_w8 <= (int)unaff_w28) {
      return unaff_x23;
    }
    if (in_w8 <= unaff_w28) break;
    lVar8 = *(long *)(unaff_x23 + (long)(int)unaff_w28 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar7 = *(undefined4 **)(lVar8 + 0x90);
    uVar9 = *(undefined8 *)(lVar8 + 0x48);
    uVar3 = *(undefined4 *)(lVar8 + 0x1c);
    uVar1 = *puVar7;
    uVar2 = puVar7[3];
    uVar4 = puVar7[4];
    uVar6 = FUN_076071f0(lVar8);
    uVar5 = *(undefined4 *)(lVar8 + 0x20);
    uVar10 = *(undefined8 *)(lVar8 + 0x68);
    in_stack_00000038._4_2_ = (ushort)((uint)uVar4 >> 8) & 0xff;
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_075ca614((long)&stack0x00000038 + 4,0);
    uVar9 = FUN_075fa804(uVar9,0,uVar3,uVar6,uVar5,uVar10,uVar1,uVar2);
    *(undefined8 *)(lVar8 + 0xc0) = uVar9;
    thunk_FUN_040ec700((undefined8 *)(lVar8 + 0xc0),uVar9);
    in_w8 = *(uint *)(unaff_x23 + 0x18);
    unaff_w28 = unaff_w28 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}



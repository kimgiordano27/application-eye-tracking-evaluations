/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 061d6288
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined8 unaff_x21;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 in_stack_00000038;
  
  *unaff_x20 = unaff_x21;
  thunk_FUN_037aeb94();
  uVar12 = 1;
  uVar3 = *(uint *)(unaff_x23 + 0x18);
  while( true ) {
    if ((int)uVar3 <= (int)uVar12) {
      return unaff_x23;
    }
    if (uVar3 <= uVar12) break;
    lVar9 = *(long *)(unaff_x23 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar8 = *(undefined4 **)(lVar9 + 0x90);
    uVar10 = *(undefined8 *)(lVar9 + 0x48);
    uVar4 = *(undefined4 *)(lVar9 + 0x1c);
    uVar1 = *puVar8;
    uVar2 = puVar8[3];
    uVar5 = puVar8[4];
    uVar7 = FUN_061d63e0(lVar9);
    uVar6 = *(undefined4 *)(lVar9 + 0x20);
    in_stack_00000038._4_2_ = (ushort)((uint)uVar5 >> 8) & 0xff;
    uVar11 = *(undefined8 *)(lVar9 + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0x88));
    }
    FUN_0619e108((long)&stack0x00000038 + 4,0);
    uVar10 = FUN_061c9704(uVar10,0,uVar4,uVar7,uVar6,uVar11,uVar1,uVar2);
    *(undefined8 *)(lVar9 + 0xc0) = uVar10;
    thunk_FUN_037aeb94((undefined8 *)(lVar9 + 0xc0),uVar10);
    uVar3 = *(uint *)(unaff_x23 + 0x18);
    uVar12 = uVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}



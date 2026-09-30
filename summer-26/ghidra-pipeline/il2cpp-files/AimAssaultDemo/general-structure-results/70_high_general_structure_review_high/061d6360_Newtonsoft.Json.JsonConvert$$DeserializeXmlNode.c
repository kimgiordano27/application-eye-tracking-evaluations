/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 061d6360
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


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long lVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  uint unaff_w28;
  undefined8 in_stack_00000038;
  
  while( true ) {
    thunk_FUN_037aeb94(unaff_x20,param_2);
    unaff_w28 = unaff_w28 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w28) {
      return unaff_x19;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28) break;
    lVar8 = *(long *)(unaff_x19 + (long)(int)unaff_w28 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar7 = *(undefined4 **)(lVar8 + 0x90);
    uVar9 = *(undefined8 *)(lVar8 + 0x48);
    uVar3 = *(undefined4 *)(lVar8 + 0x1c);
    uVar1 = *puVar7;
    uVar2 = puVar7[3];
    uVar4 = puVar7[4];
    uVar6 = FUN_061d63e0(lVar8);
    uVar5 = *(undefined4 *)(lVar8 + 0x20);
    in_stack_00000038._4_2_ = (ushort)((uint)uVar4 >> 8) & 0xff;
    uVar10 = *(undefined8 *)(lVar8 + 0x68);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0x88));
    }
    FUN_0619e108((long)&stack0x00000038 + 4,0);
    param_2 = FUN_061c9704(uVar9,0,uVar3,uVar6,uVar5,uVar10,uVar1,uVar2);
    unaff_x20 = (undefined8 *)(lVar8 + 0xc0);
    *unaff_x20 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}



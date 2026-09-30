/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 07476da0
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonReader__SetPostValueState
               (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
               undefined8 param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint in_w8;
  uint *puVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w28;
  uint uStack0000000000000000;
  uint uStack0000000000000008;
  undefined8 in_stack_00000038;
  
  uStack0000000000000000 = in_w8;
  while( true ) {
    uStack0000000000000008 = unaff_w21;
    uVar6 = FUN_0746eab0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,unaff_w22);
    uVar5 = *(uint *)(unaff_x19 + 0x18);
    unaff_w28 = unaff_w28 + 1;
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar6;
    if ((int)uVar5 <= (int)unaff_w28) {
      return unaff_x19;
    }
    if (uVar5 <= unaff_w28) break;
    unaff_x20 = *(long *)(unaff_x19 + (long)(int)unaff_w28 * 8 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    puVar7 = *(uint **)(unaff_x20 + 0x90);
    param_1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = *(uint *)(unaff_x20 + 0x1c);
    uVar5 = *puVar7;
    unaff_w21 = puVar7[1];
    uVar1 = puVar7[2];
    unaff_w22 = puVar7[3];
    uVar3 = puVar7[4];
    param_4 = FUN_07476e24(unaff_x20);
    param_4 = param_4 & 0xffffffff;
    uVar4 = *(uint *)(unaff_x20 + 0x20);
    param_6 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000038._4_2_ = (ushort)(uVar3 >> 8) & 0xff;
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_0744034c((long)&stack0x00000038 + 4,0);
    param_2 = 0;
    param_3 = (ulong)uVar2;
    param_7 = (ulong)uVar5;
    param_5 = (ulong)uVar4;
    uStack0000000000000000 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}



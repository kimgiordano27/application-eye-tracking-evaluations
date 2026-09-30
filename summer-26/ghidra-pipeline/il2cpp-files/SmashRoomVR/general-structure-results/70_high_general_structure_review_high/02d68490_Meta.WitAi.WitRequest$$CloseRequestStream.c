/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 02d68490
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Meta_WitAi_WitRequest__CloseRequestStream
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
               undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long in_x9;
  int in_w10;
  long unaff_x22;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar4 = (long)in_w8 - (long)(int)param_4;
  puVar5 = (undefined8 *)(unaff_x22 + (long)(int)param_4 * (long)in_w10 + 0x20);
  while (param_4 < *(uint *)(unaff_x22 + 0x18)) {
    in_stack_00000060 = param_3[4];
    in_stack_00000048 = param_3[1];
    in_stack_00000040 = *param_3;
    in_stack_00000058 = param_3[3];
    in_stack_00000050 = param_3[2];
    uVar1 = thunk_FUN_01afa70c(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000040)
    ;
    lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= param_4) break;
    in_stack_00000010 = 0xffffffffffffffff;
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    uVar7 = puVar5[3];
    uVar6 = puVar5[2];
    *(undefined8 *)(in_x9 + 0x30) = puVar5[4];
    *(undefined8 *)(in_x9 + 0x18) = uVar9;
    *(undefined8 *)(in_x9 + 0x10) = uVar8;
    *(undefined8 *)(in_x9 + 0x28) = uVar7;
    *(undefined8 *)(in_x9 + 0x20) = uVar6;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_030990a8(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) {
      return param_4;
    }
    param_4 = param_4 + 1;
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 5;
    if (lVar4 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}



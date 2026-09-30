/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_access_token_set
ENTRY_POINT: 0855d510
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_access_token_set
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  
  if ((uint)in_x10 < in_w11) {
    *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = param_3;
  }
  else {
    FUN_05cc8dcc();
  }
  uStack000000000000008c = 0;
  FUN_08a07820(&stack0x0000008c,*unaff_x21,0);
  lVar9 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_0932e9a8;
  if (lVar9 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000008c;
    }
    else {
      FUN_05cc8dcc();
    }
    in_stack_00000088 = 0;
    FUN_08a07820(&stack0x00000088,*(undefined8 *)puVar2,0);
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_0932e990;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000088;
      }
      else {
        FUN_05cc8dcc();
      }
      uStack0000000000000084 = 0;
      FUN_08a07820((long)&stack0x00000080 + 4,*(undefined8 *)puVar2,0);
      lVar9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_0932e9a0;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000084;
        }
        else {
          FUN_05cc8dcc();
        }
        uStack0000000000000080 = 0;
        FUN_08a07820(&stack0x00000080,*(undefined8 *)puVar2,0);
        lVar9 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar6 = PTR_DAT_0932e980;
        puVar5 = PTR_DAT_0932e978;
        puVar4 = PTR_DAT_0932e970;
        puVar3 = PTR_DAT_0932e968;
        puVar2 = PTR_DAT_0932c538;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000080;
          }
          else {
            FUN_05cc8dcc();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar2 + 0xb8));
          in_stack_00000070 = 0;
          in_stack_00000018 = 0;
          in_stack_00000010 = 0;
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          in_stack_00000008 = 0;
          in_stack_00000000 = 0;
          FUN_089fd808();
          lVar9 = *(long *)puVar2;
          memcpy((void *)(*(long *)(lVar9 + 0xb8) + 8),&stack0x00000000,0x78);
          puVar7 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80);
          *puVar7 = 0;
          thunk_FUN_040ec700(puVar7,0);
          uVar8 = FUN_04077674(*(undefined8 *)puVar6,1);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
          *puVar7 = uVar8;
          thunk_FUN_040ec700(puVar7,uVar8);
          uVar8 = FUN_04077674(*(undefined8 *)puVar5,1);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
          *puVar7 = uVar8;
          thunk_FUN_040ec700(puVar7,uVar8);
          uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
          FUN_06e69c70(uVar8,*(undefined8 *)puVar3);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
          *puVar7 = uVar8;
          thunk_FUN_040ec700(puVar7,uVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



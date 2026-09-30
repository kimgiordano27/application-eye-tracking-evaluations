/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 051b6b50
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__GetActionStateFloat
          (undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *unaff_x20;
  long *unaff_x21;
  uint *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 in_register_00005148;
  undefined8 uStack0000000000000010;
  ulong in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  ulong in_stack_00000050;
  uint uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  ulong in_stack_00000070;
  uint uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  ulong in_stack_000000a0;
  uint in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  uint in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  
code_r0x051b6b50:
  uStack0000000000000010 = param_1;
  FUN_051b6c88(param_2,param_3,param_4,param_5,param_6,param_7);
  uVar12 = unaff_x23[4];
  uVar13 = unaff_x23[5];
  uVar10 = FUN_051b6eec(unaff_x23[3],uVar12,uVar13,unaff_x23[6],*(undefined4 *)(unaff_x26 + 0x1c),
                        *(undefined4 *)(unaff_x26 + 0x20),*(undefined4 *)(unaff_x26 + 0x24),
                        *(undefined4 *)(unaff_x26 + 0x28));
  *(undefined4 *)(unaff_x26 + 0x58) = uVar10;
  puVar4 = PTR_DAT_06608b30;
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b30);
  FUN_051b6114(uVar6,unaff_x26,*(undefined8 *)PTR_DAT_06608b38);
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_051b6114(uVar6,unaff_x26,*(undefined8 *)PTR_DAT_06608b40);
  uVar10 = FUN_051b5de0();
  puVar4 = PTR_DAT_06608b28;
  in_stack_000000c0 = CONCAT44(uVar12,uVar10);
  in_stack_000000c8 = uVar13;
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_051b088c(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
    if ((uVar7 & 1) != 0) {
      unaff_d10 = in_stack_000000c0 & 0xffffffff;
      in_register_00005148 = 0;
      unaff_d9 = in_stack_000000c0 >> 0x20;
      unaff_d8 = (ulong)in_stack_000000c8;
      FUN_05167a3c();
    }
    do {
      lVar8 = *(long *)(unaff_x24 + 0x20);
      if (lVar8 == 0) goto LAB_051b6c50;
      if (*(int *)(lVar8 + 0x18) <= unaff_w25) {
        auVar11._8_8_ = in_register_00005148;
        auVar11._0_8_ = unaff_d10;
        return auVar11;
      }
      FUN_038c4204(&stack0x00000070,lVar8,unaff_w25,*(undefined8 *)puVar4);
      in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_00000100 = in_stack_00000070;
      in_stack_00000118 = in_stack_00000088;
      uStack0000000000000124 = uStack0000000000000094;
      uStack0000000000000120 = uStack0000000000000090;
      lVar8 = *(long *)(unaff_x24 + 0x20);
      if (lVar8 == 0) goto LAB_051b6c50;
      iVar2 = *(int *)(lVar8 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = unaff_w25 / iVar2;
      }
      FUN_038c4204(&stack0x00000070,lVar8,unaff_w25 - iVar3 * iVar2,*(undefined8 *)puVar4);
      in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      uVar6 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      uStack00000000000000f4 = uStack0000000000000094;
      uVar5 = uStack00000000000000f4;
      uStack00000000000000f0 = uStack0000000000000090;
      uStack00000000000000f4._4_1_ = SUB81(uStack0000000000000094,4);
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = in_stack_00000088;
      in_stack_000000e0 = uVar6;
      uStack00000000000000f4 = uVar5;
      if (uStack0000000000000124._4_1_ != '\0') {
        if (uStack00000000000000f4._4_1_ != '\0') goto LAB_051b6a0c;
        break;
      }
      bVar1 = uStack00000000000000f4._4_1_ != '\0';
    } while (bVar1);
    if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_051b6c50;
    if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) != 1) break;
LAB_051b6a0c:
    FUN_051b88b0(&stack0x00000070,&stack0x00000100);
    uStack00000000000000b4 = CONCAT44(in_stack_00000088,uStack0000000000000084);
    in_stack_000000a8 = uStack0000000000000078;
    in_stack_000000a0 = in_stack_00000070;
    uStack00000000000000b0 = uStack0000000000000080;
    FUN_05167a3c(&stack0x00000130,&stack0x000000a0,0);
    uStack0000000000000078 = 0;
    in_stack_00000070 = 0;
    FUN_051b20a8(*unaff_x20,&stack0x00000070);
    in_stack_000000c0 = in_stack_00000070;
    in_stack_000000c8 = uStack0000000000000078;
  } while( true );
  unaff_x26 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b48);
  uVar10 = (undefined4)uVar6;
  FUN_051b874c(unaff_x26,0);
  FUN_051b88b0(&stack0x00000050,&stack0x00000100);
  uStack0000000000000078 = uStack0000000000000058;
  in_stack_00000070 = in_stack_00000050;
  uStack0000000000000084 = (undefined4)uStack0000000000000064;
  in_stack_00000088 = SUB84(uStack0000000000000064,4);
  uStack000000000000007c = uStack000000000000005c;
  uStack0000000000000080 = uStack0000000000000060;
  if (unaff_x26 == 0) {
LAB_051b6c50:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(unaff_x26 + 0x24) = uStack0000000000000064;
  *(ulong *)(unaff_x26 + 0x1c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
  *(ulong *)(unaff_x26 + 0x18) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
  *(ulong *)(unaff_x26 + 0x10) = in_stack_00000050;
  FUN_051b88b0(&stack0x00000030,&stack0x000000d0);
  uStack0000000000000064 = uStack0000000000000044;
  uStack0000000000000060 = uStack0000000000000040;
  uStack0000000000000058 = uStack0000000000000038;
  uStack000000000000005c = uStack000000000000003c;
  in_stack_00000050 = in_stack_00000030;
  uVar6 = CONCAT44(uStack0000000000000040,uStack000000000000003c);
  *(ulong *)(unaff_x26 + 0x40) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  *(ulong *)(unaff_x26 + 0x38) = in_stack_00000030;
  *(undefined8 *)(unaff_x26 + 0x4c) = uStack0000000000000044;
  *(undefined8 *)(unaff_x26 + 0x44) = uVar6;
  uVar9 = FUN_051b895c(&stack0x00000100);
  *(undefined4 *)(unaff_x26 + 0x2c) = uVar9;
  *(int *)(unaff_x26 + 0x30) = (int)uVar6;
  *(undefined4 *)(unaff_x26 + 0x34) = uVar10;
  param_5 = *(undefined4 *)(unaff_x26 + 0x10);
  param_6 = *(undefined4 *)(unaff_x26 + 0x14);
  param_7 = *(undefined4 *)(unaff_x26 + 0x18);
  param_1 = *(undefined8 *)(unaff_x26 + 0x38);
  param_2 = (ulong)*unaff_x23;
  param_3 = (ulong)unaff_x23[1];
  param_4 = (ulong)unaff_x23[2];
  goto code_r0x051b6b50;
}



/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 051b69d8
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
OVRPlugin__GetActionStateBoolean
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined1 *unaff_x27;
  long *unaff_x28;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  undefined1 auVar11 [16];
  uint uVar13;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 in_register_00005148;
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
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  ulong in_stack_000000a0;
  uint in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  uint in_stack_000000c8;
  ulong uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  char in_stack_000000f8;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  
  uStack00000000000000e8 = param_3._8_8_;
  uVar5 = param_3._0_8_;
  uStack00000000000000d8 = param_2._8_8_;
  uStack00000000000000d0 = param_2._0_8_;
  uVar12 = param_1._8_8_;
  uVar10 = param_1._0_8_;
  do {
    cVar4 = in_stack_00000128;
    *(undefined8 *)(unaff_x27 + 0x24) = uVar12;
    *(undefined8 *)(unaff_x27 + 0x1c) = uVar10;
    uStack00000000000000e0 = uVar5;
    if (cVar4 == '\0') {
      if (in_stack_000000f8 == '\0') goto LAB_051b69f8;
    }
    else {
      if (in_stack_000000f8 == '\0') {
LAB_051b69f8:
        if (*(long *)(unaff_x24 + 0x20) == 0) {
LAB_051b6c50:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1) goto LAB_051b6a0c;
        lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b48);
        uVar9 = (undefined4)uVar5;
        FUN_051b874c(lVar7,0);
        FUN_051b88b0(&stack0x00000050,&stack0x00000100);
        uStack0000000000000078 = uStack0000000000000058;
        in_stack_00000070 = in_stack_00000050;
        uStack0000000000000084 = (undefined4)uStack0000000000000064;
        uStack0000000000000088 = SUB84(uStack0000000000000064,4);
        uStack000000000000007c = uStack000000000000005c;
        uStack0000000000000080 = uStack0000000000000060;
        if (lVar7 == 0) goto LAB_051b6c50;
        *(undefined8 *)(lVar7 + 0x24) = uStack0000000000000064;
        *(ulong *)(lVar7 + 0x1c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
        *(ulong *)(lVar7 + 0x18) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
        *(ulong *)(lVar7 + 0x10) = in_stack_00000050;
        FUN_051b88b0(&stack0x00000030,&stack0x000000d0);
        uStack0000000000000064 = uStack0000000000000044;
        uStack0000000000000060 = uStack0000000000000040;
        uStack0000000000000058 = uStack0000000000000038;
        uStack000000000000005c = uStack000000000000003c;
        in_stack_00000050 = in_stack_00000030;
        uVar5 = CONCAT44(uStack0000000000000040,uStack000000000000003c);
        *(ulong *)(lVar7 + 0x40) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        *(ulong *)(lVar7 + 0x38) = in_stack_00000030;
        *(undefined8 *)(lVar7 + 0x4c) = uStack0000000000000044;
        *(undefined8 *)(lVar7 + 0x44) = uVar5;
        uVar8 = FUN_051b895c(&stack0x00000100);
        *(undefined4 *)(lVar7 + 0x2c) = uVar8;
        *(int *)(lVar7 + 0x30) = (int)uVar5;
        *(undefined4 *)(lVar7 + 0x34) = uVar9;
        FUN_051b6c88(*unaff_x23,unaff_x23[1],unaff_x23[2],*(undefined4 *)(lVar7 + 0x10),
                     *(undefined4 *)(lVar7 + 0x14),*(undefined4 *)(lVar7 + 0x18));
        uVar8 = unaff_x23[4];
        uVar13 = unaff_x23[5];
        uVar9 = FUN_051b6eec(unaff_x23[3],uVar8,uVar13,unaff_x23[6],*(undefined4 *)(lVar7 + 0x1c),
                             *(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x24),
                             *(undefined4 *)(lVar7 + 0x28));
        *(undefined4 *)(lVar7 + 0x58) = uVar9;
        puVar3 = PTR_DAT_06608b30;
        uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b30);
        FUN_051b6114(uVar5,lVar7,*(undefined8 *)PTR_DAT_06608b38);
        uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
        FUN_051b6114(uVar5,lVar7,*(undefined8 *)PTR_DAT_06608b40);
        uVar9 = FUN_051b5de0();
        in_stack_000000c0 = CONCAT44(uVar8,uVar9);
        unaff_x27 = (undefined1 *)&stack0x000000d0;
        unaff_x21 = (undefined8 *)PTR_DAT_06608b28;
        in_stack_000000c8 = uVar13;
      }
      else {
LAB_051b6a0c:
        FUN_051b88b0(&stack0x00000070,&stack0x00000100);
        uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
        in_stack_000000a8 = uStack0000000000000078;
        in_stack_000000a0 = in_stack_00000070;
        uStack00000000000000b0 = uStack0000000000000080;
        FUN_05167a3c(&stack0x00000130,&stack0x000000a0,0);
        uStack0000000000000078 = 0;
        in_stack_00000070 = 0;
        FUN_051b20a8(*unaff_x20,&stack0x00000070);
        in_stack_000000c0 = in_stack_00000070;
        in_stack_000000c8 = uStack0000000000000078;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_051b088c(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
      if ((uVar6 & 1) != 0) {
        unaff_d10 = in_stack_000000c0 & 0xffffffff;
        in_register_00005148 = 0;
        unaff_d9 = in_stack_000000c0 >> 0x20;
        unaff_d8 = (ulong)in_stack_000000c8;
        FUN_05167a3c();
      }
    }
    lVar7 = *(long *)(unaff_x24 + 0x20);
    if (lVar7 == 0) goto LAB_051b6c50;
    if (*(int *)(lVar7 + 0x18) <= unaff_w25) {
      auVar11._8_8_ = in_register_00005148;
      auVar11._0_8_ = unaff_d10;
      return auVar11;
    }
    FUN_038c4204(&stack0x00000070,lVar7,unaff_w25,*unaff_x21);
    in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    in_stack_00000100 = in_stack_00000070;
    *(undefined8 *)(unaff_x27 + 0x54) = uStack0000000000000094;
    *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    lVar7 = *(long *)(unaff_x24 + 0x20);
    if (lVar7 == 0) goto LAB_051b6c50;
    iVar1 = *(int *)(lVar7 + 0x18);
    unaff_w25 = unaff_w25 + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = unaff_w25 / iVar1;
    }
    FUN_038c4204(&stack0x00000070,lVar7,unaff_w25 - iVar2 * iVar1,*unaff_x21);
    uVar10 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    uStack00000000000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    uStack00000000000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    uVar5 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    uVar12 = uStack0000000000000094;
    uStack00000000000000d0 = in_stack_00000070;
  } while( true );
}



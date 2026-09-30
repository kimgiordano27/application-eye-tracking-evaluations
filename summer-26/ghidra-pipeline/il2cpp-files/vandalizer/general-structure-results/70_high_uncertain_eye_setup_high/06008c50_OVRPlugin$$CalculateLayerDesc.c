/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 06008c50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__CalculateLayerDesc(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined4 *unaff_x20;
  undefined8 unaff_x21;
  undefined4 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long *unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 in_register_00005148;
  ulong in_stack_00000070;
  uint uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_000000a0;
  uint in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  uint in_stack_000000c8;
  ulong in_stack_000000d0;
  uint in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  ulong in_stack_00000100;
  uint in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  ulong in_stack_00000150;
  uint in_stack_00000158;
  undefined4 uStack0000000000000160;
  undefined8 uStack0000000000000164;
  
code_r0x06008c50:
  uVar10 = (uint)param_3;
  uVar7 = (undefined4)param_2;
  uVar8 = FUN_06007cc8();
  puVar3 = PTR_DAT_075f72b8;
  in_stack_000000c0 = CONCAT44(uVar7,uVar8);
  in_stack_000000c8 = uVar10;
  do {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = FUN_06002380(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
    if ((uVar5 & 1) != 0) {
      unaff_d10 = in_stack_000000c0 & 0xffffffff;
      in_register_00005148 = 0;
      unaff_d9 = in_stack_000000c0 >> 0x20;
      unaff_d8 = (ulong)in_stack_000000c8;
      FUN_05faebbc(unaff_x19,&stack0x00000130,0);
    }
    do {
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_06008ccc;
      if (*(int *)(lVar6 + 0x18) <= unaff_w25) {
        auVar9._8_8_ = in_register_00005148;
        auVar9._0_8_ = unaff_d10;
        return auVar9;
      }
      FUN_046e0764(&stack0x00000070,lVar6,unaff_w25,*(undefined8 *)puVar3);
      uStack0000000000000124 = CONCAT44(in_stack_00000098,uStack0000000000000094);
      in_stack_00000108 = uStack0000000000000078;
      in_stack_00000100 = in_stack_00000070;
      in_stack_00000118 = uStack0000000000000088;
      in_stack_00000110 = uStack0000000000000080;
      uStack0000000000000114 = uStack0000000000000084;
      uStack0000000000000120 = uStack0000000000000090;
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_06008ccc;
      iVar1 = *(int *)(lVar6 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w25 / iVar1;
      }
      uVar8 = uStack000000000000008c;
      FUN_046e0764(&stack0x00000070,lVar6,unaff_w25 - iVar2 * iVar1,*(undefined8 *)puVar3);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_000000d8 = uStack0000000000000078;
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = uStack0000000000000088;
      in_stack_000000e0 = uStack0000000000000080;
      uStack00000000000000e4 = uStack0000000000000084;
      if (uStack0000000000000124._4_1_ != '\0') {
        if ((in_stack_00000098 & 0xff) != 0) goto LAB_06008a54;
        break;
      }
    } while ((in_stack_00000098 & 0xff) != 0);
    if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_06008ccc;
    if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) != 1) break;
LAB_06008a54:
    uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
    in_stack_00000158 = in_stack_00000108;
    in_stack_00000150 = in_stack_00000100;
    uStack0000000000000160 = in_stack_00000110;
    FUN_05faf300(&stack0x00000070,unaff_x21,&stack0x00000150,0);
    uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    in_stack_000000a8 = uStack0000000000000078;
    in_stack_000000a0 = in_stack_00000070;
    uStack00000000000000b0 = uStack0000000000000080;
    FUN_05faebbc(&stack0x00000130,&stack0x000000a0,0);
    uStack0000000000000078 = 0;
    in_stack_00000070 = 0;
    FUN_06003794(*unaff_x20,&stack0x00000070);
    in_stack_000000c0 = in_stack_00000070;
    in_stack_000000c8 = uStack0000000000000078;
  } while( true );
  lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f72d8);
  FUN_05e44034(lVar6,0);
  uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
  in_stack_00000158 = in_stack_00000108;
  in_stack_00000150 = in_stack_00000100;
  uStack0000000000000160 = in_stack_00000110;
  FUN_05faf300(&stack0x00000070,unaff_x21,&stack0x00000150,0);
  if (lVar6 == 0) {
LAB_06008ccc:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(ulong *)(lVar6 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
  *(ulong *)(lVar6 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
  *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  *(ulong *)(lVar6 + 0x10) = in_stack_00000070;
  uStack0000000000000164 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
  in_stack_00000158 = in_stack_000000d8;
  in_stack_00000150 = in_stack_000000d0;
  uStack0000000000000160 = in_stack_000000e0;
  FUN_05faf300(&stack0x00000070,unaff_x21,&stack0x00000150,0);
  uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
  *(ulong *)(lVar6 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  *(ulong *)(lVar6 + 0x38) = in_stack_00000070;
  *(ulong *)(lVar6 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
  *(undefined8 *)(lVar6 + 0x44) = uVar4;
  uVar7 = FUN_06008d5c(&stack0x00000100,unaff_x21);
  *(undefined4 *)(lVar6 + 0x2c) = uVar7;
  *(int *)(lVar6 + 0x30) = (int)uVar4;
  *(undefined4 *)(lVar6 + 0x34) = uVar8;
  FUN_06008d80(*unaff_x23,unaff_x23[1],unaff_x23[2],*(undefined4 *)(lVar6 + 0x10),
               *(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x18));
  param_2 = (ulong)(uint)unaff_x23[4];
  param_3 = (ulong)(uint)unaff_x23[5];
  uVar8 = FUN_06008fe4(unaff_x23[3],param_2,param_3,unaff_x23[6],*(undefined4 *)(lVar6 + 0x1c),
                       *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                       *(undefined4 *)(lVar6 + 0x28));
  *(undefined4 *)(lVar6 + 0x58) = uVar8;
  puVar3 = PTR_DAT_075f72c0;
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f72c0);
  FUN_06008100(uVar4,lVar6,*(undefined8 *)PTR_DAT_075f72c8);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_06008100(uVar4,lVar6,*(undefined8 *)PTR_DAT_075f72d0);
  goto code_r0x06008c50;
}



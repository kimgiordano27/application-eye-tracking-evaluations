/*
FUNCTION_NAME: OVRPlugin$$get_HandSkeletonVersion
ENTRY_POINT: 05d1d2a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__get_HandSkeletonVersion
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
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
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  ulong in_stack_00000150;
  undefined8 in_stack_00000158;
  
  while( true ) {
    uVar8 = (undefined4)param_3;
    if ((bool)in_ZR) goto LAB_05d1d2ac;
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8ab8);
    FUN_05b32c00(lVar6,0);
    in_stack_00000158 = in_stack_00000108;
    in_stack_00000150 = in_stack_00000100;
    *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
    *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
    FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
    if (lVar6 == 0) break;
    *(ulong *)(lVar6 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(ulong *)(lVar6 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    *(ulong *)(lVar6 + 0x10) = in_stack_00000070;
    in_stack_00000158 = in_stack_000000d8;
    in_stack_00000150 = in_stack_000000d0;
    *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x14);
    *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0xc);
    FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
    uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    *(ulong *)(lVar6 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    *(ulong *)(lVar6 + 0x38) = in_stack_00000070;
    *(ulong *)(lVar6 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(undefined8 *)(lVar6 + 0x44) = uVar4;
    uVar7 = FUN_05d1d5b4(&stack0x00000100,unaff_x27);
    *(undefined4 *)(lVar6 + 0x2c) = uVar7;
    *(int *)(lVar6 + 0x30) = (int)uVar4;
    *(undefined4 *)(lVar6 + 0x34) = uVar8;
    FUN_05d1d5d8(*unaff_x23,unaff_x23[1],unaff_x23[2],*(undefined4 *)(lVar6 + 0x10),
                 *(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x18));
    uVar7 = unaff_x23[4];
    uVar10 = unaff_x23[5];
    uVar8 = FUN_05d1d83c(unaff_x23[3],uVar7,uVar10,unaff_x23[6],*(undefined4 *)(lVar6 + 0x1c),
                         *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                         *(undefined4 *)(lVar6 + 0x28));
    *(undefined4 *)(lVar6 + 0x58) = uVar8;
    puVar3 = PTR_DAT_06fb8aa0;
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8aa0);
    FUN_05d1c95c(uVar4,lVar6,*(undefined8 *)PTR_DAT_06fb8aa8);
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
    FUN_05d1c95c(uVar4,lVar6,*(undefined8 *)PTR_DAT_06fb8ab0);
    unaff_x28 = &stack0x000000d0;
    uVar8 = FUN_05d1c52c();
    in_stack_000000c0 = CONCAT44(uVar7,uVar8);
    unaff_x21 = (undefined8 *)PTR_DAT_06fb8a98;
    in_stack_000000c8 = uVar10;
    while( true ) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar5 = FUN_05d16c04(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
      if ((uVar5 & 1) != 0) {
        unaff_d10 = in_stack_000000c0 & 0xffffffff;
        in_register_00005148 = 0;
        unaff_d9 = in_stack_000000c0 >> 0x20;
        unaff_d8 = (ulong)in_stack_000000c8;
        FUN_05cc3684(unaff_x26,&stack0x00000130,0);
      }
      while( true ) {
        lVar6 = *(long *)(unaff_x24 + 0x20);
        if (lVar6 == 0) goto LAB_05d1d524;
        if (*(int *)(lVar6 + 0x18) <= unaff_w25) {
          auVar9._8_8_ = in_register_00005148;
          auVar9._0_8_ = unaff_d10;
          return auVar9;
        }
        FUN_04352628(&stack0x00000070,lVar6,unaff_w25,*unaff_x21);
        in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
        in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
        param_3 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
        in_stack_00000100 = in_stack_00000070;
        *(ulong *)((long)unaff_x28 + 0x54) = CONCAT44(in_stack_00000098,uStack0000000000000094);
        *(undefined8 *)((long)unaff_x28 + 0x4c) = param_3;
        lVar6 = *(long *)(unaff_x24 + 0x20);
        if (lVar6 == 0) goto LAB_05d1d524;
        iVar1 = *(int *)(lVar6 + 0x18);
        unaff_w25 = unaff_w25 + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = unaff_w25 / iVar1;
        }
        FUN_04352628(&stack0x00000070,lVar6,unaff_w25 - iVar2 * iVar1,*unaff_x21);
        in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
        in_stack_000000d0 = in_stack_00000070;
        in_stack_000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
        in_stack_000000e0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
        in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
        if (in_stack_00000128 != '\0') break;
        if ((in_stack_00000098 & 0xff) == 0) goto LAB_05d1d298;
      }
      if ((in_stack_00000098 & 0xff) == 0) break;
LAB_05d1d2ac:
      in_stack_00000158 = in_stack_00000108;
      in_stack_00000150 = in_stack_00000100;
      *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
      *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
      FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
      uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
      in_stack_000000a8 = uStack0000000000000078;
      in_stack_000000a0 = in_stack_00000070;
      uStack00000000000000b0 = uStack0000000000000080;
      FUN_05cc3684(&stack0x00000130,&stack0x000000a0,0);
      uStack0000000000000078 = 0;
      in_stack_00000070 = 0;
      FUN_05d18018(*unaff_x20,&stack0x00000070);
      in_stack_000000c0 = in_stack_00000070;
      in_stack_000000c8 = uStack0000000000000078;
    }
LAB_05d1d298:
    if (*(long *)(unaff_x24 + 0x20) == 0) break;
    in_ZR = *(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1;
  }
LAB_05d1d524:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 05d2c34c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetRenderModelProperties(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  int iVar5;
  long lVar6;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  ulong in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) <= iVar5) {
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0x38);
    FUN_04532450(&stack0x000000c0,param_1,iVar5,*unaff_x23);
    uVar2 = in_stack_000000c0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04532450(&stack0x00000080,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_000000c0 = in_stack_00000080;
    uStack00000000000000e8 = (undefined4)in_stack_000000a8;
    uStack00000000000000ec = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
    uStack00000000000000e0 = uStack00000000000000a0;
    uStack00000000000000e4 = uStack00000000000000a4;
    in_stack_000000f8 = in_stack_000000b8;
    uStack00000000000000f0 = (undefined4)in_stack_000000b0;
    uStack00000000000000f4 = (undefined4)((ulong)in_stack_000000b0 >> 0x20);
    in_stack_00000060 = CONCAT44(uStack00000000000000e8,uStack00000000000000a4);
    uStack0000000000000074 = in_stack_000000b8;
    uStack0000000000000068 = uStack00000000000000ec;
    uStack000000000000006c = uStack00000000000000f0;
    uStack0000000000000070 = uStack00000000000000f4;
    if (lVar6 == 0) break;
    uStack0000000000000088 = uStack00000000000000ec;
    uStack0000000000000094 = (undefined4)in_stack_000000b8;
    uStack0000000000000098 = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
    uStack000000000000008c = uStack00000000000000f0;
    uStack0000000000000090 = uStack00000000000000f4;
    in_stack_00000080 = in_stack_00000060;
    FUN_05263c8c(lVar6,uVar2 & 0xffffffff,&stack0x00000080,*unaff_x24);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    lVar6 = *(long *)(unaff_x19 + 0x30);
    FUN_04532450(&stack0x00000080,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    uVar2 = in_stack_00000080;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04532450(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    uVar4 = uStack0000000000000038;
    uVar3 = uStack0000000000000034;
    uStack0000000000000088 = uStack0000000000000028;
    uStack000000000000008c = uStack000000000000002c;
    in_stack_00000080 = in_stack_00000020;
    uStack0000000000000098 = uStack0000000000000038;
    uStack000000000000009c = uStack000000000000003c;
    uStack0000000000000090 = uStack0000000000000030;
    uStack0000000000000094 = uStack0000000000000034;
    in_stack_000000a8 = in_stack_00000048;
    uStack00000000000000a0 = (undefined4)in_stack_00000040;
    uStack00000000000000a4 = (undefined4)((ulong)in_stack_00000040 >> 0x20);
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000b0 = in_stack_00000050;
    uVar1 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    if (lVar6 == 0) break;
    uStack0000000000000028 = uStack0000000000000030;
    uStack0000000000000034 = uStack000000000000003c;
    uStack0000000000000038 = uStack00000000000000a0;
    uStack000000000000002c = uVar3;
    uStack0000000000000030 = uVar4;
    in_stack_00000020 = uVar1;
    FUN_05263c8c(lVar6,uVar2 & 0xffffffff,&stack0x00000020,*unaff_x24);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_04532450(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    if (lVar6 == 0) break;
    FUN_03fb0268(lVar6,in_stack_00000020 & 0xffffffff,*unaff_x25);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_04532450(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    uVar2 = in_stack_00000020;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_04532450(&stack0x00000020,*(long *)(unaff_x19 + 0x28),iVar5,*unaff_x23);
    if (lVar6 == 0) break;
    FUN_0525d958(lVar6,uVar2 & 0xffffffff,in_stack_00000020._4_4_,*unaff_x26);
    param_1 = *(long *)(unaff_x19 + 0x28);
    iVar5 = iVar5 + 1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



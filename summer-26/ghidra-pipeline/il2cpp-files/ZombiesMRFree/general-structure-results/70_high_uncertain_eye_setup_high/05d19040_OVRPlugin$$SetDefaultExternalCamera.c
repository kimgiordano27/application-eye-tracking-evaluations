/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 05d19040
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


void OVRPlugin__SetDefaultExternalCamera(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  FUN_02fe925c(PTR_DAT_06fb8930);
  FUN_02fe925c(PTR_DAT_06fb8928);
  *(undefined1 *)(unaff_x23 + 0x895) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  lVar5 = thunk_FUN_0301080c(*unaff_x22);
  FUN_045719ec(lVar5,*unaff_x21);
  puVar4 = PTR_DAT_06fb8938;
  puVar3 = PTR_DAT_06fb87a0;
  puVar2 = PTR_DAT_06fb8798;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x130) != 0)) {
    FUN_04430ce4(&stack0x000000d0,*(long *)(unaff_x20 + 0x130),*(undefined8 *)PTR_DAT_06fb87b0);
    in_stack_00000088 = in_stack_000000d8;
    in_stack_00000080 = in_stack_000000d0;
    in_stack_00000090 = in_stack_000000e0;
    while( true ) {
      uVar6 = FUN_05506d10(&stack0x00000080,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        FUN_05506d0c(&stack0x00000080,*(undefined8 *)puVar2);
        in_stack_00000070 = 0;
        uStack0000000000000074 = 0;
        in_stack_00000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000060 = 0;
        uStack0000000000000064 = 0;
        in_stack_00000058 = 0;
        uStack000000000000005c = 0;
        in_stack_00000050 = 0;
        uStack0000000000000054 = 0;
        in_stack_00000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000040 = 0;
        uStack0000000000000044 = 0;
        in_stack_00000038 = 0;
        in_stack_00000030 = lVar5;
        thunk_FUN_03048534(&stack0x00000030,lVar5);
        in_stack_00000040 = *(undefined4 *)(unaff_x20 + 0xdc);
        in_stack_00000038 =
             CONCAT44(*(undefined4 *)(unaff_x20 + 0x128),*(undefined4 *)(unaff_x20 + 0xe4));
        uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
        in_stack_00000058 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf8) >> 0x20);
        uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
        in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xf0) >> 0x20);
        uStack0000000000000044 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
        in_stack_00000048 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xe8) >> 0x20);
        uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
        in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x110) >> 0x20);
        uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
        in_stack_00000068 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
        uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
        in_stack_00000060 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x100) >> 0x20);
        memcpy(unaff_x19,&stack0x00000030,0x48);
        return;
      }
      FUN_05d18c0c(&stack0x000000d0,in_stack_00000090);
      if (lVar5 == 0) break;
      lVar8 = *(long *)puVar4;
      in_stack_000000a8 = in_stack_000000d8;
      in_stack_000000a0 = in_stack_000000d0;
      in_stack_000000b8 = in_stack_000000e8;
      in_stack_000000b0 = in_stack_000000e0;
      in_stack_000000c8 = in_stack_000000f8;
      in_stack_000000c0 = in_stack_000000f0;
      lVar7 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
        *(undefined8 *)(lVar7 + 0x38) = in_stack_000000e8;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_000000e0;
        *(undefined8 *)(lVar7 + 0x48) = in_stack_000000f8;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_000000f0;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_000000d8;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_000000d0;
        thunk_FUN_03048534(lVar7 + 0x40,0);
      }
      else {
        FUN_0457230c(lVar5,&stack0x000000d0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



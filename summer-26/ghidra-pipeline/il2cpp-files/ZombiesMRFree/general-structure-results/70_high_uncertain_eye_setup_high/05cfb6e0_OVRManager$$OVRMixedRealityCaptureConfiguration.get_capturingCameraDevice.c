/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice
ENTRY_POINT: 05cfb6e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  FUN_05cf4c7c();
  in_stack_00000098 = in_stack_000000d8;
  in_stack_00000090 = in_stack_000000d0;
  *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x54);
  *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x4c);
  iVar1 = *(int *)(unaff_x19 + 4);
  if (iVar1 == 4) {
    FUN_05cfb9ac(*(undefined4 *)((long)unaff_x19 + 4),*(undefined4 *)(unaff_x19 + 1),
                 *(undefined4 *)((long)unaff_x19 + 0xc));
  }
  else if (iVar1 == 3) {
    FUN_05cfb918(*(undefined4 *)((long)unaff_x19 + 4),*(undefined4 *)(unaff_x19 + 1),
                 *(undefined4 *)((long)unaff_x19 + 0xc));
  }
  else if (iVar1 == 2) {
    FUN_05cfb884(*(undefined4 *)((long)unaff_x19 + 4),*(undefined4 *)(unaff_x19 + 1),
                 *(undefined4 *)((long)unaff_x19 + 0xc));
  }
  iVar1 = *(int *)((long)unaff_x19 + 0x24);
  if (iVar1 == 1) {
    FUN_05cfbb30(*(undefined4 *)(unaff_x19 + 2),*(undefined4 *)((long)unaff_x19 + 0x14),
                 *(undefined4 *)(unaff_x19 + 3),*(undefined4 *)((long)unaff_x19 + 0x1c));
  }
  else if (iVar1 == 3) {
    FUN_05cfba58(*(undefined4 *)(unaff_x19 + 2),*(undefined4 *)((long)unaff_x19 + 0x14),
                 *(undefined4 *)(unaff_x19 + 3),*(undefined4 *)((long)unaff_x19 + 0x1c));
  }
  else if (iVar1 == 2) {
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05cfb880;
    FUN_05cf598c(*(undefined4 *)(unaff_x19 + 2),*(undefined4 *)((long)unaff_x19 + 0x14),
                 *(undefined4 *)(unaff_x19 + 3),*(undefined4 *)((long)unaff_x19 + 0x1c),
                 *(long *)(unaff_x20 + 0x20),0);
  }
  puVar2 = PTR_DAT_06f98e20;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    FUN_05cf4c7c(&stack0x000000d0,*(long *)(unaff_x20 + 0x20),0);
    uStack0000000000000084 = *(undefined8 *)(unaff_x21 + 0x54);
    uStack0000000000000078 = (undefined4)in_stack_000000d8;
    in_stack_00000070 = in_stack_000000d0;
    uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x21 + 0x4c);
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x4c) >> 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar3 = FUN_06902bf8(&stack0x000000d0,0);
    uStack0000000000000064 = *(undefined8 *)(unaff_x21 + 0x54);
    uStack0000000000000058 = (undefined4)in_stack_000000d8;
    in_stack_00000050 = in_stack_000000d0;
    uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x21 + 0x4c);
    uStack0000000000000060 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x4c) >> 0x20);
    FUN_05cfaf0c(uVar3,&stack0x00000050,&stack0x00000090,&stack0x00000070);
    lVar5 = *(long *)(unaff_x20 + 0x48);
    uVar3 = unaff_x19[4];
    uVar8 = unaff_x19[1];
    uVar7 = *unaff_x19;
    uVar10 = unaff_x19[3];
    uVar9 = unaff_x19[2];
    if (lVar5 != 0) {
      in_stack_000000b8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      pcVar6 = *(code **)(lVar5 + 0x18);
      uVar4 = *(undefined8 *)(lVar5 + 0x40);
      in_stack_000000b0 = in_stack_00000050;
      *(undefined8 *)(unaff_x21 + 0x34) = uStack0000000000000064;
      *(ulong *)(unaff_x21 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
      in_stack_000000d0 = uVar7;
      in_stack_000000d8 = uVar8;
      in_stack_000000e0 = uVar9;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar3;
      (*pcVar6)(uVar4,&stack0x000000d0,&stack0x000000b0,*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
LAB_05cfb880:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



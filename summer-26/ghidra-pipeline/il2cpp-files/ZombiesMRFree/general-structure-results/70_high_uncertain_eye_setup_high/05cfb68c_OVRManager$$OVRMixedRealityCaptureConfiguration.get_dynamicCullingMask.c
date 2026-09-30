/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask
ENTRY_POINT: 05cfb68c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
               (long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  
  if ((DAT_0739875e & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f98e20);
    DAT_0739875e = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_05cf4c7c(&stack0x000000d0,*(long *)(param_1 + 0x20),0);
    uStack00000000000000a4 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
    in_stack_00000098 = uStack00000000000000d8;
    in_stack_00000090 = in_stack_000000d0;
    uStack00000000000000a0 = uStack00000000000000e0;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 4) {
      FUN_05cfb9ac(*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1),
                   *(undefined4 *)((long)param_2 + 0xc),param_1);
    }
    else if (iVar1 == 3) {
      FUN_05cfb918(*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1),
                   *(undefined4 *)((long)param_2 + 0xc),param_1);
    }
    else if (iVar1 == 2) {
      FUN_05cfb884(*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1),
                   *(undefined4 *)((long)param_2 + 0xc),param_1);
    }
    iVar1 = *(int *)((long)param_2 + 0x24);
    if (iVar1 == 1) {
      FUN_05cfbb30(*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),
                   *(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),param_1);
    }
    else if (iVar1 == 3) {
      FUN_05cfba58(*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),
                   *(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),param_1);
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05cfb880;
      FUN_05cf598c(*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14),
                   *(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                   *(long *)(param_1 + 0x20),0);
    }
    puVar2 = PTR_DAT_06f98e20;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_05cf4c7c(&stack0x000000d0,*(long *)(param_1 + 0x20),0);
      uStack0000000000000084 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
      in_stack_00000078 = uStack00000000000000d8;
      in_stack_00000070 = in_stack_000000d0;
      uStack0000000000000080 = uStack00000000000000e0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_06902bf8(&stack0x000000d0,0);
      in_stack_00000058 = uStack00000000000000d8;
      in_stack_00000050 = in_stack_000000d0;
      uStack0000000000000064 = uStack00000000000000e4;
      in_stack_00000068 = in_stack_000000e8;
      uStack000000000000005c = uStack00000000000000dc;
      in_stack_00000060 = uStack00000000000000e0;
      FUN_05cfaf0c(uVar3,&stack0x00000050,&stack0x00000090,&stack0x00000070);
      lVar4 = *(long *)(param_1 + 0x48);
      uStack00000000000000c4 = CONCAT44(in_stack_00000068,uStack0000000000000064);
      if (lVar4 != 0) {
        uStack00000000000000d8 = (undefined4)param_2[1];
        uStack00000000000000dc = (undefined4)((ulong)param_2[1] >> 0x20);
        in_stack_000000e8 = (undefined4)param_2[3];
        uStack00000000000000ec = (undefined4)((ulong)param_2[3] >> 0x20);
        uStack00000000000000e0 = (undefined4)param_2[2];
        uStack00000000000000e4 = (undefined4)((ulong)param_2[2] >> 0x20);
        in_stack_000000b8 = in_stack_00000058;
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000c0 = in_stack_00000060;
        in_stack_000000d0 = *param_2;
        in_stack_000000f0 = param_2[4];
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),&stack0x000000d0,&stack0x000000b0,
                   *(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
LAB_05cfb880:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 069664cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined4 uVar6;
  ulong uVar7;
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
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = param_1;
  while (uVar2 = FUN_061c1964(&stack0x000000a0,*unaff_x22), uVar3 = in_stack_000000b0,
        (uVar2 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9e200(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar3 = thunk_FUN_07ca227c(*(long *)(unaff_x19 + 0x10),0);
      uVar3 = FUN_065cddf0(*unaff_x24,uVar3,*unaff_x25,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4fb40(uVar3,0);
    }
  }
  FUN_061c1960(&stack0x000000a0,*unaff_x21);
  puVar1 = PTR_DAT_084b6f58;
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
    lVar4 = FUN_04de82e0(lVar4,0,*(undefined8 *)PTR_DAT_084b6f58);
    if (lVar4 != 0) {
      uVar3 = FUN_07d1c660(lVar4,0);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),0);
      if ((*(long *)(unaff_x19 + 0x50) != 0) &&
         (lVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x50),0,*(undefined8 *)puVar1), lVar4 != 0)) {
        uVar3 = FUN_07d1c63c(lVar4,0);
        puVar5 = (undefined8 *)(unaff_x19 + 0x78);
        *puVar5 = uVar3;
        thunk_FUN_03afed3c(puVar5,0);
        FUN_07d1c8b8(&stack0x00000060,puVar5,0);
        in_stack_00000088 = uStack0000000000000068;
        in_stack_00000080 = uStack0000000000000060;
        in_stack_00000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        uVar6 = FUN_07d1d480(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x58) = uVar6;
        FUN_07d1c8b8(&stack0x00000040,puVar5,0);
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        uVar6 = FUN_07d1d470(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x5c) = uVar6;
        FUN_07d1caf0(&stack0x00000020,puVar5,0);
        in_stack_00000088 = in_stack_00000028;
        in_stack_00000080 = in_stack_00000020;
        in_stack_00000098 = in_stack_00000038;
        in_stack_00000090 = in_stack_00000030;
        uVar6 = FUN_07d1d480(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x60) = uVar6;
        FUN_07d1caf0(puVar5,0);
        in_stack_00000088 = in_stack_00000008;
        in_stack_00000080 = in_stack_00000000;
        in_stack_00000098 = in_stack_00000018;
        in_stack_00000090 = in_stack_00000010;
        uVar6 = FUN_07d1d470(&stack0x00000080,0);
        uVar2 = NEON_fmov(0x3f800000,4);
        uVar7 = *(ulong *)(unaff_x19 + 0x28);
        *(undefined4 *)(unaff_x19 + 100) = uVar6;
        *(ulong *)(unaff_x19 + 0x28) =
             uVar2 ^ (uVar2 ^ uVar7) &
                     ~CONCAT44(-(uint)((float)(uVar7 >> 0x20) < (float)(uVar2 >> 0x20)),
                               -(uint)((float)uVar7 < (float)uVar2));
        FUN_0693839c();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  return;
}



/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 0696640c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar10;
  undefined4 uVar11;
  ulong uVar12;
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
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  FUN_03a8a718(PTR_DAT_084b59d0);
  FUN_03a8a718(PTR_DAT_084b6f50);
  FUN_03a8a718(PTR_DAT_084b6f58);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_084b6f60);
  FUN_03a8a718(PTR_DAT_08487050);
  *(undefined1 *)(unaff_x20 + 0xb8) = 1;
  puVar6 = PTR_DAT_084b6f60;
  puVar5 = PTR_DAT_084b59c0;
  puVar4 = PTR_DAT_084b59b8;
  puVar3 = PTR_DAT_08487050;
  puVar2 = PTR_DAT_08486be8;
  puVar1 = PTR_DAT_08486738;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = (undefined8 *)0x0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04de90b8(&stack0x00000060,*(long *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_084b59d0);
    in_stack_000000b0 = in_stack_00000070;
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_00000060 = 0;
    in_stack_00000068 = &stack0x000000a0;
    while (uVar7 = FUN_061c1964(&stack0x000000a0,*(undefined8 *)puVar5), uVar8 = in_stack_000000b0,
          (uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_07c9e200(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar8 = thunk_FUN_07ca227c(*(long *)(unaff_x19 + 0x10),0);
        uVar8 = FUN_065cddf0(*(undefined8 *)puVar6,uVar8,*(undefined8 *)puVar3,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4fb40(uVar8,0);
      }
    }
    FUN_061c1960(&stack0x000000a0,*(undefined8 *)puVar4);
    puVar1 = PTR_DAT_084b6f58;
    lVar9 = *(long *)(unaff_x19 + 0x50);
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
      return;
    }
    lVar9 = FUN_04de82e0(lVar9,0,*(undefined8 *)PTR_DAT_084b6f58);
    if (lVar9 != 0) {
      uVar8 = FUN_07d1c660(lVar9,0);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),0);
      if ((*(long *)(unaff_x19 + 0x50) != 0) &&
         (lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x50),0,*(undefined8 *)puVar1), lVar9 != 0)) {
        uVar8 = FUN_07d1c63c(lVar9,0);
        puVar10 = (undefined8 *)(unaff_x19 + 0x78);
        *puVar10 = uVar8;
        thunk_FUN_03afed3c(puVar10,0);
        FUN_07d1c8b8(&stack0x00000060,puVar10,0);
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        in_stack_00000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        uVar11 = FUN_07d1d480(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x58) = uVar11;
        FUN_07d1c8b8(&stack0x00000040,puVar10,0);
        in_stack_00000088 = (undefined8 *)in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        uVar11 = FUN_07d1d470(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x5c) = uVar11;
        FUN_07d1caf0(&stack0x00000020,puVar10,0);
        in_stack_00000088 = (undefined8 *)in_stack_00000028;
        in_stack_00000080 = in_stack_00000020;
        in_stack_00000098 = in_stack_00000038;
        in_stack_00000090 = in_stack_00000030;
        uVar11 = FUN_07d1d480(&stack0x00000080,0);
        *(undefined4 *)(unaff_x19 + 0x60) = uVar11;
        FUN_07d1caf0(puVar10,0);
        in_stack_00000088 = (undefined8 *)in_stack_00000008;
        in_stack_00000080 = in_stack_00000000;
        in_stack_00000098 = in_stack_00000018;
        in_stack_00000090 = in_stack_00000010;
        uVar11 = FUN_07d1d470(&stack0x00000080,0);
        uVar7 = NEON_fmov(0x3f800000,4);
        uVar12 = *(ulong *)(unaff_x19 + 0x28);
        *(undefined4 *)(unaff_x19 + 100) = uVar11;
        *(ulong *)(unaff_x19 + 0x28) =
             uVar7 ^ (uVar7 ^ uVar12) &
                     ~CONCAT44(-(uint)((float)(uVar12 >> 0x20) < (float)(uVar7 >> 0x20)),
                               -(uint)((float)uVar12 < (float)uVar7));
        FUN_0693839c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



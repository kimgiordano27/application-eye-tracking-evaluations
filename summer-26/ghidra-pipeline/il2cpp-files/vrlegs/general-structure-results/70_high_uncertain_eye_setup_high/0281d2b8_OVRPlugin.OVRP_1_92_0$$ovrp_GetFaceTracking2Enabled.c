/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Enabled
ENTRY_POINT: 0281d2b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Enabled(ulong param_1,long param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  int unaff_w21;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  undefined1 auVar5 [16];
  long in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01a46ff8();
  }
  pcVar2 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(param_2 + 0xc0) + 8) + 0x80));
  if (((-0x1d < unaff_w20) && (0x34 < unaff_w21)) && (*pcVar2 != '\0')) {
    uVar3 = *(undefined8 *)*unaff_x19;
    uVar4 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar5 = FUN_027d3bc8(uVar3,uVar4,0);
    *unaff_x19 = auVar5;
  }
  if (unaff_w20 < 0) {
    if (unaff_w20 + unaff_w26 + 0x1c < 1) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000098 = (*(undefined8 **)(*unaff_x28 + 0xb8))[1];
      in_stack_00000090 = **(undefined8 **)(*unaff_x28 + 0xb8);
      *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
      *(undefined8 *)*unaff_x19 = in_stack_00000090;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    uVar3 = *(undefined8 *)*unaff_x19;
    uVar4 = *(undefined8 *)(*unaff_x19 + 8);
    auVar1 = *unaff_x19;
    auVar5 = *unaff_x19;
    if (unaff_w20 < -0x1c) {
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar5 = FUN_027d3e50(uVar3,uVar4,in_stack_00000080,in_stack_00000088,0);
      *unaff_x19 = auVar5;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - unaff_w20,0);
      uVar3 = in_stack_00000070;
      uVar4 = in_stack_00000078;
    }
    else {
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,-unaff_w20,0);
      uVar3 = in_stack_00000080;
      uVar4 = in_stack_00000088;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar3 = in_stack_00000080;
        uVar4 = in_stack_00000088;
        auVar5 = auVar1;
      }
    }
    auVar5 = FUN_027d3da0(auVar5._0_8_,auVar5._8_8_,uVar3,uVar4,0);
    *unaff_x19 = auVar5;
  }
  if (unaff_w25 == 0x2d) {
    uVar3 = *(undefined8 *)*unaff_x19;
    uVar4 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar5 = FUN_027d3bc0(uVar3,uVar4,0);
    *unaff_x19 = auVar5;
  }
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(in_stack_00000048 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



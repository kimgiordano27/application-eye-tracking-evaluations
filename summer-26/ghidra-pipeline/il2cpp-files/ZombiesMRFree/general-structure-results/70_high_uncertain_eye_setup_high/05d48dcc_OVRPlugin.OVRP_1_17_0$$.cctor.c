/*
FUNCTION_NAME: OVRPlugin.OVRP_1_17_0$$.cctor
ENTRY_POINT: 05d48dcc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_17_0___cctor(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  (*param_1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000034;
  *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000020;
  FUN_05d48908();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency:
  uVar5 = (*(code *)*puVar1)();
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar5;
  FUN_05d48908();
  return;
}



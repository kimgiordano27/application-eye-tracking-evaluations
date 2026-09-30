/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 05d48d44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_16_0___cctor(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar6;
  uint uStack000000000000002c;
  uint uStack0000000000000034;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b60);
    *(undefined1 *)(unaff_x21 + 0xb76) = 1;
  }
  puVar1 = PTR_DAT_06fb4b60;
  uStack000000000000002c = 0;
  uStack0000000000000034 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
          goto LAB_05d48dc4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d48dc4:
    (*(code *)*puVar2)();
    if (unaff_x19 != 0) {
      *(ulong *)(unaff_x19 + 0x34) = (ulong)uStack0000000000000034;
      *(ulong *)(unaff_x19 + 0x2c) = (ulong)uStack000000000000002c;
      *(ulong *)(unaff_x19 + 0x28) = (ulong)uStack000000000000002c << 0x20;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      FUN_05d48908();
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency:
      uVar6 = (*(code *)*puVar2)();
      *(undefined4 *)(unaff_x19 + 0x3c) = uVar6;
      FUN_05d48908();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



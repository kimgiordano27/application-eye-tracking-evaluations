/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 036807d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x19 + 0x60);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0x270)) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 0x13) * 0x10 + 0x138);
        goto LAB_03680828;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03680828:
  uVar1 = (*(code *)*puVar2)();
  if (lVar5 != 0) {
    FUN_0367fb94(lVar5,uVar1,*(undefined1 *)(unaff_x19 + 0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



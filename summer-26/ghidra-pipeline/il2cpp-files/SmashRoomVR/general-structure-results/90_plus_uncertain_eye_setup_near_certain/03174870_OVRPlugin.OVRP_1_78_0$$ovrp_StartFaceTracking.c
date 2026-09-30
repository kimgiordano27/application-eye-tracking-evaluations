/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 03174870
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  
  lVar2 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xb20)) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_031748c0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_031748c0:
  (*(code *)*puVar1)();
  FUN_03174810();
  if ((*(long *)(unaff_x21 + 0x10) != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if ((unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18)) &&
       (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18))) {
      FUN_03136f90();
      *(uint *)(unaff_x21 + 0x44) = *(uint *)(unaff_x21 + 0x44) & (unaff_w23 ^ 0xffffffff);
      if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_03174974;
      if (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
        FUN_031371a0();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_03174974:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



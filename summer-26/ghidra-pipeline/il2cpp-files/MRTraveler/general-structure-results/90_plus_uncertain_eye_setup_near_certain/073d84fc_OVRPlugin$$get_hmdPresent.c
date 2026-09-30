/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 073d84fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__get_hmdPresent
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar2;
  
  while (uVar2 = OVRPlugin__set_rotation(unaff_x23), param_5 != 0) {
    if (*(uint *)(param_5 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    param_5 = param_5 + unaff_x24;
    *(undefined4 *)(param_5 + 0x20) = uVar2;
    *(undefined4 *)(param_5 + 0x24) = param_2;
    *(undefined4 *)(param_5 + 0x28) = param_3;
    *(undefined4 *)(param_5 + 0x2c) = param_4;
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x24 = unaff_x24 + 0x10;
      lVar1 = *unaff_x25;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar1 = *unaff_x25;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_073d8544;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_073d83e0();
      if (lVar1 == 0) goto LAB_073d8544;
      unaff_x23 = FUN_073d828c(lVar1,unaff_x21 & 0xffffffff);
    } while (unaff_x23 == 0);
    if (*unaff_x19 == 0) break;
    param_5 = FUN_073d4dc4();
  }
LAB_073d8544:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 073d8544 to 074d8553 has its CatchHandler @ 073d8558 */
  FUN_03c8fb30();
}



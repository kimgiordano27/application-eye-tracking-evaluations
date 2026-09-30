/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 06006744
PROGRAM: vandalizer-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  
  while (unaff_x19 != 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x24) {
LAB_0600678c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar1 = unaff_x19 + unaff_x24 * 0x10;
    *(undefined4 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x24) = param_2;
    *(undefined4 *)(lVar1 + 0x28) = param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) goto LAB_0600678c;
    if (unaff_x21 == 0) break;
    uVar2 = *(uint *)(unaff_x22 + (long)(int)unaff_w23 * 4 + 0x20);
    unaff_x24 = (long)(int)uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) goto LAB_0600678c;
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_0600678c;
    lVar1 = unaff_x21 + unaff_x24 * 0x10;
    param_2 = *(undefined4 *)(lVar1 + 0x24);
    param_3 = *(undefined4 *)(lVar1 + 0x28);
    param_4 = *(undefined4 *)(lVar1 + 0x2c);
    param_1 = FUN_06e45c98(*(undefined4 *)(lVar1 + 0x20),0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



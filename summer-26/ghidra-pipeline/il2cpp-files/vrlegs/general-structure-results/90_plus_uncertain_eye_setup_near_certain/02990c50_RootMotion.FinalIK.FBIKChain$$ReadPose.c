/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$ReadPose
ENTRY_POINT: 02990c50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02990a5c) */

bool RootMotion_FinalIK_FBIKChain__ReadPose(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  bool bVar3;
  int unaff_w21;
  int unaff_w23;
  long unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (((unaff_w21 == 0x14) || (unaff_w21 == 0)) && (*(char *)(unaff_x20 + 0x150) != '\0')) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = FUN_0299ec14(*(long *)(unaff_x20 + 0x10),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xa8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      *(uint *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + (uint)*(byte *)(unaff_x20 + 0x150);
    }
    FUN_029910c8();
    bVar3 = 0 < unaff_w23;
  }
  else {
    bVar3 = false;
  }
  if (in_stack_00000020._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return bVar3;
}



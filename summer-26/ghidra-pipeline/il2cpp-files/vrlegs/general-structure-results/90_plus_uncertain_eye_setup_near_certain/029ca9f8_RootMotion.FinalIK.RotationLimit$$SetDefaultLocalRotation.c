/*
FUNCTION_NAME: RootMotion.FinalIK.RotationLimit$$SetDefaultLocalRotation
ENTRY_POINT: 029ca9f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029caab0) */

void RootMotion_FinalIK_RotationLimit__SetDefaultLocalRotation(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000068;
  
  iVar3 = 0;
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  while( true ) {
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x22;
    }
    lVar2 = **(long **)(lVar1 + 0xb8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= iVar3) {
      if (in_stack_00000068._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return;
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar2,iVar3,&stack0x00000018,*unaff_x23);
    FUN_0219eaf8();
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



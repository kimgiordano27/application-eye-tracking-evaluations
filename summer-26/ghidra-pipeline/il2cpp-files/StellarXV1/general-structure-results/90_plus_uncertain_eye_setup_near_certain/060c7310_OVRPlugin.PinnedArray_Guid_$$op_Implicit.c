/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 060c7310
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x21;
  long *unaff_x24;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x24;
  }
  lVar3 = **(long **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_040b4b34(**(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0),&stack0x00000010)
  ;
  uVar2 = thunk_FUN_040b4b34(**(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0));
  if (lVar3 != 0) {
    FUN_07610008(lVar3,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



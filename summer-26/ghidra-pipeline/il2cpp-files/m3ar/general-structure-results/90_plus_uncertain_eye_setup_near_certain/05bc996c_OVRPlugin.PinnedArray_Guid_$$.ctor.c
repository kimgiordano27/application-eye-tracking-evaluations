/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 05bc996c
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xe08));
  *(undefined1 *)(unaff_x23 + 0x978) = 1;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar1 = *unaff_x21;
  }
  in_stack_00000048 = unaff_x22[1];
  in_stack_00000040 = *unaff_x22;
  in_stack_00000058 = unaff_x22[3];
  in_stack_00000050 = unaff_x22[2];
  lVar1 = **(long **)(lVar1 + 0xb8);
  in_stack_00000068 = unaff_x22[5];
  in_stack_00000060 = unaff_x22[4];
  in_stack_00000078 = unaff_x22[7];
  in_stack_00000070 = unaff_x22[6];
  uVar2 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000040)
  ;
  uVar3 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0));
  if (lVar1 != 0) {
    FUN_0747f5b4(lVar1,uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



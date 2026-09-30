/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 060c72e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092baa20);
    *(undefined1 *)(unaff_x25 + 0xf03) = 1;
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar1 = *unaff_x24;
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  in_stack_00000010 = param_3;
  in_stack_00000018 = param_4;
  uVar2 = thunk_FUN_040b4b34(**(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0),&stack0x00000010)
  ;
  uVar3 = thunk_FUN_040b4b34(**(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0));
  if (lVar1 != 0) {
    FUN_07610008(lVar1,uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



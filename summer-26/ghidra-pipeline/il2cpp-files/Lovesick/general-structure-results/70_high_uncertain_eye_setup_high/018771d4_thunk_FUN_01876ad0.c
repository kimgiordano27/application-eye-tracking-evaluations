/*
FUNCTION_NAME: thunk_FUN_01876ad0
ENTRY_POINT: 018771d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_01876ad0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
  if ((DAT_0377974f & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    DAT_0377974f = 1;
  }
  FUN_017b46ec(param_1,0);
  FUN_01865608(param_2,*(undefined8 *)puVar1);
  *(long **)(param_1 + 0x20) = param_2;
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



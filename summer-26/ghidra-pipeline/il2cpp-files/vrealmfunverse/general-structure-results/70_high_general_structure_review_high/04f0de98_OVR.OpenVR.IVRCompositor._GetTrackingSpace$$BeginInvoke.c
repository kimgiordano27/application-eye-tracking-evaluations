/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetTrackingSpace$$BeginInvoke
ENTRY_POINT: 04f0de98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRCompositor__GetTrackingSpace__BeginInvoke(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  long *unaff_x23;
  undefined4 unaff_s8;
  
  if (unaff_x21 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar2 = *param_1;
    unaff_x21 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(unaff_x21,uVar2,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
                 ,0);
    plVar1 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar1 = unaff_x21;
    thunk_FUN_02bb0e9c(plVar1,unaff_x21);
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x20) = unaff_x21;
    thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x20),unaff_x21);
    FUN_04dbdb8c();
    *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10));
    *(undefined4 *)(unaff_x20 + 0x18) = unaff_s8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



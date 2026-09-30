/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._WaitGetPoses$$BeginInvoke
ENTRY_POINT: 04f0dfa4
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


void OVR_OpenVR_IVRCompositor__WaitGetPoses__BeginInvoke(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
  lVar3 = puVar2[3];
  if (lVar3 == 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar3,uVar4,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Vector3,_float>>_TypeInfo
                 ,0);
    plVar1 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *plVar1 = lVar3;
    thunk_FUN_02bb0e9c(plVar1,lVar3);
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar3;
    thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x20),lVar3);
    FUN_04dbdb8c();
    FUN_04f0e048();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



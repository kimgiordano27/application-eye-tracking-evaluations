/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._WaitGetPoses$$Invoke
ENTRY_POINT: 04f0df90
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


void OVR_OpenVR_IVRCompositor__WaitGetPoses__Invoke(void)

{
  long lVar1;
  long *plVar2;
  undefined1 in_w8;
  undefined8 *puVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x21 + 0x7f5) = in_w8;
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x23;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar3[3];
  if (lVar4 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar3 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar4,uVar5,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Vector3,_float>>_TypeInfo
                 ,0);
    plVar2 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *plVar2 = lVar4;
    thunk_FUN_02bb0e9c(plVar2,lVar4);
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar4;
    thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x20),lVar4);
    FUN_04dbdb8c();
    FUN_04f0e048();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



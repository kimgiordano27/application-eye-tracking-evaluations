/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetTrackingSpace$$EndInvoke
ENTRY_POINT: 04f0deb4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRCompositor__GetTrackingSpace__EndInvoke(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x23;
  undefined4 unaff_s8;
  
  uVar3 = *param_1;
  uVar1 = thunk_FUN_02b79644(**(undefined8 **)(in_x9 + 0xf38));
  FUN_049b830c(uVar1,uVar3,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_Collections_CircularBuffer<ValueTuple<Quaternion,_float>>_TypeInfo
               ,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_02bb0e9c(puVar2,uVar1);
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x20),uVar1);
    FUN_04dbdb8c();
    *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10));
    *(undefined4 *)(unaff_x20 + 0x18) = unaff_s8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



/*
FUNCTION_NAME: OVRFace$$get_FaceExpressions
ENTRY_POINT: 01988044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFace__get_FaceExpressions(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar2 = FUN_0267bd34(*param_1,0);
  puVar1 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__;
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x28) = uVar2;
    uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
    puVar1 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
    if (3 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2c) = uVar2;
      uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = StringLiteral_9940;
      if (4 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x30) = uVar2;
        *(long *)(unaff_x19 + 0x50) = unaff_x20;
        uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        *(undefined4 *)(unaff_x19 + 0x58) = uVar2;
        thunk_FUN_0268a01c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}



/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 04f1eebc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  FUN_04cac0f0(param_1,param_2,0);
  puVar1 = Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = param_1;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),param_1);
    uVar2 = FUN_02b3c908(*unaff_x22,4);
    FUN_04cac0f0(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = System_Runtime_Serialization_DataNode<DateTime>_TypeInfo;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar2);
      uVar2 = FUN_02b3c908(*unaff_x22,4);
      FUN_04cac0f0(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = DG_Tweening_Core_DOSetter<Vector3>_TypeInfo;
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar2);
        uVar2 = FUN_02b3c908(*unaff_x22,4);
        FUN_04cac0f0(uVar2,*(undefined8 *)puVar1,0);
        puVar1 = DG_Tweening_Core_DOSetter<float>_TypeInfo;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38),uVar2);
          uVar2 = FUN_02b3c908(*unaff_x22,4);
          FUN_04cac0f0(uVar2,*(undefined8 *)puVar1,0);
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar2);
            *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = unaff_x19;
            thunk_FUN_02bb0e9c();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}



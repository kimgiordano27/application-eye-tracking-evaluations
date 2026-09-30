/*
FUNCTION_NAME: Oculus.Interaction.Input.ShadowHand$$GetLocalPose
ENTRY_POINT: 052485f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_ShadowHand__GetLocalPose(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  undefined8 *unaff_x25;
  
  lVar1 = FUN_03ac0004();
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar2);
    lVar2 = *unaff_x23;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[4];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar2);
      puVar3 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                Unity_Collections_NativeArray_ReadOnly<InstanceHandle>_TypeInfo);
    FUN_0472ba3c(lVar4,uVar5,
                 *(undefined8 *)Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar4;
  }
  if (lVar1 != 0) {
    uVar5 = FUN_0303b0c0(lVar1,lVar4,*unaff_x25);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



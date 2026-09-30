/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02dc29d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 243
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  thunk_FUN_02b9ad44();
  uVar2 = FUN_05c8e378();
  if ((uVar2 & 1) == 0) {
    fVar6 = (float)FUN_02dc2b58();
    fVar6 = fVar6 + *(float *)(unaff_x19 + 0x40);
    fVar7 = fVar6 / *(float *)(unaff_x19 + 0x30);
    fVar8 = *(float *)(unaff_x19 + 0x48);
    if (fVar7 <= *(float *)(unaff_x19 + 0x48)) {
      fVar8 = fVar7;
    }
    fVar9 = *(float *)(unaff_x19 + 0x44);
    if (*(float *)(unaff_x19 + 0x44) <= fVar7) {
      fVar9 = fVar8;
    }
    *(float *)(unaff_x19 + 0x50) = fVar6;
    *(float *)(unaff_x19 + 0x54) = fVar9;
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    fVar8 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) * fVar9;
    uVar5 = CONCAT44(fVar8,(float)*(undefined8 *)(unaff_x19 + 0x58) * fVar9);
    fVar9 = fVar9 * *(float *)(unaff_x19 + 0x60);
    FUN_05c9c840(uVar5,fVar8,fVar9,*(long *)(unaff_x19 + 0x28),0);
    puVar1 = PTR_DAT_06312310;
    if (*(char *)(unaff_x19 + 0x4c) != '\0') {
      uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x50);
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x78),&stack0x0000002c);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x54);
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      in_stack_00000010 = uVar5;
      in_stack_00000018 = fVar9;
      uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)PTR_DAT_06312438,&stack0x00000010);
      uVar5 = FUN_04c0af6c(*(undefined8 *)PTR_DAT_0631b190,uVar3,uVar4,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c44914(uVar5,0);
    }
  }
  else if (*(char *)(unaff_x19 + 0x4c) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c41e34(*(undefined8 *)PTR_DAT_0631b198,0);
    return;
  }
  return;
}



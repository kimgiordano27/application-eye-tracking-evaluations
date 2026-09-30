/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Quatf>
ENTRY_POINT: 02dc2a34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 139
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Quatf>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  fVar5 = (float)FUN_02dc2b58();
  fVar5 = fVar5 + *(float *)(unaff_x19 + 0x40);
  fVar6 = fVar5 / *(float *)(unaff_x19 + 0x30);
  fVar7 = *(float *)(unaff_x19 + 0x48);
  if (fVar6 <= *(float *)(unaff_x19 + 0x48)) {
    fVar7 = fVar6;
  }
  fVar8 = *(float *)(unaff_x19 + 0x44);
  if (*(float *)(unaff_x19 + 0x44) <= fVar6) {
    fVar8 = fVar7;
  }
  *(float *)(unaff_x19 + 0x50) = fVar5;
  *(float *)(unaff_x19 + 0x54) = fVar8;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar7 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) * fVar8;
    uVar4 = CONCAT44(fVar7,(float)*(undefined8 *)(unaff_x19 + 0x58) * fVar8);
    fVar8 = fVar8 * *(float *)(unaff_x19 + 0x60);
    FUN_05c9c840(uVar4,fVar7,fVar8,*(long *)(unaff_x19 + 0x28),0);
    puVar1 = PTR_DAT_06312310;
    if (*(char *)(unaff_x19 + 0x4c) != '\0') {
      uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x50);
      uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x78),&stack0x0000002c);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x54);
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      in_stack_00000010 = uVar4;
      in_stack_00000018 = fVar8;
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)PTR_DAT_06312438,&stack0x00000010);
      uVar4 = FUN_04c0af6c(*(undefined8 *)PTR_DAT_0631b190,uVar2,uVar3,uVar4,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c44914(uVar4,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



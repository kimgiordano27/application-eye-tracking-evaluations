/*
FUNCTION_NAME: Oculus.Interaction.TransformTrackingToWorldTransformer$$Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose
ENTRY_POINT: 04d8b0e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_TransformTrackingToWorldTransformer__Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose
               (void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined *puVar6;
  
  if (in_w8 == 0x2b) {
    unaff_w25 = unaff_w25 + 1;
    in_stack_00000008._4_4_ = unaff_w25;
LAB_04d8b124:
    bVar2 = false;
    lVar7 = 1;
Oculus_Interaction_ActiveStateGate__set_CloseSelector:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = unaff_w25 + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= unaff_w25) {
LAB_04d8b1f4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (*(short *)(unaff_x23 + (long)(int)unaff_w25 * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_04d8b1f4;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w25 = unaff_w25 + 2;
          unaff_w22 = 0x10;
          in_stack_00000008._4_4_ = unaff_w25;
        }
      }
    }
    lVar3 = FUN_04d8b43c(unaff_w22);
    if (in_stack_00000008._4_4_ == unaff_w25) {
      thunk_FUN_02ba3594(PTR_DAT_06328948);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = PTR_DAT_063336f8;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)in_stack_00000008._4_4_)) {
        *unaff_x20 = in_stack_00000008._4_4_;
        if (lVar3 != -0x8000000000000000) {
          bVar2 = true;
        }
        if (((unaff_w22 != 10) || ((unaff_w19 >> 9 & 1) != 0)) || (bVar2)) {
          if (unaff_w22 != 10) {
            lVar7 = 1;
          }
          return lVar3 * lVar7;
        }
        thunk_FUN_02ba3594(PTR_DAT_06316e90);
        uVar4 = thunk_FUN_02b79644();
        puVar6 = PTR_DAT_0632fdc0;
        goto LAB_04d8b310;
      }
      thunk_FUN_02ba3594(PTR_DAT_06328948);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = PTR_DAT_06333330;
    }
    uVar5 = thunk_FUN_02ba3594(puVar6);
    FUN_04d63e8c(uVar4,uVar5,0);
  }
  else {
    if (in_w8 != 0x2d) goto LAB_04d8b124;
    if (unaff_w22 != 10) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar4 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06333708);
      FUN_04cf4a4c(uVar4,uVar5,0);
      goto LAB_04d8b320;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      unaff_w25 = unaff_w25 + 1;
      lVar7 = -1;
      bVar2 = true;
      in_stack_00000008._4_4_ = unaff_w25;
      goto Oculus_Interaction_ActiveStateGate__set_CloseSelector;
    }
    thunk_FUN_02ba3594(PTR_DAT_06316e90);
    uVar4 = thunk_FUN_02b79644();
    puVar6 = PTR_DAT_06333710;
LAB_04d8b310:
    uVar5 = thunk_FUN_02ba3594(puVar6);
    FUN_04d8ab64(uVar4,uVar5);
  }
LAB_04d8b320:
  uVar5 = thunk_FUN_02ba3594(PTR_DAT_06333718);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar5);
}



/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 02aee8b8
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined4 uVar6;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000200;
  undefined4 in_stack_00000208;
  
  puVar1 = PTR_DAT_06e1faf8;
  if ((unaff_x22 == 0) || (lVar5 = *(long *)(unaff_x22 + 0x10), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((int)*(uint *)(lVar5 + 0x18) <= (int)unaff_w23) {
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06e1faf8);
    uVar2 = thunk_FUN_015d01b0(uVar2,&stack0x00000048);
    FUN_02aefcd8();
    uVar3 = thunk_FUN_0159f088(puVar1);
    uVar3 = thunk_FUN_015d01b0(uVar3,&stack0x0000040c);
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06da9160);
    uVar2 = FUN_02527314(uVar4,uVar2,uVar3,0);
    thunk_FUN_0159f088(PTR_DAT_06db2f70);
    uVar3 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_03217038(uVar3,uVar2,0);
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06dae870);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar3,uVar2);
  }
  if (unaff_w23 < *(uint *)(lVar5 + 0x18)) {
    FUN_03f8f974();
    FUN_02aeed94(&stack0x00000228,lVar5 + unaff_x24 * 0x1d8 + 0x20,&stack0x00000228);
    memcpy(&stack0x00000048,&stack0x00000228,0x1d8);
    *unaff_x20 = in_stack_00000200;
    *(undefined4 *)(unaff_x20 + 1) = in_stack_00000208;
    FUN_02aec2cc(&stack0x00000008,&stack0x00000228);
    uVar6 = FUN_02aeef0c(&stack0x00000008);
    *unaff_x19 = uVar6;
    unaff_x19[1] = param_2;
    unaff_x19[2] = param_3;
    unaff_x19[3] = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}



/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose
ENTRY_POINT: 024512bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 161
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_leftEyePose
               (undefined1 *param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar7;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_000023d8;
  
code_r0x024512bc:
  lVar6 = FUN_0244f3c4(param_1,param_2,param_3,param_4);
  iVar3 = FUN_028a03bc(&stack0x00000a58,0);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      FUN_028a0304(&stack0x00000a58);
      memcpy(&stack0x000001c8,&stack0x00000a58,0xd8);
      memcpy(&stack0x00001788,&stack0x00000978,0xe0);
      if (lVar6 == 0) goto LAB_024514b0;
      memcpy(&stack0x00000610,&stack0x000001c8,0xd8);
      memcpy(&stack0x00000530,&stack0x00001788,0xe0);
      FUN_0244f654(lVar6,&stack0x00000610,&stack0x00000530);
      iVar3 = iVar3 + 1;
      iVar4 = FUN_028a03bc(&stack0x00000a58,0);
    } while (iVar3 < iVar4);
  }
  FUN_0244e850();
LAB_024514a4:
  unaff_w22 = unaff_w22 + 1;
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_024514b0;
  iVar3 = FUN_0289fbc0(*(long *)(unaff_x21 + 0x20),0);
  if (iVar3 <= unaff_w22) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_000023d8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_024514b0;
  FUN_0289fbfc(*(long *)(unaff_x21 + 0x20),unaff_w22,&stack0x00000a58,0);
  if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_024514b0;
  FUN_0289ff48();
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_026bb3dc(&stack0x00001db0,0);
  FUN_026bb3e4(&stack0x00001db0,uVar2 & 0xffffffef,0);
  if ((unaff_x19 & 1) != 0) {
    memcpy(&stack0x00001788,&stack0x00000a58,0xd8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    memcpy(&stack0x000007c0,&stack0x00001788,0xd8);
    uVar5 = FUN_024514f0(&stack0x000007c0,&stack0x00000b30);
    if ((uVar5 & 1) != 0) goto code_r0x02451238;
  }
  iVar3 = FUN_028a03bc(&stack0x00000a58,0);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      FUN_028a0304(&stack0x00000a58);
      memcpy(&stack0x00000458,&stack0x00000a58,0xd8);
      if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_024514b0;
      uVar1 = *(undefined4 *)(*(long *)(unaff_x21 + 0x18) + 0x18);
      memcpy(&stack0x00001788,&stack0x00001db0,0x628);
      uVar7 = *(undefined8 *)(unaff_x21 + 0x28);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      memcpy(&stack0x00000380,&stack0x00000458,0xd8);
      memcpy(&stack0x00000b38,&stack0x00001788,0x628);
      lVar6 = FUN_0244f3c4(&stack0x00000380,uVar1,&stack0x00000b38,uVar7);
      memcpy(&stack0x000002a8,&stack0x00000a58,0xd8);
      memcpy(&stack0x000001c8,&stack0x00000898,0xe0);
      if (lVar6 == 0) goto LAB_024514b0;
      memcpy(&stack0x000000f0,&stack0x000002a8,0xd8);
      memcpy(&stack0x00000010,&stack0x000001c8,0xe0);
      FUN_0244f654(lVar6,&stack0x000000f0,&stack0x00000010);
      FUN_0244e850();
      iVar3 = iVar3 + 1;
      iVar4 = FUN_028a03bc(&stack0x00000a58,0);
    } while (iVar3 < iVar4);
  }
  goto LAB_024514a4;
code_r0x02451238:
  memcpy(&stack0x000001c8,&stack0x00000a58,0xd8);
  if (*(long *)(unaff_x21 + 0x18) == 0) {
LAB_024514b0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18);
  memcpy(&stack0x00001788,&stack0x00001db0,0x628);
  param_4 = *(undefined8 *)(unaff_x21 + 0x28);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  memcpy(&stack0x000006e8,&stack0x000001c8,0xd8);
  memcpy(&stack0x00001160,&stack0x00001788,0x628);
  param_1 = &stack0x000006e8;
  param_3 = &stack0x00001160;
  param_2 = (ulong)uVar2;
  goto code_r0x024512bc;
}



/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 00e89fa4
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  long unaff_x25;
  ulong unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *puVar4;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  do {
    FUN_005c1b60(unaff_x23);
    do {
      uVar1 = thunk_FUN_005bb628(unaff_x23,&stack0x00000008);
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
LAB_00e8a144:
        uVar1 = thunk_FUN_005c3bd0();
                    /* WARNING: Subroutine does not return */
        FUN_00628184(uVar1,0);
      }
      in_stack_00000028._4_4_ = *unaff_x27;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        FUN_005c1b60(lVar3);
      }
      uVar2 = thunk_FUN_005bb628(lVar3,(long)&stack0x00000028 + 4);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_00ae282c(&stack0x00000010,uVar1,uVar2,0);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006281b8();
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) goto LAB_00e8a144;
      lVar3 = unaff_x22 + (long)(int)unaff_w19 * 0x10;
      unaff_w19 = unaff_w19 + 1;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000010;
      do {
        puVar4 = unaff_x27;
        unaff_x26 = unaff_x26 + 1;
        unaff_x27 = puVar4 + 4;
        if ((long)*(int *)(unaff_x21 + 0x20) <= (long)unaff_x26) {
          return;
        }
        if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) goto LAB_00e8a144;
      } while ((int)puVar4[1] < 0);
      in_stack_00000008 = puVar4[3];
      unaff_x23 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0xc0) + 0xd8);
    } while ((*(byte *)(unaff_x23 + 0x132) & 1) != 0);
  } while( true );
}



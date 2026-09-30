/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 0937c2ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x22 + 0x883) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_0952c404();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 != 0) {
      uVar8 = unaff_x21[1];
      uVar10 = unaff_x21[2];
      uVar6 = FUN_0953ce68(*unaff_x21);
      fVar12 = (float)unaff_x21[5];
      fVar9 = (float)unaff_x21[4];
      fVar7 = (float)FUN_0953c008(unaff_x21[3]);
      cVar1 = DAT_0a51bf42;
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *(undefined4 *)unaff_x19 = uVar6;
      *(undefined4 *)((long)unaff_x19 + 4) = uVar8;
      *(undefined4 *)(unaff_x19 + 1) = uVar10;
      if (cVar1 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51bf42 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar11 = SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar9 * fVar9);
      if (fVar11 <= DAT_01c7607c) {
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e740);
          DAT_0a51bf43 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
        fVar7 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar12 = pfVar5[2];
      }
      else {
        fVar7 = fVar7 / fVar11;
        fVar9 = fVar9 / fVar11;
        fVar12 = fVar12 / fVar11;
      }
      *(float *)((long)unaff_x19 + 0xc) = fVar7;
      *(float *)(unaff_x19 + 2) = fVar9;
      *(float *)((long)unaff_x19 + 0x14) = fVar12;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  thunk_FUN_044adef4(PTR_DAT_09f251e0);
  uVar3 = thunk_FUN_0448520c();
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f286d0);
  FUN_07996cc8(uVar3,uVar4,0);
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09fcd418);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar3,uVar4);
}



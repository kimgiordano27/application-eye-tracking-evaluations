/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 0248be18
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar3;
  long unaff_x25;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 0248be1c to 0258be47 has its CatchHandler @ 0248ba84 */
  thunk_FUN_011f4b58(*(undefined8 *)(param_1 + 0x90));
  thunk_FUN_011f4b58(PTR_DAT_02adb6a8);
  thunk_FUN_011f4b58(PTR_DAT_02ac9e80);
  thunk_FUN_011f4b58(PTR_DAT_02adb6b0);
  thunk_FUN_011f4b58(PTR_DAT_02adb6b8);
  thunk_FUN_011f4b58(PTR_DAT_02ad34d0);
  thunk_FUN_011f4b58(PTR_DAT_02adb6c0);
  thunk_FUN_011f4b58(PTR_DAT_02ad27d0);
  thunk_FUN_011f4b58(PTR_DAT_02adb6d8);
  thunk_FUN_011f4b58(PTR_DAT_02adb6c8);
  thunk_FUN_011f4b58(PTR_DAT_02adb6d0);
  *(undefined1 *)(unaff_x25 + 0x285) = 1;
  uVar3 = *unaff_x24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_011ea084();
  }
  FUN_022bb958(uVar3,0);
  puVar2 = PTR_DAT_02adb6a0;
  puVar1 = PTR_DAT_02ad8090;
  if (unaff_x21 != 0) {
    FUN_021d3fcc();
    FUN_022bb958(*(undefined8 *)puVar2,0);
    FUN_021d3fcc();
    FUN_022bb958(*(undefined8 *)puVar1,0);
    FUN_021d3fcc();
    FUN_021be480();
    FUN_021be480();
    FUN_021d528c();
    FUN_021c9988();
    uStack000000000000001c = *(undefined4 *)(unaff_x22 + 0x50);
    thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02acd628,&stack0x0000001c);
    FUN_021be480();
    FUN_021be538();
    FUN_0247d5c8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}



/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation
ENTRY_POINT: 0788f520
PROGRAM: Waifu-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyeRotation(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  undefined1 unaff_w20;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x414) = unaff_w20;
  in_stack_00000018 = 0;
  if (*(int *)(DAT_083cd8d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  auVar4 = FUN_073e5d5c(&stack0x00000018,DAT_0844cb78,1,0);
  in_stack_00000008 = auVar4._0_8_;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000008 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000008 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)(DAT_083cd998 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cd998,auVar4._8_8_,in_stack_00000008);
  }
  FUN_04023a1c(0,1,in_stack_00000008,DAT_08410318);
  return;
}



/*
FUNCTION_NAME: Pupil_Manager.<ChangePupilSizeCoroutine>d__7$$System.IDisposable.Dispose
ENTRY_POINT: 0353e408
PROGRAM: Waifu-libil2cpp.so
SCORE: 143
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_4
*/


void Pupil_Manager_<ChangePupilSizeCoroutine>d__7__System_IDisposable_Dispose
               (ulong param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int in_w9;
  undefined4 unaff_s8;
  
  if (in_w9 != 0) {
    puVar1 = &DAT_0873ccb0 + (param_1 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_2 + 0x20) = unaff_s8;
  return;
}



/*
FUNCTION_NAME: RootMotion.Demos.PlatformRotator.<SwitchRotation>d__14$$System.IDisposable.Dispose
ENTRY_POINT: 03b0576c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


ulong RootMotion_Demos_PlatformRotator_<SwitchRotation>d__14__System_IDisposable_Dispose
                (ulong param_1,ulong param_2)

{
  uint uVar1;
  sigset_t *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  while (param_1 == unaff_x20) {
    uVar1 = sigsuspend(unaff_x19);
    param_2 = (ulong)uVar1;
    if (*unaff_x22 == 0) break;
    param_1 = *(ulong *)(unaff_x23 + 0x9f0);
  }
  if (DAT_08974b10 != 0) {
    uVar1 = sem_post((sem_t *)&DAT_08bb0a00);
    param_2 = (ulong)uVar1;
    *(ulong *)(unaff_x21 + 0x10) = unaff_x20 | 1;
  }
  return param_2;
}



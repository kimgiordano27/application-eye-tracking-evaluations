/*
FUNCTION_NAME: Obi.ObiNativeList<Vector2Int>$$AsNativeArray<int2>
ENTRY_POINT: 01901b80
PROGRAM: simulator-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


int Obi_ObiNativeList<Vector2Int>__AsNativeArray<int2>(sigset_t *param_1)

{
  int iVar1;
  sigset_t *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  do {
    iVar1 = sigsuspend(param_1);
    if (*unaff_x22 == 0) break;
    param_1 = unaff_x19;
  } while (*(ulong *)(unaff_x23 + 0x518) == unaff_x20);
  if (DAT_036c2728 != 0) {
    iVar1 = sem_post((sem_t *)&DAT_038e5528);
    *(ulong *)(unaff_x21 + 0x10) = unaff_x20 | 1;
  }
  return iVar1;
}



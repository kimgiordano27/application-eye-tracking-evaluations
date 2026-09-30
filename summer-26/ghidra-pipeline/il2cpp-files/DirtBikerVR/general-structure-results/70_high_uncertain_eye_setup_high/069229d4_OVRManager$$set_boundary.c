/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 069229d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__set_boundary(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double unaff_d8;
  double __x;
  double in_stack_00000008;
  
  puVar3 = PTR_DAT_084b3940;
                    /* try { // try from 069229d8 to 06a229ef has its CatchHandler @ 06922a70 */
  if ((DAT_0897cea7 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486c60);
    FUN_03a8a718(PTR_DAT_084b3940);
                    /* try { // try from 06922a04 to 06a22a0f has its CatchHandler @ 06922a64 */
    DAT_0897cea7 = 1;
  }
  puVar2 = PTR_DAT_08486c60;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 06922a1c to 06a22a33 has its CatchHandler @ 06922a68 */
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar3;
  }
  uVar1 = *(uint *)(*(long *)(lVar4 + 0xb8) + 4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar2);
  }
  __x = (double)(1 << (ulong)(uVar1 & 0x1f)) * unaff_d8;
  dVar5 = modf(__x,&stack0x00000008);
  if (0.0 <= __x) {
    if (dVar5 != 0.5) {
      in_stack_00000008 = (double)(long)(__x + 0.5);
      goto LAB_06922ab8;
    }
    dVar5 = 1.0;
  }
  else {
    if (dVar5 != -0.5) {
      in_stack_00000008 = (double)(long)(__x + -0.5);
      goto LAB_06922ab8;
    }
    dVar5 = -1.0;
  }
  if (((long)in_stack_00000008 & 1U) != 0) {
    in_stack_00000008 = in_stack_00000008 + dVar5;
  }
LAB_06922ab8:
  return (long)in_stack_00000008;
}



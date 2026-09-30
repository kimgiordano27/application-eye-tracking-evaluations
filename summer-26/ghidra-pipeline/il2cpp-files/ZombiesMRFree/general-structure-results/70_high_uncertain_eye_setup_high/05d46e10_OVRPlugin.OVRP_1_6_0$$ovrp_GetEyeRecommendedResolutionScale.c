/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetEyeRecommendedResolutionScale
ENTRY_POINT: 05d46e10
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetEyeRecommendedResolutionScale(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((DAT_07398b52 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb90f8);
    FUN_02fe925c(PTR_DAT_06fb9100);
    FUN_02fe925c(PTR_DAT_06fb9108);
    FUN_02fe925c(PTR_DAT_06fb9110);
    DAT_07398b52 = 1;
  }
  puVar2 = PTR_DAT_06fb9100;
  puVar1 = PTR_DAT_06fb90f8;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_04430ce4(&stack0x00000008,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_06fb9110);
  while( true ) {
    uVar3 = FUN_05506d10(&stack0x00000008,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_05506d0c(&stack0x00000008,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar4 = *(long *)(in_stack_00000018 + 0x20);
    OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
              (*(long *)(param_1 + 0x40),*(undefined4 *)(in_stack_00000018 + 0x10),0);
    if (lVar4 == 0) break;
    FUN_06976f40(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}



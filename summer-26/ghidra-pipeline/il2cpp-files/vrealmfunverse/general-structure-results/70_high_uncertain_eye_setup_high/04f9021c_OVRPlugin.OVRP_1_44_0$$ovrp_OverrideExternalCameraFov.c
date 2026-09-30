/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraFov
ENTRY_POINT: 04f9021c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraFov(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long in_stack_00000028;
  
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_04f9195c(param_2,*(undefined4 *)(param_1 + 0x10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    UnityEngine_UIElements_StyleBackgroundPosition___ctor(lVar2,0);
    uVar1 = FUN_0472eaf4(&stack0x00000018,*unaff_x22);
    if ((uVar1 & 1) == 0) {
      FUN_0472eaf0(&stack0x00000018,*unaff_x21);
      return;
    }
    if (in_stack_00000028 == 0) break;
    param_2 = *(long *)(unaff_x19 + 0x40);
    param_1 = in_stack_00000028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



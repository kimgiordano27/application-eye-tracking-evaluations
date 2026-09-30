/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 090d044c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long in_stack_00000028;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x6d8);
  puVar3 = *(undefined8 **)(unaff_x21 + 0x6d0);
  FUN_06b8097c(&stack0x00000018,param_2,**(undefined8 **)(param_1 + 0x6e8));
  while( true ) {
    uVar1 = FUN_05fefd38(&stack0x00000018,*puVar4);
    if ((uVar1 & 1) == 0) {
      FUN_05fefd34(&stack0x00000018,*puVar3);
      return;
    }
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(in_stack_00000028 + 0x20);
    FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),*(undefined4 *)(in_stack_00000028 + 0x10),0);
    if (lVar2 == 0) break;
    FUN_0a1ece68(lVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



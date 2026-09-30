/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 06970410
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_Update2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long *unaff_x23;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x9e8));
  *(undefined1 *)(unaff_x21 + 0xf36) = 1;
  puVar1 = PTR_DAT_084b59e8;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_084b59e8 + 0xb8);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9e200(uVar4,0,0);
  puVar2 = PTR_DAT_084b7248;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4fb40(*(undefined8 *)puVar2,0);
    return;
  }
  if (*(char *)(unaff_x21 + 0xf36) == '\0') {
    FUN_03a8a718(PTR_DAT_084b59e8);
    *(undefined1 *)(unaff_x21 + 0xf36) = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x60);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar5 != 0) {
      FUN_07cb2770(lVar5,uVar4,0);
      FUN_06970518();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



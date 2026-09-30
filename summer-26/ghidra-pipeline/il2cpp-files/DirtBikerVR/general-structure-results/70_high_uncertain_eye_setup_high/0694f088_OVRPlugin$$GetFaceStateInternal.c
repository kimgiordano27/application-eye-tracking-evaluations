/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 0694f088
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceStateInternal(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x24;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9e200();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = *unaff_x24;
  puVar3 = (undefined8 *)(unaff_x19 + 0x60);
  uVar4 = *puVar3;
  *(undefined1 *)(unaff_x19 + 0x21) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9c218(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *puVar3;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07ca310c(uVar4,0);
    *puVar3 = 0;
    thunk_FUN_03afed3c(puVar3,0);
  }
  if (*unaff_x21 != 0) {
    FUN_0694f558();
    *unaff_x21 = 0;
    thunk_FUN_03afed3c();
    if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0xd8) != 0)) {
      FUN_069608d0(*(long *)(unaff_x20 + 0xd8),0,0);
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        FUN_07cb2910(*(long *)(unaff_x19 + 0x50),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



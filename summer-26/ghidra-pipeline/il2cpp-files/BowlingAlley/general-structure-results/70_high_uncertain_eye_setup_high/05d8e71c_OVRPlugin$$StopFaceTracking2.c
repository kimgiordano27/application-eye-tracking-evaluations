/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking2
ENTRY_POINT: 05d8e71c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopFaceTracking2(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if ((*(byte *)(unaff_x20 + 0x8f5) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b19f0);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0728ded0);
    *(undefined1 *)(unaff_x20 + 0x8f5) = 1;
  }
  puVar1 = PTR_DAT_072794f0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06be9890(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d8e848;
    uVar4 = FUN_06ba57a4(*(long *)(param_1 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    uVar2 = FUN_06be9890(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar3 = FUN_06ba57a4(*(long *)(param_1 + 0x20),0), lVar3 == 0)) goto LAB_05d8e848;
      uVar4 = FUN_06becffc(lVar3,0);
      uVar2 = thunk_FUN_057aa644(uVar4,*(undefined8 *)PTR_DAT_0728ded0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d8e848;
        FUN_06ba5a5c(*(long *)(param_1 + 0x20),0);
      }
    }
  }
  lVar3 = FUN_03958adc(param_1,*(undefined8 *)PTR_DAT_072b19f0);
  if (lVar3 != 0) {
    FUN_05d8d60c();
    FUN_06ba6670(*(undefined8 *)(param_1 + 0x40),0);
    return;
  }
LAB_05d8e848:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



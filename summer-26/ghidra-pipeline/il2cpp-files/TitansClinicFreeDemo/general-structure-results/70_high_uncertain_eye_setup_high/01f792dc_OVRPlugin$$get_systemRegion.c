/*
FUNCTION_NAME: OVRPlugin$$get_systemRegion
ENTRY_POINT: 01f792dc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemRegion(ulong param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long unaff_x20;
  char *unaff_x21;
  char cVar6;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    *(undefined1 *)(unaff_x22 + 0xdc6) = 1;
  }
  puVar1 = PTR_DAT_027ba7e8;
  cVar6 = *unaff_x21;
  if (((unaff_x20 != 0) && (cVar6 < '\0')) && (0 < *(int *)(unaff_x20 + 0x10))) {
    sVar2 = FUN_01e60d24();
    if ((sVar2 == 0x58) || (sVar2 = FUN_01e60d24(), sVar2 == 0x78)) {
      cVar6 = *unaff_x21;
      if (DAT_0293bfb6 == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b5200);
        DAT_0293bfb6 = '\x01';
      }
      uVar3 = System_Int32__TryParse();
      lVar4 = *(long *)puVar1;
      uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar4);
      }
      FUN_01f64e2c(cVar6,uVar3,uVar5);
      return;
    }
    cVar6 = *unaff_x21;
  }
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = System_Int32__TryParse();
    uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f648ac((int)cVar6,uVar3,uVar5);
  return;
}



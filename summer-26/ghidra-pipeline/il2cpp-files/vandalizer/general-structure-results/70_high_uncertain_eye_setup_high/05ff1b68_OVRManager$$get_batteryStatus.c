/*
FUNCTION_NAME: OVRManager$$get_batteryStatus
ENTRY_POINT: 05ff1b68
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_batteryStatus(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar6;
  
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (unaff_x20 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f30d0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05ff1bd8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05ff1bd8:
    uVar6 = (*(code *)*puVar1)();
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x78) = uVar6;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05f20d50(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
      FUN_05ff2274();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



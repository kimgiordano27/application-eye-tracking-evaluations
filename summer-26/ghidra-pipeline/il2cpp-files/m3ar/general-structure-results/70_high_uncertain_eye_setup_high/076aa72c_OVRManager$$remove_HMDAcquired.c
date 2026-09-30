/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 076aa72c
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDAcquired(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_076aa784;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_076aa784:
  uVar3 = (*(code *)*puVar1)();
  if ((uVar3 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x48) == '\0') {
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x40);
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
  }
  else {
    if (*(char *)(unaff_x19 + 0x48) != '\0') {
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076aa7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



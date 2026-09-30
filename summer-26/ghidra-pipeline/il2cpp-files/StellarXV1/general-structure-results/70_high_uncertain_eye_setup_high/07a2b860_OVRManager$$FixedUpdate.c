/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 07a2b860
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__FixedUpdate(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x1dd) & 1) == 0) {
    FUN_04077588(PTR_DAT_092eff80);
    *(undefined1 *)(unaff_x20 + 0x1dd) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092eff80) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_07a2b8d8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a2b8d8:
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 != 0) {
      return *(undefined4 *)(lVar2 + 0x24);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



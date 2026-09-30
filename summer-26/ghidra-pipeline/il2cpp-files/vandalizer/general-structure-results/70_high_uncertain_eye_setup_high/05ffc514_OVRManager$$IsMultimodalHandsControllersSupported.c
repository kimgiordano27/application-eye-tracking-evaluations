/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 05ffc514
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsMultimodalHandsControllersSupported(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iStack000000000000000c;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xf80));
  FUN_031f20f4(PTR_DAT_075f6f48);
  *(undefined1 *)(unaff_x21 + 0x8db) = 1;
  iStack000000000000000c = 0;
  if ((*(int *)(unaff_x19 + 0x84) != 2) &&
     (iStack000000000000000c = FUN_0600018c(), iStack000000000000000c != 0)) {
    return;
  }
  FUN_05fffdd0();
  if (iStack000000000000000c == 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_075f2f80) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_05ffc5d4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05ffc5d4:
    (*(code *)*puVar1)();
  }
  return;
}



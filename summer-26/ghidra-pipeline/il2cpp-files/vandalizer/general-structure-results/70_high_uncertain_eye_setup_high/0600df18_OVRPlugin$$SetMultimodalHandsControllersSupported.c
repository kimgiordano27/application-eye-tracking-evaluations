/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 0600df18
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


void OVRPlugin__SetMultimodalHandsControllersSupported(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  
  FUN_031f20f4(PTR_DAT_075f6f28);
  *(undefined1 *)(unaff_x19 + 0x992) = 1;
  plVar1 = (long *)FUN_03d79538();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f6f28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0600dfa4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,*(long *)PTR_DAT_075f6f28,0);
LAB_0600dfa4:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x28));
  return;
}



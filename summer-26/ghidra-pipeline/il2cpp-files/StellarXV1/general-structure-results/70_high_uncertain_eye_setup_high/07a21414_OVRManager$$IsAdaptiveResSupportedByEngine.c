/*
FUNCTION_NAME: OVRManager$$IsAdaptiveResSupportedByEngine
ENTRY_POINT: 07a21414
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsAdaptiveResSupportedByEngine(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if (param_1 != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x40);
    uVar7 = FUN_07a20788();
    if (lVar6 != 0) {
      lVar2 = *unaff_x21;
      lVar5 = *(long *)(unaff_x19 + 0x40);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined4 *)(lVar6 + 0xac) = uVar7;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_089cc398(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07a214b0;
        bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
      }
      else {
        bVar1 = true;
      }
      if (lVar5 != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        *(bool *)(lVar5 + 0xb4) = bVar1;
        if ((lVar6 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
          *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) = *(int *)(lVar6 + 0x84) == 2;
          FUN_07a1e94c();
          return;
        }
      }
    }
  }
LAB_07a214b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



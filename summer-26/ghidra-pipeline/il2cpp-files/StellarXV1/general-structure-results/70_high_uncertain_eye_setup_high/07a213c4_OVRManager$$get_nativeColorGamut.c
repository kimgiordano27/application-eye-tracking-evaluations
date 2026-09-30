/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 07a213c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_nativeColorGamut(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined4 uVar9;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_07a213fc;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a213fc:
  uVar9 = (*(code *)*puVar2)();
  if (unaff_x22 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    *(undefined4 *)(unaff_x22 + 0xb0) = uVar9;
    if (lVar3 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      uVar9 = FUN_07a20788();
      if (lVar3 != 0) {
        lVar4 = *unaff_x21;
        lVar8 = *(long *)(unaff_x19 + 0x40);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar3 + 0xac) = uVar9;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar5 = FUN_089cc398(uVar7,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07a214b0;
          bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
        }
        else {
          bVar1 = true;
        }
        if (lVar8 != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          *(bool *)(lVar8 + 0xb4) = bVar1;
          if ((lVar3 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
            *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) = *(int *)(lVar3 + 0x84) == 2;
            FUN_07a1e94c();
            return;
          }
        }
      }
    }
  }
LAB_07a214b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



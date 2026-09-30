/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 07a2135c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_colorGamut(ulong param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x21;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    if (param_2 == 0) goto LAB_07a214b0;
  }
  else {
    if (param_2 == 0) goto LAB_07a214b0;
    if (*(int *)(param_2 + 0x84) == 3) {
      return;
    }
  }
  FUN_07a1f520(&stack0x00000024);
  FUN_07a214b4();
  plVar6 = *(long **)(unaff_x19 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed130) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07a213fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ed130,0);
LAB_07a213fc:
    uVar10 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((lVar9 != 0) &&
       (lVar3 = *(long *)(unaff_x19 + 0x20), *(undefined4 *)(lVar9 + 0xb0) = uVar10, lVar3 != 0)) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      uVar10 = FUN_07a20788();
      if (lVar3 != 0) {
        lVar9 = *unaff_x21;
        lVar8 = *(long *)(unaff_x19 + 0x40);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar3 + 0xac) = uVar10;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = FUN_089cc398(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
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



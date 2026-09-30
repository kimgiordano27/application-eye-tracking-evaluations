/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 03135eec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 1000);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  uVar2 = thunk_FUN_01afaadc(*puVar8);
  FUN_02fd7524();
  puVar1 = StringLiteral_3767;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_3767) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03135f8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_3767,0);
LAB_03135f8c:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    plVar7 = *(long **)(unaff_x19 + 0x28);
    uVar2 = thunk_FUN_01afaadc(*puVar8);
    FUN_02fd7524();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_03136010;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,2);
LAB_03136010:
                    /* WARNING: Could not recover jumptable at 0x0313602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar7,uVar2,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}



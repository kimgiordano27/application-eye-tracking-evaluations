/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 06366404
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceSaveComplete(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    uVar1 = FUN_063853bc(unaff_x22,0);
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (plVar7 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar7 == (long *)0x0))
    goto LAB_06366490;
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_06366474;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x27,2);
LAB_06366474:
    (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
    unaff_x25 = unaff_x25 + 1;
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_06366490;
    if ((long)*(int *)(*(long *)(unaff_x21 + 0x20) + 0x18) <= (long)unaff_x25) {
      lVar3 = FUN_0636579c();
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar3 + 0x18);
      }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = *(long *)(unaff_x21 + 0x18);
    if (lVar3 == 0) goto LAB_06366490;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar1 = *(undefined8 *)(lVar3 + unaff_x25 * 8 + 0x20);
    uVar6 = *unaff_x20;
    if (*(int *)(*(long *)(unaff_x24 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x22 = FUN_062772f0(uVar6,uVar1,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x26);
    }
  } while( true );
}



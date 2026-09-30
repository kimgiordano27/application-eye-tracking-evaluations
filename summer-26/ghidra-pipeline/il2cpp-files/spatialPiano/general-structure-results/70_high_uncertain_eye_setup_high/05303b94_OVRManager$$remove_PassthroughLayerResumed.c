/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 05303b94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_PassthroughLayerResumed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  ulong uVar5;
  uint unaff_w21;
  long *plVar6;
  long *unaff_x22;
  long lVar7;
  undefined4 uVar8;
  
  FUN_060b8950();
  if (0 < (int)unaff_w21) {
    uVar5 = 0;
    do {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128), plVar6 == (long *)0x0))
      goto LAB_05303c6c;
      lVar2 = *plVar6;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_05303c10;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x22,1);
LAB_05303c10:
      uVar8 = (*(code *)*puVar1)(plVar6,uVar5 & 0xffffffff,puVar1[1]);
      if (lVar7 == 0) goto LAB_05303c6c;
      if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar7 = lVar7 + uVar5 * 0xc;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar7 + 0x20) = uVar8;
      *(undefined4 *)(lVar7 + 0x24) = param_2;
      *(undefined4 *)(lVar7 + 0x28) = param_3;
    } while (uVar5 != unaff_w21);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_060b8e10(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
    return;
  }
LAB_05303c6c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}



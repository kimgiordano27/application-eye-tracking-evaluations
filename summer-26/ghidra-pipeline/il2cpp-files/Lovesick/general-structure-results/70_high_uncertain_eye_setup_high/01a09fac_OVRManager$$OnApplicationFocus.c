/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 01a09fac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000008;
  
  puVar1 = (undefined8 *)FUN_00d59724();
  uVar2 = (*(code *)*puVar1)();
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01a0a01c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_01a0a01c:
  auVar7 = (*(code *)*puVar1)();
  uVar3 = auVar7._8_8_;
  if (unaff_x22 != 0) {
    uVar3 = *unaff_x20;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
    *(int *)(unaff_x22 + 0x20) = auVar7._0_4_;
    *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      FUN_01a0bd5c(*(long *)(unaff_x22 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(auVar7._0_8_,uVar3);
}



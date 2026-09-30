/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_Icon
ENTRY_POINT: 01b28df0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_Icon(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar7;
  undefined4 in_stack_00000008;
  
  plVar7 = *(long **)(unaff_x23 + 0x9c0);
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar7) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_01b28e44;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b28e44:
  uVar1 = (*(code *)*puVar3)();
  in_stack_00000008 = *(undefined4 *)(unaff_x21 + 4);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar7) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_01b28edc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b28edc:
  uVar2 = (*(code *)*puVar3)();
  FUN_01d66c40(uVar1,uVar2,0);
  return;
}



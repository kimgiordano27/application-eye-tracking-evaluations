/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_IconStyle
ENTRY_POINT: 01b28db8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_IconStyle(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 in_w8;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x22 + 0x74f) = in_w8;
  uStack000000000000000c = *unaff_x21;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000000c);
  puVar1 = PTR_DAT_0234d9c0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01b28e44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b28e44:
  uVar2 = (*(code *)*puVar5)();
  in_stack_00000008 = unaff_x21[1];
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01b28edc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b28edc:
  uVar3 = (*(code *)*puVar5)();
  FUN_01d66c40(uVar2,uVar3,0);
  return;
}



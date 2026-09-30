/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 01b25354
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(void)

{
  bool in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  long *unaff_x22;
  undefined1 uStack0000000000000004;
  undefined1 in_stack_00000008;
  
  if (!in_ZR) {
    in_stack_00000008 = *unaff_x21;
    lVar1 = FUN_00e5db00(*(undefined8 *)(unaff_x20 + 0x20));
    uVar3 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 8),&stack0x00000008);
    plVar4 = (long *)thunk_FUN_0105d828(uVar3,0);
    FUN_00e5db80();
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
    uVar3 = FUN_01c42574(uVar5,uVar3,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar5 = thunk_FUN_010400dc();
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d120);
    FUN_01c5e198(uVar5,uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5);
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244(lVar1);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  thunk_FUN_01040230();
  uStack0000000000000004 = *unaff_x21;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar1 + 0xc0),&stack0x00000004);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244(lVar1);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar1 + 0xc0));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar1 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_01b25464;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01b25464:
  (*(code *)*puVar2)();
  return;
}



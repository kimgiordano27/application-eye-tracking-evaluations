/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$Update
ENTRY_POINT: 04a39df4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Update(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long lVar7;
  ulong uVar8;
  long unaff_x26;
  
  thunk_FUN_02bb0e9c();
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
    thunk_FUN_02bb0e9c();
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    uVar2 = FUN_02b3c908(lVar3,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar2);
    lVar3 = *(long *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_04d8a7b0(uVar2,0);
    if (lVar3 == 0) goto LAB_04a39f9c;
    lVar3 = FUN_04c8ae78(lVar3,*(undefined8 *)PTR_DAT_06322b98,uVar2,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar3 == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar2 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
      FUN_04c82410(uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2);
    }
    lVar4 = thunk_FUN_02b79548(lVar3,lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar3,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_04a3b7bc();
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*unaff_x21 != 0) {
    uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    thunk_FUN_02bb0e9c();
    return;
  }
LAB_04a39f9c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



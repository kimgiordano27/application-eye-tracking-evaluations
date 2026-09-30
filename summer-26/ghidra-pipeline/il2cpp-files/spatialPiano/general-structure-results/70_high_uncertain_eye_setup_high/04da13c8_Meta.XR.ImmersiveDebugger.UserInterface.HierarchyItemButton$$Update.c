/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$Update
ENTRY_POINT: 04da13c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Update(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cbdd8);
    FUN_02f08768(PTR_DAT_067ce508);
    FUN_02f08768(PTR_DAT_067ce510);
    FUN_02f08768(PTR_DAT_067ce518);
    FUN_02f08768(PTR_DAT_067ce520);
    FUN_02f08768(PTR_DAT_067cc580);
    *(undefined1 *)(unaff_x22 + 0xd77) = 1;
  }
  if (unaff_x19 == 0) {
LAB_04da1590:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))
                    (*(undefined4 *)(unaff_x19 + 0xa0),*(undefined4 *)(unaff_x19 + 0xa4));
  puVar1 = PTR_DAT_067cc580;
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x80);
  lVar4 = *(long *)PTR_DAT_067cc580;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  uVar3 = thunk_FUN_04f6d944(uVar8,**(undefined8 **)(lVar4 + 0xb8),0);
  plVar5 = (long *)thunk_FUN_02f66c64();
  lVar4 = *plVar5;
  if ((uVar3 & 1) == 0) {
    if ((lVar4 == 0) || (plVar5 = (long *)FUN_0623c008(lVar4,0), plVar5 == (long *)0x0))
    goto LAB_04da1590;
    lVar4 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067cbdd8) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067cbdd8,2);
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 1) {
      return;
    }
    puVar6 = (undefined8 *)thunk_FUN_02f66c64();
    FUN_06388908(*puVar6,*(undefined4 *)(unaff_x19 + 0x7c),0);
  }
  else {
    FUN_0638883c(lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x04da157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40))();
  return;
}



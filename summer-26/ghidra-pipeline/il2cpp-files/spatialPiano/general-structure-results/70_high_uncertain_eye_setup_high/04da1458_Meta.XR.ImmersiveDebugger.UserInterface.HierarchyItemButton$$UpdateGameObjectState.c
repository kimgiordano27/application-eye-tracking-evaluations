/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 04da1458
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int in_w8;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = thunk_FUN_04f6d944();
  plVar3 = (long *)thunk_FUN_02f66c64();
  lVar4 = *plVar3;
  if ((uVar2 & 1) == 0) {
    if ((lVar4 == 0) || (plVar3 = (long *)FUN_0623c008(lVar4,0), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067cbdd8) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067cbdd8,2);
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor:
    iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    if (iVar1 != 1) {
      return;
    }
    puVar5 = (undefined8 *)thunk_FUN_02f66c64();
    FUN_06388908(*puVar5,*(undefined4 *)(unaff_x19 + 0x7c),0);
  }
  else {
    FUN_0638883c(lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x04da157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40))();
  return;
}



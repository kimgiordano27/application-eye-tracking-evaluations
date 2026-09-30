/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$set_Item
ENTRY_POINT: 052ce7e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__set_Item(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int iVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  while (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0) {
    iVar3 = 0;
    while (iVar3 < *(int *)(lVar1 + 0x18)) {
      FUN_03fd09cc(lVar1,iVar3,*unaff_x24);
      uVar2 = (**(code **)(*unaff_x19 + 0x3a8))();
      if ((uVar2 & 1) != 0) break;
      lVar1 = *(long *)(unaff_x21 + 0x48);
      iVar3 = iVar3 + 1;
      if (lVar1 == 0) goto LAB_052ce840;
    }
    lVar1 = unaff_x19[0xb];
    unaff_w20 = unaff_w20 + 1;
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
      return;
    }
    param_1 = FUN_03fd09cc(lVar1,unaff_w20,*unaff_x23);
    unaff_x21 = param_1;
    if (param_1 == 0) break;
  }
LAB_052ce840:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



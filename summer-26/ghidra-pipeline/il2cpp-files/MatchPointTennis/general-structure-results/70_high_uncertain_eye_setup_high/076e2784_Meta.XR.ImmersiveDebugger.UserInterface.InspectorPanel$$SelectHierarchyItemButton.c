/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectHierarchyItemButton
ENTRY_POINT: 076e2784
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectHierarchyItemButton(void)

{
  bool bVar1;
  undefined *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int in_w8;
  int iVar8;
  long unaff_x21;
  int iVar9;
  long unaff_x26;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_09f214f8;
  bVar1 = !in_ZR && in_NG == in_OV;
  if (0 < in_w8) {
    iVar8 = 0;
    do {
      iVar3 = FUN_078b96dc();
      iVar4 = FUN_078b96dc();
      lVar5 = System_Globalization_HijriCalendar__GetDaysInYear();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar6 = FUN_078b928c(lVar5,0);
      uVar7 = FUN_07a3bf64(uVar6,(long)&stack0x00000008 + 4,0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)(unaff_x26 + 0x98) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = FUN_07a71bc0();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        in_stack_00000008._4_4_ = FUN_079a89e8(uVar6,0);
      }
      iVar9 = iVar4;
      if ((iVar8 == 1) || (iVar8 != 0)) {
        if (-1 < iVar3) goto LAB_076e289c;
LAB_076e28b8:
        if (iVar4 < 0) {
          iVar9 = *(int *)(unaff_x21 + 0x10);
        }
        else {
          iVar8 = 2;
        }
      }
      else {
        if (iVar3 < 0) goto LAB_076e28b8;
LAB_076e289c:
        if (iVar4 <= iVar3) {
          iVar9 = iVar3;
        }
        iVar8 = 1;
        if (iVar3 < iVar4) {
          iVar8 = 2;
        }
      }
      bVar1 = iVar9 + 1 < *(int *)(unaff_x21 + 0x10);
    } while (iVar9 + 1 < *(int *)(unaff_x21 + 0x10));
  }
  if (*(int *)(*(long *)(unaff_x26 + 0x98) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar6 = FUN_07a72d8c();
  *in_stack_00000000 = uVar6;
  thunk_FUN_044bb4b4();
  return ~bVar1 & 1;
}



/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectHierarchyItemButton
ENTRY_POINT: 052d2470
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectHierarchyItemButton
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  uVar4 = FUN_066cd30c();
  puVar2 = PTR_DAT_06d3d700;
  puVar1 = PTR_DAT_06d01fb8;
  if ((uVar4 & 1) == 0) {
    FUN_0529cb30(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x78),0);
    fVar3 = fStack0000000000000018;
    param_3 = uStack0000000000000010;
    uVar8 = uStack0000000000000008;
    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_066c9ce0(lVar5,*(undefined8 *)puVar2,0);
    if (lVar5 == 0) goto LAB_052d25a4;
    lVar6 = FUN_03a862a4(lVar5,*(undefined8 *)PTR_DAT_06d06cb8);
    *unaff_x20 = lVar6;
    thunk_FUN_02f411dc();
    if (*unaff_x20 == 0) goto LAB_052d25a4;
    FUN_06743d38(fStack0000000000000014 + fStack0000000000000014,fVar3 + fVar3,
                 fStack000000000000001c + fStack000000000000001c,*unaff_x20,0);
    lVar6 = FUN_066c9a48(lVar5,0);
    uVar7 = FUN_066c67b0();
    if (lVar6 == 0) goto LAB_052d25a4;
    FUN_066d5054(lVar6,uVar7,0);
    lVar5 = FUN_066c9a48(lVar5,0);
    if (lVar5 == 0) goto LAB_052d25a4;
    param_2 = uStack000000000000000c;
    FUN_066d4960(uVar8,lVar5,0);
  }
  if (*unaff_x20 != 0) {
    uVar8 = FUN_06743c98(*unaff_x20,0);
    *(undefined4 *)(unaff_x19 + 0x3d4) = uVar8;
    *(undefined4 *)(unaff_x19 + 0x3d8) = param_2;
    *(undefined4 *)(unaff_x19 + 0x3dc) = param_3;
    if (*(long *)(unaff_x19 + 0x150) != 0) {
      FUN_06742ae4(*(long *)(unaff_x19 + 0x150),0,0);
      return;
    }
  }
LAB_052d25a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



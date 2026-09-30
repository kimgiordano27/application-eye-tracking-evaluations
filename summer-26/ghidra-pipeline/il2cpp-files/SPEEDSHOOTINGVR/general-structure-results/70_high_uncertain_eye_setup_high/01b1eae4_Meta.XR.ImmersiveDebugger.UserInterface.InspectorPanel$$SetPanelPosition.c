/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 01b1eae4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined1 (*unaff_x20) [16];
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar1 = FUN_0103c244();
  plVar4 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244(*(long *)(unaff_x19 + 0x20));
  }
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(int *)(*unaff_x20 + 8) << 1,*(undefined8 *)(*plVar4 + 0x180));
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244(lVar1);
    }
    FUN_01a2fa74(uVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90));
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    FUN_01a2f5d0();
    lVar5 = *(long *)unaff_x20[1];
    *(undefined8 *)unaff_x20[1] = uVar2;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    auVar6 = FUN_01a2fa74(uVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90));
    *unaff_x20 = auVar6;
    if (lVar5 == 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x70);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x68);
    lVar1 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar1 = *(long *)(lVar3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    plVar4 = (long *)**(long **)(lVar1 + 0xb8);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b1ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x188))(plVar4,lVar5,0,*(undefined8 *)(*plVar4 + 400));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}



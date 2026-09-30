/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 01b1f12c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState
               (undefined1 (*param_1) [16],long param_2)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar6 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar5 = *(long *)(param_2 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x68);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  plVar3 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
  lVar6 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar5 = *(long *)(param_2 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  iVar2 = (*pcVar7)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30));
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,iVar2 << 1,*(undefined8 *)(*plVar3 + 0x180));
    lVar6 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    auVar9 = (*pcVar7)(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
    lVar6 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x98);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    (*pcVar7)(param_1,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x98));
    lVar8 = *(long *)param_1[1];
    *(undefined8 *)param_1[1] = uVar4;
    lVar6 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    auVar9 = (*pcVar7)(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
    *param_1 = auVar9;
    if (lVar8 == 0) {
      return;
    }
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar6 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x68);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    plVar3 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b1f428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x188))(plVar3,lVar8,0,*(undefined8 *)(*plVar3 + 400));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}



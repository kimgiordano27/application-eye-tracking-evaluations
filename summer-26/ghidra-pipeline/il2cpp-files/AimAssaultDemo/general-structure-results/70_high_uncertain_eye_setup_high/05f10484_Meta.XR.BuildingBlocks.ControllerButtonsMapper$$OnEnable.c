/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 05f10484
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(*unaff_x20 + 0x458))();
  uVar10 = *(undefined8 *)PTR_DAT_07d98330;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
  }
  uVar10 = FUN_062519f8(uVar10,0);
  uVar4 = FUN_0625ad04(uVar3,uVar10,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar5 == 0) {
LAB_05f1074c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f10750:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar9 = *(long **)(lVar5 + 0x20);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar9);
      }
    }
    uVar3 = *(undefined8 *)PTR_DAT_07d98310;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar6 = (long *)FUN_062519f8(uVar3,0);
    plVar7 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar7 == (long *)0x0) goto LAB_05f1074c;
    if ((plVar9 != (long *)0x0) &&
       (lVar5 = thunk_FUN_037787d0(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
      uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_05f10750;
    plVar7[4] = (long)plVar9;
    thunk_FUN_037aeb94(plVar7 + 4,plVar9);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
       plVar6 == (long *)0x0)) goto LAB_05f1074c;
    uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2b0));
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_07d98328;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar3 = FUN_062519f8(uVar3,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
      goto LAB_05f103e4;
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_06276e18();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_0625d834(uVar3,0);
    switch(uVar2) {
    case 5:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07d98338;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07d98300;
      break;
    case 7:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07d98340;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07d98320;
      break;
    default:
      goto switchD_05f106a8_default;
    }
    uVar3 = *puVar8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_062519f8(uVar3,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
LAB_05f103e4:
    plVar9 = (long *)FUN_06284508(uVar3);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar9);
      }
    }
    return plVar9;
  }
switchD_05f106a8_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  plVar9 = (long *)thunk_FUN_037788cc();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  FUN_04eff7b0(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}



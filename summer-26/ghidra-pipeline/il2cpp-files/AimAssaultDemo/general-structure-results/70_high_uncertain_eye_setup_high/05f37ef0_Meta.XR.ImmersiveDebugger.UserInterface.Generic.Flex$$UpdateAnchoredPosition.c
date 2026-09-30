/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 05f37ef0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x458))();
    uVar10 = *(undefined8 *)PTR_DAT_07d98330;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar10 = FUN_062519f8(uVar10,0);
    uVar3 = FUN_0625ad04(uVar4,uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar5 == 0) {
LAB_05f381c0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f381c4:
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
      uVar4 = *(undefined8 *)PTR_DAT_07d98310;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar6 = (long *)FUN_062519f8(uVar4,0);
      plVar7 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
      if (plVar7 == (long *)0x0) goto LAB_05f381c0;
      if ((plVar9 != (long *)0x0) &&
         (lVar5 = thunk_FUN_037787d0(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05f381c4;
      plVar7[4] = (long)plVar9;
      thunk_FUN_037aeb94(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
         plVar6 == (long *)0x0)) goto LAB_05f381c0;
      uVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2b0));
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_07d98328;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_062519f8(uVar4,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x24);
        }
        goto LAB_05f37e58;
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_06276e18();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_0625d834(uVar4,0);
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
      goto switchD_05f3811c_default;
    }
    uVar4 = *puVar8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_062519f8(uVar4,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
LAB_05f37e58:
    plVar9 = (long *)FUN_06284508(uVar4);
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
switchD_05f3811c_default:
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
  FUN_04f0bf48(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}



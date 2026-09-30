/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__16$$SetStateMachine
ENTRY_POINT: 05f5c8c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__16__SetStateMachine
                 (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x25;
  long lVar13;
  
  lVar13 = *(long *)(unaff_x25 + 0x548);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(lVar13 + 0xe0));
  }
  puVar2 = PTR_DAT_07d95eb0;
  plVar4 = (long *)FUN_062519f8(uVar11,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_05f5cdd4;
  }
  uVar11 = FUN_062519f8(*(long *)(lVar13 + 0x18) + 0x20,0);
  uVar5 = FUN_0625ad04(plVar4,uVar11,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(lVar13 + 0x90);
    if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_062519f8(lVar8 + 0x20,0);
    uVar5 = FUN_0625ad04(plVar4,uVar11,0);
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
      FUN_061efe40(plVar4,0);
      goto LAB_05f5c9c0;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(lVar13 + 0xe0));
    }
    plVar9 = (long *)FUN_062519f8(uVar11,0);
    if (plVar9 == (long *)0x0) {
LAB_05f5cddc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar5 = (**(code **)(*plVar9 + 0x2a8))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2b0));
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_05f5cddc;
      uVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
      if ((uVar5 & 1) == 0) {
LAB_05f5ccc0:
        uVar5 = (**(code **)(*plVar4 + 0x5b8))(plVar4,*(undefined8 *)(*plVar4 + 0x5c0));
        if ((uVar5 & 1) == 0) {
switchD_05f5cd38_default:
          lVar13 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03775678();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          plVar4 = (long *)thunk_FUN_037788cc();
          lVar13 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03775678(lVar13);
          }
          FUN_04f17aa8(plVar4,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)(lVar13 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar11 = FUN_06276e18(plVar4,0);
        if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(lVar13 + 0xe0));
        }
        uVar3 = FUN_0625d834(uVar11,0);
        switch(uVar3) {
        case 5:
          lVar13 = *(long *)(lVar13 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_07d98338;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar13 = *(long *)(lVar13 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_07d98300;
          break;
        case 7:
          lVar13 = *(long *)(lVar13 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_07d98340;
          break;
        case 0xb:
        case 0xc:
          lVar13 = *(long *)(lVar13 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_07d98320;
          break;
        default:
          goto switchD_05f5cd38_default;
        }
        goto LAB_05f5ca38;
      }
      uVar11 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      uVar12 = *(undefined8 *)PTR_DAT_07d98330;
      if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(lVar13 + 0xe0));
      }
      uVar12 = FUN_062519f8(uVar12,0);
      uVar5 = FUN_0625ad04(uVar11,uVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_05f5ccc0;
      lVar8 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
      if (lVar8 == 0) goto LAB_05f5cddc;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05f5cde0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar9 = *(long **)(lVar8 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar9);
        }
      }
      uVar11 = *(undefined8 *)PTR_DAT_07d98310;
      if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar6 = (long *)FUN_062519f8(uVar11,0);
      plVar7 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
      if (plVar7 == (long *)0x0) goto LAB_05f5cddc;
      if ((plVar9 != (long *)0x0) &&
         (lVar8 = thunk_FUN_037787d0(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar11,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05f5cde0;
      plVar7[4] = (long)plVar9;
      thunk_FUN_037aeb94(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
         plVar6 == (long *)0x0)) goto LAB_05f5cddc;
      uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2b0));
      if ((uVar5 & 1) == 0) goto LAB_05f5ccc0;
      uVar11 = *(undefined8 *)PTR_DAT_07d98328;
      if (*(int *)(*(long *)(lVar13 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar11 = FUN_062519f8(uVar11,0);
      plVar4 = plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar2);
      }
    }
    else {
      lVar13 = *(long *)(lVar13 + 0xe0);
      puVar10 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f5ca38:
      uVar11 = *puVar10;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar11 = FUN_062519f8(uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_06284508(uVar11,plVar4,0);
    lVar13 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03775678(lVar13);
    }
    plVar9 = *(long **)(lVar13 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(plVar4,0);
LAB_05f5c9c0:
    lVar13 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03775678();
    }
    plVar9 = *(long **)(lVar13 + 0xc0);
  }
  lVar13 = *plVar9;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03775678(lVar13);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13))
    {
LAB_05f5cdd4:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}



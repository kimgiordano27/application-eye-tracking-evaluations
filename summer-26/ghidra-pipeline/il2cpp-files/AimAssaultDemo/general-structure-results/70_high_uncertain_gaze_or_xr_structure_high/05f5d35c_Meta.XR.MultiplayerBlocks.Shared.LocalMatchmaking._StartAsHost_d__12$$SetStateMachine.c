/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAsHost>d__12$$SetStateMachine
ENTRY_POINT: 05f5d35c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAsHost>d__12__SetStateMachine
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool in_CY;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
                    /* try { // try from 05f5d368 to 0605d37b has its CatchHandler @ 05f5d1b0 */
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3))
  goto LAB_05f5d820;
                    /* try { // try from 05f5d37c to 0605d393 has its CatchHandler @ 05f5d400 */
  FUN_062519f8(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar3 = FUN_0625ad04();
                    /* try { // try from 05f5d394 to 0605d3ef has its CatchHandler @ 05f5d1b0 */
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(lVar4 + 0x20,0);
    uVar3 = FUN_0625ad04();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
      FUN_061efe40(unaff_x20,0);
      goto LAB_05f5d40c;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    plVar7 = (long *)FUN_062519f8(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_05f5d828:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar3 = (**(code **)(*plVar7 + 0x2a8))();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_05f5d828;
      uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
      if ((uVar3 & 1) == 0) {
LAB_05f5d70c:
        uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
        if ((uVar3 & 1) == 0) {
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03775678();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          plVar7 = (long *)thunk_FUN_037788cc();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03775678(lVar4);
          }
          FUN_04f17d54(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar7;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_06276e18();
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
        }
        uVar2 = FUN_0625d834(uVar9,0);
        switch(uVar2) {
        case 5:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_07d98338;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_07d98300;
          break;
        case 7:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_07d98340;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *(long *)(unaff_x25 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_07d98320;
          break;
        default:
          goto 
          Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext
          ;
        }
        goto LAB_05f5d484;
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x458))();
      uVar10 = *(undefined8 *)PTR_DAT_07d98330;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
      }
      uVar10 = FUN_062519f8(uVar10,0);
      uVar3 = FUN_0625ad04(uVar9,uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_05f5d70c;
      lVar4 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar4 == 0) goto LAB_05f5d828;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05f5d82c:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar7);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_07d98310;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar5 = (long *)FUN_062519f8(uVar9,0);
      plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
      if (plVar6 == (long *)0x0) goto LAB_05f5d828;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = thunk_FUN_037787d0(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar9,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_05f5d82c;
      plVar6[4] = (long)plVar7;
      thunk_FUN_037aeb94(plVar6 + 4,plVar7);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x978))
                                     (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x980)),
         plVar5 == (long *)0x0)) goto LAB_05f5d828;
      uVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2b0));
      if ((uVar3 & 1) == 0) goto LAB_05f5d70c;
      uVar9 = *(undefined8 *)PTR_DAT_07d98328;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_062519f8(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f5d484:
      uVar9 = *puVar8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_062519f8(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
    }
    unaff_x20 = (long *)FUN_06284508(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(unaff_x20,0);
LAB_05f5d40c:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  lVar4 = *plVar7;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    {
LAB_05f5d820:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(unaff_x20);
    }
  }
  return unaff_x20;
}



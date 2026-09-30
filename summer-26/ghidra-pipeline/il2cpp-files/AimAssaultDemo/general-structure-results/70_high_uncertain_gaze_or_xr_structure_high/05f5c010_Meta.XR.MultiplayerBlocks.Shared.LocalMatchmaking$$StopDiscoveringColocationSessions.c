/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 05f5c010
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


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions
                 (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x2b0));
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_078d9d1c(&PTR_DAT_07d98000,*(undefined8 *)(unaff_x25 + 0xe0));
    return plVar4;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05f5c3cc;
  uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*unaff_x20 + 0x458))();
    uVar9 = *(undefined8 *)PTR_DAT_07d98330;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar9 = FUN_062519f8(uVar9,0);
    uVar3 = FUN_0625ad04(uVar5,uVar9,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05f5c3d0:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar4 = *(long **)(lVar6 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar4);
          }
        }
        uVar5 = *(undefined8 *)PTR_DAT_07d98310;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        plVar7 = (long *)FUN_062519f8(uVar5,0);
        plVar8 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
        if (plVar8 != (long *)0x0) {
          if ((plVar4 != (long *)0x0) &&
             (lVar6 = thunk_FUN_037787d0(plVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if ((int)plVar8[3] == 0) goto LAB_05f5c3d0;
          plVar8[4] = (long)plVar4;
          thunk_FUN_037aeb94(plVar8 + 4,plVar4);
          if ((plVar7 != (long *)0x0) &&
             (plVar7 = (long *)(**(code **)(*plVar7 + 0x978))
                                         (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x980)),
             plVar7 != (long *)0x0)) {
            uVar3 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2b0));
            if ((uVar3 & 1) != 0) {
              uVar5 = *(undefined8 *)PTR_DAT_07d98328;
              if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar5 = FUN_062519f8(uVar5,0);
              if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                thunk_FUN_03798b70(*unaff_x24);
              }
              plVar4 = (long *)FUN_06284508(uVar5,plVar4,0);
              lVar6 = *(long *)(unaff_x19 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678(lVar6);
              }
              lVar6 = **(long **)(lVar6 + 0xc0);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678(lVar6);
              }
              if (plVar4 == (long *)0x0) {
                return (long *)0x0;
              }
              if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) ==
                  lVar6)) {
                return plVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0373bb54(plVar4);
            }
            goto LAB_05f5c2b0;
          }
        }
      }
LAB_05f5c3cc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
LAB_05f5c2b0:
  uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_06276e18();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_0625d834(uVar5,0);
    switch(uVar2) {
    case 5:
      plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98338,*(undefined8 *)(unaff_x25 + 0xe0));
      return plVar4;
    case 6:
    case 8:
    case 9:
    case 10:
      plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98300,*(undefined8 *)(unaff_x25 + 0xe0));
      return plVar4;
    case 7:
      plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98340,*(undefined8 *)(unaff_x25 + 0xe0));
      return plVar4;
    case 0xb:
    case 0xc:
      plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98320,*(undefined8 *)(unaff_x25 + 0xe0));
      return plVar4;
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  plVar4 = (long *)thunk_FUN_037788cc();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678(lVar6);
  }
  FUN_04f177dc(plVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
  return plVar4;
}



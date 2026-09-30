/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$get_Empty
ENTRY_POINT: 06517fb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__get_Empty
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0a51edde & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f20d20);
    DAT_0a51edde = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(3,0);
  }
  iVar1 = thunk_FUN_04457530(param_2,0);
  if (iVar1 != 1) {
    FUN_07a5f008(7,0);
  }
  iVar1 = thunk_FUN_044574ec(param_2,0,0);
  if (iVar1 != 0) {
    FUN_07a5f008(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_07a5f870(0);
  }
  iVar1 = FUN_07a56bec(param_2,0);
  iVar2 = FUN_06517974(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_07a5f008(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  lVar5 = thunk_FUN_04485110(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_04457f54(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x428))(plVar10,*(undefined8 *)(*plVar10 + 0x430));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
      }
      plVar4 = (long *)FUN_07a4ce38(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2b0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_065183c0;
          uVar8 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2b0));
          if ((uVar8 & 1) == 0) {
            FUN_07a5f8a8(0);
          }
        }
        plVar10 = (long *)thunk_FUN_04485110(param_2,*(undefined8 *)PTR_DAT_09f20d20);
        if (plVar10 == (long *)0x0) {
          FUN_07a5f8a8();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04481fb8(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06518284;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar5,0);
LAB_06518284:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_04481fb8(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_06518310;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar5,0);
LAB_06518310:
              auVar12 = (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              local_50 = auVar12;
              lVar5 = thunk_FUN_04484e3c(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         local_50);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar10[(long)(int)param_3 + 4] = lVar5;
              thunk_FUN_044bb4b4(plVar10 + (long)(int)param_3 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_06518250;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar10,lVar6,5);
LAB_06518250:
                    /* WARNING: Could not recover jumptable at 0x06518274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_065183c0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



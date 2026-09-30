/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$BeginInvoke
ENTRY_POINT: 063abfc4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__BeginInvoke(ulong param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar12;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6e20);
                    /* try { // try from 063abfdc to 064abfe3 has its CatchHandler @ 063ac188 */
    FUN_0373b518(PTR_DAT_07db6c00);
    FUN_0373b518(PTR_DAT_07db2190);
    FUN_0373b518(PTR_DAT_07db6d68);
    FUN_0373b518(PTR_DAT_07db6d70);
    FUN_0373b518(PTR_DAT_07db6dd0);
    FUN_0373b518(PTR_DAT_07db6d98);
    *(undefined1 *)(unaff_x23 + 0x6b4) = 1;
  }
  uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
  if ((uVar5 & 1) == 0) {
    if (unaff_x22 == 0) goto LAB_063ac3c4;
    FUN_060c530c();
    if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07db2190);
    }
    FUN_063ab8e0(param_3);
    if (unaff_x20 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_063ac2bc;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c();
LAB_063ac2bc:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (param_3 == (long *)0x0) {
LAB_063ac3c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar5 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
    puVar3 = PTR_DAT_07db6d98;
    puVar2 = PTR_DAT_07db6d70;
    puVar1 = PTR_DAT_07db2190;
    if ((uVar5 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar4 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        if (iVar4 == 0xd) break;
        plVar6 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_063ac3c4;
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar7,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar7,*(undefined8 *)puVar3,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (uVar7,*(undefined8 *)PTR_DAT_07db6d68,0);
            if ((uVar5 & 1) == 0) {
              plVar6 = (long *)(**(code **)(*param_3 + 0x248))
                                         (param_3,*(undefined8 *)(*param_3 + 0x250));
              uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
              if (plVar6 == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              }
              uVar7 = System_Convert__ToInt32(uVar7,uVar9,0);
              goto LAB_063ac3d4;
            }
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_3,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_063ab8e0(param_3);
            lVar10 = *param_3;
          }
          else {
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_3,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_063ab8e0(param_3);
            lVar10 = *param_3;
          }
        }
        else {
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_3,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar12 = FUN_063ab8e0(param_3);
          lVar10 = *param_3;
        }
        uVar5 = (**(code **)(lVar10 + 0x288))(param_3,*(undefined8 *)(lVar10 + 0x290));
      } while ((uVar5 & 1) != 0);
    }
    if (lVar12 == 0) {
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
      uVar7 = FUN_062d5fcc(param_3,uVar7,0);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar9);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_063ac324;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c();
LAB_063ac324:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_0377596c();
LAB_063ac39c:
                    /* WARNING: Could not recover jumptable at 0x063ac3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)();
  return;
LAB_063ac38c:
  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
  goto LAB_063ac39c;
}



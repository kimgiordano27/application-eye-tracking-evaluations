/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$Invoke
ENTRY_POINT: 063abfb0
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


void OVRPlugin_GetBoneSkeleton3Delegate__Invoke
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x23;
  long lVar11;
  long unaff_x24;
  undefined8 *puVar12;
  undefined8 uVar13;
  
                    /* try { // try from 063abfb0 to 064abfbb has its CatchHandler @ 063ac18c */
  puVar12 = *(undefined8 **)(unaff_x24 + 0xdd0);
  if ((*(byte *)(unaff_x23 + 0x6b4) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6e20);
    FUN_0373b518(PTR_DAT_07db6c00);
    FUN_0373b518(PTR_DAT_07db2190);
    FUN_0373b518(PTR_DAT_07db6d68);
    FUN_0373b518(PTR_DAT_07db6d70);
    FUN_0373b518(PTR_DAT_07db6dd0);
    FUN_0373b518(PTR_DAT_07db6d98);
    *(undefined1 *)(unaff_x23 + 0x6b4) = 1;
  }
  uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(param_5,*puVar12,0);
  if ((uVar5 & 1) == 0) {
    if (param_5 == 0) goto LAB_063ac3c4;
    uVar10 = FUN_060c530c(param_5,1,0);
    if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07db2190);
    }
    uVar13 = FUN_063ab8e0(param_2);
    if (param_3 == (long *)0x0) goto LAB_063ac3c4;
    lVar11 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_063ac2bc;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07db6e20,7);
LAB_063ac2bc:
    uVar10 = (*(code *)*puVar12)(param_3,uVar10,uVar13,puVar12[1]);
    if (param_4 == (long *)0x0) goto LAB_063ac3c4;
    lVar8 = *param_4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar11 = *(long *)PTR_DAT_07db6c00;
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_063ac3c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar5 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    puVar3 = PTR_DAT_07db6d98;
    puVar2 = PTR_DAT_07db6d70;
    puVar1 = PTR_DAT_07db2190;
    if ((uVar5 & 1) == 0) {
      uVar13 = 0;
      uVar10 = 0;
      lVar11 = 0;
    }
    else {
      uVar13 = 0;
      uVar10 = 0;
      lVar11 = 0;
      do {
        iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar4 == 0xd) break;
        plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
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
              plVar6 = (long *)(**(code **)(*param_2 + 0x248))
                                         (param_2,*(undefined8 *)(*param_2 + 0x250));
              uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
              if (plVar6 == (long *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              }
              uVar10 = System_Convert__ToInt32(uVar10,uVar13,0);
              goto LAB_063ac3d4;
            }
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar13 = FUN_063ab8e0(param_2);
            lVar8 = *param_2;
          }
          else {
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar10 = FUN_063ab8e0(param_2);
            lVar8 = *param_2;
          }
        }
        else {
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar11 = FUN_063ab8e0(param_2);
          lVar8 = *param_2;
        }
        uVar5 = (**(code **)(lVar8 + 0x288))(param_2,*(undefined8 *)(lVar8 + 0x290));
      } while ((uVar5 & 1) != 0);
    }
    if (lVar11 == 0) {
      uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
      uVar10 = FUN_062d5fcc(param_2,uVar10,0);
      uVar13 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar10,uVar13);
    }
    if (param_3 == (long *)0x0) goto LAB_063ac3c4;
    lVar8 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_063ac324;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07db6e20,5);
LAB_063ac324:
    uVar10 = (*(code *)*puVar12)(param_3,lVar11,uVar10,uVar13,puVar12[1]);
    if (param_4 == (long *)0x0) goto LAB_063ac3c4;
    lVar8 = *param_4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar11 = *(long *)PTR_DAT_07db6c00;
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar12 = (undefined8 *)FUN_0377596c(param_4,lVar11,7);
LAB_063ac39c:
                    /* WARNING: Could not recover jumptable at 0x063ac3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar12)(param_4,uVar10,puVar12[1]);
  return;
LAB_063ac38c:
  puVar12 = (undefined8 *)(lVar8 + (long)(*piVar9 + 7) * 0x10 + 0x138);
  goto LAB_063ac39c;
}



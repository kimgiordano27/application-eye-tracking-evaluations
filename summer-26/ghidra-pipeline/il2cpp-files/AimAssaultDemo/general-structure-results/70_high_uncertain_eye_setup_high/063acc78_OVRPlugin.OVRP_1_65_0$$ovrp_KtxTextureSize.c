/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 063acc78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_0825c6b3 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8cff8);
    FUN_0373b518(PTR_DAT_07d8cff0);
    FUN_0373b518(PTR_DAT_07d8cfe8);
    FUN_0373b518(PTR_DAT_07d95cc0);
    FUN_0373b518(PTR_DAT_07db6ef0);
    FUN_0373b518(PTR_DAT_07d95cc8);
    FUN_0373b518(PTR_DAT_07db2190);
    FUN_0373b518(PTR_DAT_07db2408);
    FUN_0373b518(PTR_DAT_07db2418);
    FUN_0373b518(PTR_DAT_07db6d60);
    FUN_0373b518(PTR_DAT_07db4c68);
    FUN_0373b518(PTR_DAT_07db52d0);
    FUN_0373b518(PTR_DAT_07db6ef8);
    FUN_0373b518(PTR_DAT_07d9d178);
    FUN_0373b518(PTR_DAT_07db4b20);
    FUN_0373b518(PTR_DAT_07db4c70);
    DAT_0825c6b3 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (param_2 != (long *)0x0) {
    uVar7 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    puVar4 = PTR_DAT_07db6ef0;
    puVar2 = PTR_DAT_07db52d0;
    puVar1 = PTR_DAT_07d95cc8;
    if ((uVar7 & 1) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      puVar15 = (undefined8 *)PTR_DAT_07db4c68;
      do {
        iVar6 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar6 != 4) {
          if (iVar6 == 5) {
            return lVar14;
          }
          if (iVar6 == 0xd) {
            return lVar14;
          }
LAB_063ad1fc:
          FUN_031a5e18(param_2);
          (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          thunk_FUN_037a15ac(PTR_DAT_07db23b0);
          uVar10 = FUN_06278b80();
          uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6f00);
          uVar10 = System_Convert__ToInt32(uVar11,uVar10,0);
          uVar10 = FUN_062d5fcc(param_2,uVar10,0);
          uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db6f08);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar10,uVar11);
        }
        plVar8 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar8 == (long *)0x0) goto LAB_063ad288;
        lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        uVar7 = FUN_063349dc(lVar9,0);
        if ((uVar7 & 1) != 0) {
          return lVar14;
        }
        if (lVar9 == 0) goto LAB_063ad288;
        sVar5 = FUN_060bb390(lVar9,0,0);
        if (sVar5 == 0x24) {
          uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(lVar9,*puVar15,0);
          if (((((uVar7 & 1) == 0) &&
               (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                  (lVar9,*(undefined8 *)PTR_DAT_07db4b20,0), (uVar7 & 1) == 0)) &&
              (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar9,*(undefined8 *)PTR_DAT_07db4c70,0), (uVar7 & 1) == 0)) &&
             ((uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar9,*(undefined8 *)PTR_DAT_07db2418,0), (uVar7 & 1) == 0 &&
              (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar9,*(undefined8 *)PTR_DAT_07db2408,0), (uVar7 & 1) == 0)))) {
            return lVar14;
          }
          if (param_3 == (long *)0x0) goto LAB_063ad288;
          lVar13 = (**(code **)(*param_3 + 0x248))
                             (param_3,*(undefined8 *)PTR_DAT_07db6d60,
                              *(undefined8 *)(*param_3 + 0x250));
          if (lVar13 == 0) {
            if (lVar14 == 0) {
              lVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
              FUN_05b0e950(lVar14,*(undefined8 *)PTR_DAT_07d8cff0);
            }
            in_stack_00000020 = 0;
            while( true ) {
              in_stack_00000018 = in_stack_00000020;
              uVar10 = FUN_04e5f0f4(&stack0x00000018,*(undefined8 *)puVar4);
              uVar10 = System_Convert__ToInt32(*(undefined8 *)puVar2,uVar10,0);
              lVar13 = (**(code **)(*param_3 + 0x238))
                                 (param_3,uVar10,*(undefined8 *)(*param_3 + 0x240));
              if (lVar13 == 0) break;
              FUN_04e5efe4(&stack0x00000020,in_stack_00000020._4_4_ + 1,*(undefined8 *)puVar1);
            }
            in_stack_00000018 = in_stack_00000020;
            uVar10 = FUN_04e5f0f4(&stack0x00000018,*(undefined8 *)puVar4);
            lVar13 = System_Convert__ToInt32(*(undefined8 *)puVar2,uVar10,0);
            uVar10 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07db6ef8,lVar13,0);
            puVar3 = PTR_DAT_07db6d60;
            if (lVar14 == 0) goto LAB_063ad288;
            FUN_05b0f700(lVar14,uVar10,*(undefined8 *)PTR_DAT_07db6d60,
                         *(undefined8 *)PTR_DAT_07d8cff8);
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,lVar13,*(undefined8 *)puVar3,*(undefined8 *)(*param_3 + 0x200));
          }
          uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(lVar9,*puVar15,0);
          if ((uVar7 & 1) != 0) {
            return lVar14;
          }
          uVar10 = FUN_060c530c(lVar9,1,0);
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
          uVar11 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          uVar7 = FUN_0632e0e4(uVar11,0);
          if ((uVar7 & 1) == 0) goto LAB_063ad1fc;
          if (lVar14 == 0) {
            lVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
            FUN_05b0e950(lVar14,*(undefined8 *)PTR_DAT_07d8cff0);
          }
          plVar8 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar8 == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_063ad288;
            uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          uVar10 = FUN_060c1430(lVar13,*(undefined8 *)PTR_DAT_07d9d178,uVar10,0);
          if (lVar14 == 0) goto LAB_063ad288;
          FUN_05b0f700(lVar14,uVar10,uVar11,*(undefined8 *)PTR_DAT_07d8cff8);
          puVar15 = (undefined8 *)PTR_DAT_07db4c68;
        }
        else {
          if (sVar5 != 0x40) {
            return lVar14;
          }
          if (lVar14 == 0) {
            lVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
            FUN_05b0e950(lVar14,*(undefined8 *)PTR_DAT_07d8cff0);
          }
          uVar10 = FUN_060c530c(lVar9,1,0);
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
          if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar11 = FUN_063ab8e0(param_2);
          if (lVar14 == 0) goto LAB_063ad288;
          uVar12 = FUN_05b0f700(lVar14,uVar10,uVar11,*(undefined8 *)PTR_DAT_07d8cff8);
          uVar7 = FUN_063ae148(uVar12,uVar10,&stack0x00000028);
          if ((uVar7 & 1) != 0) {
            if (param_3 == (long *)0x0) goto LAB_063ad288;
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,in_stack_00000028,uVar11,*(undefined8 *)(*param_3 + 0x200));
          }
        }
        uVar7 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      } while ((uVar7 & 1) != 0);
    }
    return lVar14;
  }
LAB_063ad288:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



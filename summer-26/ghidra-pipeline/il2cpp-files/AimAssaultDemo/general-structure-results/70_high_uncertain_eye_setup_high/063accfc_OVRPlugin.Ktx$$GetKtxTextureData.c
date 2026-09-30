/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 063accfc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Ktx__GetKtxTextureData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  undefined8 *puVar13;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xd60));
  FUN_0373b518(PTR_DAT_07db4c68);
  FUN_0373b518(PTR_DAT_07db52d0);
  FUN_0373b518(PTR_DAT_07db6ef8);
  FUN_0373b518(PTR_DAT_07d9d178);
  FUN_0373b518(PTR_DAT_07db4b20);
  FUN_0373b518(PTR_DAT_07db4c70);
  *(undefined1 *)(unaff_x21 + 0x6b3) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 != (long *)0x0) {
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    puVar3 = PTR_DAT_07db6ef0;
    puVar2 = PTR_DAT_07db52d0;
    puVar1 = PTR_DAT_07d95cc8;
    if ((uVar6 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar13 = (undefined8 *)PTR_DAT_07db4c68;
      do {
        iVar5 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar5 != 4) {
          if (iVar5 == 5) {
            return lVar12;
          }
          if (iVar5 == 0xd) {
            return lVar12;
          }
LAB_063ad1fc:
          FUN_031a5e18();
          (**(code **)(*unaff_x19 + 0x238))();
          thunk_FUN_037a15ac(PTR_DAT_07db23b0);
          uVar9 = FUN_06278b80();
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6f00);
          System_Convert__ToInt32(uVar10,uVar9,0);
          uVar9 = FUN_062d5fcc();
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6f08);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,uVar10);
        }
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) goto LAB_063ad288;
        lVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        uVar6 = FUN_063349dc(lVar8,0);
        if ((uVar6 & 1) != 0) {
          return lVar12;
        }
        if (lVar8 == 0) goto LAB_063ad288;
        sVar4 = FUN_060bb390(lVar8,0,0);
        if (sVar4 == 0x24) {
          uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(lVar8,*puVar13,0);
          if (((((uVar6 & 1) == 0) &&
               (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                  (lVar8,*(undefined8 *)PTR_DAT_07db4b20,0), (uVar6 & 1) == 0)) &&
              (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar8,*(undefined8 *)PTR_DAT_07db4c70,0), (uVar6 & 1) == 0)) &&
             ((uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar8,*(undefined8 *)PTR_DAT_07db2418,0), (uVar6 & 1) == 0 &&
              (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                 (lVar8,*(undefined8 *)PTR_DAT_07db2408,0), (uVar6 & 1) == 0)))) {
            return lVar12;
          }
          if (unaff_x20 == (long *)0x0) goto LAB_063ad288;
          lVar11 = (**(code **)(*unaff_x20 + 0x248))();
          if (lVar11 == 0) {
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
              FUN_05b0e950(lVar12,*(undefined8 *)PTR_DAT_07d8cff0);
            }
            in_stack_00000020 = 0;
            while( true ) {
              in_stack_00000018 = in_stack_00000020;
              uVar9 = FUN_04e5f0f4(&stack0x00000018,*(undefined8 *)puVar3);
              System_Convert__ToInt32(*(undefined8 *)puVar2,uVar9,0);
              lVar11 = (**(code **)(*unaff_x20 + 0x238))();
              if (lVar11 == 0) break;
              FUN_04e5efe4(&stack0x00000020,in_stack_00000020._4_4_ + 1,*(undefined8 *)puVar1);
            }
            in_stack_00000018 = in_stack_00000020;
            uVar9 = FUN_04e5f0f4(&stack0x00000018,*(undefined8 *)puVar3);
            lVar11 = System_Convert__ToInt32(*(undefined8 *)puVar2,uVar9,0);
            uVar9 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07db6ef8,lVar11,0);
            if (lVar12 == 0) goto LAB_063ad288;
            FUN_05b0f700(lVar12,uVar9,*(undefined8 *)PTR_DAT_07db6d60,
                         *(undefined8 *)PTR_DAT_07d8cff8);
            (**(code **)(*unaff_x20 + 0x1f8))();
          }
          uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(lVar8,*puVar13,0);
          if ((uVar6 & 1) != 0) {
            return lVar12;
          }
          uVar9 = FUN_060c530c(lVar8,1,0);
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          uVar10 = (**(code **)(*unaff_x19 + 0x238))();
          uVar6 = FUN_0632e0e4(uVar10,0);
          if ((uVar6 & 1) == 0) goto LAB_063ad1fc;
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
            FUN_05b0e950(lVar12,*(undefined8 *)PTR_DAT_07d8cff0);
          }
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar7 == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_063ad288;
            uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          uVar9 = FUN_060c1430(lVar11,*(undefined8 *)PTR_DAT_07d9d178,uVar9,0);
          if (lVar12 == 0) goto LAB_063ad288;
          FUN_05b0f700(lVar12,uVar9,uVar10,*(undefined8 *)PTR_DAT_07d8cff8);
          puVar13 = (undefined8 *)PTR_DAT_07db4c68;
        }
        else {
          if (sVar4 != 0x40) {
            return lVar12;
          }
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
            FUN_05b0e950(lVar12,*(undefined8 *)PTR_DAT_07d8cff0);
          }
          uVar9 = FUN_060c530c(lVar8,1,0);
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar10 = FUN_063ab8e0();
          if (lVar12 == 0) goto LAB_063ad288;
          uVar10 = FUN_05b0f700(lVar12,uVar9,uVar10,*(undefined8 *)PTR_DAT_07d8cff8);
          uVar6 = FUN_063ae148(uVar10,uVar9,&stack0x00000028);
          if ((uVar6 & 1) != 0) {
            if (unaff_x20 == (long *)0x0) goto LAB_063ad288;
            (**(code **)(*unaff_x20 + 0x1f8))();
          }
        }
        uVar6 = (**(code **)(*unaff_x19 + 0x288))();
      } while ((uVar6 & 1) != 0);
    }
    return lVar12;
  }
LAB_063ad288:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



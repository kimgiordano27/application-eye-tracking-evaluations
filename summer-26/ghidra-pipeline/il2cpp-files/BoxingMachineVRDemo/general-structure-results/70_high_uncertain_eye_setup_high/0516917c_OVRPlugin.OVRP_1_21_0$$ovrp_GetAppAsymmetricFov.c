/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetAppAsymmetricFov
ENTRY_POINT: 0516917c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_21_0__ovrp_GetAppAsymmetricFov(void)

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
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_067634c8);
  FUN_02d6084c(PTR_DAT_067675d8);
  FUN_02d6084c(PTR_DAT_06782710);
  FUN_02d6084c(PTR_DAT_067675e0);
  FUN_02d6084c(PTR_DAT_0677d900);
  FUN_02d6084c(PTR_DAT_0677dba0);
  FUN_02d6084c(PTR_DAT_0677dbb0);
  FUN_02d6084c(PTR_DAT_06782550);
  FUN_02d6084c(PTR_DAT_06780450);
  FUN_02d6084c(PTR_DAT_06780aa8);
  FUN_02d6084c(PTR_DAT_06782718);
  FUN_02d6084c(PTR_DAT_067646b8);
  FUN_02d6084c(PTR_DAT_06780308);
  FUN_02d6084c(PTR_DAT_06780458);
  *(undefined1 *)(unaff_x21 + 0xe75) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 != (long *)0x0) {
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    puVar3 = PTR_DAT_06782710;
    puVar2 = PTR_DAT_06780aa8;
    puVar1 = PTR_DAT_067675e0;
    if ((uVar6 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar13 = (undefined8 *)PTR_DAT_06780450;
      do {
        iVar5 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar5 != 4) {
          if (iVar5 == 5) {
            return lVar12;
          }
          if (iVar5 == 0xd) {
            return lVar12;
          }
LAB_051696d8:
          FUN_028f4e40();
          (**(code **)(*unaff_x19 + 0x238))();
          thunk_FUN_02dc61f4(PTR_DAT_0677db48);
          uVar9 = FUN_0503c914();
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782720);
          FUN_04e83184(uVar10,uVar9,0);
          uVar9 = FUN_050924a8();
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782728);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar9,uVar10);
        }
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) goto LAB_05169764;
        lVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        uVar6 = FUN_050f0eb8(lVar8,0);
        if ((uVar6 & 1) != 0) {
          return lVar12;
        }
        if (lVar8 == 0) goto LAB_05169764;
        sVar4 = FUN_04e87a5c(lVar8,0,0);
        if (sVar4 == 0x24) {
          uVar6 = thunk_FUN_04e8bd3c(lVar8,*puVar13,0);
          if (((((uVar6 & 1) == 0) &&
               (uVar6 = thunk_FUN_04e8bd3c(lVar8,*(undefined8 *)PTR_DAT_06780308,0),
               (uVar6 & 1) == 0)) &&
              (uVar6 = thunk_FUN_04e8bd3c(lVar8,*(undefined8 *)PTR_DAT_06780458,0), (uVar6 & 1) == 0
              )) && ((uVar6 = thunk_FUN_04e8bd3c(lVar8,*(undefined8 *)PTR_DAT_0677dbb0,0),
                     (uVar6 & 1) == 0 &&
                     (uVar6 = thunk_FUN_04e8bd3c(lVar8,*(undefined8 *)PTR_DAT_0677dba0,0),
                     (uVar6 & 1) == 0)))) {
            return lVar12;
          }
          if (unaff_x20 == (long *)0x0) goto LAB_05169764;
          lVar11 = (**(code **)(*unaff_x20 + 0x248))();
          if (lVar11 == 0) {
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
              FUN_04894d4c(lVar12,*(undefined8 *)PTR_DAT_067634b0);
            }
            in_stack_00000020 = 0;
            while( true ) {
              in_stack_00000018 = in_stack_00000020;
              uVar9 = FUN_03dce180(&stack0x00000018,*(undefined8 *)puVar3);
              FUN_04e83184(*(undefined8 *)puVar2,uVar9,0);
              lVar11 = (**(code **)(*unaff_x20 + 0x238))();
              if (lVar11 == 0) break;
              FUN_03dce070(&stack0x00000020,in_stack_00000020._4_4_ + 1,*(undefined8 *)puVar1);
            }
            in_stack_00000018 = in_stack_00000020;
            uVar9 = FUN_03dce180(&stack0x00000018,*(undefined8 *)puVar3);
            lVar11 = FUN_04e83184(*(undefined8 *)puVar2,uVar9,0);
            uVar9 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782718,lVar11,0);
            if (lVar12 == 0) goto LAB_05169764;
            FUN_048956f0(lVar12,uVar9,*(undefined8 *)PTR_DAT_06782550,
                         *(undefined8 *)PTR_DAT_06763498);
            (**(code **)(*unaff_x20 + 0x1f8))();
          }
          uVar6 = thunk_FUN_04e8bd3c(lVar8,*puVar13,0);
          if ((uVar6 & 1) != 0) {
            return lVar12;
          }
          uVar9 = FUN_04e9195c(lVar8,1,0);
          FUN_0509917c();
          uVar10 = (**(code **)(*unaff_x19 + 0x238))();
          uVar6 = FUN_050ea5c0(uVar10,0);
          if ((uVar6 & 1) == 0) goto LAB_051696d8;
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
            FUN_04894d4c(lVar12,*(undefined8 *)PTR_DAT_067634b0);
          }
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar7 == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_05169764;
            uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          uVar9 = FUN_04e8db00(lVar11,*(undefined8 *)PTR_DAT_067646b8,uVar9,0);
          if (lVar12 == 0) goto LAB_05169764;
          FUN_048956f0(lVar12,uVar9,uVar10,*(undefined8 *)PTR_DAT_06763498);
          puVar13 = (undefined8 *)PTR_DAT_06780450;
        }
        else {
          if (sVar4 != 0x40) {
            return lVar12;
          }
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067634c8);
            FUN_04894d4c(lVar12,*(undefined8 *)PTR_DAT_067634b0);
          }
          uVar9 = FUN_04e9195c(lVar8,1,0);
          FUN_0509917c();
          if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = FUN_05167dbc();
          if (lVar12 == 0) goto LAB_05169764;
          uVar10 = FUN_048956f0(lVar12,uVar9,uVar10,*(undefined8 *)PTR_DAT_06763498);
          uVar6 = FUN_0516a624(uVar10,uVar9,&stack0x00000028);
          if ((uVar6 & 1) != 0) {
            if (unaff_x20 == (long *)0x0) goto LAB_05169764;
            (**(code **)(*unaff_x20 + 0x1f8))();
          }
        }
        uVar6 = (**(code **)(*unaff_x19 + 0x288))();
      } while ((uVar6 & 1) != 0);
    }
    return lVar12;
  }
LAB_05169764:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



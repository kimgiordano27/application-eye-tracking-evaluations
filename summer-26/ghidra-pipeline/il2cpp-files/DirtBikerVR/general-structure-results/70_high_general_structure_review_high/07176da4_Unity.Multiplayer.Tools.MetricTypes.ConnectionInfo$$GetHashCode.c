/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo$$GetHashCode
ENTRY_POINT: 07176da4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Multiplayer_Tools_MetricTypes_ConnectionInfo__GetHashCode(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int in_w8;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar14;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  long lVar15;
  int unaff_w25;
  undefined8 uVar16;
  uint *puVar17;
  long *unaff_x29;
  ulong uVar18;
  undefined1 auVar19 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  _in_stack_00000070 =
       Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                 (param_1,unaff_w25 - in_w8,0);
  auVar19 = FUN_0719aa28(&stack0x00000070,unaff_w22,0);
  _in_stack_00000070 = auVar19;
  auVar19 = FUN_0719ae14(&stack0x00000070);
  _in_stack_00000070 = auVar19;
  auVar19 = FUN_071774c4(&stack0x00000080);
  auVar19 = FUN_0719afb0(&stack0x00000070,auVar19._0_8_,auVar19._8_8_,0);
  _in_stack_00000070 = auVar19;
  uVar5 = FUN_07177590(&stack0x00000080);
  FUN_0719aed4(&stack0x00000070,uVar5,0);
  auVar19 = FUN_0719a264();
  puVar1 = PTR_DAT_084867c8;
  _in_stack_00000070 = auVar19;
  lVar6 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,2);
  if (lVar6 == 0) goto LAB_0717736c;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = unaff_x23;
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e68;
      thunk_FUN_03afed3c();
      puVar3 = PTR_DAT_084e0660;
      puVar2 = PTR_DAT_084902d8;
      uVar5 = FUN_04760f28(*(undefined8 *)PTR_DAT_084902d8,lVar6,*(undefined8 *)PTR_DAT_084e0660);
      FUN_0719ae14(&stack0x00000070,uVar5,0);
      auVar19 = FUN_0719a264();
      _in_stack_00000070 = auVar19;
      lVar6 = FUN_03a8a804(*(undefined8 *)puVar1,2);
      if (lVar6 == 0) goto LAB_0717736c;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = unaff_x23;
        thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e78;
          thunk_FUN_03afed3c();
          uVar5 = FUN_04760f28(*(undefined8 *)puVar2,lVar6,*(undefined8 *)puVar3);
          FUN_0719ae14(&stack0x00000070,uVar5,0);
          auVar19 = FUN_0719a264();
          _in_stack_00000070 = auVar19;
          lVar6 = FUN_03a8a804(*(undefined8 *)puVar1,2);
          if (lVar6 == 0) goto LAB_0717736c;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(lVar6 + 0x20) = unaff_x21;
            thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e38;
              thunk_FUN_03afed3c();
              uVar5 = FUN_04760f28(*(undefined8 *)puVar2,lVar6,*(undefined8 *)puVar3);
              FUN_0719ae14(&stack0x00000070,uVar5,0);
              auVar19 = FUN_0719a264();
              _in_stack_00000070 = auVar19;
              lVar6 = FUN_03a8a804(*(undefined8 *)puVar1,2);
              if (lVar6 == 0) {
LAB_0717736c:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(undefined8 *)(lVar6 + 0x20) = unaff_x21;
                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20));
                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e40;
                  thunk_FUN_03afed3c();
                  uVar5 = FUN_04760f28(*(undefined8 *)puVar2,lVar6,*(undefined8 *)puVar3);
                  FUN_0719ae14(&stack0x00000070,uVar5,0);
                  lVar6 = *(long *)(unaff_x20 + 0x38);
                  if (lVar6 != 0) {
                    uVar11 = *(ulong *)(lVar6 + 0x18);
                    if (0 < (int)uVar11) {
                      uVar18 = 0;
                      puVar17 = (uint *)(lVar6 + 0x50);
                      do {
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_07177368;
                        if (((puVar17[-4] == 1) &&
                            (((puVar14 = puVar17 + -0xc, (in_stack_00000008 & 0x100000000) != 0 ||
                              (puVar17[-0xb] != 1)) || ((*puVar14 & 0xfffffffe) != 0x30)))) &&
                           (lVar7 = FUN_07177624(puVar14), lVar7 != 0)) {
                          uVar5 = FUN_0717772c(puVar14);
                          auVar19 = FUN_0719a1fc(unaff_x19,0);
                          _in_stack_00000018 = auVar19;
                          uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,
                                                     &stack0x00000018);
                          lVar12 = *unaff_x29;
                          if (*(int *)(lVar12 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(lVar12);
                            lVar12 = *unaff_x29;
                          }
                          puVar13 = *(undefined8 **)(lVar12 + 0xb8);
                          lVar15 = puVar13[3];
                          if (lVar15 == 0) {
                            if (*(int *)(lVar12 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4(lVar12);
                              puVar13 = *(undefined8 **)(*unaff_x29 + 0xb8);
                            }
                            uVar16 = *puVar13;
                            lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
                            FUN_04968870(lVar15,uVar16,*(undefined8 *)PTR_DAT_084e4e18,0);
                            plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
                            *plVar9 = lVar15;
                            thunk_FUN_03afed3c(plVar9,lVar15);
                          }
                          uVar5 = FUN_04761f9c(uVar5,uVar8,lVar15,*(undefined8 *)PTR_DAT_084e4e00);
                          auVar19 = FUN_0719a264(unaff_x19,uVar5,0);
                          _in_stack_00000070 = auVar19;
                          uVar8 = FUN_07177924(puVar14);
                          auVar19 = FUN_0719a6c0(&stack0x00000070,uVar8,0);
                          _in_stack_00000070 = auVar19;
                          auVar19 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                              (&stack0x00000070,lVar7,0);
                          _in_stack_00000070 = auVar19;
                          auVar19 = FUN_0719a878(&stack0x00000070,*puVar17 >> 3,0);
                          _in_stack_00000070 = auVar19;
                          auVar19 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                              (&stack0x00000070,*puVar17 & 7,0);
                          _in_stack_00000070 = auVar19;
                          auVar19 = FUN_0719aa28(&stack0x00000070,puVar17[-1],0);
                          _in_stack_00000070 = auVar19;
                          uVar4 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor
                                            (puVar14);
                          auVar19 = FUN_0719a7fc(&stack0x00000070,uVar4,0);
                          _in_stack_00000070 = auVar19;
                          auVar19 = FUN_071774c4(puVar14);
                          auVar19 = FUN_0719afb0(&stack0x00000070,auVar19._0_8_,auVar19._8_8_,0);
                          _in_stack_00000070 = auVar19;
                          uVar8 = FUN_07177590(puVar14);
                          auVar19 = FUN_0719aed4(&stack0x00000070,uVar8,0);
                          _in_stack_00000060 = auVar19;
                          uVar8 = FUN_07177370(puVar14);
                          uVar10 = FUN_065cd268(uVar8,0);
                          if ((uVar10 & 1) == 0) {
                            FUN_0719ae14(&stack0x00000060,uVar8,0);
                          }
                          lVar7 = FUN_07177b68(puVar14);
                          if (lVar7 != 0) {
                            FUN_0719ab0c(&stack0x00000060,lVar7,0);
                          }
                          FUN_07177d50(puVar14,puVar14,uVar5,&stack0x00000118);
                        }
                        uVar18 = uVar18 + 1;
                        puVar17 = puVar17 + 0x12;
                      } while ((uVar11 & 0xffffffff) != uVar18);
                    }
                    FUN_0719a488(unaff_x19,0);
                    return;
                  }
                  goto LAB_0717736c;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07177368:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}



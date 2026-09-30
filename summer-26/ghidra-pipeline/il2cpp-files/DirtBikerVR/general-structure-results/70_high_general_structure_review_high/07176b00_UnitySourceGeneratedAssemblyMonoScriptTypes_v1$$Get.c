/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
ENTRY_POINT: 07176b00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar17;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  int unaff_w24;
  long lVar18;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  uint *puVar19;
  long *unaff_x29;
  ulong uVar20;
  undefined1 auVar21 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000090;
  int in_stack_000000e0;
  undefined8 in_stack_000000f8;
  
  _in_stack_00000070 = FUN_0719a6c0(param_2,param_1);
  auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                      (&stack0x00000070,*unaff_x27,0);
  _in_stack_00000070 = auVar21;
  auVar21 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                      (&stack0x00000070,unaff_w23,0);
  _in_stack_00000070 = auVar21;
  auVar21 = FUN_0719a878(&stack0x00000070,unaff_w24,0);
  _in_stack_00000070 = auVar21;
  auVar21 = FUN_0719aa28(&stack0x00000070,unaff_w21,0);
  _in_stack_00000070 = auVar21;
  lVar6 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084e2178,1);
  puVar2 = PTR_DAT_08499480;
  lVar12 = *(long *)PTR_DAT_08499480;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar12);
    lVar12 = *(long *)puVar2;
  }
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      uVar7 = **(undefined8 **)(lVar12 + 0xb8);
      *(undefined8 *)(lVar6 + 0x28) = (*(undefined8 **)(lVar12 + 0xb8))[1];
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),0);
      FUN_0719ab0c(&stack0x00000070,lVar6,0);
      uVar7 = FUN_07177370(&stack0x000000d0);
      uVar8 = FUN_07177370(&stack0x00000080);
      auVar21 = FUN_0719a264();
      puVar2 = PTR_DAT_084920f8;
      lVar6 = *(long *)PTR_DAT_084920f8;
      _in_stack_00000070 = auVar21;
      if (in_stack_000000e0 < 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar13 = (undefined4 *)(*(long *)(lVar6 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar13 = (undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
      }
      auVar21 = FUN_0719a7fc(&stack0x00000070,*puVar13,0);
      iVar1 = unaff_w26 + 7;
      if (-1 < unaff_w26) {
        iVar1 = unaff_w26;
      }
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719a878(&stack0x00000070,(iVar1 >> 3) - unaff_w24,0);
      _in_stack_00000070 = auVar21;
      auVar21 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                          (&stack0x00000070,unaff_w26 % 8,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719aa28(&stack0x00000070,in_stack_000000f8._4_4_,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719ae14(&stack0x00000070,uVar7,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_071774c4(&stack0x000000d0);
      auVar21 = FUN_0719afb0(&stack0x00000070,auVar21._0_8_,auVar21._8_8_,0);
      _in_stack_00000070 = auVar21;
      uVar9 = FUN_07177590(&stack0x000000d0);
      FUN_0719aed4(&stack0x00000070,uVar9,0);
      auVar21 = FUN_0719a264();
      lVar6 = *(long *)puVar2;
      _in_stack_00000070 = auVar21;
      if (in_stack_00000090 < 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar13 = (undefined4 *)(*(long *)(lVar6 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar6 = *(long *)puVar2;
        }
        puVar13 = (undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
      }
      auVar21 = FUN_0719a7fc(&stack0x00000070,*puVar13,0);
      iVar1 = unaff_w25 + 7;
      if (-1 < unaff_w25) {
        iVar1 = unaff_w25;
      }
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719a878(&stack0x00000070,(iVar1 >> 3) - unaff_w24,0);
      _in_stack_00000070 = auVar21;
      auVar21 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                          (&stack0x00000070,unaff_w25 % 8,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719aa28(&stack0x00000070,unaff_w22,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_0719ae14(&stack0x00000070,uVar8,0);
      _in_stack_00000070 = auVar21;
      auVar21 = FUN_071774c4(&stack0x00000080);
      auVar21 = FUN_0719afb0(&stack0x00000070,auVar21._0_8_,auVar21._8_8_,0);
      _in_stack_00000070 = auVar21;
      uVar9 = FUN_07177590(&stack0x00000080);
      FUN_0719aed4(&stack0x00000070,uVar9,0);
      auVar21 = FUN_0719a264();
      puVar2 = PTR_DAT_084867c8;
      _in_stack_00000070 = auVar21;
      lVar6 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,2);
      if (lVar6 == 0) goto LAB_0717736c;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),uVar8);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e68;
          thunk_FUN_03afed3c();
          puVar4 = PTR_DAT_084e0660;
          puVar3 = PTR_DAT_084902d8;
          uVar9 = FUN_04760f28(*(undefined8 *)PTR_DAT_084902d8,lVar6,*(undefined8 *)PTR_DAT_084e0660
                              );
          FUN_0719ae14(&stack0x00000070,uVar9,0);
          auVar21 = FUN_0719a264();
          _in_stack_00000070 = auVar21;
          lVar6 = FUN_03a8a804(*(undefined8 *)puVar2,2);
          if (lVar6 == 0) goto LAB_0717736c;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(lVar6 + 0x20) = uVar8;
            thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),uVar8);
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e78;
              thunk_FUN_03afed3c();
              uVar8 = FUN_04760f28(*(undefined8 *)puVar3,lVar6,*(undefined8 *)puVar4);
              FUN_0719ae14(&stack0x00000070,uVar8,0);
              auVar21 = FUN_0719a264();
              _in_stack_00000070 = auVar21;
              lVar6 = FUN_03a8a804(*(undefined8 *)puVar2,2);
              if (lVar6 == 0) goto LAB_0717736c;
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(undefined8 *)(lVar6 + 0x20) = uVar7;
                thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),uVar7);
                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e38;
                  thunk_FUN_03afed3c();
                  uVar8 = FUN_04760f28(*(undefined8 *)puVar3,lVar6,*(undefined8 *)puVar4);
                  FUN_0719ae14(&stack0x00000070,uVar8,0);
                  auVar21 = FUN_0719a264();
                  _in_stack_00000070 = auVar21;
                  lVar6 = FUN_03a8a804(*(undefined8 *)puVar2,2);
                  if (lVar6 == 0) goto LAB_0717736c;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(lVar6 + 0x20) = uVar7;
                    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x20),uVar7);
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_084e4e40;
                      thunk_FUN_03afed3c();
                      uVar7 = FUN_04760f28(*(undefined8 *)puVar3,lVar6,*(undefined8 *)puVar4);
                      FUN_0719ae14(&stack0x00000070,uVar7,0);
                      lVar6 = *(long *)(unaff_x20 + 0x38);
                      if (lVar6 != 0) {
                        uVar14 = *(ulong *)(lVar6 + 0x18);
                        if (0 < (int)uVar14) {
                          uVar20 = 0;
                          puVar19 = (uint *)(lVar6 + 0x50);
                          do {
                            if (*(uint *)(lVar6 + 0x18) <= uVar20) goto LAB_07177368;
                            if (((puVar19[-4] == 1) &&
                                (((puVar17 = puVar19 + -0xc, (in_stack_00000008 & 0x100000000) != 0
                                  || (puVar19[-0xb] != 1)) || ((*puVar17 & 0xfffffffe) != 0x30))))
                               && (lVar12 = FUN_07177624(puVar17), lVar12 != 0)) {
                              uVar7 = FUN_0717772c(puVar17);
                              auVar21 = FUN_0719a1fc(unaff_x19,0);
                              _in_stack_00000018 = auVar21;
                              uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,
                                                         &stack0x00000018);
                              lVar15 = *unaff_x29;
                              if (*(int *)(lVar15 + 0xe4) == 0) {
                                thunk_FUN_03ae8be4(lVar15);
                                lVar15 = *unaff_x29;
                              }
                              puVar16 = *(undefined8 **)(lVar15 + 0xb8);
                              lVar18 = puVar16[3];
                              if (lVar18 == 0) {
                                if (*(int *)(lVar15 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(lVar15);
                                  puVar16 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                }
                                uVar9 = *puVar16;
                                lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
                                FUN_04968870(lVar18,uVar9,*(undefined8 *)PTR_DAT_084e4e18,0);
                                plVar10 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
                                *plVar10 = lVar18;
                                thunk_FUN_03afed3c(plVar10,lVar18);
                              }
                              uVar7 = FUN_04761f9c(uVar7,uVar8,lVar18,
                                                   *(undefined8 *)PTR_DAT_084e4e00);
                              auVar21 = FUN_0719a264(unaff_x19,uVar7,0);
                              _in_stack_00000070 = auVar21;
                              uVar8 = FUN_07177924(puVar17);
                              auVar21 = FUN_0719a6c0(&stack0x00000070,uVar8,0);
                              _in_stack_00000070 = auVar21;
                              auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                                  (&stack0x00000070,lVar12,0);
                              _in_stack_00000070 = auVar21;
                              auVar21 = FUN_0719a878(&stack0x00000070,*puVar19 >> 3,0);
                              _in_stack_00000070 = auVar21;
                              auVar21 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                                  (&stack0x00000070,*puVar19 & 7,0);
                              _in_stack_00000070 = auVar21;
                              auVar21 = FUN_0719aa28(&stack0x00000070,puVar19[-1],0);
                              _in_stack_00000070 = auVar21;
                              uVar5 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor
                                                (puVar17);
                              auVar21 = FUN_0719a7fc(&stack0x00000070,uVar5,0);
                              _in_stack_00000070 = auVar21;
                              auVar21 = FUN_071774c4(puVar17);
                              auVar21 = FUN_0719afb0(&stack0x00000070,auVar21._0_8_,auVar21._8_8_,0)
                              ;
                              _in_stack_00000070 = auVar21;
                              uVar8 = FUN_07177590(puVar17);
                              auVar21 = FUN_0719aed4(&stack0x00000070,uVar8,0);
                              _in_stack_00000060 = auVar21;
                              uVar8 = FUN_07177370(puVar17);
                              uVar11 = FUN_065cd268(uVar8,0);
                              if ((uVar11 & 1) == 0) {
                                FUN_0719ae14(&stack0x00000060,uVar8,0);
                              }
                              lVar12 = FUN_07177b68(puVar17);
                              if (lVar12 != 0) {
                                FUN_0719ab0c(&stack0x00000060,lVar12,0);
                              }
                              FUN_07177d50(puVar17,puVar17,uVar7,&stack0x00000118);
                            }
                            uVar20 = uVar20 + 1;
                            puVar19 = puVar19 + 0x12;
                          } while ((uVar14 & 0xffffffff) != uVar20);
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
    }
LAB_07177368:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_0717736c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}



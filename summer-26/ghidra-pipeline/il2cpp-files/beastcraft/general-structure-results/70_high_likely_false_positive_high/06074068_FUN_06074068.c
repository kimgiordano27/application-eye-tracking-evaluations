/*
FUNCTION_NAME: FUN_06074068
ENTRY_POINT: 06074068
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_06074068(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  
  if ((bRam0000000006e94fa5 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a3c360);
    FUN_02e3ca1c(PTR_DAT_06a368b8);
    FUN_02e3ca1c(System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06ab2a60);
    FUN_02e3ca1c(System_Collections_Generic_List<BlockSubCategoryView_BlockWidgetData>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3c398);
    FUN_02e3ca1c(PTR_DAT_06ab2c40);
    FUN_02e3ca1c(System_Collections_Generic_List<CaveDefaultGenerator_HoleWorm>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06ab2ab8);
    FUN_02e3ca1c(PTR_DAT_06a37068);
    FUN_02e3ca1c(PTR_DAT_06a3c0b0);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<DOTweenTMPAnimator_CharTransform>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<XRInputButtonReader>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<DataBindingManager_BindingData>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<DataBindingManager_BindingRequest>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3c3a0);
    FUN_02e3ca1c(PTR_DAT_06a3da60);
    FUN_02e3ca1c(PTR_DAT_06a749e0);
    FUN_02e3ca1c(PTR_DAT_06a5d938);
    FUN_02e3ca1c(PTR_DAT_06a749e8);
    FUN_02e3ca1c(System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<DebugUI_Panel>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<DebugUI_ValueTuple>_TypeInfo);
    bRam0000000006e94fa5 = 1;
  }
  FUN_06541ac8(param_1,0);
  if (*(long *)(param_1 + 0x210) == 0) {
    *(undefined8 *)(param_1 + 0x210) = **(undefined8 **)(*(long *)(PTR_DAT_06a2f000 + 0x90) + 0xb8);
    thunk_FUN_02ee2be8();
  }
  iVar5 = UnityEngine_UIElements_ConverterGroups__RegisterInt16Converters(0);
  bVar4 = 1;
  if (iVar5 != 1) {
    lVar7 = thunk_FUN_06271a70(0);
    if (lVar7 == 0) goto LAB_06074894;
    uVar8 = FUN_054922b4(lVar7,*(undefined8 *)
                                System_Collections_Generic_List<DebugUI_ValueTuple>_TypeInfo,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = thunk_FUN_06271a70(0);
      if (lVar7 == 0) goto LAB_06074894;
      bVar4 = FUN_054922b4(lVar7,*(undefined8 *)
                                  System_Collections_Generic_List<DebugUI_Panel>_TypeInfo,0);
    }
    else {
      bVar4 = 1;
    }
  }
  puVar2 = System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_TypeInfo;
  puVar1 = PTR_DAT_06a368b8;
  *(byte *)(param_1 + 0x2a8) = bVar4 & 1;
  lVar7 = FUN_038ac148(param_1,*(undefined8 *)puVar2);
  puVar2 = System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo;
  if (lVar7 == 0) {
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x150) = 1;
    uVar9 = FUN_038ac148(param_1,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x158) = uVar9;
    thunk_FUN_02ee2be8(param_1 + 0x158,uVar9);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar1 = PTR_DAT_06a2ed80;
  uVar8 = FUN_0621ad74(0);
  if ((uVar8 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x248);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_062696b0(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x128);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar8 = FUN_06267b6c(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        plVar10 = (long *)FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a3da60,1);
        uVar9 = *(undefined8 *)
                 System_Collections_Generic_List<DataBindingManager_BindingRequest>_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)(PTR_DAT_06a2f000 + 0xe0));
        }
        lVar7 = FUN_05614e08(uVar9,0);
        if (plVar10 == (long *)0x0) goto LAB_06074894;
        if ((lVar7 != 0) &&
           (lVar11 = thunk_FUN_02e789bc(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
          uVar9 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
          FUN_02e3cb88(uVar9,0);
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        plVar10[4] = lVar7;
        thunk_FUN_02ee2be8(plVar10 + 4,lVar7);
        lVar7 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a37068);
        FUN_06268bd4(lVar7,*(undefined8 *)
                            System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_TypeInfo
                     ,plVar10,0);
        if (lVar7 == 0) goto LAB_06074894;
        FUN_0626e7a8(lVar7,0x34,0);
        lVar11 = FUN_06267fb4(lVar7,0);
        if (((*(long *)(param_1 + 0x128) == 0) ||
            (lVar12 = FUN_0608017c(*(long *)(param_1 + 0x128),0), lVar12 == 0)) ||
           (uVar9 = thunk_FUN_06277a10(lVar12,0), lVar11 == 0)) goto LAB_06074894;
        FUN_06277aa4(lVar11,uVar9,0);
        lVar11 = FUN_06267fb4(lVar7,0);
        if (lVar11 == 0) goto LAB_06074894;
        FUN_06278dd8(lVar11,0);
        lVar11 = FUN_06264e10(param_1,0);
        if (lVar11 == 0) goto LAB_06074894;
        uVar6 = FUN_06268084(lVar11,0);
        FUN_06268138(lVar7,uVar6,0);
        uVar9 = FUN_0391bee8(lVar7,*(undefined8 *)PTR_DAT_06ab2ab8);
        *(undefined8 *)(param_1 + 0x238) = uVar9;
        thunk_FUN_02ee2be8(param_1 + 0x238,uVar9);
        uVar9 = FUN_0391bee8(lVar7,*(undefined8 *)
                                    System_Collections_Generic_List<CaveDefaultGenerator_HoleWorm>_TypeInfo
                            );
        *(undefined8 *)(param_1 + 0x248) = uVar9;
        thunk_FUN_02ee2be8(param_1 + 0x248,uVar9);
        lVar11 = *(long *)(param_1 + 0x248);
        if (*(int *)(*(long *)PTR_DAT_06a3c0b0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar9 = FUN_06361780(0);
        uVar13 = FUN_06244510(0);
        if (lVar11 == 0) goto LAB_06074894;
        FUN_06527390(lVar11,uVar9,uVar13,0);
        plVar10 = (long *)FUN_0391be58(lVar7,*(undefined8 *)PTR_DAT_06ab2c40);
        if (plVar10 == (long *)0x0) goto LAB_06074894;
        (**(code **)(*plVar10 + 0x2f8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x300));
        FUN_060748a8(param_1);
      }
    }
  }
  puVar2 = System_Collections_Generic_List<BlockSubCategoryView_BlockWidgetData>_TypeInfo;
  uVar9 = FUN_038ac148(param_1,*(undefined8 *)PTR_DAT_06ab2a60);
  *(undefined8 *)(param_1 + 0x108) = uVar9;
  thunk_FUN_02ee2be8(param_1 + 0x108,uVar9);
  lVar7 = FUN_038ace60(param_1,*(undefined8 *)puVar2);
  if (lVar7 == 0) goto LAB_06074894;
  if (1 < *(int *)(lVar7 + 0x18)) {
    plVar10 = *(long **)(lVar7 + 0x28);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    else {
      lVar7 = *(long *)System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo;
      bVar4 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar4) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != lVar7) {
          plVar14 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x160) = plVar14;
      if (*(byte *)(*plVar10 + 0x130) < bVar4) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != lVar7) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_02ee2be8(param_1 + 0x160,plVar10);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar8 = FUN_06267b6c(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_06074894;
    uVar9 = FUN_038ac148(*(long *)(param_1 + 0x110),
                         *(undefined8 *)
                          System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
    *(undefined8 *)(param_1 + 0x120) = uVar9;
    thunk_FUN_02ee2be8(param_1 + 0x120,uVar9);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x248);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar8 = FUN_06267b6c(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x248);
    if (*(int *)(*(long *)PTR_DAT_06a3c0b0 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar9 = FUN_06361780(0);
    uVar13 = FUN_06244510(0);
    if (lVar7 == 0) goto LAB_06074894;
    FUN_06527390(lVar7,uVar9,uVar13,0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar8 = FUN_06267b6c(uVar9,0,0);
  puVar2 = PTR_DAT_06a5d938;
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x128);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a5d938);
    FUN_0627d6e4(uVar9,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_TypeInfo,0
                );
    if (lVar7 == 0) goto LAB_06074894;
    FUN_06364ca4(lVar7,uVar9,0);
    lVar7 = *(long *)(param_1 + 0x128);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
    FUN_0627d6e4(uVar9,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_List<DataBindingManager_BindingData>_TypeInfo,0);
    if (lVar7 == 0) goto LAB_06074894;
    FUN_06364ca4(lVar7,uVar9,0);
    uVar9 = *(undefined8 *)(param_1 + 0x140);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_06267b6c(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x140) == 0) goto LAB_06074894;
      lVar7 = *(long *)(*(long *)(param_1 + 0x140) + 0x118);
      uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a749e0);
      FUN_04874ec4(uVar9,param_1,
                   *(undefined8 *)System_Collections_Generic_List<XRInputButtonReader>_TypeInfo,0);
      if (lVar7 == 0) goto LAB_06074894;
      FUN_0487ab7c(lVar7,uVar9,*(undefined8 *)PTR_DAT_06a749e8);
    }
    FUN_06072170(param_1);
  }
  puVar3 = System_Collections_Generic_List<DOTweenTMPAnimator_CharTransform>_TypeInfo;
  puVar2 = PTR_DAT_06a3c3a0;
  puVar1 = PTR_DAT_06a3c360;
  bVar4 = FUN_06273ac8(0);
  lVar7 = *(long *)puVar2;
  iVar5 = *(int *)(lVar7 + 0xe4);
  *(byte *)(param_1 + 0x299) = bVar4 & 1;
  if (iVar5 == 0) {
    thunk_FUN_02e9a04c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
  FUN_04d318f4(uVar9,param_1,*(undefined8 *)puVar3,0);
  if (lVar7 != 0) {
    FUN_0520fce0(lVar7,uVar9,*(undefined8 *)PTR_DAT_06a3c398);
    return;
  }
LAB_06074894:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}



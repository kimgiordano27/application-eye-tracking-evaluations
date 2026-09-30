/*
FUNCTION_NAME: FUN_08730020
ENTRY_POINT: 08730020
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x087307ac) */

void FUN_08730020(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar6 = System_Comparison<MiniGameReward>_TypeInfo;
  puVar5 = System_Comparison<MileageShopItem>_TypeInfo;
  puVar3 = System_Comparison<MainGameTurnInfo>_TypeInfo;
  puVar2 = System_Comparison<MainGameShopItemData>_TypeInfo;
  puVar1 = PTR_DAT_08e808f8;
  if ((DAT_0943c956 & 1) == 0) {
    FUN_03c8f898(System_Comparison<Mission>_TypeInfo);
    FUN_03c8f898(System_Comparison<NPCData>_TypeInfo);
    FUN_03c8f898(System_Comparison<NetworkObject>_TypeInfo);
    FUN_03c8f898(System_Comparison<OVRSpaceUser>_TypeInfo);
    FUN_03c8f898(System_Comparison<Panel>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e69e98);
    FUN_03c8f898(PTR_DAT_08e85b40);
    FUN_03c8f898(System_Comparison<RaycastHit>_TypeInfo);
    FUN_03c8f898(System_Comparison<RaycastResult>_TypeInfo);
    FUN_03c8f898(System_Comparison<MiniGameReward>_TypeInfo);
    FUN_03c8f898(System_Comparison<MileageShopItem>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e85b48);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e816a0);
    FUN_03c8f898(PTR_DAT_08e816a8);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(System_Comparison<MainGameTurnInfo>_TypeInfo);
    FUN_03c8f898(System_Comparison<MainGameShopItemData>_TypeInfo);
    FUN_03c8f898(System_Comparison<SelectorMatchRecord>_TypeInfo);
    FUN_03c8f898(System_Comparison<string>_TypeInfo);
    FUN_03c8f898(System_Comparison<StyleSelectorPart>_TypeInfo);
    FUN_03c8f898(System_Comparison<TimelineClip>_TypeInfo);
    FUN_03c8f898(System_Comparison<Timer>_TypeInfo);
    FUN_03c8f898(System_Comparison<Type>_TypeInfo);
    FUN_03c8f898(System_Comparison<User>_TypeInfo);
    FUN_03c8f898(System_Comparison<VisualElementAsset>_TypeInfo);
    FUN_03c8f898(bool_var);
    FUN_03c8f898(PTR_DAT_08e808f8);
    DAT_0943c956 = 1;
  }
  puVar4 = bool_var;
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_053a33f8(uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x3e0) = uVar7;
  thunk_FUN_03d233cc(param_1 + 0x3e0,uVar7);
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
  FUN_06a4d5c4(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x400) = uVar7;
  thunk_FUN_03d233cc(param_1 + 0x400,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_087c616c(param_1,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar8 = *(long *)puVar4;
  }
  FUN_087c88ac(param_1,**(undefined8 **)(lVar8 + 0xb8),0);
  *(long *)(param_1 + 0x420) = param_2;
  thunk_FUN_03d233cc(param_1 + 0x420,param_2);
  *(undefined8 *)(param_1 + 0x3d0) = param_4;
  thunk_FUN_03d233cc(param_1 + 0x3d0,param_4);
  FUN_0872ec20(param_1,param_3);
  lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_087c616c(lVar8,0);
  if (lVar8 != 0) {
    FUN_087c5cfc(lVar8,1,0);
    *(long *)(param_1 + 0x410) = lVar8;
    thunk_FUN_03d233cc(param_1 + 0x410,lVar8);
    if (*(long *)(param_1 + 0x410) != 0) {
      FUN_087c88ac(*(long *)(param_1 + 0x410),*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8)
                   ,0);
      FUN_087cce54(param_1,*(undefined8 *)(param_1 + 0x410),0);
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_087c616c(lVar8,0);
      if (lVar8 != 0) {
        FUN_087c5cfc(lVar8,1,0);
        *(long *)(param_1 + 0x418) = lVar8;
        thunk_FUN_03d233cc(param_1 + 0x418,lVar8);
        puVar3 = System_Comparison<VisualElementAsset>_TypeInfo;
        puVar2 = System_Comparison<RaycastHit>_TypeInfo;
        puVar1 = PTR_DAT_08e69e98;
        if (*(long *)(param_1 + 0x418) != 0) {
          FUN_087c88ac(*(long *)(param_1 + 0x418),
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
          FUN_086e46f0(*(undefined8 *)(param_1 + 0x418),0);
          FUN_087cce54(param_1,*(undefined8 *)(param_1 + 0x418),0);
          uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
          FUN_087427b4(uVar7,param_2,0);
          *(undefined8 *)(param_1 + 0x408) = uVar7;
          thunk_FUN_03d233cc(param_1 + 0x408,uVar7);
          lVar8 = *(long *)(param_1 + 0x408);
          uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
          FUN_07064478(uVar7,param_1,*(undefined8 *)puVar3,0);
          if (((lVar8 != 0) && (FUN_0874267c(lVar8,uVar7,0), param_2 != 0)) &&
             (plVar9 = (long *)FUN_08741a6c(param_2,0), plVar9 != (long *)0x0)) {
            lVar8 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e816a0) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_08730448;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e816a0,0);
LAB_08730448:
            puVar1 = PTR_DAT_08e6a288;
            plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            puVar3 = PTR_DAT_08e816a8;
            puVar2 = PTR_DAT_08e6a290;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            do {
              lVar8 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_087304c0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,0);
LAB_087304c0:
              uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar12 & 1) == 0) goto LAB_08730538;
              lVar8 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0873051c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar3,0);
LAB_0873051c:
              uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              FUN_08730860(param_1,uVar7);
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_087307a4;
LAB_08730538:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0873058c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar1,0);
LAB_0873058c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  puVar1 = System_Comparison<SelectorMatchRecord>_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x420);
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)System_Comparison<OVRSpaceUser>_TypeInfo);
  FUN_04f10dac(uVar7,param_1,*(undefined8 *)puVar1,0);
  puVar2 = System_Comparison<StyleSelectorPart>_TypeInfo;
  puVar1 = System_Comparison<NPCData>_TypeInfo;
  if (lVar8 != 0) {
    FUN_08742cc0(lVar8,uVar7,0);
    lVar8 = *(long *)(param_1 + 0x420);
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar7,param_1,*(undefined8 *)puVar2,0);
    puVar3 = System_Comparison<string>_TypeInfo;
    puVar2 = System_Comparison<NetworkObject>_TypeInfo;
    if (lVar8 != 0) {
      FUN_08742d70(lVar8,uVar7,0);
      lVar8 = *(long *)(param_1 + 0x420);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
      FUN_04f10ecc(uVar7,param_1,*(undefined8 *)puVar3,0);
      puVar3 = System_Comparison<TimelineClip>_TypeInfo;
      puVar2 = System_Comparison<Panel>_TypeInfo;
      if (lVar8 != 0) {
        FUN_08746ed0(lVar8,uVar7,0);
        lVar8 = *(long *)(param_1 + 0x420);
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
        FUN_04f12e94(uVar7,param_1,*(undefined8 *)puVar3,0);
        puVar2 = System_Comparison<Timer>_TypeInfo;
        if (lVar8 != 0) {
          FUN_08742e20(lVar8,uVar7,0);
          lVar8 = *(long *)(param_1 + 0x420);
          uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
          System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                    (uVar7,param_1,*(undefined8 *)puVar2,0);
          puVar4 = System_Comparison<User>_TypeInfo;
          puVar6 = System_Comparison<Type>_TypeInfo;
          puVar5 = System_Comparison<RaycastResult>_TypeInfo;
          puVar3 = System_Comparison<Mission>_TypeInfo;
          puVar2 = PTR_DAT_08e85b48;
          puVar1 = PTR_DAT_08e85b40;
          if (lVar8 != 0) {
            FUN_08747030(lVar8,uVar7,0);
            uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
            System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                      (uVar7,param_1,*(undefined8 *)puVar6,0);
            uVar11 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
            FUN_086b1624(uVar11,uVar7,0);
            FUN_086e4a0c(param_1,uVar11,0);
            uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
            FUN_04ca52e4(uVar7,param_1,*(undefined8 *)puVar4,0);
            FUN_045d5b30(param_1,uVar7,0,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
  }
LAB_087307a4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}



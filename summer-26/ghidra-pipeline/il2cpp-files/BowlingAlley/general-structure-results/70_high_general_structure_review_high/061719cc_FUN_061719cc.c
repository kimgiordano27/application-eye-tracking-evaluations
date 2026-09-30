/*
FUNCTION_NAME: FUN_061719cc
ENTRY_POINT: 061719cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_061719cc(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = param_1;
  if ((DAT_076ddae9 & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<IActiveState>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<IAnimationWindowPreview>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ControlInput>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IBaseUxmlObjectFactory>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IBinding>_TypeInfo);
    lVar6 = thunk_FUN_032e1da0(PTR_DAT_07280168);
    DAT_076ddae9 = 1;
  }
  FUN_0616d3d0(lVar6,param_2);
  puVar2 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
  if (param_2 != (long *)0x0) {
    lVar6 = param_2[10];
    if (lVar6 == 0) {
      FUN_06280f14(param_1,*(undefined8 *)System_Collections_Generic_List<ControlInput>_TypeInfo,
                   *(undefined8 *)PTR_DAT_07280168,param_2,0);
    }
    else {
      FUN_06170734(param_1,param_2);
      lVar10 = param_2[10];
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0624b7a8(lVar7,lVar10,uVar11,0);
      param_2[0xd] = lVar7;
      thunk_FUN_0333a630(param_2 + 0xd,lVar7);
    }
    bVar3 = lVar6 != 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0xb0), lVar6 != 0)) {
      lVar6 = FUN_061a33b4(lVar6,param_2[0xd],0);
      puVar2 = System_Collections_Generic_List<IBinding>_TypeInfo;
      if (lVar6 == 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0xb0), lVar6 == 0)) goto LAB_06171d24;
        FUN_061a2d90(lVar6,param_2[0xd],param_2,0);
      }
      else {
        plVar8 = (long *)param_2[0xd];
        if (plVar8 == (long *)0x0) goto LAB_06171d24;
        uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        FUN_06280f14(param_1,*(undefined8 *)puVar2,uVar11,param_2,0);
        bVar3 = false;
      }
      if (param_2[0xb] == 0) {
        FUN_06280f9c(param_1,*(undefined8 *)
                              System_Collections_Generic_List<IAnimationWindowPreview>_TypeInfo,
                     param_2,0);
        bVar3 = false;
      }
      puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
      if (param_2[0xc] != 0) {
        iVar4 = FUN_058f278c(param_2[0xc],0);
        if (iVar4 == 0) {
          FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<IActiveState>_TypeInfo
                       ,param_2,0);
          bVar3 = false;
        }
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          if (param_2[0xf] == 0) goto LAB_06171d24;
          uVar9 = FUN_0624bb14(param_2[0xf],0);
          if ((uVar9 & 1) != 0) {
            FUN_06280f9c(param_1,*(undefined8 *)
                                  System_Collections_Generic_List<IBaseUxmlObjectFactory>_TypeInfo,
                         param_2,0);
            return;
          }
          FUN_06170e28(param_1,param_2,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo
                       ,param_2[0xf]);
        }
        if (!bVar3) {
          return;
        }
        FUN_0616a808(param_1,param_2);
        FUN_0616a808(param_1,param_2[0xb]);
        if (param_2[0xb] != 0) {
          plVar8 = (long *)(param_2[0xb] + 0x28);
          *plVar8 = (long)param_2;
          thunk_FUN_0333a630(plVar8,param_2);
          lVar6 = param_2[0xc];
          if (lVar6 != 0) {
            iVar4 = 0;
            do {
              iVar5 = FUN_058f278c(lVar6,0);
              if (iVar5 <= iVar4) {
                return;
              }
              plVar8 = (long *)param_2[0xc];
              if ((plVar8 == (long *)0x0) ||
                 (lVar6 = (**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar4,*(undefined8 *)(*plVar8 + 0x310)), lVar6 == 0))
              break;
              *(long *)(lVar6 + 0x28) = (long)param_2;
              thunk_FUN_0333a630((long *)(lVar6 + 0x28),param_2);
              plVar8 = (long *)param_2[0xc];
              if (plVar8 == (long *)0x0) break;
              uVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar4,*(undefined8 *)(*plVar8 + 0x310))
              ;
              FUN_0616a808(param_1,uVar11);
              lVar6 = param_2[0xc];
              iVar4 = iVar4 + 1;
            } while (lVar6 != 0);
          }
        }
      }
    }
  }
LAB_06171d24:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



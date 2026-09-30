/*
FUNCTION_NAME: System.Xml.Serialization.XmlAnyElementAttribute$$get_Namespace
ENTRY_POINT: 06157638
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void System_Xml_Serialization_XmlAnyElementAttribute__get_Namespace
               (ulong param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((param_1 & 1) == 0) {
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
    thunk_FUN_032e1da0(PTR_DAT_07280168);
    *(undefined1 *)(unaff_x21 + 0xa8f) = 1;
  }
  FUN_06152840(param_2,param_3);
  puVar2 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
  if (param_3 != (long *)0x0) {
    lVar11 = param_3[10];
    if (lVar11 == 0) {
      FUN_06280f14(param_2,*(undefined8 *)System_Collections_Generic_List<ControlInput>_TypeInfo,
                   *(undefined8 *)PTR_DAT_07280168,param_3,0);
    }
    else {
      FUN_0615629c(param_2,param_3);
      lVar9 = param_3[10];
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_0624b7a8(lVar6,lVar9,uVar10,0);
      param_3[0xd] = lVar6;
      thunk_FUN_0333a630(param_3 + 0xd,lVar6);
    }
    bVar3 = lVar11 != 0;
    if ((*(long *)(param_2 + 0x58) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_2 + 0x58) + 0xb0), lVar11 != 0)) {
      lVar11 = FUN_061a33b4(lVar11,param_3[0xd],0);
      puVar2 = System_Collections_Generic_List<IBinding>_TypeInfo;
      if (lVar11 == 0) {
        if ((*(long *)(param_2 + 0x58) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_2 + 0x58) + 0xb0), lVar11 == 0)) goto LAB_0615797c;
        FUN_061a2d90(lVar11,param_3[0xd],param_3,0);
      }
      else {
        plVar7 = (long *)param_3[0xd];
        if (plVar7 == (long *)0x0) goto LAB_0615797c;
        uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_06280f14(param_2,*(undefined8 *)puVar2,uVar10,param_3,0);
        bVar3 = false;
      }
      if (param_3[0xb] == 0) {
        FUN_06280f9c(param_2,*(undefined8 *)
                              System_Collections_Generic_List<IAnimationWindowPreview>_TypeInfo,
                     param_3,0);
        bVar3 = false;
      }
      puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
      if (param_3[0xc] != 0) {
        iVar4 = FUN_058f278c(param_3[0xc],0);
        if (iVar4 == 0) {
          FUN_06280f9c(param_2,*(undefined8 *)System_Collections_Generic_List<IActiveState>_TypeInfo
                       ,param_3,0);
          bVar3 = false;
        }
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          if (param_3[0xf] == 0) goto LAB_0615797c;
          uVar8 = FUN_0624bb14(param_3[0xf],0);
          if ((uVar8 & 1) != 0) {
            FUN_06280f9c(param_2,*(undefined8 *)
                                  System_Collections_Generic_List<IBaseUxmlObjectFactory>_TypeInfo,
                         param_3,0);
            return;
          }
          FUN_06156984(param_2,param_3,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo
                       ,param_3[0xf]);
        }
        if (!bVar3) {
          return;
        }
        FUN_061528e0(param_2,param_3);
        FUN_061528e0(param_2,param_3[0xb]);
        if (param_3[0xb] != 0) {
          plVar7 = (long *)(param_3[0xb] + 0x28);
          *plVar7 = (long)param_3;
          thunk_FUN_0333a630(plVar7,param_3);
          lVar11 = param_3[0xc];
          if (lVar11 != 0) {
            iVar4 = 0;
            do {
              iVar5 = FUN_058f278c(lVar11,0);
              if (iVar5 <= iVar4) {
                return;
              }
              plVar7 = (long *)param_3[0xc];
              if ((plVar7 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar7 + 0x308))
                                     (plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x310)), lVar11 == 0))
              break;
              *(long *)(lVar11 + 0x28) = (long)param_3;
              thunk_FUN_0333a630((long *)(lVar11 + 0x28),param_3);
              plVar7 = (long *)param_3[0xc];
              if (plVar7 == (long *)0x0) break;
              uVar10 = (**(code **)(*plVar7 + 0x308))(plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x310))
              ;
              FUN_061528e0(param_2,uVar10);
              lVar11 = param_3[0xc];
              iVar4 = iVar4 + 1;
            } while (lVar11 != 0);
          }
        }
      }
    }
  }
LAB_0615797c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



/*
FUNCTION_NAME: FUN_035c19e8
ENTRY_POINT: 035c19e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_9
*/


undefined8 FUN_035c19e8(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar1 = 
  Method_UnityEngine_UIElements_UxmlFactory<MultiColumnListView,_MultiColumnListView_UxmlTraits>__ctor__
  ;
  if ((DAT_04537cbe & 1) == 0) {
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<MultiColumnTreeView,_MultiColumnTreeView_UxmlTraits>__ctor__
                );
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__
                );
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_04231e10);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<ProgressBar,_AbstractProgressBar_UxmlTraits>__ctor__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<MultiColumnListView,_MultiColumnListView_UxmlTraits>__ctor__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<RadioButtonGroup,_RadioButtonGroup_UxmlTraits>__ctor__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__)
    ;
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                );
    DAT_04537cbe = 1;
  }
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03313b6c(lVar3,0);
  puVar1 = PTR_DAT_0422f9e8;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03d4dc54(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
        lVar10 = *(long *)PTR_DAT_0422f958;
        lVar3 = *(long *)(lVar10 + 0x38);
        if (lVar3 == 0) {
          FUN_01c723f0(lVar10);
          lVar3 = *(long *)(lVar10 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01c72394();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar3 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01c72394();
        }
        if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          uVar11 = **(undefined8 **)(lVar3 + 0xb8);
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar12 = *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<RadioButton,_RadioButton_UxmlTraits>__ctor__
          ;
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_035c1da0;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01c72498(plVar9,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035c1da0:
          (*(code *)*puVar5)(plVar9,1,uVar12,uVar11,puVar5[1]);
          return 0;
        }
      }
      goto LAB_035c200c;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar10 = FUN_02398da0(uVar11,*(undefined8 *)PTR_DAT_04231e10);
    *(long *)(lVar3 + 0x18) = lVar10;
    if ((lVar10 == 0) ||
       (lVar10 = FUN_02363904(lVar10,1,*(undefined8 *)
                                        Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__
                             ), lVar10 == 0)) goto LAB_035c200c;
    if (*(long *)(lVar10 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
        lVar7 = *(long *)PTR_DAT_0422f958;
        lVar10 = *(long *)(lVar7 + 0x38);
        if (lVar10 == 0) {
          FUN_01c723f0(lVar7);
          lVar10 = *(long *)(lVar7 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar10 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar11 = **(undefined8 **)(lVar10 + 0xb8);
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          uVar12 = *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
          ;
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_035c1dcc;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01c72498(plVar9,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035c1dcc:
          (*(code *)*puVar5)(plVar9,1,uVar12,uVar11,puVar5[1]);
          uVar11 = *(undefined8 *)(lVar3 + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03d4ea0c(uVar11,0);
          return 0;
        }
      }
      goto LAB_035c200c;
    }
    if (1 < (int)*(long *)(lVar10 + 0x18)) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_035c200c;
      plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
      lVar13 = *(long *)PTR_DAT_0422f958;
      lVar7 = *(long *)(lVar13 + 0x38);
      if (lVar7 == 0) {
        FUN_01c723f0(lVar13);
        lVar7 = *(long *)(lVar13 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar7 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (plVar9 == (long *)0x0) goto LAB_035c200c;
      lVar13 = *plVar9;
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar12 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<RadioButtonGroup,_RadioButtonGroup_UxmlTraits>__ctor__
      ;
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar5 = (undefined8 *)(lVar13 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_035c1e1c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar9,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035c1e1c:
      (*(code *)*puVar5)(plVar9,2,uVar12,uVar11,puVar5[1]);
    }
    puVar2 = 
    Method_UnityEngine_UIElements_UxmlFactory<MultiColumnTreeView,_MultiColumnTreeView_UxmlTraits>__ctor__
    ;
    if ((param_3 & 1) != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_035c2010;
      lVar7 = *(long *)(lVar10 + 0x20);
      if (lVar7 == 0) goto LAB_035c200c;
      uVar12 = *(undefined8 *)(lVar7 + 0x48);
      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UxmlFactory<MultiColumnTreeView,_MultiColumnTreeView_UxmlTraits>__ctor__
                                 );
      FUN_0285da04(uVar11,lVar3,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<ProgressBar,_AbstractProgressBar_UxmlTraits>__ctor__
                   ,0);
      lVar6 = FUN_03316eac(uVar12,uVar11,0);
      lVar13 = 0;
      if (lVar6 != 0) {
        uVar11 = *(undefined8 *)puVar2;
        lVar13 = thunk_FUN_01c495e4(lVar6,uVar11);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar6,uVar11);
        }
      }
      *(long *)(lVar7 + 0x48) = lVar13;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03d4f3bc(param_2,0,0);
    if ((uVar4 & 1) != 0) {
      if (((*(long *)(lVar3 + 0x18) == 0) ||
          (lVar3 = FUN_03d498b0(*(long *)(lVar3 + 0x18),0), param_2 == 0)) ||
         (uVar11 = FUN_03d498b0(param_2,0), lVar3 == 0)) goto LAB_035c200c;
      FUN_03d5620c(lVar3,uVar11,0,0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
      lVar7 = *(long *)PTR_DAT_0422f958;
      lVar3 = *(long *)(lVar7 + 0x38);
      if (lVar3 == 0) {
        FUN_01c723f0(lVar7);
        lVar3 = *(long *)(lVar7 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394();
      }
      if (plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar11 = **(undefined8 **)(lVar3 + 0xb8);
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
        ;
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_035c1fd0;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(plVar9,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035c1fd0:
        (*(code *)*puVar5)(plVar9,3,uVar12,uVar11,puVar5[1]);
        if (*(int *)(lVar10 + 0x18) != 0) {
          return *(undefined8 *)(lVar10 + 0x20);
        }
LAB_035c2010:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
    }
  }
LAB_035c200c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



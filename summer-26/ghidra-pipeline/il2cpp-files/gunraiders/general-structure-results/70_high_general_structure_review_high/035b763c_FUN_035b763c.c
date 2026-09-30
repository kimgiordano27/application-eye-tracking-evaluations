/*
FUNCTION_NAME: FUN_035b763c
ENTRY_POINT: 035b763c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_035b763c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 local_44;
  
  puVar1 = UnityEngine_UI_ILayoutIgnorer_var;
  if ((DAT_04537c6c & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(PTR_DAT_0422fc88);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ListViewReorderMode>_set_defaultValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<PickingMode>_set_defaultValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    FUN_01c5d288(UnityEngine_UI_ILayoutIgnorer_var);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
                );
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_042312d0);
    FUN_01c5d288(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>__ctor__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_get_defaultValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_set_defaultValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                );
    DAT_04537c6c = 1;
  }
  FUN_035b7d84(param_1);
  uVar5 = FUN_0230c12c(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  puVar1 = PTR_DAT_0422f958;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar13 = *(long *)PTR_DAT_0422f958;
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      FUN_01c723f0(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    puVar4 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<PickingMode>_set_defaultValue__;
    puVar3 = GameAnalyticsSDK_State_GAState_TypeInfo;
    puVar2 = PTR_DAT_0422fad8;
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      uVar5 = **(undefined8 **)(lVar9 + 0xb8);
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = *(undefined8 *)
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_get_defaultValue__
      ;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_035b7824;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035b7824:
      (*(code *)*puVar6)(plVar12,3,uVar15,uVar5,puVar6[1]);
      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_03245f44(uVar5,param_1,*(undefined8 *)puVar4,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar12 = (long *)FUN_03598d34(uVar5,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0);
        *(long **)(param_1 + 0x28) = plVar12;
        puVar2 = 
        Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
        ;
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)
                   Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
                 ) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_035b78d0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01c72498(plVar12,*(long *)
                                         Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
                                ,0);
LAB_035b78d0:
          uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(param_1 + 0x20) != 0) {
              plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
              plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
              if (*(int *)(*(long *)PTR_DAT_0422fc88 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fc88);
              }
              local_44 = FUN_03cfdfbc(0);
              lVar9 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042312d0,&local_44);
              if (plVar12 != (long *)0x0) {
                if ((lVar9 != 0) &&
                   (lVar13 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0
                   )) {
LAB_035b7d78:
                  uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar5,0);
                }
                if ((int)plVar12[3] == 0) {
LAB_035b7d74:
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4ac();
                }
                plVar12[4] = lVar9;
                if (plVar7 != (long *)0x0) {
                  lVar9 = *plVar7;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  uVar5 = *(undefined8 *)
                           Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>_set_defaultValue__
                  ;
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_035b7b44;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar3,1);
LAB_035b7b44:
                  (*(code *)*puVar6)(plVar7,3,uVar5,plVar12,puVar6[1]);
                  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                            );
                  FUN_03cf63a0(uVar5,param_1,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ListViewReorderMode>_set_defaultValue__
                               ,0);
                  FUN_03cf60ac(uVar5,0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    lVar13 = *(long *)puVar1;
                    plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                    lVar9 = *(long *)(lVar13 + 0x38);
                    if (lVar9 == 0) {
                      FUN_01c723f0(lVar13);
                      lVar9 = *(long *)(lVar13 + 0x38);
                    }
                    lVar9 = *(long *)(lVar9 + 0x10);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (plVar12 != (long *)0x0) {
                      lVar13 = *plVar12;
                      uVar5 = **(undefined8 **)(lVar9 + 0xb8);
                      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      uVar15 = *(undefined8 *)
                                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                      ;
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                            goto LAB_035b7c50;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar3,1);
LAB_035b7c50:
                      (*(code *)*puVar6)(plVar12,3,uVar15,uVar5,puVar6[1]);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            plVar12 = *(long **)(param_1 + 0x28);
            if (plVar12 != (long *)0x0) {
              lVar13 = *plVar12;
              lVar9 = *(long *)puVar2;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar9) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_035b7a18;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_01c72498(plVar12,lVar9,1);
LAB_035b7a18:
              lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              if (*(long *)(param_1 + 0x20) != 0) {
                plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
                if (lVar9 == 0) {
                  lVar13 = *(long *)puVar1;
                  lVar9 = *(long *)(lVar13 + 0x38);
                  if (lVar9 == 0) {
                    FUN_01c723f0(lVar13);
                    lVar9 = *(long *)(lVar13 + 0x38);
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  if (plVar12 != (long *)0x0) {
                    lVar13 = *plVar12;
                    plVar7 = (long *)**(long **)(lVar9 + 0xb8);
                    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    uVar5 = *(undefined8 *)
                             Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__
                    ;
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                          goto LAB_035b7d44;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar3,1);
LAB_035b7d44:
                    UNRECOVERED_JUMPTABLE = (code *)*puVar6;
                    uVar15 = puVar6[1];
                    uVar8 = 3;
LAB_035b7d4c:
                    /* WARNING: Could not recover jumptable at 0x035b7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(plVar12,uVar8,uVar5,plVar7,uVar15);
                    return;
                  }
                }
                else {
                  plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
                  plVar14 = *(long **)(param_1 + 0x28);
                  if (plVar14 != (long *)0x0) {
                    lVar13 = *plVar14;
                    lVar9 = *(long *)puVar2;
                    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar9) {
                          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                          goto LAB_035b7c90;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01c72498(plVar14,lVar9,1);
LAB_035b7c90:
                    lVar9 = (*(code *)*puVar6)(plVar14,puVar6[1]);
                    if (plVar7 != (long *)0x0) {
                      if ((lVar9 != 0) &&
                         (lVar13 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar13 == 0)) goto LAB_035b7d78;
                      if ((int)plVar7[3] == 0) goto LAB_035b7d74;
                      plVar7[4] = lVar9;
                      if (plVar12 != (long *)0x0) {
                        lVar9 = *plVar12;
                        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        uVar5 = *(undefined8 *)
                                 Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<float>__ctor__
                        ;
                        if (uVar10 != 0) {
                          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                              goto LAB_035b7d28;
                            }
                            uVar10 = uVar10 - 1;
                            piVar11 = piVar11 + 4;
                          } while (uVar10 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar3,1);
LAB_035b7d28:
                        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
                        uVar15 = puVar6[1];
                        uVar8 = 1;
                        goto LAB_035b7d4c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



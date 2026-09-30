/*
FUNCTION_NAME: FUN_01d05888
ENTRY_POINT: 01d05888
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d05cf8) */

byte FUN_01d05888(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  byte bVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  
  if ((DAT_0377f243 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ed430);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_TypeInfo);
    DAT_0377f243 = 1;
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  if (param_1 != (long *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar6 = FUN_01d041b4(lVar5,param_2);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01789ac0(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (param_2 == (long *)0x0) goto LAB_01d05cf0;
      uVar6 = FUN_0178be4c(param_2,0);
      if ((uVar6 & 1) != 0) {
        uVar12 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01780344(uVar12,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar6 = FUN_01d041b4(lVar5,uVar12);
        if ((uVar6 & 1) == 0) {
          uVar12 = *(undefined8 *)
                    Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01780344(uVar12,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar6 = FUN_01d041b4(lVar5,uVar12);
          if ((uVar6 & 1) == 0) {
            uVar6 = (**(code **)(*param_2 + 0x5c8))(param_2,*(undefined8 *)(*param_2 + 0x5d0));
            if ((uVar6 & 1) != 0) {
              uVar12 = *(undefined8 *)PTR_DAT_033ed430;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_01780344(uVar12,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar2);
              }
              uVar6 = FUN_01d041b4(lVar5,uVar12);
              if ((uVar6 & 1) != 0) {
                return 1;
              }
            }
            if (lVar5 != 0) {
              uVar6 = FUN_0178b0b0(lVar5,0);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              plVar7 = (long *)FUN_016abab8(param_2,0);
              if ((plVar7 != (long *)0x0) &&
                 (plVar7 = (long *)(**(code **)(*plVar7 + 0x9a8))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x9b0)),
                 plVar7 != (long *)0x0)) {
                lVar9 = *plVar7;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        *(long *)
                         Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__) {
                      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_01d05b5c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_00d59724(plVar7,*(long *)
                                              Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__
                                      ,0);
LAB_01d05b5c:
                puVar4 = StringLiteral_10310;
                plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                ;
                puVar1 = 
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                do {
                  lVar9 = *plVar7;
                  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_01d05bd4;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01d05bd4:
                  uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  if ((uVar6 & 1) == 0) {
                    bVar11 = 0;
                    iVar14 = 4;
                    iVar13 = 4;
                    goto joined_r0x01d05c80;
                  }
                  lVar9 = *plVar7;
                  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_01d05c30;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
LAB_01d05c30:
                  uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar6 = FUN_01d041b4(lVar5,uVar12);
                } while ((uVar6 & 1) == 0);
                bVar11 = 1;
                iVar14 = 10;
                iVar13 = 10;
joined_r0x01d05c80:
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                        puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_01d05cd0;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_01d05cd0:
                  (*(code *)*puVar8)(plVar7,puVar8[1]);
                  iVar13 = iVar14;
                }
                return iVar13 == 10 & bVar11;
              }
            }
            goto LAB_01d05cf0;
          }
        }
        return 1;
      }
    }
    return 0;
  }
LAB_01d05cf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}



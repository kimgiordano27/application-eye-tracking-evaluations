/*
FUNCTION_NAME: FUN_05d12110
ENTRY_POINT: 05d12110
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05d12110(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  
  if ((DAT_06dc2ec0 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TryGetValue__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                );
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(Method_UnityEngine_UI_Collections_IndexedSet<IClipper>__ctor__);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<OverflowClipBox>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<object>__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OvrAvatarRenderable>_get_Count__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<SliceType>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<object>_Remove__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextAnchor>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OvrAvatarRenderable>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<NetworkTransform>_Clear__);
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_0000035B_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextGeneratorType>__ctor__
                );
    DAT_06dc2ec0 = 1;
  }
  if (param_2 != 0) {
    iVar5 = FUN_05372384(param_2,0x3a,0);
    if (iVar5 + 1U < 2) {
      if (*(long *)(param_1 + 0x78) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x30) =
             *(undefined8 *)
              Method_Unity_Burst_FunctionPointer<BurstMathUtility_Angle_0000035B_PostfixBurstDelegate>_get_Value__
        ;
        LeanTween__value();
        if (*(long *)(param_1 + 0x78) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x38) = 400;
          return;
        }
      }
    }
    else {
      lVar7 = FUN_0536f444(param_2,0,iVar5,0);
      if (lVar7 != 0) {
        lVar7 = FUN_05371f5c(lVar7,0);
        lVar8 = FUN_05371b10(param_2,iVar5 + 1,0);
        if (lVar8 != 0) {
          lVar8 = FUN_05371f5c(lVar8,0);
          if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
          }
          uVar9 = FUN_0547e2f8(0);
          if (lVar7 != 0) {
            uVar9 = FUN_05371ce0(lVar7,uVar9,0);
            if (*(long *)(param_1 + 0x30) != 0) {
              FUN_05cee21c(*(long *)(param_1 + 0x30),lVar7,lVar8,0);
              uVar10 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextAnchor>__ctor__
                                          ,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
                                            ,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextGeneratorType>__ctor__
                                              ,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<SliceType>__ctor__
                                                ,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarRenderable>_get_Count__
                                                  ,0);
                      if ((uVar10 & 1) != 0) {
                        plVar15 = (long *)(param_1 + 0x28);
                        if (*plVar15 == 0) {
                          lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TryGetValue__
                                                  );
                          FUN_05cfac90();
                          *plVar15 = lVar7;
                          LeanTween__value(plVar15,lVar7);
                        }
                        lVar7 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069ffab0,2);
                        if (lVar7 != 0) {
                          if ((*(int *)(lVar7 + 0x18) == 0) ||
                             (*(undefined2 *)(lVar7 + 0x20) = 0x2c, *(int *)(lVar7 + 0x18) == 1)) {
LAB_05d128a4:
                    /* WARNING: Subroutine does not return */
                            FUN_02d96868();
                          }
                          *(undefined2 *)(lVar7 + 0x22) = 0x3b;
                          if ((lVar8 != 0) &&
                             (lVar7 = FUN_053704dc(lVar8,lVar7,0),
                             puVar4 = Method_UnityEngine_UI_Collections_IndexedSet<IClipper>__ctor__
                             , puVar3 = 
                               Method_System_Collections_Generic_HashSet<OvrAvatarRenderable>__ctor__
                             , puVar2 = Method_System_Collections_Generic_HashSet<object>_Remove__,
                             puVar1 = Method_System_Collections_Generic_HashSet<object>__ctor__,
                             lVar7 != 0)) {
                            uVar13 = *(uint *)(lVar7 + 0x18);
                            if ((int)uVar13 < 1) {
                              lVar8 = 0;
                            }
                            else {
                              uVar16 = 0;
                              uVar6 = 0;
                              lVar8 = 0;
                              do {
                                if (uVar13 <= uVar16) goto LAB_05d128a4;
                                lVar11 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
                                if ((lVar11 == 0) || (lVar11 = FUN_05371f5c(lVar11,0), lVar11 == 0))
                                goto LAB_05d1294c;
                                if (*(int *)(lVar11 + 0x10) != 0) {
                                  uVar10 = FUN_0536bac4(lVar11,*(undefined8 *)puVar1,0);
                                  if ((uVar10 & 1) == 0) {
                                    uVar10 = FUN_0536bac4(lVar11,*(undefined8 *)puVar2,0);
                                    if ((uVar10 & 1) == 0) {
                                      uVar10 = FUN_0536bac4(lVar11,*(undefined8 *)puVar3,0);
                                      if ((uVar10 & 1) == 0) {
                                        uVar10 = FUN_0536bac4(lVar11,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<NetworkTransform>_Clear__
                                                  ,0);
                                        if ((uVar10 & 1) == 0) {
                                          if (lVar8 != 0) {
                                            if (*plVar15 == 0) goto LAB_05d1294c;
                                            FUN_05cfae2c(*plVar15,lVar8);
                                          }
                                          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                                                  );
                                          FUN_05cf78fc(lVar8,0);
                                          iVar5 = FUN_05372384(lVar11,0x3d,0);
                                          if (iVar5 < 1) {
                                            uVar9 = FUN_05371f5c(lVar11,0);
                                            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02d96860(uVar9,uVar9);
                                            }
                                            FUN_05cf7c80(lVar8,uVar9,0);
                                            FUN_05cf8f48(lVar8,**(undefined8 **)
                                                                 (*(long *)(PTR_DAT_069fb9c0 + 0x90)
                                                                 + 0xb8),0);
                                          }
                                          else {
                                            lVar12 = FUN_0536f444(lVar11,0,iVar5,0);
                                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02d96860();
                                            }
                                            uVar9 = FUN_05371f5c(lVar12,0);
                                            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02d96860(uVar9,uVar9);
                                            }
                                            FUN_05cf7c80(lVar8,uVar9,0);
                                            lVar11 = FUN_05371b10(lVar11,iVar5 + 1,0);
                                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02d96860();
                                            }
                                            uVar9 = FUN_05371f5c(lVar11,0);
                                            FUN_05cf8f48(lVar8,uVar9,0);
                                          }
                                          FUN_05cf8fa0(lVar8,uVar6,0);
                                        }
                                        else if (lVar8 != 0) {
                                          iVar5 = FUN_05372384(lVar11,0x3d,0);
                                          lVar11 = FUN_05371b10(lVar11,iVar5 + 1,0);
                                          if (lVar11 == 0) goto LAB_05d1294c;
                                          uVar9 = FUN_05371f5c(lVar11,0);
                                          FUN_05cf8b10(lVar8,uVar9,0);
                                        }
                                      }
                                      else if (lVar8 != 0) {
                                        iVar5 = FUN_05372384(lVar11,0x3d,0);
                                        lVar11 = FUN_05371b10(lVar11,iVar5 + 1,0);
                                        if (lVar11 == 0) goto LAB_05d1294c;
                                        uVar9 = FUN_05371f5c(lVar11,0);
                                        FUN_05cf7a88(lVar8,uVar9,0);
                                      }
                                    }
                                    else if (lVar8 != 0) {
                                      iVar5 = FUN_05372384(lVar11,0x3d,0);
                                      lVar11 = FUN_05371b10(lVar11,iVar5 + 1,0);
                                      if (lVar11 == 0) goto LAB_05d1294c;
                                      uVar9 = FUN_05371f5c(lVar11,0);
                                      FUN_05cf7ef4(lVar8,uVar9,0);
                                    }
                                  }
                                  else {
                                    iVar5 = FUN_05372384(lVar11,0x3d,0);
                                    uVar9 = FUN_05371b10(lVar11,iVar5 + 1,0);
                                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                      thunk_FUN_02df485c(*(long *)puVar4);
                                    }
                                    uVar9 = FUN_05d154ec(uVar9);
                                    uVar6 = FUN_054e5a98(uVar9,0);
                                  }
                                }
                                uVar13 = *(uint *)(lVar7 + 0x18);
                                uVar16 = uVar16 + 1;
                              } while ((int)uVar16 < (int)uVar13);
                            }
                            if (lVar8 == 0) {
                              return;
                            }
                            if (*plVar15 != 0) {
                              FUN_05cfae2c(*plVar15,lVar8);
                              return;
                            }
                          }
                        }
                        goto LAB_05d1294c;
                      }
                    }
                    else {
                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff488);
                      FUN_05c08998(uVar9,lVar8,0);
                      *(undefined8 *)(param_1 + 0x68) = uVar9;
                      LeanTween__value((undefined8 *)(param_1 + 0x68),uVar9);
                    }
                  }
                  else {
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar9 = FUN_05371f5c(lVar8,0);
                    lVar7 = FUN_054e71d0(uVar9,0);
                    *(long *)(param_1 + 0x18) = lVar7;
                    if (lVar7 < 0) {
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x30) =
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<OverflowClipBox>__ctor__
                      ;
                      LeanTween__value();
                    }
                    *(undefined1 *)(param_1 + 0x20) = 1;
                  }
                  return;
                }
                if (lVar8 != 0) {
                  uVar9 = FUN_05370114(lVar8,0x2c,0,0);
                  puVar14 = (undefined8 *)(param_1 + 0x10);
                  *puVar14 = uVar9;
                  goto LAB_05d12394;
                }
              }
              else if (lVar8 != 0) {
                uVar9 = FUN_05370114(lVar8,0x2c,0,0);
                puVar14 = (undefined8 *)(param_1 + 0x70);
                *puVar14 = uVar9;
LAB_05d12394:
                LeanTween__value(puVar14,uVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05d1294c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



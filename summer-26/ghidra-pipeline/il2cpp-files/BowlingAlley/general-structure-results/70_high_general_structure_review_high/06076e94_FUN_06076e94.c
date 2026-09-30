/*
FUNCTION_NAME: FUN_06076e94
ENTRY_POINT: 06076e94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_15
*/


/* WARNING: Removing unreachable block (ram,0x06077fc0) */
/* WARNING: Removing unreachable block (ram,0x060784ac) */
/* WARNING: Removing unreachable block (ram,0x06077de8) */
/* WARNING: Removing unreachable block (ram,0x06077b04) */
/* WARNING: Removing unreachable block (ram,0x060777f4) */
/* WARNING: Removing unreachable block (ram,0x060789f8) */
/* WARNING: Removing unreachable block (ram,0x06078968) */
/* WARNING: Removing unreachable block (ram,0x06078914) */
/* WARNING: Removing unreachable block (ram,0x060773b0) */
/* WARNING: Removing unreachable block (ram,0x060780f4) */

void FUN_06076e94(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  ulong *puVar30;
  undefined1 auVar31 [16];
  
  puVar5 = PTR_DAT_07292770;
  puVar8 = PTR_DAT_0728f668;
  if ((DAT_076dd3ee & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(PTR_DAT_072a14a8);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_JsonSchemaModel>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292770);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727e5a0);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_JsonSchemaModel>,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_JsonSchemaType>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_object>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_object>,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Func<UIRAtlasAllocator_Row>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Transform>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<IGrouping<AssetType,_AssetColor>,_AssetType>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727eb68);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                      );
    DAT_076dd3ee = 1;
  }
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_058fcfe4(uVar11,0);
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x38),uVar11);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
  FUN_058f26dc(uVar11,0);
  puVar12 = (undefined8 *)(param_1 + 0x40);
  *puVar12 = uVar11;
  thunk_FUN_0333a630(puVar12,uVar11);
  lVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
  FUN_058f26dc(lVar13,0);
  plVar28 = (long *)(param_1 + 0x30);
  *plVar28 = lVar13;
  thunk_FUN_0333a630(plVar28,lVar13);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
  FUN_058f26dc(uVar11,0);
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x48),uVar11);
  if ((param_3 != 0) && (plVar14 = *(long **)(param_3 + 0x28), plVar14 != (long *)0x0)) {
    iVar9 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (param_2 == 0) {
      return;
    }
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_0333a630((long *)(param_1 + 0x10),param_2);
    *(long *)(param_1 + 0x20) = param_3;
    thunk_FUN_0333a630((long *)(param_1 + 0x20),param_3);
    *(undefined1 *)(param_3 + 0x6e) = 1;
    plVar14 = (long *)FUN_061aadf0(param_2,0);
    if (plVar14 != (long *)0x0) {
      lVar13 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0727e5a0) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_06077164;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_0727e5a0,0);
LAB_06077164:
      puVar8 = PTR_DAT_0727a180;
      plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar13 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_060771cc;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,0);
LAB_060771cc:
      uVar23 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if ((uVar23 & 1) != 0) {
        lVar13 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar23 != 0) {
          piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
              goto LAB_0607722c;
            }
            uVar23 = uVar23 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,1);
LAB_0607722c:
        plVar16 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                         + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar16);
        }
        plVar29 = (long *)(param_1 + 0x28);
        *plVar29 = plVar16[0xd];
        thunk_FUN_0333a630(plVar29);
        lVar13 = *plVar29;
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) == 0)) {
          *plVar29 = *(long *)
                      System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
          ;
          thunk_FUN_0333a630(plVar29);
          lVar13 = *plVar29;
        }
        if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_06240390(lVar13,0);
        FUN_0603718c(param_3,uVar11,0);
        lVar13 = plVar16[9];
        plVar16 = (long *)(param_3 + 0x50);
        if ((*plVar16 == 0) || (*(int *)(*plVar16 + 0x10) == 0)) {
          if (lVar13 == 0) {
            lVar13 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
          }
          *plVar16 = lVar13;
          thunk_FUN_0333a630(plVar16);
        }
      }
      plVar14 = (long *)thunk_FUN_032a55a4(plVar14,*(undefined8 *)PTR_DAT_07279f60);
      if (plVar14 != (long *)0x0) {
        lVar13 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar23 != 0) {
          piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_06077398;
            }
            uVar23 = uVar23 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07279f60,0);
LAB_06077398:
        (*(code *)*puVar15)(plVar14,puVar15[1]);
      }
      puVar7 = System_Func<IGrouping<AssetType,_AssetColor>,_AssetType>_TypeInfo;
      lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Func<IGrouping<AssetType,_AssetColor>,_AssetType>_TypeInfo
                                 );
      FUN_0619a35c(lVar13,0);
      plVar29 = (long *)(param_1 + 0x50);
      *plVar29 = lVar13;
      thunk_FUN_0333a630(plVar29,lVar13);
      lVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar7);
      FUN_0619a35c(lVar13,0);
      plVar16 = (long *)(param_1 + 0x58);
      *plVar16 = lVar13;
      thunk_FUN_0333a630(plVar16,lVar13);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_058fcfe4(uVar11,0);
      *(undefined8 *)(param_1 + 0x68) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x68),uVar11);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_058fcfe4(uVar11,0);
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x60),uVar11);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_058fcfe4(uVar11,0);
      *(undefined8 *)(param_1 + 0x70) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x70),uVar11);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_058fcfe4(uVar11,0);
      *(undefined8 *)(param_1 + 0x78) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x78),uVar11);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Func<KeyValuePair<string,_JsonSchemaModel>,_bool>_TypeInfo
                                 );
      FUN_050f8160(uVar11,*(undefined8 *)System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo)
      ;
      *(undefined8 *)(param_1 + 0x88) = uVar11;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x88),uVar11);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
      FUN_058fcfe4(uVar11,0);
      puVar15 = (undefined8 *)(param_1 + 0x98);
      *puVar15 = uVar11;
      thunk_FUN_0333a630(puVar15,uVar11);
      plVar14 = *(long **)(param_3 + 0x28);
      if (plVar14 != (long *)0x0) {
        plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0))
        ;
        puVar7 = PTR_DAT_072a14c0;
        puVar5 = PTR_DAT_072a14a8;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        do {
          lVar13 = *plVar14;
          uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_06077574;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar17 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,0);
LAB_06077574:
          uVar23 = (*(code *)*puVar17)(plVar14,puVar17[1]);
          puVar6 = PTR_DAT_07279f60;
          if ((uVar23 & 1) == 0) {
            plVar14 = (long *)thunk_FUN_032a55a4(plVar14,*(undefined8 *)PTR_DAT_07279f60);
            if (plVar14 == (long *)0x0) goto LAB_060778e4;
            lVar13 = *plVar14;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 == 0) goto LAB_060778bc;
            piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_060778a4;
          }
          lVar13 = *plVar14;
          uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_060775d4;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar17 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,1);
LAB_060775d4:
          plVar18 = (long *)(*(code *)*puVar17)(plVar14,puVar17[1]);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c();
          }
          plVar18 = (long *)plVar18[8];
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1f0));
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
LAB_0607762c:
          lVar13 = *plVar18;
          uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar17 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_06077678;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar8,0);
LAB_06077678:
          uVar23 = (*(code *)*puVar17)(plVar18,puVar17[1]);
          if ((uVar23 & 1) != 0) {
            lVar13 = *plVar18;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                  puVar17 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_060776d8;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar8,1);
LAB_060776d8:
            plVar19 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar19);
            }
            lVar13 = plVar19[0x1a];
            if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
               (*(int *)(*(long *)(lVar13 + 0x28) + 0x10) != 0)) {
              plVar27 = (long *)*puVar15;
              uVar11 = FUN_0606b26c(lVar13,0);
              if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8(uVar11,uVar11);
              }
              (**(code **)(*plVar27 + 0x318))
                        (plVar27,uVar11,plVar19,*(undefined8 *)(*plVar27 + 800));
            }
            goto LAB_0607762c;
          }
          plVar18 = (long *)thunk_FUN_032a55a4(plVar18,*(undefined8 *)PTR_DAT_07279f60);
          if (plVar18 != (long *)0x0) {
            lVar13 = *plVar18;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
                  puVar17 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_060777d8;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)PTR_DAT_07279f60,0);
LAB_060777d8:
            (*(code *)*puVar17)(plVar18,puVar17[1]);
          }
        } while( true );
      }
    }
  }
  goto LAB_060781d4;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar26 = piVar26 + 4;
    if (uVar23 == 0) break;
LAB_060778a4:
    if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_060778d8;
    }
  }
LAB_060778bc:
  puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar6,0);
LAB_060778d8:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_060778e4:
  plVar14 = (long *)FUN_061aadf0(param_2,0);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar23 != 0) {
      piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0727e5a0) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_0607795c;
        }
        uVar23 = uVar23 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_0727e5a0,0);
LAB_0607795c:
    plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
    puVar5 = 
    System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
    ;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar13 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_060779c4;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,0);
LAB_060779c4:
      uVar23 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if ((uVar23 & 1) == 0) {
        plVar14 = (long *)thunk_FUN_032a55a4(plVar14,*(undefined8 *)PTR_DAT_07279f60);
        if (plVar14 == (long *)0x0) goto LAB_06077af8;
        lVar13 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar23 == 0) goto LAB_06077ad0;
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_06077ab8;
      }
      lVar13 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
            puVar15 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
            goto LAB_06077a24;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)puVar8,1);
LAB_06077a24:
      plVar18 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar18);
        }
      }
      FUN_06073524(param_1,plVar18);
    } while( true );
  }
  goto LAB_060781d4;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar26 = piVar26 + 4;
    if (uVar23 == 0) break;
LAB_06077ab8:
    if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_06077aec;
    }
  }
LAB_06077ad0:
  puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07279f60,0);
LAB_06077aec:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_06077af8:
  uVar23 = FUN_06076884(param_1,*(undefined8 *)(param_1 + 0x58));
  puVar30 = (ulong *)(param_1 + 0x18);
  *puVar30 = uVar23;
  uVar11 = thunk_FUN_0333a630(puVar30,uVar23);
  if (*puVar30 == 0) {
    bVar4 = true;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      *(undefined1 *)(param_3 + 0x6b) = 1;
    }
  }
  else {
    lVar13 = FUN_060790fc(uVar11,*puVar30,
                          *(undefined8 *)System_Func<KeyValuePair<string,_string>,_string>_TypeInfo,
                          *(undefined8 *)PTR_DAT_072798c8);
    if (lVar13 != 0) {
      if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar11 = FUN_06240390(lVar13,0);
      *(undefined8 *)(param_3 + 0x70) = uVar11;
      thunk_FUN_0333a630();
    }
    bVar4 = false;
  }
  lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                               System_Func<KeyValuePair<string,_object>,_string>_TypeInfo);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
            (lVar13,*(undefined8 *)System_Func<KeyValuePair<string,_object>,_bool>_TypeInfo);
  if (*(char *)(param_3 + 0x8c) != '\0') {
    iVar10 = FUN_060764ec(param_1,*(undefined8 *)(param_1 + 0x58));
    if (iVar10 == 0) {
      uVar11 = FUN_06012cd4(0);
LAB_060789c4:
      uVar21 = thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_WitResponseNode>,_bool>_TypeInfo)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar21);
    }
    if (1 < iVar10) {
      uVar11 = FUN_06012d14(0);
      goto LAB_060789c4;
    }
    plVar14 = (long *)FUN_06079180(param_1,*(undefined8 *)(param_1 + 0x18));
    if (plVar14 == (long *)0x0) goto LAB_060781d4;
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
LAB_06078978:
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar14);
    }
    if ((plVar14[0x14] != 0) && (lVar20 = FUN_06076070(param_1), lVar20 != 0)) {
      lVar20 = FUN_061a2630(lVar20,0);
      puVar6 = System_Func<KeyValuePair<string,_JsonSchemaModel>,_string>_TypeInfo;
      puVar7 = System_Func<UIRAtlasAllocator_Row>_TypeInfo;
      puVar5 = System_Func<TransitionRunEvent>_TypeInfo;
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      while (uVar23 = FUN_061a293c(lVar20,0), (uVar23 & 1) != 0) {
        plVar14 = (long *)FUN_061a29dc(lVar20,0);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar14 + 0x130);
          bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar25 = *(long *)(*plVar14 + 200),
             *(long *)(lVar25 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar14);
          }
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar2 <= bVar1) && (*(long *)(lVar25 + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
            if (plVar14[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar25 = *(long *)(plVar14[0x14] + 0x10);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(int *)(lVar25 + 0x10) != 0) {
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar25 = plVar14[0x18];
              lVar22 = *(long *)(lVar13 + 0x10);
              lVar24 = *(long *)puVar6;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar3 = *(uint *)(lVar13 + 0x18);
              if (uVar3 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                *(long *)(lVar22 + (long)(int)uVar3 * 8 + 0x20) = lVar25;
                thunk_FUN_0333a630();
              }
              else {
                FUN_041e2c78(lVar13,lVar25,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      plVar14 = (long *)thunk_FUN_032a55a4(lVar20,*(undefined8 *)PTR_DAT_07279f60);
      if (plVar14 != (long *)0x0) {
        lVar20 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar23 != 0) {
          piVar26 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_06077dd0;
            }
            uVar23 = uVar23 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07279f60,0);
LAB_06077dd0:
        (*(code *)*puVar15)(plVar14,puVar15[1]);
      }
    }
  }
  if (*plVar16 != 0) {
    lVar20 = FUN_061a2630(*plVar16,0);
    puVar6 = System_Func<KeyValuePair<string,_JsonSchemaType>,_bool>_TypeInfo;
    puVar7 = System_Func<TransitionRunEvent>_TypeInfo;
    puVar5 = PTR_DAT_0727eb68;
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
LAB_06077e24:
    do {
      uVar23 = FUN_061a293c(lVar20,0);
      if ((uVar23 & 1) == 0) goto LAB_06077f2c;
      plVar14 = (long *)FUN_061a29dc(lVar20,0);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      plVar18 = (long *)*puVar30;
      if (plVar14 != plVar18) {
        plVar19 = plVar14;
        if ((*(char *)(param_3 + 0x8c) != '\0') && (plVar18 != (long *)0x0)) {
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (plVar18[5] != plVar14[5]) {
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            plVar19 = (long *)FUN_041e3008(lVar13,plVar14[0x18],*(undefined8 *)puVar6);
            if (((ulong)plVar19 & 1) == 0) goto LAB_06077e24;
          }
        }
        uVar11 = FUN_06074f14(plVar19,plVar14);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (plVar14[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar18 = (long *)*puVar12;
        uVar11 = FUN_057aaeec(*(undefined8 *)(plVar14[0x18] + 0x18),*(undefined8 *)puVar5,uVar11,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar11,uVar11);
        }
        auVar31 = (**(code **)(*plVar18 + 0x348))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x350));
        if ((auVar31._0_8_ & 1) == 0) {
          FUN_0607942c(param_1,plVar14);
        }
        else {
          FUN_06074e30(param_1,auVar31._8_8_,plVar14);
        }
      }
    } while( true );
  }
  goto LAB_060781d4;
LAB_06077f2c:
  plVar14 = (long *)thunk_FUN_032a55a4(lVar20,*(undefined8 *)PTR_DAT_07279f60);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar23 != 0) {
      piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_06077fa4;
        }
        uVar23 = uVar23 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar23 != 0);
    }
    puVar12 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07279f60,0);
LAB_06077fa4:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
  if (*puVar30 != 0) {
    FUN_060795a4(param_1,*puVar30,iVar9 == 0);
  }
  if (*plVar29 != 0) {
    lVar13 = FUN_061a2630(*plVar29,0);
    puVar5 = System_Func<Transform>_TypeInfo;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    while (uVar23 = FUN_061a293c(lVar13,0), (uVar23 & 1) != 0) {
      plVar14 = (long *)FUN_061a29dc(lVar13,0);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      FUN_0607a88c(param_1,plVar14,0);
    }
    plVar14 = (long *)thunk_FUN_032a55a4(lVar13,*(undefined8 *)PTR_DAT_07279f60);
    if (plVar14 != (long *)0x0) {
      lVar13 = *plVar14;
      uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_060780dc;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar12 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07279f60,0);
LAB_060780dc:
      (*(code *)*puVar12)(plVar14,puVar12[1]);
    }
    puVar7 = PTR_DAT_072a14c0;
    puVar5 = PTR_DAT_072794f8;
    plVar14 = (long *)*plVar28;
    if (plVar14 != (long *)0x0) {
      iVar9 = 0;
      while (iVar10 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0)),
            iVar9 < iVar10) {
        plVar14 = (long *)*plVar28;
        if (plVar14 == (long *)0x0) goto LAB_060781d4;
        plVar29 = (long *)(**(code **)(*plVar14 + 0x2e8))
                                    (plVar14,iVar9,*(undefined8 *)(*plVar14 + 0x2f0));
        if (plVar29 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((*(byte *)(*plVar29 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar29);
          }
        }
        plVar14 = *(long **)(param_1 + 0x80);
        if ((plVar14 == (long *)0x0) ||
           (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                        (plVar14,plVar29,*(undefined8 *)(*plVar14 + 0x310)),
           plVar29 == (long *)0x0)) goto LAB_060781d4;
        if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar5)) goto LAB_06078978;
        FUN_060038dc(plVar29,plVar14,0);
        plVar14 = (long *)*plVar28;
        iVar9 = iVar9 + 1;
        if (plVar14 == (long *)0x0) goto LAB_060781d4;
      }
      plVar28 = *(long **)(param_3 + 0x28);
      if (plVar28 != (long *)0x0) {
        plVar28 = (long *)(**(code **)(*plVar28 + 0x1e8))(plVar28,*(undefined8 *)(*plVar28 + 0x1f0))
        ;
        puVar5 = PTR_DAT_072a14a8;
        if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        goto LAB_060781fc;
      }
    }
  }
  goto LAB_060781d4;
LAB_060781fc:
  lVar13 = *plVar28;
  uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar23 != 0) {
    piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
        goto LAB_06078248;
      }
      uVar23 = uVar23 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar23 != 0);
  }
  puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)puVar8,0);
LAB_06078248:
  uVar23 = (*(code *)*puVar12)(plVar28,puVar12[1]);
  if ((uVar23 & 1) == 0) {
    plVar28 = (long *)thunk_FUN_032a55a4(plVar28,*(undefined8 *)PTR_DAT_07279f60);
    if (plVar28 == (long *)0x0) goto LAB_060784a0;
    lVar13 = *plVar28;
    uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar23 == 0) goto LAB_06078478;
    piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_06078460;
  }
  lVar13 = *plVar28;
  uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar23 != 0) {
    piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
        goto LAB_060782a8;
      }
      uVar23 = uVar23 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar23 != 0);
  }
  puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)puVar8,1);
LAB_060782a8:
  plVar14 = (long *)(*(code *)*puVar12)(plVar28,puVar12[1]);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar14);
  }
  if (plVar14[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(plVar14[0x31] + 0x18) == 0) {
    uVar11 = FUN_0601931c(plVar14,0);
    uVar23 = thunk_FUN_057aa644(uVar11,*(undefined8 *)(param_3 + 0x50),0);
    if ((uVar23 & 1) != 0) {
      plVar29 = (long *)FUN_0601f3c8(plVar14,0);
      if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      for (iVar9 = 0;
          iVar10 = (**(code **)(*plVar29 + 0x1c8))(plVar29,*(undefined8 *)(*plVar29 + 0x1d0)),
          iVar9 < iVar10; iVar9 = iVar9 + 1) {
        plVar18 = (long *)(**(code **)(*plVar29 + 0x208))
                                    (plVar29,iVar9,*(undefined8 *)(*plVar29 + 0x210));
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar23 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        if ((uVar23 & 1) != 0) {
          uVar11 = FUN_0601931c(plVar14,0);
          plVar18 = (long *)(**(code **)(*plVar29 + 0x208))
                                      (plVar29,iVar9,*(undefined8 *)(*plVar29 + 0x210));
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar21 = FUN_0601931c(lVar13,0);
          uVar23 = thunk_FUN_057aa644(uVar11,uVar21,0);
          if ((uVar23 & 1) != 0) {
            plVar18 = (long *)(**(code **)(*plVar29 + 0x208))
                                        (plVar29,iVar9,*(undefined8 *)(*plVar29 + 0x210));
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar13 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            *(undefined8 *)(lVar13 + 0x98) = 0;
            thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x98),0);
          }
        }
      }
      plVar14[0x13] = 0;
      thunk_FUN_0333a630(plVar14 + 0x13,0);
    }
  }
  goto LAB_060781fc;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar26 = piVar26 + 4;
    if (uVar23 == 0) break;
LAB_06078804:
    if (*(long *)(piVar26 + -2) == *(long *)puVar7) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_06078838;
    }
  }
LAB_0607881c:
  puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)puVar7,0);
LAB_06078838:
  (*(code *)*puVar12)(plVar28,puVar12[1]);
  return;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar26 = piVar26 + 4;
    if (uVar23 == 0) break;
LAB_06078460:
    if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_06078494;
    }
  }
LAB_06078478:
  puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)PTR_DAT_07279f60,0);
LAB_06078494:
  (*(code *)*puVar12)(plVar28,puVar12[1]);
LAB_060784a0:
  if (*(long *)(param_3 + 0x28) != 0) {
    lVar13 = FUN_0603ba60(*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x40),
                          *(undefined8 *)(param_3 + 0x50),0);
    if (lVar13 != 0) {
      *(undefined1 *)(lVar13 + 0xb0) = 1;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      plVar28 = *(long **)(param_3 + 0x28);
      if (plVar28 == (long *)0x0) goto LAB_060781d4;
      iVar9 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
      if ((iVar9 == 0) &&
         (uVar23 = FUN_057aa690(*(undefined8 *)(param_3 + 0x40),
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                                ,4,0), (uVar23 & 1) != 0)) {
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar14 = (long *)(**(code **)(*plVar16 + 0x308))
                                        (plVar16,0,*(undefined8 *)(*plVar16 + 0x310)),
           plVar14 == (long *)0x0)) goto LAB_060781d4;
        bVar1 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) goto LAB_06078978;
        lVar13 = plVar14[0x13];
        if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072a1998);
        }
        uVar11 = FUN_06240390(lVar13,0);
        FUN_0603718c(param_3,uVar11,0);
      }
    }
    *(undefined1 *)(param_3 + 0x6e) = 0;
    if (!bVar4) {
      return;
    }
    plVar28 = *(long **)(param_3 + 0x28);
    if (plVar28 != (long *)0x0) {
      iVar9 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
      if (iVar9 < 1) {
        plVar28 = (long *)FUN_061aadf0(param_2,0);
        if (plVar28 != (long *)0x0) {
          lVar13 = *plVar28;
          uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0727e5a0) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_060786b4;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)PTR_DAT_0727e5a0,0);
LAB_060786b4:
          plVar28 = (long *)(*(code *)*puVar12)(plVar28,puVar12[1]);
          puVar5 = 
          System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
          ;
          if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          do {
            lVar13 = *plVar28;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_0607871c;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)puVar8,0);
LAB_0607871c:
            uVar23 = (*(code *)*puVar12)(plVar28,puVar12[1]);
            puVar7 = PTR_DAT_07279f60;
            if ((uVar23 & 1) == 0) {
              plVar28 = (long *)thunk_FUN_032a55a4(plVar28,*(undefined8 *)PTR_DAT_07279f60);
              if (plVar28 == (long *)0x0) {
                return;
              }
              lVar13 = *plVar28;
              uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar23 == 0) goto LAB_0607881c;
              piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_06078804;
            }
            lVar13 = *plVar28;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                  puVar12 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_0607877c;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)FUN_032937ac(plVar28,*(long *)puVar8,1);
LAB_0607877c:
            plVar14 = (long *)(*(code *)*puVar12)(plVar28,puVar12[1]);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c();
            }
            FUN_0603bbe8(param_3,plVar14[9],0);
          } while( true );
        }
      }
      else if ((*(long *)(param_3 + 0x28) != 0) &&
              (lVar13 = FUN_06037394(*(long *)(param_3 + 0x28),0,0), lVar13 != 0)) {
        uVar11 = FUN_0601931c(lVar13,0);
        FUN_0603bbe8(param_3,uVar11,0);
        if ((*(long *)(param_3 + 0x28) != 0) &&
           (lVar13 = FUN_06037394(*(long *)(param_3 + 0x28),0,0), lVar13 != 0)) {
          FUN_0603c24c(param_3,*(undefined8 *)(lVar13 + 0xa0),0);
          return;
        }
      }
    }
  }
LAB_060781d4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



/*
FUNCTION_NAME: FUN_0608085c
ENTRY_POINT: 0608085c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06081abc) */
/* WARNING: Removing unreachable block (ram,0x06081344) */
/* WARNING: Removing unreachable block (ram,0x06080fe4) */
/* WARNING: Removing unreachable block (ram,0x060819b4) */
/* WARNING: Removing unreachable block (ram,0x06081ac8) */
/* WARNING: Removing unreachable block (ram,0x060815e8) */
/* WARNING: Removing unreachable block (ram,0x06081a78) */

long * FUN_0608085c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 uVar23;
  
  puVar4 = PTR_DAT_0728f668;
  lVar10 = param_1;
  if ((DAT_076dd400 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<DebugColor,_Color>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a14a8);
    thunk_FUN_032e1da0(System_Func<byte,_object>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<float[],_Vector4>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<BestFitAllocator_Block>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Font,_HashSet<Text>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<GameObject,_Coroutine>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Graphic,_int>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<CancellationToken,_Task<int>>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728d490);
    thunk_FUN_032e1da0(PTR_DAT_07287a48);
    thunk_FUN_032e1da0(PTR_DAT_0727eb68);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Vector3,_int>,_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07287a50);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    thunk_FUN_032e1da0(PTR_DAT_0728dc18);
    thunk_FUN_032e1da0(System_Func<VisualElement>_TypeInfo);
    lVar10 = thunk_FUN_032e1da0(PTR_DAT_0728dc10);
    DAT_076dd400 = 1;
  }
  uVar11 = FUN_06074f14(lVar10,param_2);
  plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_058f26dc(plVar12,0);
  puVar4 = PTR_DAT_072a1998;
  if (((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0))
  goto LAB_06080e04;
  uVar23 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar13 = FUN_06240390(uVar11,0);
  puVar6 = System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo;
  if (lVar10 == 0) goto LAB_06080e04;
  plVar14 = (long *)FUN_060445c4(lVar10,uVar13,uVar23,0);
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (plVar14 != (long *)0x0) {
      if ((param_4 & 1) != 0) {
        return plVar14;
      }
      uVar11 = FUN_06012ed8(uVar11,0);
      uVar23 = thunk_FUN_032e1da0(System_Func<CancellationToken,_Task<Stream>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar23);
    }
LAB_06080ab8:
    if ((param_4 & 1) != 0) {
      plVar14 = *(long **)(param_1 + 0x40);
      uVar13 = FUN_057aaeec(uVar23,*(undefined8 *)PTR_DAT_0727eb68,uVar11,0);
      if (plVar14 == (long *)0x0) goto LAB_06080e04;
      (**(code **)(*plVar14 + 0x308))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x310));
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_06240390(uVar11,0);
    plVar14 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14a8);
    FUN_060177a4(plVar14,uVar11,0);
    if (plVar14 == (long *)0x0) goto LAB_06080e04;
    plVar14[0x26] = *(long *)(param_2 + 0xb0);
    thunk_FUN_0333a630(plVar14 + 0x26);
    uVar11 = FUN_0601b9b0(plVar14,uVar23,0);
    uVar11 = FUN_060790fc(uVar11,param_2,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo,
                          uVar23);
    uVar11 = FUN_0601b9b0(plVar14,uVar11,0);
    puVar7 = System_Func<CancellationToken,_Task<int>>_TypeInfo;
    puVar4 = PTR_DAT_072798c8;
    lVar10 = FUN_060790fc(uVar11,param_3,
                          *(undefined8 *)System_Func<CancellationToken,_Task<int>>_TypeInfo,
                          *(undefined8 *)PTR_DAT_072798c8);
    if ((lVar10 == 0) ||
       ((*(int *)(lVar10 + 0x10) == 0 &&
        (lVar10 = FUN_060790fc(lVar10,param_2,*(undefined8 *)puVar7,*(undefined8 *)puVar4),
        lVar10 == 0)))) goto LAB_06080e04;
    if (0 < *(int *)(lVar10 + 0x10)) {
      uVar15 = thunk_FUN_057aa644(lVar10,*(undefined8 *)PTR_DAT_07287a50,0);
      if (((uVar15 & 1) != 0) ||
         (uVar15 = thunk_FUN_057aa644(lVar10,*(undefined8 *)PTR_DAT_0728dc10,0), (uVar15 & 1) != 0))
      {
        FUN_0601e93c(plVar14,1,0);
      }
      uVar15 = thunk_FUN_057aa644(lVar10,*(undefined8 *)PTR_DAT_07287a48,0);
      if (((uVar15 & 1) != 0) ||
         (uVar15 = thunk_FUN_057aa644(lVar10,*(undefined8 *)PTR_DAT_0728dc18,0), (uVar15 & 1) != 0))
      {
        FUN_0601e93c(plVar14,0,0);
      }
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar10 = FUN_06073f60(param_2,*(undefined8 *)System_Func<VisualElement>_TypeInfo);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x10) < 1) {
        if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_058e6bb4(0);
      }
      else {
        uVar11 = thunk_FUN_032a56a0();
        FUN_058e7628(uVar11,lVar10,0);
      }
      FUN_0601fcf4(plVar14,uVar11,0);
    }
    if (*(char *)(param_1 + 0xa0) == '\0') {
      lVar10 = *(long *)(param_2 + 0x50);
      plVar14[0x22] = *(long *)(param_2 + 0x58);
      plVar14[0x21] = lVar10;
      lVar10 = *(long *)(param_2 + 0x60);
      plVar14[0x24] = *(long *)(param_2 + 0x68);
      plVar14[0x23] = lVar10;
    }
    else {
      lVar10 = FUN_0608044c(param_1,uVar23);
      if (lVar10 != 0) {
        FUN_06022918(plVar14,lVar10,0);
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar10 == 0)) goto LAB_06080e04;
    FUN_060393f8(lVar10,plVar14,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar10 = *(long *)(param_1 + 0x88);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<Graphic,_int>_TypeInfo);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar11,*(undefined8 *)
                         System_Collections_Generic_Dictionary<GameObject,_Coroutine>_TypeInfo);
      if (lVar10 == 0) goto LAB_06080e04;
      FUN_050f8b10(lVar10,plVar14,uVar11,*(undefined8 *)System_Func<byte,_object>_TypeInfo);
    }
  }
  else if (plVar14 == (long *)0x0) goto LAB_06080ab8;
  FUN_0607d33c(param_1,param_3,plVar14,plVar12,*(undefined1 *)(param_2 + 0x76));
  plVar16 = (long *)plVar14[8];
  if (plVar16 != (long *)0x0) {
    iVar9 = 0;
    while (iVar8 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0)),
          iVar9 < iVar8) {
      if ((plVar14[8] == 0) || (lVar10 = FUN_0600bb38(plVar14[8],iVar9,0), lVar10 == 0))
      goto LAB_06080e04;
      FUN_06008134(lVar10,iVar9,0);
      plVar16 = (long *)plVar14[8];
      iVar9 = iVar9 + 1;
      if (plVar16 == (long *)0x0) goto LAB_06080e04;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_060740f4(plVar14,uVar11);
    FUN_0607465c(plVar14,*(undefined8 *)(param_2 + 0x48));
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar10 = FUN_061a0d30(*(long *)(param_1 + 0x18),0), lVar10 == 0)) goto LAB_06080fe8;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar10 = FUN_061a0d30(*(long *)(param_1 + 0x18),0), lVar10 != 0)) {
      lVar10 = FUN_061a2630(lVar10,0);
      puVar6 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
      puVar4 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      goto LAB_06080e7c;
    }
  }
LAB_06080e04:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06080e7c:
  uVar15 = FUN_061a293c(lVar10,0);
  if ((uVar15 & 1) != 0) {
    plVar16 = (long *)FUN_061a29dc(lVar10,0);
    if (plVar16 != (long *)0x0) goto code_r0x06080ea0;
    goto LAB_06080eec;
  }
  plVar16 = (long *)thunk_FUN_032a55a4(lVar10,*(undefined8 *)PTR_DAT_07279f60);
  if (plVar16 != (long *)0x0) {
    lVar10 = *plVar16;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06080fcc;
        }
        uVar15 = uVar15 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar15 != 0);
    }
    puVar17 = (undefined8 *)FUN_032937ac(plVar16,*(long *)PTR_DAT_07279f60,0);
LAB_06080fcc:
    (*(code *)*puVar17)(plVar16,puVar17[1]);
  }
LAB_06080fe8:
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar7 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
    puVar6 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar10 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0608106c;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar17 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar4,0);
LAB_0608106c:
      uVar15 = (*(code *)*puVar17)(plVar12,puVar17[1]);
      puVar5 = PTR_DAT_07279f60;
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)PTR_DAT_07279f60);
        if (plVar12 == (long *)0x0) {
          return plVar14;
        }
        lVar10 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 == 0) goto LAB_060818d4;
        piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_060818bc;
      }
      lVar10 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
            puVar17 = (undefined8 *)(lVar10 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_060810cc;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar17 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar4,1);
LAB_060810cc:
      plVar16 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_072a14a8 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_072a14a8)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar16);
        }
      }
      if (plVar16 != plVar14) {
        uVar11 = FUN_0601931c(plVar14,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar23 = FUN_0601931c(plVar16,0);
        uVar15 = thunk_FUN_057aa644(uVar11,uVar23,0);
        if ((uVar15 & 1) != 0) {
          plVar16[0x13] = 0;
          thunk_FUN_0333a630(plVar16 + 0x13,0);
        }
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar10 = FUN_061a0d30(*(long *)(param_1 + 0x18),0), lVar10 != 0)) {
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar10 = FUN_061a0d30(*(long *)(param_1 + 0x18),0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar10 = FUN_061a2630(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        while (uVar15 = FUN_061a293c(lVar10,0), (uVar15 & 1) != 0) {
          plVar18 = (long *)FUN_061a29dc(lVar10,0);
          if (plVar18 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar18 + 0x130);
            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((bVar1 < bVar2) ||
               (lVar20 = *(long *)(*plVar18 + 200),
               *(long *)(lVar20 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar18);
            }
            bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
            if (((bVar2 <= bVar1) && (*(long *)(lVar20 + (ulong)bVar2 * 8 + -8) == *(long *)puVar7))
               && (uVar15 = FUN_0607672c(plVar18,plVar18,
                                         *(undefined8 *)
                                          System_Func<KeyValuePair<Vector3,_int>,_Vector3>_TypeInfo,
                                         0), (uVar15 & 1) != 0)) {
              uVar11 = FUN_0607f7bc(uVar15,plVar18);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar15 = thunk_FUN_057aa644(uVar11,plVar16[0x12],0);
              if ((uVar15 & 1) != 0) {
                if (plVar16[4] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar20 = *(long *)(plVar16[4] + 0x28);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                iVar9 = FUN_06044258(lVar20,plVar16[0x12],0);
                if (iVar9 < -1) {
                  uVar11 = FUN_06081d50(param_1,plVar18);
                  uVar23 = FUN_0601931c(plVar16,0);
                  uVar15 = thunk_FUN_057aa644(uVar11,uVar23,0);
                  if ((uVar15 & 1) != 0) {
                    FUN_0607f00c(param_1,plVar18);
                  }
                }
                else {
                  FUN_0607f00c(param_1,plVar18);
                }
              }
            }
          }
        }
        plVar18 = (long *)thunk_FUN_032a55a4(lVar10,*(undefined8 *)PTR_DAT_07279f60);
        if (plVar18 != (long *)0x0) {
          lVar10 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar15 != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07279f60) {
                puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_0608132c;
              }
              uVar15 = uVar15 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar15 != 0);
          }
          puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)PTR_DAT_07279f60,0);
LAB_0608132c:
          (*(code *)*puVar17)(plVar18,puVar17[1]);
        }
      }
      plVar18 = (long *)FUN_0601f3c8(plVar14,0);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar10 = 0;
      for (iVar9 = 0;
          iVar8 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0)),
          iVar9 < iVar8; iVar9 = iVar9 + 1) {
        plVar19 = (long *)(**(code **)(*plVar18 + 0x208))
                                    (plVar18,iVar9,*(undefined8 *)(*plVar18 + 0x210));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar15 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        if ((uVar15 & 1) != 0) {
          plVar19 = (long *)(**(code **)(*plVar18 + 0x208))
                                      (plVar18,iVar9,*(undefined8 *)(*plVar18 + 0x210));
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar19 = (long *)(**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400))
          ;
          if (plVar16 == plVar19) {
            lVar10 = (**(code **)(*plVar18 + 0x208))
                               (plVar18,iVar9,*(undefined8 *)(*plVar18 + 0x210));
          }
        }
      }
      if (lVar10 == 0) {
        if (*(char *)(param_1 + 0xa0) == '\0') {
          uVar11 = FUN_06029f7c(plVar14,0);
        }
        else {
          iVar9 = (int)plVar14[0x43];
          if (iVar9 == -1) {
            plVar18 = (long *)plVar14[8];
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
            do {
              lVar10 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar15 != 0) {
                piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                    puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_0608147c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar15 != 0);
              }
              puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,0);
LAB_0608147c:
              uVar15 = (*(code *)*puVar17)(plVar18,puVar17[1]);
              if ((uVar15 & 1) == 0) {
                iVar9 = -1;
                goto LAB_0608155c;
              }
              lVar10 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar15 != 0) {
                piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
                    puVar17 = (undefined8 *)(lVar10 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                    goto LAB_060814dc;
                  }
                  uVar15 = uVar15 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar15 != 0);
              }
              puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,1);
LAB_060814dc:
              plVar19 = (long *)(*(code *)*puVar17)(plVar18,puVar17[1]);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar10 = *plVar19;
              bVar1 = *(byte *)(*(long *)PTR_DAT_072a14c0 + 0x130);
              if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_072a14c0)) {
                    /* WARNING: Subroutine does not return */
                FUN_032d618c(plVar19);
              }
              iVar9 = (**(code **)(lVar10 + 0x1d8))(plVar19,*(undefined8 *)(lVar10 + 0x1e0));
            } while (iVar9 != 2);
            iVar9 = *(int *)((long)plVar19 + 100);
LAB_0608155c:
            plVar18 = (long *)thunk_FUN_032a55a4(plVar18,*(undefined8 *)PTR_DAT_07279f60);
            if (plVar18 != (long *)0x0) {
              lVar10 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar15 != 0) {
                piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07279f60) {
                    puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_060815d0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar15 != 0);
              }
              puVar17 = (undefined8 *)FUN_032937ac(plVar18,*(long *)PTR_DAT_07279f60,0);
LAB_060815d0:
              (*(code *)*puVar17)(plVar18,puVar17[1]);
            }
          }
          uVar11 = FUN_06029ce8(plVar14,iVar9,0);
        }
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar10 = FUN_06029f84(plVar16,uVar11,0);
        if (*(char *)(param_1 + 0xa0) != '\0') {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_0600631c(lVar10,plVar16[0x14],0);
        }
        uVar23 = FUN_057aaeec(plVar14[0x12],*(undefined8 *)PTR_DAT_0728d490,plVar16[0x12],0);
        plVar18 = (long *)thunk_FUN_032a56a0(*(undefined8 *)
                                              System_Collections_Generic_Dictionary<DebugColor,_Color>_TypeInfo
                                            );
        FUN_06013b34(plVar18,uVar23,uVar11,lVar10,1,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar18 + 0x1e8))(plVar18,1,*(undefined8 *)(*plVar18 + 0x1f0));
        if (plVar16[4] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar10 = *(long *)(plVar16[4] + 0x30);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        System_Xml_XmlTextReaderImpl___ctor(lVar10,plVar18,0);
        if ((*(char *)(param_1 + 0xa0) != '\0') &&
           (uVar15 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
           (uVar15 & 1) != 0)) {
          lVar10 = *(long *)(param_1 + 0x88);
          uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8(uVar11,uVar11);
          }
          uVar15 = FUN_050f8d04(lVar10,uVar11,*(undefined8 *)System_Func<float[],_Vector4>_TypeInfo)
          ;
          if ((uVar15 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x88);
            uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8(uVar11,uVar11);
            }
            lVar10 = FUN_050f8a90(lVar10,uVar11,
                                  *(undefined8 *)System_Func<BestFitAllocator_Block>_TypeInfo);
            uVar11 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar20 = *(long *)(lVar10 + 0x10);
            lVar21 = *(long *)System_Collections_Generic_Dictionary<Font,_HashSet<Text>>_TypeInfo;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(undefined8 *)(lVar20 + (long)(int)uVar3 * 8 + 0x20) = uVar11;
              thunk_FUN_0333a630();
            }
            else {
              FUN_041e2c78(lVar10,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_06080e04;
code_r0x06080ea0:
  bVar1 = *(byte *)(*plVar16 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar20 = *(long *)(*plVar16 + 200),
     *(long *)(lVar20 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar16);
  }
  bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar20 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
LAB_06080eec:
    uVar11 = FUN_0607f7bc(plVar16,plVar16);
    uVar15 = thunk_FUN_057aa644(uVar11,plVar14[0x12],0);
    if ((uVar15 & 1) != 0) {
      uVar11 = FUN_06081d50(param_1,plVar16);
      uVar23 = FUN_0601931c(plVar14,0);
      uVar15 = thunk_FUN_057aa644(uVar11,uVar23,0);
      if (((uVar15 & 1) != 0) || (lVar20 = FUN_06081d50(param_1,plVar16), lVar20 == 0)) {
        FUN_0607f8d4(param_1,plVar16);
      }
    }
  }
  goto LAB_06080e7c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar22 = piVar22 + 4;
    if (uVar15 == 0) break;
LAB_060818bc:
    if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
      puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_060818f0;
    }
  }
LAB_060818d4:
  puVar17 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar5,0);
LAB_060818f0:
  (*(code *)*puVar17)(plVar12,puVar17[1]);
  return plVar14;
}



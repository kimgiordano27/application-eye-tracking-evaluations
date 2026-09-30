/*
FUNCTION_NAME: FUN_0616d4bc
ENTRY_POINT: 0616d4bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0616dea0) */
/* WARNING: Removing unreachable block (ram,0x0616e0c4) */
/* WARNING: Removing unreachable block (ram,0x0616e398) */
/* WARNING: Removing unreachable block (ram,0x0616e3c0) */

void FUN_0616d4bc(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  
  if ((DAT_076ddadc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f078);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<AchievementDefinition>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UnitPreservation>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<JsonPosition>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DataColumn>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<JsonProperty>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DataTable>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DataView>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DataViewListener>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DebugData>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<JsonSchema>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DebugInspector>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<JsonSchemaModel>_TypeInfo);
    DAT_076ddadc = 1;
  }
  puVar8 = System_Collections_Generic_List<DebugInspector>_TypeInfo;
  puVar7 = System_Collections_Generic_List<DebugData>_TypeInfo;
  puVar6 = System_Collections_Generic_List<Color>_TypeInfo;
  puVar5 = System_Func<TransitionCancelEvent>_TypeInfo;
  puVar4 = System_Func<FocusOutEvent>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
  if ((param_2 != 0) && (lVar10 = *(long *)(param_2 + 0x68), lVar10 != 0)) {
    iVar18 = 0;
    while (iVar9 = FUN_058f278c(lVar10,0), iVar18 < iVar9) {
      plVar11 = *(long **)(param_2 + 0x68);
      if ((plVar11 == (long *)0x0) ||
         (lVar10 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310))
         , lVar10 == 0)) goto LAB_0616e2f8;
      *(long *)(lVar10 + 0x28) = param_2;
      thunk_FUN_0333a630((long *)(lVar10 + 0x28),param_2);
      plVar11 = *(long **)(param_2 + 0x68);
      if (plVar11 == (long *)0x0) goto LAB_0616e2f8;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar10 = *(long *)puVar6;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
        goto LAB_0616d6ac;
        FUN_0616f9d0(param_1,plVar11);
        if (*(long *)(param_2 + 0x80) != 0) {
          lVar10 = FUN_061a33b4(*(long *)(param_2 + 0x80),plVar11[0xd],0);
          puVar13 = (undefined8 *)System_Collections_Generic_List<DataTable>_TypeInfo;
          if (lVar10 != 0) goto FUN_0616db50;
          FUN_06280750(param_1,*(undefined8 *)(param_2 + 0x80),plVar11[0xd],plVar11,0);
          if ((*(long *)(param_2 + 0x48) != 0) &&
             (lVar10 = *(long *)(*(long *)(param_2 + 0x48) + 0xa0), lVar10 != 0)) {
            plVar12 = (long *)FUN_061a33b4(lVar10,plVar11[0xd],0);
            if (plVar12 != (long *)0x0) {
              lVar10 = *(long *)puVar6;
              bVar1 = *(byte *)(lVar10 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
              goto LAB_0616e37c;
            }
            plVar19 = plVar11 + 0xe;
            *plVar19 = (long)plVar12;
            thunk_FUN_0333a630(plVar19,plVar12);
            puVar13 = (undefined8 *)System_Collections_Generic_List<JsonSchemaModel>_TypeInfo;
            if (*plVar19 == 0) goto FUN_0616db50;
            FUN_0616fe48(param_1,plVar11);
            goto LAB_0616db64;
          }
        }
        goto LAB_0616e2f8;
      }
LAB_0616d6ac:
      plVar11 = *(long **)(param_2 + 0x68);
      if (plVar11 == (long *)0x0) goto LAB_0616e2f8;
      plVar12 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar12 == (long *)0x0) {
LAB_0616d6e4:
        plVar12 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_0616d6e4;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5) {
          plVar12 = (long *)0x0;
        }
      }
      plVar11 = *(long **)(param_2 + 0x68);
      if (plVar11 == (long *)0x0) goto LAB_0616e2f8;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar12 == (long *)0x0) {
        if (plVar11 == (long *)0x0) {
LAB_0616d79c:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_0616d79c;
          plVar12 = plVar11;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
            plVar12 = (long *)0x0;
          }
        }
        plVar11 = *(long **)(param_2 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_0616e2f8;
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar12 != (long *)0x0) {
          if (plVar11 == (long *)0x0) {
            FUN_0616e8d0(param_1,0,0);
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_0616e2fc:
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar11);
          }
          FUN_0616e8d0(param_1,plVar11,0);
          lVar10 = *(long *)(param_2 + 0x78);
          uVar14 = FUN_061ac6b8(plVar11,0);
          if (lVar10 != 0) {
            lVar10 = FUN_061a33b4(lVar10,uVar14,0);
            if (lVar10 != 0) {
              uVar14 = *(undefined8 *)puVar7;
              goto LAB_0616db54;
            }
            uVar20 = *(undefined8 *)(param_2 + 0x78);
            uVar14 = FUN_061ac6b8(plVar11,0);
            FUN_06280750(param_1,uVar20,uVar14,plVar11,0);
            if (*(long *)(param_2 + 0x48) != 0) {
              lVar10 = FUN_0619a944(*(long *)(param_2 + 0x48),0);
              uVar14 = FUN_061ac6b8(plVar11,0);
              if (lVar10 != 0) {
                plVar12 = (long *)FUN_061a33b4(lVar10,uVar14,0);
                puVar13 = (undefined8 *)System_Collections_Generic_List<JsonPosition>_TypeInfo;
                if (plVar12 != (long *)0x0) {
                  bVar1 = *(byte *)(*plVar12 + 0x130);
                  bVar2 = *(byte *)(*(long *)System_Func<UnitPreservation>_TypeInfo + 0x130);
                  if ((bVar1 < bVar2) ||
                     (lVar10 = *(long *)(*plVar12 + 200),
                     *(long *)(lVar10 + (ulong)bVar2 * 8 + -8) !=
                     *(long *)System_Func<UnitPreservation>_TypeInfo)) {
LAB_0616e37c:
                    /* WARNING: Subroutine does not return */
                    FUN_032d618c(plVar12);
                  }
                  bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                  puVar13 = (undefined8 *)System_Collections_Generic_List<DataColumn>_TypeInfo;
                  if ((bVar2 <= bVar1) &&
                     (*(long *)(lVar10 + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
                    plVar11[0x11] = (long)plVar12;
                    thunk_FUN_0333a630(plVar11 + 0x11,plVar12);
                    FUN_06170048(param_1,plVar11);
                    goto LAB_0616db64;
                  }
                }
                goto FUN_0616db50;
              }
            }
          }
          goto LAB_0616e2f8;
        }
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            plVar11 = *(long **)(param_2 + 0x68);
            if (plVar11 != (long *)0x0) {
              plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,iVar18,*(undefined8 *)(*plVar11 + 0x310));
              if (plVar11 == (long *)0x0) {
                FUN_0616f190(param_1,0,0);
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
              goto LAB_0616e2fc;
              FUN_0616f190(param_1,plVar11,0);
              lVar10 = *(long *)(param_2 + 0x78);
              uVar14 = FUN_061ac6b8(plVar11,0);
              if (lVar10 == 0) goto LAB_0616e2f8;
              lVar10 = FUN_061a33b4(lVar10,uVar14,0);
              puVar13 = (undefined8 *)System_Collections_Generic_List<DataView>_TypeInfo;
              if (lVar10 == 0) {
                uVar20 = *(undefined8 *)(param_2 + 0x78);
                uVar14 = FUN_061ac6b8(plVar11,0);
                FUN_06280750(param_1,uVar20,uVar14,plVar11,0);
                if (*(long *)(param_2 + 0x48) == 0) goto LAB_0616e2f8;
                lVar10 = FUN_0619a944(*(long *)(param_2 + 0x48),0);
                uVar14 = FUN_061ac6b8(plVar11,0);
                if (lVar10 == 0) goto LAB_0616e2f8;
                plVar12 = (long *)FUN_061a33b4(lVar10,uVar14,0);
                puVar13 = (undefined8 *)System_Collections_Generic_List<JsonProperty>_TypeInfo;
                if (plVar12 != (long *)0x0) {
                  bVar1 = *(byte *)(*plVar12 + 0x130);
                  bVar2 = *(byte *)(*(long *)System_Func<UnitPreservation>_TypeInfo + 0x130);
                  if ((bVar1 < bVar2) ||
                     (lVar10 = *(long *)(*plVar12 + 200),
                     *(long *)(lVar10 + (ulong)bVar2 * 8 + -8) !=
                     *(long *)System_Func<UnitPreservation>_TypeInfo)) goto LAB_0616e37c;
                  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                  puVar13 = (undefined8 *)System_Collections_Generic_List<DataViewListener>_TypeInfo
                  ;
                  if ((bVar2 <= bVar1) &&
                     (*(long *)(lVar10 + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
                    plVar11[0x11] = (long)plVar12;
                    thunk_FUN_0333a630(plVar11 + 0x11,plVar12);
                    System_Xml_Serialization_XmlSerializationWriter__WriteSerializable
                              (param_1,plVar11);
                    goto LAB_0616db64;
                  }
                }
              }
FUN_0616db50:
              uVar14 = *puVar13;
              goto LAB_0616db54;
            }
            goto LAB_0616e2f8;
          }
        }
      }
      else {
        if (plVar11 == (long *)0x0) {
          FUN_0616e7d0(param_1,0);
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
        goto LAB_0616e2fc;
        FUN_0616e7d0(param_1,plVar11);
        if (*(long *)(param_2 + 0x70) == 0) goto LAB_0616e2f8;
        lVar10 = FUN_061a33b4(*(long *)(param_2 + 0x70),plVar11[0xd],0);
        if (lVar10 == 0) {
          FUN_06280750(param_1,*(undefined8 *)(param_2 + 0x70),plVar11[0xd],plVar11,0);
          if ((*(long *)(param_2 + 0x48) != 0) &&
             (lVar10 = FUN_0619a8d4(*(long *)(param_2 + 0x48),0), lVar10 != 0)) {
            plVar12 = (long *)FUN_061a33b4(lVar10,plVar11[0xd],0);
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
              goto LAB_0616e37c;
            }
            plVar19 = plVar11 + 0xe;
            *plVar19 = (long)plVar12;
            thunk_FUN_0333a630(plVar19,plVar12);
            puVar13 = (undefined8 *)System_Collections_Generic_List<JsonSchema>_TypeInfo;
            if (*plVar19 == 0) goto FUN_0616db50;
            FUN_0616fee0(param_1,plVar11);
            goto LAB_0616db64;
          }
          goto LAB_0616e2f8;
        }
        uVar14 = *(undefined8 *)puVar8;
LAB_0616db54:
        FUN_06280f9c(param_1,uVar14,plVar11,0);
      }
LAB_0616db64:
      lVar10 = *(long *)(param_2 + 0x68);
      iVar18 = iVar18 + 1;
      if (lVar10 == 0) goto LAB_0616e2f8;
    }
    if (*(long *)(param_2 + 0x80) != 0) {
      plVar11 = (long *)FUN_061a3508(*(long *)(param_2 + 0x80),0);
      puVar7 = System_Collections_Generic_List<AchievementDefinition>_TypeInfo;
      puVar6 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
      puVar5 = PTR_DAT_0727f078;
      puVar4 = PTR_DAT_0727a180;
      puVar3 = PTR_DAT_07279f60;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      goto LAB_0616dcc4;
    }
  }
  goto LAB_0616e2f8;
LAB_0616dcc4:
  lVar15 = *plVar11;
  lVar10 = *(long *)puVar4;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == lVar10) {
        puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0616dd10;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,0);
LAB_0616dd10:
  uVar16 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  if ((uVar16 & 1) == 0) {
    plVar11 = (long *)thunk_FUN_032a55a4(plVar11,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_0616de94;
    lVar10 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 == 0) goto LAB_0616de6c;
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_0616de54;
  }
  lVar15 = *plVar11;
  lVar10 = *(long *)puVar4;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == lVar10) {
        puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_0616dd70;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,1);
LAB_0616dd70:
  plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
  plVar12 = (long *)thunk_FUN_032a57f4();
  if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(*(long *)(param_2 + 0x48) + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  plVar19 = (long *)*plVar12;
  plVar12 = (long *)plVar12[1];
  if (plVar19 != (long *)0x0) {
    lVar10 = *(long *)puVar6;
    if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
    {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar19,lVar10);
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar10 = *(long *)puVar7;
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
    {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar12,lVar10);
    }
  }
  FUN_061a2ed8();
  goto LAB_0616dcc4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0616de54:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0616de88;
    }
  }
LAB_0616de6c:
  puVar13 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
LAB_0616de88:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
LAB_0616de94:
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar11 = (long *)FUN_061a3508(*(long *)(param_2 + 0x70),0);
    puVar7 = System_Collections_Generic_List<AchievementDefinition>_TypeInfo;
    puVar6 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar5 = PTR_DAT_0727f078;
    puVar4 = PTR_DAT_0727a180;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar11;
      lVar10 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto 
            System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo__FixupMembers
            ;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,0);
System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo__FixupMembers:
      uVar16 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_032a55a4(plVar11,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_0616e0b8;
        lVar10 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_0616e090;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0616e078;
      }
      lVar15 = *plVar11;
      lVar10 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0616df88;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,1);
LAB_0616df88:
      plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c();
      }
      plVar12 = (long *)thunk_FUN_032a57f4();
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar19 = (long *)*plVar12;
      plVar12 = (long *)plVar12[1];
      lVar10 = FUN_0619a8d4(*(long *)(param_2 + 0x48),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar19);
        }
      }
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar12);
        }
      }
      FUN_061a2ed8(lVar10,plVar19,plVar12,0);
    } while( true );
  }
  goto LAB_0616e2f8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0616e298:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0616e2cc;
    }
  }
LAB_0616e2b0:
  puVar13 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
LAB_0616e2cc:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0616e078:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto FUN_0616e0ac;
    }
  }
LAB_0616e090:
  puVar13 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
FUN_0616e0ac:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
LAB_0616e0b8:
  if (*(long *)(param_2 + 0x78) != 0) {
    plVar11 = (long *)FUN_061a3508(*(long *)(param_2 + 0x78),0);
    puVar7 = System_Collections_Generic_List<AchievementDefinition>_TypeInfo;
    puVar6 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar5 = PTR_DAT_0727f078;
    puVar4 = PTR_DAT_0727a180;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar11;
      lVar10 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0616e14c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,0);
LAB_0616e14c:
      uVar16 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_032a55a4(plVar11,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_0616e2b0;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0616e298;
      }
      lVar15 = *plVar11;
      lVar10 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0616e1ac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar11,lVar10,1);
LAB_0616e1ac:
      plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c();
      }
      plVar12 = (long *)thunk_FUN_032a57f4();
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar19 = (long *)*plVar12;
      plVar12 = (long *)plVar12[1];
      lVar10 = FUN_0619a944(*(long *)(param_2 + 0x48),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar19);
        }
      }
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar12);
        }
      }
      FUN_061a2ed8(lVar10,plVar19,plVar12,0);
    } while( true );
  }
LAB_0616e2f8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



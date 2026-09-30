/*
FUNCTION_NAME: FUN_069dedfc
ENTRY_POINT: 069dedfc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_069dedfc(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  
  puVar3 = Method_System_Nullable<DefaultValueHandling>__ctor__;
  if ((DAT_076e2143 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>_Add__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__);
    thunk_FUN_032e1da0(Method_System_Nullable<NativeArray<float>>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<DefaultValueHandling>__ctor__);
    DAT_076e2143 = 1;
  }
  plVar9 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_069e7ed4(plVar9,0);
  puVar3 = 
  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
  ;
  plVar19 = (long *)param_1[3];
  if (plVar19 == (long *)0x0) {
LAB_069e0250:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar15 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)
           Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
         ) {
        puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_069def04;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_032937ac(plVar19,*(long *)
                                  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
                         ,0);
LAB_069def04:
  uVar11 = (*(code *)*puVar10)(plVar19,1,puVar10[1]);
  if (plVar9 == (long *)0x0) goto LAB_069e0250;
  (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
  puVar2 = Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__;
  plVar19 = (long *)param_1[3];
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar15 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)
           Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__) {
        puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_069def8c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_032937ac(plVar19,*(long *)
                                  Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
                         ,1);
LAB_069def8c:
  iVar8 = (*(code *)*puVar10)(plVar19,1,puVar10[1]);
  puVar7 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
  puVar6 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__;
  puVar5 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__;
  puVar4 = 
  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>_Add__
  ;
  if (iVar8 - 4U < 8) {
switchD_069defe8_caseD_2e:
    plVar19 = (long *)param_1[4];
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar15 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
          goto LAB_069df08c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_032937ac(plVar19,*(long *)
                                    Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                           ,3);
LAB_069df08c:
    plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
    if (plVar19 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar19);
      }
    }
    lVar15 = *(long *)puVar7;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar15 = *(long *)puVar7;
    }
    FUN_068871f4(param_1,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x178),0);
    plVar12 = (long *)FUN_069e0290(param_1);
    lVar15 = param_1[2];
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    plVar20 = (long *)param_1[4];
    uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar15 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
          goto LAB_069df184;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069df184:
    (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
    plVar9[4] = plVar12[4];
    thunk_FUN_0333a630();
  }
  else {
    switch(iVar8) {
    case 0x27:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_069df654;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_032937ac(plVar19,*(long *)
                                      Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                             ,3);
LAB_069df654:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar19);
        }
      }
      lVar15 = *(long *)puVar7;
      lVar16 = param_1[3];
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar15 = *(long *)puVar7;
      }
      lVar15 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,lVar16,0x27,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x1a0),
                          *(undefined8 *)(*param_1 + 0x1c0));
      if (lVar15 == 0) {
        lVar16 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar4;
        lVar16 = thunk_FUN_032a55a4(lVar15,uVar11);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar15,uVar11);
        }
      }
      plVar12 = (long *)param_1[4];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_069df850;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_069df850:
      plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar16,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar12);
        }
      }
      plVar20 = (long *)param_1[4];
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_069df984;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069df984:
      (*(code *)*puVar10)(plVar20,plVar19,plVar12,puVar10[1]);
      FUN_068871f4(param_1,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1a8),0);
      plVar12 = (long *)FUN_069e0290(param_1);
      lVar15 = param_1[2];
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar20 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_069dfafc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069dfafc:
      (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
      lVar16 = plVar12[4];
      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__)
      ;
      FUN_069e8e30(lVar15,1,lVar16,0);
      plVar9[4] = lVar15;
      thunk_FUN_0333a630(plVar9 + 4,lVar15);
      break;
    default:
      lVar15 = param_1[3];
      thunk_FUN_032e1da0(
                        Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
                        );
      uVar11 = thunk_FUN_032a56a0();
      uVar14 = thunk_FUN_032e1da0(PTR_DAT_072798c8);
      FUN_068837d4(uVar11,uVar14,0x11,0,lVar15,0);
      uVar14 = thunk_FUN_032e1da0(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar14);
    case 0x2b:
    case 0x2c:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_069df24c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_032937ac(plVar19,*(long *)
                                      Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                             ,3);
LAB_069df24c:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar19);
        }
      }
      plVar12 = (long *)param_1[3];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar3;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_0000098B_PostfixBurstDelegate__Invoke
            ;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar12,lVar15,0);

      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_0000098B_PostfixBurstDelegate__Invoke
      :
      uVar11 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
      plVar12 = (long *)param_1[3];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_069df34c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar2,1);
LAB_069df34c:
      iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
      if (0x2a < iVar8) {
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_069df3bc;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar2,1);
LAB_069df3bc:
        iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
        if (iVar8 < 0x2d) {
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_069df428;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar2,0);
LAB_069df428:
          (*(code *)*puVar10)(plVar12,puVar10[1]);
          plVar12 = (long *)param_1[4];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_069df488;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_069df488:
          plVar20 = (long *)(*(code *)*puVar10)(plVar12,uVar11,puVar10[1]);
          if (plVar20 != (long *)0x0) {
            lVar15 = *(long *)puVar5;
            if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                lVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar20,lVar15);
            }
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_069df51c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,6);
LAB_069df51c:
          (*(code *)*puVar10)(plVar12,plVar19,plVar20,puVar10[1]);
          if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(undefined1 *)(param_1[2] + 0x1c) = 0;
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar15 = *(long *)puVar7;
          }
          FUN_068871f4(param_1,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x188),0);
          plVar12 = (long *)FUN_069e0290(param_1);
          lVar15 = param_1[2];
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar20 = (long *)param_1[4];
          uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar15 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_069df5f4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069df5f4:
          (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
          lVar16 = plVar12[4];
          lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__
                                     );
          FUN_069e8e30(lVar15,0,lVar16,0);
          plVar9[4] = lVar15;
          thunk_FUN_0333a630(plVar9 + 4,lVar15);
          break;
        }
      }
      lVar15 = param_1[3];
      thunk_FUN_032e1da0(Method_System_Collections_Generic_List<List<IntPoint>>__ctor__);
      uVar11 = thunk_FUN_032a56a0();
      FUN_0688b774(uVar11,0,lVar15,0);
      uVar14 = thunk_FUN_032e1da0(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar14);
    case 0x2d:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_069df754;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_032937ac(plVar19,*(long *)
                                      Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                             ,3);
LAB_069df754:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar19);
        }
      }
      lVar15 = *(long *)puVar7;
      lVar16 = param_1[3];
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar15 = *(long *)puVar7;
      }
      lVar15 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,lVar16,0x2d,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 400),
                          *(undefined8 *)(*param_1 + 0x1c0));
      if (lVar15 == 0) {
        lVar16 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar4;
        lVar16 = thunk_FUN_032a55a4(lVar15,uVar11);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar15,uVar11);
        }
      }
      plVar12 = (long *)param_1[4];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_069df8e8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_069df8e8:
      plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar16,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar12);
        }
      }
      plVar20 = (long *)param_1[4];
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_069dfa40;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069dfa40:
      (*(code *)*puVar10)(plVar20,plVar19,plVar12,puVar10[1]);
      FUN_068871f4(param_1,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x198),0);
      plVar12 = (long *)FUN_069e0290(param_1);
      lVar15 = param_1[2];
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar20 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_069dfb5c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar20,*(long *)puVar6,6);
LAB_069dfb5c:
      (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
      lVar16 = plVar12[4];
      lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__)
      ;
      FUN_069e8e30(lVar15,2,lVar16,0);
      plVar9[4] = lVar15;
      thunk_FUN_0333a630(plVar9 + 4,lVar15);
      break;
    case 0x2e:
      goto switchD_069defe8_caseD_2e;
    }
  }
  plVar12 = (long *)param_1[3];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar16 = *plVar12;
  lVar15 = *(long *)puVar3;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar15) {
        puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_069dfbfc;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_032937ac(plVar12,lVar15,0);
LAB_069dfbfc:
  uVar11 = (*(code *)*puVar10)(plVar12,0xffffffff,puVar10[1]);
  (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1b0));
  plVar12 = (long *)param_1[4];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar15 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
        puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
        goto LAB_069dfc78;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,8);
LAB_069dfc78:
  plVar19 = (long *)(*(code *)*puVar10)(plVar12,plVar19,puVar10[1]);
  if (plVar19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar19);
    }
  }
  (**(code **)(*plVar9 + 0x1c8))(plVar9,plVar19,*(undefined8 *)(*plVar9 + 0x1d0));
  plVar19 = (long *)param_1[4];
  uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  lVar15 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  lVar16 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar21 = *(long *)puVar6;
  uVar14 = *(undefined8 *)puVar4;
  if (lVar15 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_032a55a4(lVar15,uVar14);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(lVar15,uVar14);
    }
    uVar14 = *(undefined8 *)puVar4;
  }
  if (lVar16 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = thunk_FUN_032a55a4(lVar16,uVar14);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(lVar16,uVar14);
    }
  }
  lVar16 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar21) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x13) * 0x10 + 0x138);
        goto LAB_069dfdb8;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_032937ac(plVar19,lVar21,0x13);
LAB_069dfdb8:
  (*(code *)*puVar10)(plVar19,uVar11,lVar13,lVar15,puVar10[1]);
  return plVar9;
}



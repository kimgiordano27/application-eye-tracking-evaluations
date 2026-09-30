/*
FUNCTION_NAME: FUN_069e13a8
ENTRY_POINT: 069e13a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * FUN_069e13a8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 local_68;
  
  puVar2 = Method_System_Nullable<double>__ctor__;
  if ((DAT_076e2145 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727a7d0);
    thunk_FUN_032e1da0(PTR_DAT_0727e390);
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
    thunk_FUN_032e1da0(Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<double>__ctor__);
    DAT_076e2145 = 1;
  }
  plVar7 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_069e804c(plVar7,0);
  puVar2 = 
  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
  ;
  plVar15 = (long *)param_1[3];
  if (plVar15 != (long *)0x0) {
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
           ) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_069e14cc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar15,*(long *)
                                   Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
                          ,0);
LAB_069e14cc:
    uVar9 = (*(code *)*puVar8)(plVar15,1,puVar8[1]);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x188))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 400));
      plVar15 = (long *)param_1[3];
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
             ) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_069e1554;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_032937ac(plVar15,*(long *)
                                     Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
                            ,1);
LAB_069e1554:
      uVar6 = (*(code *)*puVar8)(plVar15,1,puVar8[1]);
      puVar4 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__;
      puVar3 = 
      Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>_Add__
      ;
      switch(uVar6) {
      case 4:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1a88;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1a88:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,4,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1e0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_032a55a4(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_069e1f94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,0);
LAB_069e1f94:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e22bc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar19,*(long *)puVar4,6);
LAB_069e22bc:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_069e2568;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,10);
LAB_069e2568:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        }
        uVar6 = FUN_059212b0(uVar9,0);
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                   );
        FUN_069e9050(lVar12,uVar6,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar7[4] = lVar12;
        thunk_FUN_0333a630(plVar7 + 4,lVar12);
        break;
      case 5:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1b98;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1b98:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,5,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1e8),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_032a55a4(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_069e2034;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,0);
LAB_069e2034:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e2338;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar19,*(long *)puVar4,6);
LAB_069e2338:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_069e25cc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,10);
LAB_069e25cc:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        }
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        local_68 = FUN_0590b5d8(uVar9,0xa7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
        uVar9 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_0727e390,&local_68);
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                   );
        FUN_069e8eec(lVar12,uVar9,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar7[4] = lVar12;
        thunk_FUN_0333a630(plVar7 + 4,lVar12);
        break;
      case 6:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1868;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1868:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,6,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1f0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_032a55a4(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_069e1e54;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,0);
LAB_069e1e54:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e21d0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar19,*(long *)puVar4,6);
LAB_069e21d0:
        uVar9 = (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_069e2504;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,10);
LAB_069e2504:
          uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          uVar11 = uVar9;
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar9,uVar11);
        }
        uVar9 = FUN_069d50a0();
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                   );
        FUN_069e9014(lVar12,uVar9,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar7[4] = lVar12;
        thunk_FUN_0333a630(plVar7 + 4,lVar12);
        break;
      case 7:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1978;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1978:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x1f8),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          plVar17 = (long *)thunk_FUN_032a55a4(lVar12,uVar9);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_069e1ef4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,0);
LAB_069e1ef4:
        plVar18 = (long *)(*(code *)*puVar8)(plVar18,plVar17,puVar8[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e2254;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar19,*(long *)puVar4,6);
LAB_069e2254:
        (*(code *)*puVar8)(plVar19,plVar15,plVar18,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          lVar12 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_069e2408;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,10);
LAB_069e2408:
          lVar12 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          lVar16 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                goto LAB_069e2468;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar3,10);
LAB_069e2468:
          lVar16 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          if (lVar16 != 0) {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar9 = FUN_057ac834(lVar12,1,*(int *)(lVar16 + 0x10) + -2,0);
            if (*(int *)(*(long *)PTR_DAT_0727a7d0 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar9 = FUN_05904f80(uVar9,0);
            lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                       );
            FUN_069e914c(lVar12,uVar9,0);
            plVar7[4] = lVar12;
            thunk_FUN_0333a630(plVar7 + 4,lVar12);
            break;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      case 8:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1758;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1758:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,8,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x200),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          lVar16 = 0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          lVar16 = thunk_FUN_032a55a4(lVar12,uVar9);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000995_PostfixBurstDelegate__Invoke
              ;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar4,0);

        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000995_PostfixBurstDelegate__Invoke
        :
        plVar17 = (long *)(*(code *)*puVar8)(plVar17,lVar16,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar17);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e2178;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,6);
LAB_069e2178:
        (*(code *)*puVar8)(plVar18,plVar15,plVar17,puVar8[1]);
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                   );
        FUN_069e91cc(lVar12,1,0);
        plVar7[4] = lVar12;
        thunk_FUN_0333a630(plVar7 + 4,lVar12);
        break;
      case 9:
        plVar15 = (long *)param_1[4];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_069e1ca8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)
                                       Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__
                              ,3);
LAB_069e1ca8:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar15);
          }
        }
        lVar16 = param_1[3];
        lVar12 = *(long *)Method_System_Nullable<NativeArray<float>>_get_HasValue__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        lVar12 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar16,9,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x208),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar12 == 0) {
          lVar16 = 0;
        }
        else {
          uVar9 = *(undefined8 *)puVar3;
          lVar16 = thunk_FUN_032a55a4(lVar12,uVar9);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(lVar12,uVar9);
          }
        }
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_069e20d4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar4,0);
LAB_069e20d4:
        plVar17 = (long *)(*(code *)*puVar8)(plVar17,lVar16,puVar8[1]);
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar17);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_069e23b0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar4,6);
LAB_069e23b0:
        (*(code *)*puVar8)(plVar18,plVar15,plVar17,puVar8[1]);
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__
                                   );
        FUN_069e91cc(lVar12,0,0);
        plVar7[4] = lVar12;
        thunk_FUN_0333a630(plVar7 + 4,lVar12);
        break;
      default:
        lVar12 = param_1[3];
        thunk_FUN_032e1da0(
                          Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
                          );
        uVar9 = thunk_FUN_032a56a0();
        uVar11 = thunk_FUN_032e1da0(PTR_DAT_072798c8);
        FUN_068837d4(uVar9,uVar11,0x14,0,lVar12,0);
        uVar11 = thunk_FUN_032e1da0(Method_System_Nullable<double>_GetHashCode__);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar9,uVar11);
      }
      plVar17 = (long *)param_1[3];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_069e26ac;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar2,0);
LAB_069e26ac:
      uVar9 = (*(code *)*puVar8)(plVar17,0xffffffff,puVar8[1]);
      (**(code **)(*plVar7 + 0x1a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x1b0));
      plVar17 = (long *)param_1[4];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto LAB_069e2728;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar4,8);
LAB_069e2728:
      plVar15 = (long *)(*(code *)*puVar8)(plVar17,plVar15,puVar8[1]);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__ +
                         0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>__ctor__)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar15);
        }
      }
      (**(code **)(*plVar7 + 0x1c8))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x1d0));
      plVar15 = (long *)param_1[4];
      uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      lVar12 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      lVar16 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar20 = *(long *)puVar4;
      uVar11 = *(undefined8 *)puVar3;
      if (lVar12 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_032a55a4(lVar12,uVar11);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar12,uVar11);
        }
        uVar11 = *(undefined8 *)puVar3;
      }
      if (lVar16 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = thunk_FUN_032a55a4(lVar16,uVar11);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar16,uVar11);
        }
      }
      lVar16 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar20) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
            goto LAB_069e2870;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar15,lVar20,0x13);
LAB_069e2870:
      (*(code *)*puVar8)(plVar15,uVar9,lVar10,lVar12,puVar8[1]);
      return plVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}



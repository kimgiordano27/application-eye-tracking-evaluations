/*
FUNCTION_NAME: FUN_06463d4c
ENTRY_POINT: 06463d4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


void FUN_06463d4c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  
  if ((DAT_071cdaae & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<Type>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
                    /* try { // try from 06463d9c to 06563e8f has its CatchHandler @ 06463d9c
                       catch() { ... } // from try @ 06463d9c with catch @ 06463d9c
                       catch() { ... } // from try @ 06463f9c with catch @ 06463d9c
                       catch() { ... } // from try @ 06463fd4 with catch @ 06463d9c
                       catch() { ... } // from try @ 06464010 with catch @ 06463d9c
                       catch() { ... } // from try @ 06464040 with catch @ 06463d9c */
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Transform>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Vector3>_TypeInfo);
    DAT_071cdaae = 1;
  }
  puVar3 = System_Collections_Generic_HashSet<Transform>_TypeInfo;
  if (param_2 != 0) {
    lVar16 = *(long *)System_Collections_Generic_HashSet<Transform>_TypeInfo;
    plVar9 = (long *)thunk_FUN_02ef170c(param_2,lVar16);
    if (plVar9 == (long *)0x0) {
LAB_064645e4:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_2,lVar16);
    }
    lVar16 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_06463e38;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,5);
LAB_06463e38:
    lVar16 = (*(code *)*puVar10)(plVar9,1,puVar10[1]);
    plVar17 = (long *)(param_1 + 0xa8);
    *plVar17 = lVar16;
    thunk_FUN_02f411dc(plVar17,lVar16);
    lVar16 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    /* try { // try from 06463ea0 to 06563eb3 has its CatchHandler @ 06463fe8 */
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_06463eac;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
                    /* try { // try from 06463e90 to 06563e9b has its CatchHandler @ 06463ff0 */
    puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,3);
LAB_06463eac:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar4 = System_Collections_Generic_HashSet<uint>_TypeInfo;
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 06463ec0 to 06563ed3 has its CatchHandler @ 06463fe0 */
      lVar16 = *plVar11;
      lVar18 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
                    /* try { // try from 06463eec to 06563f17 has its CatchHandler @ 06463ff4 */
          if (*(long *)(piVar14 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
            goto LAB_06463f1c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar11,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,0x12
                            );
LAB_06463f1c:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,lVar18,puVar10[1]);
      puVar5 = System_Collections_Generic_HashSet<Vector3>_TypeInfo;
      puVar2 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
      if (plVar12 != (long *)0x0) {
                    /* try { // try from 06463f30 to 06563f37 has its CatchHandler @ 06463fec */
        *(long *)(param_1 + 0xa0) = (long)plVar12;
        thunk_FUN_02f411dc((long *)(param_1 + 0xa0),plVar12);
        lVar16 = *plVar12;
                    /* try { // try from 06463f50 to 06563f6f has its CatchHandler @ 06463fd8 */
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_06464028;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
                    /* try { // try from 06463f7c to 06563f83 has its CatchHandler @ 06463fd4 */
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,2);
LAB_06464028:
        iVar6 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if (iVar6 < 1) {
          lVar16 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                goto LAB_064641a4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,5);
LAB_064641a4:
          lVar16 = (*(code *)*puVar10)(plVar9,0xffffffff,puVar10[1]);
          if (lVar16 == 0) {
            return;
          }
          iVar6 = -1;
          do {
            lVar18 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
                  goto LAB_06464210;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar4,0x12);
LAB_06464210:
            plVar17 = (long *)(*(code *)*puVar10)(plVar11,lVar16,puVar10[1]);
            if (plVar17 != (long *)0x0) {
              lVar16 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_06464278;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar2,2);
LAB_06464278:
              iVar8 = (*(code *)*puVar10)(plVar17,puVar10[1]);
              if (0 < iVar8) {
                lVar16 = *plVar17;
                uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar13 == 0)
                goto 
                Unity_VisualScripting_FullSerializer_fsSerializer_fsLazyCycleDefinitionWriter__WriteDefinition
                ;
                piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_06464424;
              }
            }
            lVar16 = *plVar9;
            iVar6 = iVar6 + -1;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                  goto LAB_064642e0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,5);
LAB_064642e0:
            lVar16 = (*(code *)*puVar10)(plVar9,iVar6,puVar10[1]);
            if (lVar16 == 0) {
              return;
            }
          } while( true );
        }
        lVar16 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_0646410c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,2);
LAB_0646410c:
        uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        *(undefined4 *)(param_1 + 0xb4) = uVar7;
        lVar16 = *plVar12;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_0646416c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,4);
LAB_0646416c:
        uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        *(undefined4 *)(param_1 + 0xb8) = uVar7;
        return;
      }
                    /* try { // try from 06463f90 to 06563f9b has its CatchHandler @ 06463fec */
                    /* try { // try from 06463f9c to 06563fc3 has its CatchHandler @ 06463d9c */
      lVar16 = thunk_FUN_02ef170c(*plVar17,*(undefined8 *)
                                            System_Collections_Generic_HashSet<Vector3>_TypeInfo);
      param_2 = *plVar17;
      if (lVar16 == 0) {
        lVar16 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
              goto FUN_0646445c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar4,0xe);
FUN_0646445c:
        uVar7 = (*(code *)*puVar10)(plVar11,param_2,puVar10[1]);
        lVar16 = *plVar11;
        lVar18 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
              goto LAB_064644c4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar4,0x10);
LAB_064644c4:
        uVar15 = (*(code *)*puVar10)(plVar11,lVar18,puVar10[1]);
        lVar16 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_HashSet<Type>_TypeInfo
                                   );
        *(undefined4 *)(lVar16 + 0x18) = 0xffffffff;
        *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
        FUN_05645a04(lVar16,0);
        *(undefined4 *)(lVar16 + 0x10) = uVar7;
        *(undefined4 *)(lVar16 + 0x1c) = 0;
        *(undefined8 *)(lVar16 + 0x28) = uVar15;
        thunk_FUN_02f411dc((undefined8 *)(lVar16 + 0x28),uVar15);
        *(long *)(param_1 + 0xa0) = lVar16;
LAB_06464528:
        thunk_FUN_02f411dc(param_1 + 0xa0,lVar16);
        return;
      }
      if (param_2 != 0) {
        uVar15 = *(undefined8 *)puVar5;
        lVar16 = thunk_FUN_02ef170c(param_2,uVar15);
        if (lVar16 != 0) {
          lVar16 = *(long *)puVar5;
                    /* try { // try from 06463fc4 to 06563fc7 has its CatchHandler @ 06463ff0 */
                    /* try { // try from 06463fc8 to 06563fcb has its CatchHandler @ 06463fe4 */
                    /* try { // try from 06463fcc to 06563fcf has its CatchHandler @ 06463fdc */
          plVar9 = (long *)thunk_FUN_02ef170c(param_2,lVar16);
                    /* try { // try from 06463fd0 to 06563fd3 has its CatchHandler @ 06463ff4 */
          if (plVar9 == (long *)0x0) goto LAB_064645e4;
                    /* catch() { ... } // from try @ 06463f7c with catch @ 06463fd4
                       try { // try from 06463fd4 to 0656400b has its CatchHandler @ 06463d9c */
          lVar18 = *plVar9;
                    /* catch() { ... } // from try @ 06463f50 with catch @ 06463fd8 */
                    /* catch() { ... } // from try @ 06463fcc with catch @ 06463fdc */
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    /* catch() { ... } // from try @ 06463ec0 with catch @ 06463fe0 */
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar16) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
                goto LAB_0646430c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar9,lVar16,0xc);
LAB_0646430c:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          param_2 = *(long *)(param_1 + 0xa8);
          *(undefined4 *)(param_1 + 0xb4) = uVar7;
          if (param_2 == 0) goto LAB_064645cc;
          uVar15 = *(undefined8 *)puVar5;
          lVar16 = thunk_FUN_02ef170c(param_2,uVar15);
          if (lVar16 != 0) {
            lVar16 = *(long *)puVar5;
            plVar9 = (long *)thunk_FUN_02ef170c(param_2,lVar16);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(param_2,lVar16);
            }
            lVar18 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar16) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
                  goto LAB_064643a0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02eea86c(plVar9,lVar16,0xd);
LAB_064643a0:
            uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            plVar9 = *(long **)(param_1 + 0xa8);
            *(undefined4 *)(param_1 + 0xb8) = uVar7;
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar16 = *plVar9;
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if (*(byte *)(lVar16 + 0x130) < bVar1) {
              return;
            }
            if (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo) {
              return;
            }
            lVar16 = (**(code **)(lVar16 + 0x4b8))(plVar9,*(undefined8 *)(lVar16 + 0x4c0));
            *(long *)(param_1 + 0xa0) = lVar16;
            goto LAB_06464528;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(param_2,uVar15);
      }
    }
  }
LAB_064645cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06464424:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
      goto LAB_06464550;
    }
  }
Unity_VisualScripting_FullSerializer_fsSerializer_fsLazyCycleDefinitionWriter__WriteDefinition:
  puVar10 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar2,2);
LAB_06464550:
  uVar7 = (*(code *)*puVar10)(plVar17,puVar10[1]);
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  lVar16 = *plVar17;
  uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 4) * 0x10 + 0x138);
        goto FUN_064645b0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar17,*(long *)puVar2,4);
FUN_064645b0:
  uVar7 = (*(code *)*puVar10)(plVar17,puVar10[1]);
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  return;
}



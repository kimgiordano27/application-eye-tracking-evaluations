/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePresent
ENTRY_POINT: 05165434
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePresent(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long in_x9;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  undefined8 unaff_x21;
  long lVar20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w25;
  uint uVar21;
  undefined8 unaff_x27;
  uint uStack000000000000000c;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
  if (in_x9 != 0) {
    piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == param_3) {
        puVar8 = (undefined8 *)(param_1 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_05165478;
      }
      in_x9 = in_x9 + -1;
      piVar17 = piVar17 + 4;
    } while (in_x9 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05165478:
  lVar9 = (*(code *)*puVar8)();
  puVar6 = PTR_DAT_06782610;
  puVar5 = PTR_DAT_06782408;
  puVar4 = PTR_DAT_067823b8;
  puVar3 = PTR_DAT_06764ee8;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
      return;
    }
    if (*(int *)(lVar9 + 0x18) != 1) {
      uVar21 = 0;
      lVar19 = 0;
      lVar9 = 0;
      uStack000000000000000c = unaff_w25;
      do {
        lVar14 = *unaff_x23;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x22) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_05165564;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165564:
        lVar14 = (*(code *)*puVar8)(unaff_x23,puVar8[1]);
        if (lVar14 == 0) goto LAB_05165c08;
        if (*(int *)(lVar14 + 0x18) <= (int)uVar21) {
          if (lVar19 != 0) {
            System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                      (&stack0x00000040,lVar19,*(undefined8 *)PTR_DAT_06782608);
            puVar3 = PTR_DAT_06782620;
            goto LAB_051659e4;
          }
          lVar9 = *unaff_x23;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar15 == 0) goto LAB_05165ae4;
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_05165acc;
        }
        lVar14 = *unaff_x23;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x22) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_051655d0;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051655d0:
        lVar14 = (*(code *)*puVar8)(unaff_x23,puVar8[1]);
        if (lVar14 == 0) goto LAB_05165c08;
        uVar12 = FUN_03aac1c4(lVar14,uVar21,*(undefined8 *)puVar5);
        lVar14 = FUN_05164b1c(uVar12,uVar12,unaff_x21);
        if (lVar19 == 0) {
          if (lVar9 == 0) {
            lVar19 = 0;
          }
          else {
            uVar15 = thunk_FUN_04e8bd3c(lVar14,lVar9,0);
            if ((uVar15 & 1) == 0) {
              lVar19 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763f10);
              FUN_04894d4c(lVar19,*(undefined8 *)PTR_DAT_06763f18);
              if (uVar21 < 2) {
                lVar11 = *unaff_x23;
                uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *unaff_x22) {
                      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                      goto LAB_05165964;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165964:
                lVar11 = (*(code *)*puVar8)(unaff_x23,puVar8[1]);
                if ((lVar11 == 0) ||
                   (lVar11 = FUN_03aac1c4(lVar11,0,*(undefined8 *)puVar5), lVar19 == 0))
                goto LAB_05165c08;
                uVar13 = *(undefined8 *)puVar3;
              }
              else {
                lVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
                FUN_03aabcd0(lVar11,uVar21,*(undefined8 *)PTR_DAT_067823c0);
                uVar18 = 0;
                do {
                  lVar20 = *unaff_x23;
                  uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *unaff_x22) {
                        puVar8 = (undefined8 *)(lVar20 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                        goto LAB_051658b4;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051658b4:
                  lVar20 = (*(code *)*puVar8)(unaff_x23,puVar8[1]);
                  if ((lVar20 == 0) ||
                     (uVar13 = FUN_03aac1c4(lVar20,uVar18,*(undefined8 *)puVar5), lVar11 == 0))
                  goto LAB_05165c08;
                  lVar20 = *(long *)(lVar11 + 0x10);
                  lVar16 = *(long *)puVar4;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar20 == 0) goto LAB_05165c08;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar20 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                    thunk_FUN_02dd37b4();
                  }
                  else {
                    FUN_03aac494(lVar11,uVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 != uVar21);
                if (lVar19 == 0) goto LAB_05165c08;
                uVar13 = *(undefined8 *)puVar3;
              }
              FUN_048956f0(lVar19,lVar9,lVar11,uVar13);
              uVar13 = *(undefined8 *)puVar3;
              goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume;
            }
            lVar19 = 0;
            lVar14 = lVar9;
          }
        }
        else {
          uVar15 = FUN_0489720c(lVar19,lVar14,&stack0x00000068,*(undefined8 *)puVar6);
          if ((uVar15 & 1) == 0) {
            uVar13 = *(undefined8 *)puVar3;
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume:
            FUN_048956f0(lVar19,lVar14,uVar12,uVar13);
            lVar14 = lVar9;
          }
          else {
            if (in_stack_00000068 == (long *)0x0) {
LAB_0516565c:
              plVar10 = (long *)thunk_FUN_02d9d534();
              FUN_03aabc60(plVar10,*(undefined8 *)PTR_DAT_06782428);
              plVar7 = in_stack_00000068;
              if (plVar10 == (long *)0x0) goto LAB_05165c08;
              if (in_stack_00000068 == (long *)0x0) {
                lVar11 = 0;
              }
              else {
                lVar20 = *unaff_x22;
                lVar11 = thunk_FUN_02d9d438(in_stack_00000068,lVar20);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar7,lVar20);
                }
              }
              lVar20 = plVar10[2];
              lVar16 = *(long *)puVar4;
              *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_05165c08;
              uVar18 = *(uint *)(plVar10 + 3);
              if (uVar18 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(plVar10 + 3) = uVar18 + 1;
                *(long *)(lVar20 + (long)(int)uVar18 * 8 + 0x20) = lVar11;
                thunk_FUN_02dd37b4();
              }
              else {
                FUN_03aac494(plVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              FUN_048956dc(lVar19,lVar14,plVar10,*(undefined8 *)PTR_DAT_06763f20);
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
              if ((*(byte *)(*in_stack_00000068 + 0x130) < bVar1) ||
                 (plVar10 = in_stack_00000068,
                 *(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_067823c8)) goto LAB_0516565c;
            }
            lVar14 = plVar10[2];
            lVar11 = *(long *)puVar4;
            *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_05165c08;
            uVar18 = *(uint *)(plVar10 + 3);
            if (uVar18 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(plVar10 + 3) = uVar18 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar18 * 8 + 0x20) = uVar12;
              thunk_FUN_02dd37b4();
              lVar14 = lVar9;
            }
            else {
              FUN_03aac494(plVar10,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              lVar14 = lVar9;
            }
          }
        }
        uVar21 = uVar21 + 1;
        lVar9 = lVar14;
      } while( true );
    }
    lVar9 = *unaff_x23;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_05165b04;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05165b04:
    lVar9 = (*(code *)*puVar8)();
    if (lVar9 != 0) {
      uVar12 = FUN_03aac1c4(lVar9,0,*(undefined8 *)PTR_DAT_06782408);
      FUN_05164b1c(uVar12,uVar12);
      lVar9 = *unaff_x23;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_05165b88;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05165b88:
      (*(code *)*puVar8)();
      goto LAB_05165be4;
    }
  }
LAB_05165c08:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_051659e4:
  uVar15 = FUN_04b3a824(&stack0x00000040,*(undefined8 *)puVar3);
  plVar10 = in_stack_00000058;
  uVar12 = in_stack_00000050;
  if ((uVar15 & 1) == 0) {
    FUN_04b3a944(&stack0x00000040,*(undefined8 *)PTR_DAT_06782618);
    return;
  }
  if (in_stack_00000058 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
    if ((bVar1 <= *(byte *)(*in_stack_00000058 + 0x130)) &&
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)PTR_DAT_067823c8)) {
      FUN_05165ca4(unaff_x27,unaff_x24,unaff_x21,uStack000000000000000c & 1,in_stack_00000058,
                   in_stack_00000050);
      goto LAB_051659e4;
    }
    lVar19 = *unaff_x22;
    lVar9 = thunk_FUN_02d9d438(in_stack_00000058,lVar19);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar10,lVar19);
    }
  }
  FUN_05165e18(unaff_x27,unaff_x24,unaff_x21,uStack000000000000000c & 1,lVar9,uVar12);
  goto LAB_051659e4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_05165acc:
    if (*(long *)(piVar17 + -2) == *unaff_x22) {
      puVar8 = (undefined8 *)(lVar9 + (long)(*piVar17 + 2) * 0x10 + 0x138);
      goto LAB_05165bc0;
    }
  }
LAB_05165ae4:
  puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165bc0:
  (*(code *)*puVar8)(unaff_x23,puVar8[1]);
LAB_05165be4:
  FUN_05165ca4();
  return;
}



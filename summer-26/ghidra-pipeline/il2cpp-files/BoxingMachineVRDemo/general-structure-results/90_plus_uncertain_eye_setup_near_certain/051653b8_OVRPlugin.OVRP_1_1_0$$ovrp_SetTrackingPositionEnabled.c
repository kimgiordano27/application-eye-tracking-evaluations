/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 051653b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  uint uVar19;
  long lVar20;
  undefined8 unaff_x21;
  undefined8 uVar21;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w25;
  uint uVar22;
  undefined8 unaff_x27;
  uint uStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x638));
  FUN_02d6084c(PTR_DAT_067823b8);
  FUN_02d6084c(PTR_DAT_067823c0);
  FUN_02d6084c(PTR_DAT_06782428);
  FUN_02d6084c(PTR_DAT_06782400);
  FUN_02d6084c(PTR_DAT_06782408);
  FUN_02d6084c(PTR_DAT_067823c8);
  *(undefined1 *)(unaff_x19 + 0xe69) = 1;
  puVar5 = PTR_DAT_067823f0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000050 = 0;
  if (unaff_x23 != (long *)0x0) {
    lVar13 = *unaff_x23;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_05165478;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_05165478:
    lVar13 = (*(code *)*puVar9)();
    puVar7 = PTR_DAT_06782610;
    puVar6 = PTR_DAT_06782408;
    puVar4 = PTR_DAT_067823b8;
    puVar3 = PTR_DAT_06764ee8;
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) == 0) {
        return;
      }
      if (*(int *)(lVar13 + 0x18) != 1) {
        uVar22 = 0;
        lVar20 = 0;
        lVar13 = 0;
        uStack000000000000000c = unaff_w25;
        do {
          lVar14 = *unaff_x23;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_05165564;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)puVar5,2);
LAB_05165564:
          lVar14 = (*(code *)*puVar9)(unaff_x23,puVar9[1]);
          if (lVar14 == 0) goto LAB_05165c08;
          if (*(int *)(lVar14 + 0x18) <= (int)uVar22) {
            if (lVar20 != 0) {
              System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                        (&stack0x00000040,lVar20,*(undefined8 *)PTR_DAT_06782608);
              puVar3 = PTR_DAT_06782620;
              goto LAB_051659e4;
            }
            lVar13 = *unaff_x23;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 == 0) goto LAB_05165ae4;
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_05165acc;
          }
          lVar14 = *unaff_x23;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_051655d0;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)puVar5,2);
LAB_051655d0:
          lVar14 = (*(code *)*puVar9)(unaff_x23,puVar9[1]);
          if (lVar14 == 0) goto LAB_05165c08;
          uVar12 = FUN_03aac1c4(lVar14,uVar22,*(undefined8 *)puVar6);
          lVar14 = FUN_05164b1c(uVar12,uVar12,unaff_x21);
          if (lVar20 == 0) {
            if (lVar13 == 0) {
              lVar20 = 0;
            }
            else {
              uVar16 = thunk_FUN_04e8bd3c(lVar14,lVar13,0);
              if ((uVar16 & 1) == 0) {
                lVar20 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763f10);
                FUN_04894d4c(lVar20,*(undefined8 *)PTR_DAT_06763f18);
                if (uVar22 < 2) {
                  lVar11 = *unaff_x23;
                  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_05165964;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)puVar5,2);
LAB_05165964:
                  lVar11 = (*(code *)*puVar9)(unaff_x23,puVar9[1]);
                  if ((lVar11 == 0) ||
                     (lVar11 = FUN_03aac1c4(lVar11,0,*(undefined8 *)puVar6), lVar20 == 0))
                  goto LAB_05165c08;
                  uVar21 = *(undefined8 *)puVar3;
                }
                else {
                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
                  FUN_03aabcd0(lVar11,uVar22,*(undefined8 *)PTR_DAT_067823c0);
                  uVar19 = 0;
                  do {
                    lVar15 = *unaff_x23;
                    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                          goto LAB_051658b4;
                        }
                        uVar16 = uVar16 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)puVar5,2);
LAB_051658b4:
                    lVar15 = (*(code *)*puVar9)(unaff_x23,puVar9[1]);
                    if ((lVar15 == 0) ||
                       (uVar21 = FUN_03aac1c4(lVar15,uVar19,*(undefined8 *)puVar6), lVar11 == 0))
                    goto LAB_05165c08;
                    lVar15 = *(long *)(lVar11 + 0x10);
                    lVar17 = *(long *)puVar4;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_05165c08;
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar21;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar11,uVar21,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar22);
                  if (lVar20 == 0) goto LAB_05165c08;
                  uVar21 = *(undefined8 *)puVar3;
                }
                FUN_048956f0(lVar20,lVar13,lVar11,uVar21);
                uVar21 = *(undefined8 *)puVar3;
                goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume;
              }
              lVar20 = 0;
              lVar14 = lVar13;
            }
          }
          else {
            uVar16 = FUN_0489720c(lVar20,lVar14,&stack0x00000068,*(undefined8 *)puVar7);
            if ((uVar16 & 1) == 0) {
              uVar21 = *(undefined8 *)puVar3;
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume:
              FUN_048956f0(lVar20,lVar14,uVar12,uVar21);
              lVar14 = lVar13;
            }
            else {
              if (in_stack_00000068 == (long *)0x0) {
LAB_0516565c:
                plVar10 = (long *)thunk_FUN_02d9d534();
                FUN_03aabc60(plVar10,*(undefined8 *)PTR_DAT_06782428);
                plVar8 = in_stack_00000068;
                if (plVar10 == (long *)0x0) goto LAB_05165c08;
                if (in_stack_00000068 == (long *)0x0) {
                  lVar11 = 0;
                }
                else {
                  uVar21 = *(undefined8 *)puVar5;
                  lVar11 = thunk_FUN_02d9d438(in_stack_00000068,uVar21);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(plVar8,uVar21);
                  }
                }
                lVar15 = plVar10[2];
                lVar17 = *(long *)puVar4;
                *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_05165c08;
                uVar19 = *(uint *)(plVar10 + 3);
                if (uVar19 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(plVar10 + 3) = uVar19 + 1;
                  *(long *)(lVar15 + (long)(int)uVar19 * 8 + 0x20) = lVar11;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(plVar10,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                FUN_048956dc(lVar20,lVar14,plVar10,*(undefined8 *)PTR_DAT_06763f20);
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
              uVar19 = *(uint *)(plVar10 + 3);
              if (uVar19 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(plVar10 + 3) = uVar19 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar19 * 8 + 0x20) = uVar12;
                thunk_FUN_02dd37b4();
                lVar14 = lVar13;
              }
              else {
                FUN_03aac494(plVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                lVar14 = lVar13;
              }
            }
          }
          uVar22 = uVar22 + 1;
          lVar13 = lVar14;
        } while( true );
      }
      lVar13 = *unaff_x23;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_05165b04;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_05165b04:
      lVar13 = (*(code *)*puVar9)();
      if (lVar13 != 0) {
        uVar12 = FUN_03aac1c4(lVar13,0,*(undefined8 *)PTR_DAT_06782408);
        FUN_05164b1c(uVar12,uVar12);
        lVar13 = *unaff_x23;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_05165b88;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_05165b88:
        (*(code *)*puVar9)();
        goto LAB_05165be4;
      }
    }
  }
LAB_05165c08:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_051659e4:
  uVar16 = FUN_04b3a824(&stack0x00000040,*(undefined8 *)puVar3);
  plVar10 = in_stack_00000058;
  uVar12 = in_stack_00000050;
  if ((uVar16 & 1) == 0) {
    FUN_04b3a944(&stack0x00000040,*(undefined8 *)PTR_DAT_06782618);
    return;
  }
  if (in_stack_00000058 == (long *)0x0) {
    lVar13 = 0;
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
    uVar21 = *(undefined8 *)puVar5;
    lVar13 = thunk_FUN_02d9d438(in_stack_00000058,uVar21);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar10,uVar21);
    }
  }
  FUN_05165e18(unaff_x27,unaff_x24,unaff_x21,uStack000000000000000c & 1,lVar13,uVar12);
  goto LAB_051659e4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_05165acc:
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
      goto LAB_05165bc0;
    }
  }
LAB_05165ae4:
  puVar9 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*(long *)puVar5,2);
LAB_05165bc0:
  (*(code *)*puVar9)(unaff_x23,puVar9[1]);
LAB_05165be4:
  FUN_05165ca4();
  return;
}



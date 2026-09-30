/*
FUNCTION_NAME: Unity.Entities.RuntimeApplication$$InvokePostFrameUpdate
ENTRY_POINT: 063d8204
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x063d8a8c) */

void Unity_Entities_RuntimeApplication__InvokePostFrameUpdate
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong in_x9;
  long in_x10;
  int *piVar19;
  long *unaff_x19;
  long *unaff_x21;
  uint uVar20;
  long *unaff_x23;
  undefined8 uVar21;
  long *plVar22;
  long *unaff_x24;
  ulong uVar23;
  long *unaff_x25;
  long *unaff_x26;
  long *in_stack_00000008;
  
  do {
    piVar19 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar19 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_063d823c;
      }
      in_x9 = in_x9 - 1;
      piVar19 = piVar19 + 4;
    } while (in_x9 != 0);
    do {
      puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d823c:
      uVar8 = (*(code *)*puVar7)();
      if ((uVar8 & 1) == 0) {
        uVar20 = 0;
        plVar9 = (long *)thunk_FUN_03010710();
        if (plVar9 == (long *)0x0) goto LAB_063d83b8;
        lVar15 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar8 == 0) goto LAB_063d8390;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_063d8378;
      }
      lVar15 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x23) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_063d829c;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d829c:
      plVar9 = (long *)(*(code *)*puVar7)();
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x25 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar9);
        }
      }
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar15 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x26) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_063d81f0;
          }
          uVar8 = uVar8 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d81f0:
      (*(code *)*puVar7)();
      param_1 = *unaff_x21;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
LAB_063d8378:
    if (*(long *)(piVar19 + -2) == *unaff_x24) {
      puVar7 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_063d83ac;
    }
  }
LAB_063d8390:
  puVar7 = (undefined8 *)FUN_02feb5b8(plVar9,*unaff_x24,0);
LAB_063d83ac:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
LAB_063d83b8:
  puVar6 = PTR_DAT_06fd9fc0;
  puVar5 = PTR_DAT_06fc6cd0;
  puVar4 = PTR_DAT_06f9a8d8;
  puVar3 = PTR_DAT_06f6f008;
  puVar2 = PTR_DAT_06f6d6a0;
  plVar9 = (long *)in_stack_00000008[0x11];
  do {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar8 = FUN_05b07f44(plVar9,0,0);
    if ((uVar8 & 1) == 0) {
LAB_063d8464:
      if ((int)uVar20 < 1) goto Unity_Entities_RuntimeApplication_<>c___cctor;
      plVar22 = (long *)in_stack_00000008[0x11];
      plVar9 = (long *)FUN_02fe9340(*(undefined8 *)puVar6,uVar20);
      break;
    }
    uVar21 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar21 = FUN_05afde1c(uVar21,0);
    uVar8 = FUN_05b07f44(plVar9,uVar21,0);
    if ((uVar8 & 1) == 0) goto LAB_063d8464;
    if (plVar9 == (long *)0x0) goto LAB_063d8a6c;
    uVar20 = uVar20 + 1;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x858))(plVar9,*(undefined8 *)(*plVar9 + 0x860));
  } while( true );
LAB_063d8480:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05b07f44(plVar22,0,0);
  if ((uVar8 & 1) == 0) {
LAB_063d8684:
    puVar4 = PTR_DAT_06fd9fb8;
    puVar3 = PTR_DAT_06f80858;
    if (plVar9 == (long *)0x0) goto LAB_063d8a6c;
    uVar8 = plVar9[3] & 0xffffffff;
    if ((int)plVar9[3] < 1) goto LAB_063d88a0;
    uVar23 = 0;
    goto LAB_063d86ac;
  }
  uVar21 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar21 = FUN_05afde1c(uVar21,0);
  uVar8 = FUN_05b07f44(plVar22,uVar21,0);
  if ((uVar8 & 1) == 0) goto LAB_063d8684;
  uVar8 = FUN_063d617c(in_stack_00000008);
  uVar21 = (**(code **)(*in_stack_00000008 + 0x1a8))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1b0));
  if ((uVar8 & 1) == 0) {
    uVar12 = (**(code **)(*in_stack_00000008 + 0x238))
                       (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x240));
    uVar13 = FUN_02fe9340(*(undefined8 *)puVar3,0);
    uVar14 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06fd50b8,0);
    if (plVar22 == (long *)0x0) goto LAB_063d8a6c;
    uVar21 = FUN_05b09b88(plVar22,uVar21,0x36,0,uVar12,uVar13,uVar14,0);
  }
  else {
    uVar21 = FUN_059687dc(*(undefined8 *)puVar5,uVar21,0);
    plVar10 = (long *)FUN_02fe9340(*(undefined8 *)puVar3,1);
    if (plVar10 == (long *)0x0) goto LAB_063d8a6c;
    lVar15 = in_stack_00000008[0x1b];
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_03010710(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_063d8a7c;
    if ((int)plVar10[3] == 0) goto LAB_063d8a68;
    plVar10[4] = lVar15;
    thunk_FUN_03048534(plVar10 + 4,lVar15);
    if (plVar22 == (long *)0x0) goto LAB_063d8a6c;
    uVar21 = FUN_05b09868(plVar22,uVar21,0x36,0,plVar10,0,0);
  }
  uVar8 = FUN_05a256a4(uVar21,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06fd9fd0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar15 = FUN_063d8cb4(uVar21);
    if (plVar9 == (long *)0x0) goto LAB_063d8a6c;
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_03010710(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_063d8a7c:
      uVar21 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                         ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar21,0);
    }
    uVar20 = uVar20 - 1;
    if (*(uint *)(plVar9 + 3) <= uVar20) goto LAB_063d8a68;
    plVar9[(long)(int)uVar20 + 4] = lVar15;
    thunk_FUN_03048534(plVar9 + (long)(int)uVar20 + 4,lVar15);
  }
  plVar22 = (long *)(**(code **)(*plVar22 + 0x858))(plVar22,*(undefined8 *)(*plVar22 + 0x860));
  goto LAB_063d8480;
LAB_063d86ac:
  do {
    if (uVar8 <= uVar23) goto LAB_063d8a68;
    lVar15 = plVar9[uVar23 + 4];
    if ((lVar15 != 0) && (0 < (int)*(ulong *)(lVar15 + 0x18))) {
      uVar8 = 0;
      uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar8) goto LAB_063d8a68;
        plVar22 = *(long **)(lVar15 + uVar8 * 8 + 0x20);
        if (plVar22 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar22 + 0x130)) &&
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            lVar11 = plVar22[2];
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar11 = FUN_02fe96e0(lVar11,*(undefined8 *)PTR_DAT_06f7c700,
                                  *(undefined8 *)PTR_DAT_06fd9fc8);
            uVar16 = FUN_05b07f44(lVar11,0,0);
            if ((uVar16 & 1) != 0) {
              uVar16 = System_Convert__ToDouble(plVar22[3],0);
              if ((uVar16 & 1) == 0) {
                if ((lVar11 == 0) || (lVar11 = FUN_05b09744(lVar11,plVar22[3],0), lVar11 == 0))
                goto LAB_063d8a6c;
                if (*(long *)(lVar11 + 0x18) != 0) {
                  if ((int)*(long *)(lVar11 + 0x18) == 0) goto LAB_063d8a68;
                  uVar16 = FUN_05a256a4(*(undefined8 *)(lVar11 + 0x20),0,0);
                  if ((uVar16 & 1) != 0) {
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      lVar11 = *(long *)(lVar11 + 0x20);
                      goto LAB_063d87c8;
                    }
                    goto LAB_063d8a68;
                  }
                }
              }
              else {
LAB_063d87c8:
                if (*(int *)(*(long *)PTR_DAT_06fd9fd0 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                lVar11 = FUN_063d8cb4(lVar11);
                if ((lVar11 != 0) && (0 < (int)*(ulong *)(lVar11 + 0x18))) {
                  uVar16 = 0;
                  uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                  do {
                    if (uVar17 <= uVar16) goto LAB_063d8a68;
                    if (unaff_x19 == (long *)0x0) goto LAB_063d8a6c;
                    lVar18 = *unaff_x19;
                    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                          puVar7 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                          goto LAB_063d8860;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d8860:
                    (*(code *)*puVar7)();
                    uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
                    uVar16 = uVar16 + 1;
                  } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
                }
              }
            }
          }
        }
        uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar15 + 0x18));
    }
    uVar8 = (ulong)*(uint *)(plVar9 + 3);
    uVar23 = uVar23 + 1;
  } while ((long)uVar23 < (long)(int)*(uint *)(plVar9 + 3));
LAB_063d88a0:
  puVar2 = PTR_DAT_06f80858;
  if (0 < (int)uVar8) {
    uVar23 = 0;
    do {
      if (uVar8 <= uVar23) {
LAB_063d8a68:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar15 = plVar9[uVar23 + 4];
      if ((lVar15 != 0) && (0 < (int)*(ulong *)(lVar15 + 0x18))) {
        uVar8 = 0;
        uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar8) goto LAB_063d8a68;
          if (unaff_x19 == (long *)0x0) goto LAB_063d8a6c;
          lVar11 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_063d8944;
              }
              uVar16 = uVar16 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d8944:
          (*(code *)*puVar7)();
          uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar15 + 0x18));
        uVar8 = (ulong)*(uint *)(plVar9 + 3);
      }
      uVar23 = uVar23 + 1;
    } while ((long)uVar23 < (long)(int)uVar8);
  }
Unity_Entities_RuntimeApplication_<>c___cctor:
  FUN_063cb3f0(in_stack_00000008);
  uVar21 = FUN_063d62dc(in_stack_00000008);
  uVar8 = FUN_05a23690(uVar21,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_06fd8ce8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (unaff_x19 == (long *)0x0) {
LAB_063d8a6c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar15 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar8 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f80858) {
        puVar7 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
        goto LAB_063d8a3c;
      }
      uVar8 = uVar8 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_063d8a3c:
                    /* WARNING: Could not recover jumptable at 0x063d8a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)();
  return;
}



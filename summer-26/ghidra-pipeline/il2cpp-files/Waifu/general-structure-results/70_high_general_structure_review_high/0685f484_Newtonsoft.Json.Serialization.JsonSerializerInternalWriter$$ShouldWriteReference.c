/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 0685f484
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint in_w8;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long in_x9;
  long *plVar18;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar19;
  ulong uVar20;
  undefined8 *unaff_x22;
  undefined8 uVar21;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 uVar22;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar23;
  long *unaff_x29;
  long *in_stack_00000008;
  uint in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  
code_r0x0685f484:
  if (unaff_w20 < in_w8) {
    lVar16 = *in_stack_00000048;
    if (lVar16 != 0) {
      uVar7 = *(uint *)(in_x9 + unaff_x28 * 4 + 0x20);
      if (uVar7 < *(uint *)(lVar16 + 0x18)) {
        lVar9 = unaff_x22[0x77];
        lVar16 = *(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          FUN_033b9870();
          lVar9 = unaff_x22[0x77];
        }
        if (lVar16 == *(long *)(*(long *)(lVar9 + 0xb8) + 0x18)) goto LAB_0685f77c;
LAB_0685f4d8:
        uVar21 = DAT_083bd010;
        if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
          lVar16 = *unaff_x24;
          if (lVar16 != 0) {
            if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
              lVar9 = *in_stack_00000048;
              if (lVar9 != 0) {
                uVar7 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20);
                if (uVar7 < *(uint *)(lVar9 + 0x18)) {
                  if (*(long *)(lVar9 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_0685f77c;
                  if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  plVar10 = (long *)FUN_0683eca4(uVar21,0);
                  if (plVar10 == unaff_x29) goto LAB_0685f77c;
                  if (unaff_x29 == (long *)0x0) goto LAB_0685eebc;
                  uVar11 = (**(code **)(*unaff_x29 + 0x608))
                                     (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x610));
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar16 = *unaff_x24;
                  if (lVar16 == 0) goto LAB_0685eebc;
                    /* try { // try from 0685f590 to 0695f597 has its CatchHandler @ 0685f754 */
                  if ((*(uint *)(lVar16 + 0x18) <= unaff_w20) ||
                     (uVar7 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar7)) goto LAB_0685fd5c;
                    /* try { // try from 0685f5a8 to 0695f5ab has its CatchHandler @ 0685f744 */
                  lVar16 = *(long *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
                  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  uVar7 = unaff_w20;
                  if ((uVar11 & 1) == 0) {
                    unaff_x22 = &DAT_083d2000;
                    if (lVar16 == 0) goto LAB_0685f77c;
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar16 = *unaff_x24;
                    if (lVar16 == 0) goto LAB_0685eebc;
                    if ((*(uint *)(lVar16 + 0x18) <= unaff_w20) ||
                       (uVar8 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar8)) goto LAB_0685fd5c;
                    uVar11 = (**(code **)(*unaff_x29 + 0x2b8))
                                       (unaff_x29,
                                        *(undefined8 *)(unaff_x26 + (long)(int)uVar8 * 8 + 0x20),
                                        *(undefined8 *)(*unaff_x29 + 0x2c0));
                    if ((uVar11 & 1) != 0) goto LAB_0685f77c;
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar16 = *unaff_x24;
                    if (lVar16 == 0) goto LAB_0685eebc;
                    if ((*(uint *)(lVar16 + 0x18) <= unaff_w20) ||
                       (uVar8 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar8)) goto LAB_0685fd5c;
                    plVar10 = *(long **)(unaff_x26 + (long)(int)uVar8 * 8 + 0x20);
                    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                    uVar11 = (**(code **)(*plVar10 + 0x588))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x590));
                    if ((uVar11 & 1) == 0) goto LAB_0685f79c;
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar16 = *unaff_x24;
                    if (lVar16 == 0) goto LAB_0685eebc;
                    if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
                    lVar9 = *in_stack_00000048;
                    if (lVar9 == 0) goto LAB_0685eebc;
                    uVar8 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20);
                    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0685fd5c;
                    uVar11 = (**(code **)(*unaff_x29 + 0x908))
                                       (unaff_x29,
                                        *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),
                                        *(undefined8 *)(*unaff_x29 + 0x910));
                  }
                  else {
                    /* try { // try from 0685f5bc to 0695f5c7 has its CatchHandler @ 0685f74c */
                    if (lVar16 == 0) {
                      unaff_x22 = &DAT_083d2000;
                      goto LAB_0685f79c;
                    }
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar16 = *unaff_x24;
                    if (lVar16 == 0) goto LAB_0685eebc;
                    if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
                    /* try { // try from 0685f5e4 to 0695f5ef has its CatchHandler @ 0685f740 */
                    lVar9 = *in_stack_00000048;
                    if (lVar9 == 0) goto LAB_0685eebc;
                    uVar8 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20);
                    /* try { // try from 0685f5fc to 0695f603 has its CatchHandler @ 0685f748 */
                    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0685fd5c;
                    uVar21 = *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
                    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    if ((*(byte *)(*unaff_x29 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                       (*(long *)(*(long *)(*unaff_x29 + 200) +
                                  (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_033d1fec(unaff_x29);
                    }
                    uVar11 = FUN_06861228(uVar21,unaff_x29);
                  }
                  unaff_x22 = &DAT_083d2000;
                  if ((uVar11 & 1) != 0) goto LAB_0685f77c;
LAB_0685f79c:
                  if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  if ((in_stack_00000040 != (long *)0x0) &&
                     (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
                    lVar16 = *in_stack_00000048;
                    if (lVar16 == 0) goto LAB_0685eebc;
                    lVar9 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) +
                            0x20;
                    while ((int)uVar7 < *(int *)(lVar16 + 0x18)) {
                      uVar11 = (**(code **)(*in_stack_00000040 + 0x608))
                                         (in_stack_00000040,
                                          *(undefined8 *)(*in_stack_00000040 + 0x610));
                      if (unaff_x26 == 0) goto LAB_0685eebc;
                      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
                      lVar16 = *(long *)(unaff_x26 + lVar9);
                      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                        FUN_033b9870();
                        if ((uVar11 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
                        unaff_x22 = &DAT_083d2000;
                        if (lVar16 != 0) {
                          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
                          uVar11 = (**(code **)(*in_stack_00000040 + 0x2b8))
                                             (in_stack_00000040,*(undefined8 *)(unaff_x26 + lVar9),
                                              *(undefined8 *)(*in_stack_00000040 + 0x2c0));
                          if ((uVar11 & 1) == 0) {
                            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
                            plVar10 = *(long **)(unaff_x26 + lVar9);
                            if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                            uVar11 = (**(code **)(*plVar10 + 0x588))
                                               (plVar10,*(undefined8 *)(*plVar10 + 0x590));
                            if ((uVar11 & 1) != 0) {
                              lVar16 = *in_stack_00000048;
                              if (lVar16 != 0) {
                                if (uVar7 < *(uint *)(lVar16 + 0x18)) {
                                  uVar11 = (**(code **)(*in_stack_00000040 + 0x908))
                                                     (in_stack_00000040,
                                                      *(undefined8 *)(lVar16 + lVar9),
                                                      *(undefined8 *)(*in_stack_00000040 + 0x910));
                                  goto joined_r0x0685f89c;
                                }
                                goto LAB_0685fd5c;
                              }
                              goto LAB_0685eebc;
                            }
                            break;
                          }
                        }
                      }
                      else {
                        if ((uVar11 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
                        if (lVar16 == 0) {
                          unaff_x22 = &DAT_083d2000;
                          break;
                        }
                        lVar16 = *in_stack_00000048;
                        if (lVar16 == 0) goto LAB_0685eebc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0685fd5c;
                        uVar21 = *(undefined8 *)(lVar16 + lVar9);
                        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        if ((*(byte *)(*in_stack_00000040 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)
                            ) || (*(long *)(*(long *)(*in_stack_00000040 + 200) +
                                            (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
                                  DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                          FUN_033d1fec(in_stack_00000040);
                        }
                        uVar11 = FUN_06861228(uVar21,in_stack_00000040);
joined_r0x0685f89c:
                        unaff_x22 = &DAT_083d2000;
                        if ((uVar11 & 1) == 0) break;
                      }
                      unaff_x22 = &DAT_083d2000;
                      lVar16 = *in_stack_00000048;
                      uVar7 = uVar7 + 1;
                      lVar9 = lVar9 + 8;
                      if (lVar16 == 0) goto LAB_0685eebc;
                    }
                  }
                  if (*in_stack_00000048 == 0) goto LAB_0685eebc;
                  uVar11 = unaff_x25;
                  if (uVar7 == *(uint *)(*in_stack_00000048 + 0x18)) {
                    if (unaff_x23 == 0) goto LAB_0685eebc;
                    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
                       (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000010)) goto LAB_0685fd5c;
                    lVar16 = (long)(int)in_stack_00000010;
                    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar16 * 8);
                    *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
                    if (DAT_08908cd0 != 0) {
                      puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
                    if ((in_stack_00000040 != (long *)0x0) &&
                       (lVar9 = FUN_0339898c(in_stack_00000040,
                                             *(undefined8 *)(*in_stack_00000020 + 0x40)), lVar9 == 0
                       )) goto LAB_06860ed8;
                    if (*(uint *)(in_stack_00000020 + 3) <= in_stack_00000010) goto LAB_0685fd5c;
                    plVar10 = in_stack_00000020 + lVar16 + 4;
                    *plVar10 = (long)in_stack_00000040;
                    if (DAT_08908cd0 != 0) {
                      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    uVar7 = *(uint *)(in_stack_00000028 + 3);
                    if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
                    lVar9 = *in_stack_00000018;
                    if (lVar9 != 0) {
                      lVar12 = FUN_0339898c(lVar9,*(undefined8 *)(*in_stack_00000028 + 0x40));
                      if (lVar12 == 0) goto LAB_06860ed8;
                      uVar7 = (uint)in_stack_00000028[3];
                    }
                    if (uVar7 <= in_stack_00000010) goto LAB_0685fd5c;
                    plVar10 = in_stack_00000028 + lVar16 + 4;
                    *plVar10 = lVar9;
                    in_stack_00000010 = in_stack_00000010 + 1;
                    if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
                    puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
                    unaff_x22 = &DAT_083d2000;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
LAB_0685fbc4:
                  uVar7 = *(uint *)(in_stack_00000028 + 3);
                  uVar17 = (ulong)uVar7;
                  unaff_x25 = uVar11 + 1;
                  if ((long)unaff_x25 < (long)(int)uVar7) {
                    if (uVar17 <= unaff_x25) goto LAB_0685fd5c;
                    in_stack_00000018 = in_stack_00000028 + uVar11 + 5;
                    uVar17 = FUN_06740938(*in_stack_00000018,0,0);
                    uVar11 = unaff_x25;
                    if ((uVar17 & 1) == 0) {
                      if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
                      plVar10 = (long *)*in_stack_00000018;
                      if ((plVar10 == (long *)0x0) ||
                         (unaff_x27 = (**(code **)(*plVar10 + 1000))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
                         unaff_x27 == 0)) goto LAB_0685eebc;
                      uVar17 = *(ulong *)(unaff_x27 + 0x18);
                      lVar16 = *in_stack_00000048;
                      if (uVar17 == 0) {
                        if (lVar16 == 0) goto LAB_0685eebc;
                        if (*(long *)(lVar16 + 0x18) != 0) {
                          if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
                          plVar10 = (long *)*in_stack_00000018;
                          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                          uVar7 = (**(code **)(*plVar10 + 0x288))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x290));
                          if ((uVar7 >> 1 & 1) == 0) goto LAB_0685fbc4;
                        }
                        if (unaff_x23 == 0) goto LAB_0685eebc;
                        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
                           (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000010)) goto LAB_0685fd5c;
                        puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)in_stack_00000010 * 8)
                        ;
                        *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
                        if (DAT_08908cd0 != 0) {
                          puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
                          do {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                              *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                        }
                        uVar7 = *(uint *)(in_stack_00000028 + 3);
                        if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
                        lVar16 = *in_stack_00000018;
                        if (lVar16 != 0) {
                          lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*in_stack_00000028 + 0x40));
                          if (lVar9 == 0) goto LAB_06860ed8;
                          uVar7 = (uint)in_stack_00000028[3];
                        }
                        if (uVar7 <= in_stack_00000010) goto LAB_0685fd5c;
                        plVar10 = in_stack_00000028 + (long)(int)in_stack_00000010 + 4;
                        *plVar10 = lVar16;
                        in_stack_00000010 = in_stack_00000010 + 1;
                        if (DAT_08908cd0 != 0) {
                          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
                          unaff_x22 = &DAT_083d2000;
                          do {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          goto LAB_0685fbc4;
                        }
                      }
                      else {
                        if (lVar16 == 0) goto LAB_0685eebc;
                        uVar7 = *(uint *)(lVar16 + 0x18);
                        iVar6 = (int)uVar17;
                        if (iVar6 <= (int)uVar7) {
                          if (iVar6 == 0) goto LAB_0685fd5c;
                          uVar8 = iVar6 - 1;
                          lVar16 = (long)(int)uVar8;
                          plVar10 = (long *)(unaff_x27 + lVar16 * 8 + 0x20);
                          plVar18 = (long *)*plVar10;
                          if ((plVar18 == (long *)0x0) ||
                             (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)
                                                          ), plVar18 == (long *)0x0))
                          goto LAB_0685eebc;
                          uVar17 = (**(code **)(*plVar18 + 0x358))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x360));
                          uVar21 = DAT_083bd0a8;
                          if (iVar6 < (int)uVar7) {
                            if ((uVar17 & 1) != 0) {
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                              plVar18 = (long *)*plVar10;
                              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                                FUN_033b9870();
                              }
                              uVar21 = FUN_0683eca4(uVar21,0);
                              if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                              uVar17 = (**(code **)(*plVar18 + 0x218))
                                                 (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220)
                                                 );
                              if ((uVar17 & 1) == 0) goto LAB_0685fbb8;
                              if (unaff_x23 == 0) goto LAB_0685eebc;
                              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                              lVar9 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                              if (lVar9 == 0) goto LAB_0685eebc;
                              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0685fd5c;
                              if (*(uint *)(lVar9 + lVar16 * 4 + 0x20) == uVar8) goto LAB_0685f2d4;
                            }
LAB_0685fbc0:
                            unaff_x22 = &DAT_083d2000;
                            goto LAB_0685fbc4;
                          }
                          if ((uVar17 & 1) != 0) {
                            if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                            plVar18 = (long *)*plVar10;
                            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                              FUN_033b9870();
                            }
                            uVar21 = FUN_0683eca4(uVar21,0);
                            if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                            uVar11 = (**(code **)(*plVar18 + 0x218))
                                               (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220));
                            if ((uVar11 & 1) == 0) {
                              in_stack_00000040 = (long *)0x0;
                              goto LAB_0685f360;
                            }
                            if (unaff_x23 == 0) goto LAB_0685eebc;
                            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                            lVar9 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                            if (lVar9 == 0) goto LAB_0685eebc;
                            if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0685fd5c;
                            if (*(uint *)(lVar9 + lVar16 * 4 + 0x20) == uVar8) {
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                              plVar18 = (long *)*plVar10;
                              if ((plVar18 == (long *)0x0) ||
                                 (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                                              (plVar18,*(undefined8 *)
                                                                        (*plVar18 + 0x1f0)),
                                 unaff_x26 == 0)) goto LAB_0685eebc;
                              if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_0685fd5c;
                              if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                              uVar11 = (**(code **)(*plVar18 + 0x2b8))
                                                 (plVar18,*(undefined8 *)
                                                           (unaff_x26 + lVar16 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar18 + 0x2c0));
                              if ((uVar11 & 1) == 0) goto LAB_0685f2d4;
                            }
                          }
LAB_0685f35c:
                          in_stack_00000040 = (long *)0x0;
                          goto LAB_0685f360;
                        }
                        uVar8 = iVar6 - 1;
                        if ((int)uVar7 < (int)uVar8) {
                          plVar10 = (long *)(unaff_x27 + (long)(int)uVar7 * 8 + 0x20);
                          do {
                            if ((uint)uVar17 <= uVar7) goto LAB_0685fd5c;
                            plVar18 = (long *)*plVar10;
                            if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                            lVar16 = (**(code **)(*plVar18 + 0x208))
                                               (plVar18,*(undefined8 *)(*plVar18 + 0x210));
                            if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
                              FUN_033b9870(DAT_083ca050);
                            }
                            if (lVar16 == **(long **)(DAT_083ca050 + 0xb8)) {
                              uVar17 = (ulong)*(uint *)(unaff_x27 + 0x18);
                              uVar8 = *(uint *)(unaff_x27 + 0x18) - 1;
                              break;
                            }
                            uVar17 = *(ulong *)(unaff_x27 + 0x18);
                            uVar7 = uVar7 + 1;
                            plVar10 = plVar10 + 1;
                            uVar8 = (int)uVar17 - 1;
                          } while ((int)uVar7 < (int)uVar8);
                        }
                        if (uVar7 == uVar8) {
                          if ((uint)uVar17 <= uVar8) goto LAB_0685fd5c;
                          plVar10 = (long *)(unaff_x27 + (long)(int)uVar8 * 8 + 0x20);
                          plVar18 = (long *)*plVar10;
                          if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                          lVar16 = (**(code **)(*plVar18 + 0x208))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x210));
                          if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
                            FUN_033b9870(DAT_083ca050);
                          }
                          if (lVar16 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                          plVar18 = (long *)*plVar10;
                          if ((plVar18 == (long *)0x0) ||
                             (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))
                                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1f0)
                                                          ), plVar18 == (long *)0x0))
                          goto LAB_0685eebc;
                          uVar17 = (**(code **)(*plVar18 + 0x358))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x360));
                          uVar21 = DAT_083bd0a8;
                          if ((uVar17 & 1) == 0) goto LAB_0685fbc0;
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                          plVar18 = (long *)*plVar10;
                          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                            FUN_033b9870();
                          }
                          uVar21 = FUN_0683eca4(uVar21,0);
                          if (plVar18 == (long *)0x0) goto LAB_0685eebc;
                          uVar11 = (**(code **)(*plVar18 + 0x218))
                                             (plVar18,uVar21,1,*(undefined8 *)(*plVar18 + 0x220));
                          if ((uVar11 & 1) != 0) {
                            if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
                            plVar10 = (long *)*plVar10;
                            goto joined_r0x0685f2e4;
                          }
                        }
                      }
LAB_0685fbb8:
                      unaff_x22 = &DAT_083d2000;
                      uVar11 = unaff_x25;
                    }
                    goto LAB_0685fbc4;
                  }
                  if (in_stack_00000010 != 1) {
                    if (in_stack_00000010 == 0) {
                      uVar22 = FUN_033d1ba8(&DAT_08440468);
                      FUN_033d1ba8(&DAT_083cee70);
                      uVar21 = thunk_FUN_03398a84();
                      FUN_0683135c(uVar21,uVar22,0);
                      goto LAB_06860fa0;
                    }
                    if ((int)in_stack_00000010 < 2) {
                      uVar7 = 0;
                      goto LAB_0685fdf8;
                    }
                    if (uVar7 == 0) goto LAB_0685fd5c;
                    if (unaff_x23 == 0) goto LAB_0685eebc;
                    lVar16 = 0;
                    uVar7 = 0;
                    uVar11 = (ulong)in_stack_00000010;
                    uVar20 = 1;
                    bVar5 = false;
                    goto LAB_0685fc30;
                  }
                  if (in_stack_00000030 == 0) goto LAB_0685ff98;
                  if (unaff_x23 == 0) goto LAB_0685eebc;
                  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
                  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
                  lVar16 = FUN_03398738();
                  lVar9 = *in_stack_00000048;
                  if ((lVar9 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
                  if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                  lVar12 = in_stack_00000020[4];
                  if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  lVar23 = FUN_03398a84(DAT_083d57e0);
                  uVar21 = DAT_083c7838;
                  if (lVar16 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
                    if (lVar13 == 0) goto LAB_0685fe90;
                  }
                  uVar3 = *(undefined4 *)(lVar9 + 0x18);
                  plVar10 = (long *)(lVar23 + 0x10);
                  *plVar10 = lVar13;
                  if (DAT_08908cd0 == 0) {
                    *(undefined4 *)(lVar23 + 0x18) = uVar3;
                    *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
                    *in_stack_00000008 = lVar23;
                  }
                  else {
                    puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    *(undefined4 *)(lVar23 + 0x18) = uVar3;
                    *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
                    *in_stack_00000008 = lVar23;
                    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
                  uVar21 = *(undefined8 *)(unaff_x23 + 0x20);
                  lVar16 = *in_stack_00000048;
                  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  FUN_068613a0(uVar21,lVar16);
                  uVar7 = (uint)in_stack_00000028[3];
                  unaff_x22 = &DAT_083d2000;
LAB_0685ff98:
                  if (uVar7 == 0) goto LAB_0685fd5c;
                  plVar18 = in_stack_00000028 + 4;
                  plVar10 = (long *)*plVar18;
                  if (((plVar10 == (long *)0x0) ||
                      (lVar16 = (**(code **)(*plVar10 + 1000))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x3f0)), lVar16 == 0))
                     || (*in_stack_00000048 == 0)) goto LAB_0685eebc;
                  iVar6 = *(int *)(*in_stack_00000048 + 0x18);
                  iVar15 = (int)*(ulong *)(lVar16 + 0x18);
                  if (iVar15 == iVar6) {
                    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
                    if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                    lVar9 = in_stack_00000020[4];
                    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    if (lVar9 != 0) {
                      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
                      uVar7 = *(int *)(lVar16 + 0x18) - 1;
                      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar7,0);
                      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                      lVar9 = in_stack_00000020[4];
                      lVar16 = FUN_03398188(DAT_083c7838,1);
                      if (lVar16 == 0) goto LAB_0685eebc;
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
                      *(undefined4 *)(lVar16 + 0x20) = 1;
                      lVar16 = FUN_06852fd0(lVar9);
                      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                      if ((lVar16 != 0) &&
                         (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)
                         ) goto LAB_06860ed8;
                      uVar8 = *(uint *)(plVar10 + 3);
                      if (uVar8 <= uVar7) goto LAB_0685fd5c;
                      plVar14 = plVar10 + (long)(int)uVar7 + 4;
                      *plVar14 = lVar16;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        uVar8 = *(uint *)(plVar10 + 3);
                      }
                      if (uVar8 <= uVar7) goto LAB_0685fd5c;
                      lVar16 = *in_stack_00000048;
                      if (lVar16 == 0) goto LAB_0685eebc;
                      if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0685fd5c;
                      plVar14 = (long *)*plVar14;
                      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
                      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar14 + 200) +
                                    (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) != DAT_083c8a28
                         )) goto LAB_06860fdc;
                      FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar7 * 8 + 0x20),0,0
                                  );
                      *in_stack_00000048 = (long)plVar10;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                    }
LAB_06860db0:
                    if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
                    goto LAB_06860eb4;
                  }
                  if (iVar15 <= iVar6) {
                    if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
                    plVar10 = (long *)*plVar18;
                    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                    uVar7 = (**(code **)(*plVar10 + 0x288))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x290));
                    if ((uVar7 >> 1 & 1) == 0) {
                      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
                      uVar7 = *(int *)(lVar16 + 0x18) - 1;
                      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar7,0);
                      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
                      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                      lVar9 = in_stack_00000020[4];
                      lVar16 = FUN_03398188(DAT_083c7838,1);
                      if ((*in_stack_00000048 == 0) || (lVar16 == 0)) goto LAB_0685eebc;
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
                      *(uint *)(lVar16 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar7;
                      lVar16 = FUN_06852fd0(lVar9);
                      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                      if ((lVar16 != 0) &&
                         (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)
                         ) goto LAB_06860ed8;
                      uVar8 = *(uint *)(plVar10 + 3);
                      if (uVar8 <= uVar7) goto LAB_0685fd5c;
                      plVar14 = plVar10 + (long)(int)uVar7 + 4;
                      *plVar14 = lVar16;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        uVar8 = *(uint *)(plVar10 + 3);
                      }
                      if (uVar8 <= uVar7) goto LAB_0685fd5c;
                      lVar16 = *in_stack_00000048;
                      if (lVar16 == 0) goto LAB_0685eebc;
                      plVar14 = (long *)*plVar14;
                      if (plVar14 != (long *)0x0) {
                        if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar14 + 200) +
                                      (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
                            DAT_083c8a28)) goto LAB_06860fdc;
                      }
                      FUN_068537e0(lVar16,uVar7,plVar14,0,*(int *)(lVar16 + 0x18) - uVar7,0);
                      *in_stack_00000048 = (long)plVar10;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                    }
                    goto LAB_06860db0;
                  }
                  plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff
                                                );
                  lVar9 = *in_stack_00000048;
                  if (lVar9 == 0) goto LAB_0685eebc;
                  uVar11 = 0;
                  while( true ) {
                    if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar11) {
                      uVar7 = *(uint *)(lVar16 + 0x18);
                      if ((int)uVar11 < (int)(uVar7 - 1)) {
                        do {
                          uVar8 = (uint)uVar11;
                          if (uVar7 <= uVar8) goto LAB_0685fd5c;
                          plVar14 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
                          if ((plVar14 == (long *)0x0) ||
                             (lVar9 = (**(code **)(*plVar14 + 0x208))
                                                (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                             plVar10 == (long *)0x0)) goto LAB_0685eebc;
                          if ((lVar9 != 0) &&
                             (lVar12 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar12 == 0)) goto LAB_06860ed8;
                          if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_0685fd5c;
                          plVar14 = plVar10 + (long)(int)uVar8 + 4;
                          *plVar14 = lVar9;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                          }
                          uVar7 = *(uint *)(lVar16 + 0x18);
                          uVar11 = (ulong)(uVar8 + 1);
                        } while ((int)(uVar8 + 1) < (int)(uVar7 - 1));
                      }
                      if (in_stack_00000020 == (long *)0x0) break;
                      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                      lVar9 = in_stack_00000020[4];
                      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      uVar7 = (uint)uVar11;
                      if (lVar9 == 0) {
                        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0685fd5c;
                        plVar14 = *(long **)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
                        if ((plVar14 == (long *)0x0) ||
                           (lVar16 = (**(code **)(*plVar14 + 0x208))
                                               (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                           plVar10 == (long *)0x0)) break;
                        if ((lVar16 != 0) &&
                           (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar9 == 0)) goto LAB_06860ed8;
                        uVar8 = *(uint *)(plVar10 + 3);
                      }
                      else {
                        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
                        lVar16 = in_stack_00000020[4];
                        uVar21 = FUN_03398188(DAT_083c7838,1);
                        lVar16 = FUN_06852fd0(lVar16,uVar21);
                        if (plVar10 == (long *)0x0) break;
                        if ((lVar16 != 0) &&
                           (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar9 == 0)) goto LAB_06860ed8;
                        uVar8 = *(uint *)(plVar10 + 3);
                      }
                      if (uVar8 <= uVar7) goto LAB_0685fd5c;
                      plVar14 = plVar10 + (long)(int)uVar7 + 4;
                      *plVar14 = lVar16;
                      if (DAT_08908cd0 == 0) {
                        *in_stack_00000048 = (long)plVar10;
                      }
                      else {
                        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
                        *in_stack_00000048 = (long)plVar10;
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      goto LAB_06860db0;
                    }
                    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0685fd5c;
                    if (plVar10 == (long *)0x0) break;
                    lVar9 = *(long *)(lVar9 + uVar11 * 8 + 0x20);
                    if ((lVar9 != 0) &&
                       (lVar12 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
                    goto LAB_06860ed8;
                    if (*(uint *)(plVar10 + 3) <= uVar11) goto LAB_0685fd5c;
                    plVar14 = plVar10 + uVar11 + 4;
                    *plVar14 = lVar9;
                    if (DAT_08908cd0 != 0) {
                      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    lVar9 = *in_stack_00000048;
                    uVar11 = uVar11 + 1;
                    if (lVar9 == 0) break;
                  }
                  goto LAB_0685eebc;
                }
                goto LAB_0685fd5c;
              }
              goto LAB_0685eebc;
            }
            goto LAB_0685fd5c;
          }
          goto LAB_0685eebc;
        }
      }
      goto LAB_0685fd5c;
    }
    goto LAB_0685eebc;
  }
  goto LAB_0685fd5c;
LAB_0685f2d4:
  if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
  plVar10 = (long *)*plVar10;
joined_r0x0685f2e4:
  if ((plVar10 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
     plVar10 == (long *)0x0)) goto LAB_0685eebc;
  in_stack_00000040 =
       (long *)(**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
LAB_0685f360:
  unaff_x22 = &DAT_083d2000;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (in_stack_00000040 == (long *)0x0) {
    if (*in_stack_00000048 == 0) goto LAB_0685eebc;
    unaff_w19 = *(uint *)(*in_stack_00000048 + 0x18);
  }
  else {
    unaff_w19 = *(int *)(unaff_x27 + 0x18) - 1;
  }
  if ((int)unaff_w19 < 1) {
    uVar7 = 0;
  }
  else {
    unaff_w20 = 0;
    unaff_x24 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
      unaff_x28 = (long)(int)unaff_w20;
      plVar10 = *(long **)(unaff_x27 + unaff_x28 * 8 + 0x20);
      if ((plVar10 == (long *)0x0) ||
         (unaff_x29 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
         unaff_x29 == (long *)0x0)) goto LAB_0685eebc;
      uVar11 = (**(code **)(*unaff_x29 + 0x378))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x380));
      if ((uVar11 & 1) != 0) {
        unaff_x29 = (long *)(**(code **)(*unaff_x29 + 0x448))
                                      (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x450));
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar16 = *unaff_x24;
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
      if (unaff_x26 == 0) goto LAB_0685eebc;
      uVar7 = *(uint *)(lVar16 + unaff_x28 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
      plVar10 = *(long **)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar10 != unaff_x29) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) == 0) goto LAB_0685f4d8;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        in_x9 = *unaff_x24;
        if (in_x9 == 0) goto LAB_0685eebc;
        in_w8 = *(uint *)(in_x9 + 0x18);
        goto code_r0x0685f484;
      }
LAB_0685f77c:
      unaff_w20 = unaff_w20 + 1;
      uVar7 = unaff_w19;
    } while (unaff_w19 != unaff_w20);
  }
  goto LAB_0685f79c;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar7) || (uVar17 <= uVar20)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar20)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar20)) goto LAB_0685fd5c;
  lVar9 = in_stack_00000020[lVar16 + 4];
  lVar12 = in_stack_00000028[lVar16 + 4];
  uVar21 = *(undefined8 *)(unaff_x23 + lVar16 * 8 + 0x20);
  lVar23 = in_stack_00000028[uVar20 + 4];
  uVar22 = *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
  lVar16 = in_stack_00000020[uVar20 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar6 = FUN_06861580(lVar12,uVar21,lVar9,lVar23,uVar22,lVar16);
  if (iVar6 == 0) {
    if (uVar20 + 1 == uVar11) {
LAB_06860ef4:
      uVar22 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar21 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar21,uVar22,0);
LAB_06860fa0:
      uVar22 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar21,uVar22);
    }
    bVar5 = true;
LAB_0685fd44:
    uVar20 = uVar20 + 1;
    uVar17 = in_stack_00000028[3] & 0xffffffff;
    lVar16 = (long)(int)uVar7;
    if ((uint)in_stack_00000028[3] <= uVar7) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar6 == 2) {
    unaff_x22 = &DAT_083d2000;
    uVar7 = (uint)uVar20;
    if (uVar20 + 1 == uVar11) goto LAB_0685fdf8;
    bVar5 = false;
    goto LAB_0685fd44;
  }
  unaff_x22 = &DAT_083d2000;
  if (uVar20 + 1 != uVar11) goto LAB_0685fd44;
  if (bVar5) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
    if (*plVar10 == 0) goto LAB_0685eebc;
    lVar16 = FUN_03398738();
    lVar9 = *in_stack_00000048;
    if ((lVar9 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar12 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar23 = FUN_03398a84(DAT_083d57e0);
    uVar21 = DAT_083c7838;
    if (lVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
      if (lVar13 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar16,uVar21);
      }
    }
    uVar3 = *(undefined4 *)(lVar9 + 0x18);
    plVar18 = (long *)(lVar23 + 0x10);
    *plVar18 = lVar13;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
      *in_stack_00000008 = lVar23;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar12 != 0;
      *in_stack_00000008 = lVar23;
      puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    lVar16 = *plVar10;
    lVar9 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar16,lVar9);
    unaff_x22 = &DAT_083d2000;
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
  plVar18 = in_stack_00000028 + (long)(int)uVar7 + 4;
  plVar10 = (long *)*plVar18;
  if (((plVar10 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
      lVar16 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar6 = *(int *)(*in_stack_00000048 + 0x18);
  iVar15 = (int)*(ulong *)(lVar16 + 0x18);
  if (iVar15 == iVar6) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar9 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar9 != 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar8,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar9 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = FUN_06852fd0(lVar9);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar10 + 3);
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar19 = *(uint *)(plVar10 + 3);
      }
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar14);
      }
      FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  else {
    if (iVar6 < iVar15) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff);
      lVar9 = *in_stack_00000048;
      if (lVar9 != 0) {
        uVar11 = 0;
        do {
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar11) {
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar11) goto LAB_06860c2c;
            goto LAB_06860788;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0685fd5c;
          if (plVar10 == (long *)0x0) break;
          lVar9 = *(long *)(lVar9 + uVar11 * 8 + 0x20);
          if ((lVar9 != 0) &&
             (lVar12 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar10 + 3) <= uVar11) goto LAB_0685fd5c;
          plVar14 = plVar10 + uVar11 + 4;
          *plVar14 = lVar9;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar9 = *in_stack_00000048;
          uVar11 = uVar11 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar18;
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar8 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar8,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar9 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar16 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar16 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar8;
      lVar16 = FUN_06852fd0(lVar9);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
      goto LAB_06860ed8;
      uVar19 = *(uint *)(plVar10 + 3);
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar19 = *(uint *)(plVar10 + 3);
      }
      if (uVar19 <= uVar8) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      plVar14 = (long *)*plVar14;
      if (plVar14 != (long *)0x0) {
        if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar16,uVar8,plVar14,0,*(int *)(lVar16 + 0x18) - uVar8,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
  while( true ) {
    plVar14 = *(long **)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar9 != 0) && (lVar12 = FUN_0339898c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
       ) goto LAB_06860ed8;
    if (*(uint *)(plVar10 + 3) <= uVar19) goto LAB_0685fd5c;
    plVar14 = plVar10 + (long)(int)uVar19 + 4;
    *plVar14 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar11 = (ulong)(uVar19 + 1);
    if ((int)(uVar8 - 1) <= (int)(uVar19 + 1)) break;
LAB_06860788:
    uVar19 = (uint)uVar11;
    if (uVar8 <= uVar19) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar9 = in_stack_00000020[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = (uint)uVar11;
  if (lVar9 == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar14 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar16 != 0) && (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)
       ) goto LAB_06860ed8;
    uVar19 = *(uint *)(plVar10 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar16 = in_stack_00000020[(long)(int)uVar7 + 4];
    uVar21 = FUN_03398188(DAT_083c7838,1);
    lVar16 = FUN_06852fd0(lVar16,uVar21);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar16 != 0) && (lVar9 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)
       ) {
LAB_06860ed8:
      uVar21 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar21,0);
    }
    uVar19 = *(uint *)(plVar10 + 3);
  }
  if (uVar19 <= uVar8) goto LAB_0685fd5c;
  plVar14 = plVar10 + (long)(int)uVar8 + 4;
  *plVar14 = lVar16;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar10;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_06860ea8:
  if (uVar7 < *(uint *)(in_stack_00000028 + 3)) {
LAB_06860eb4:
    return *plVar18;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}



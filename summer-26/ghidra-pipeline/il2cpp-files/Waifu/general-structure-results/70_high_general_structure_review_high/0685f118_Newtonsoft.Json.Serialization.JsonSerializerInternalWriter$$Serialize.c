/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 0685f118
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x19;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long unaff_x20;
  ulong uVar21;
  ulong unaff_x21;
  long *plVar22;
  long lVar23;
  uint unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  undefined8 uVar24;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long lVar25;
  long *in_stack_00000008;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x0685f118:
  plVar18 = (long *)(unaff_x19 + 0x20);
  plVar10 = (long *)*plVar18;
  if ((plVar10 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
     plVar10 == (long *)0x0)) goto LAB_0685eebc;
  uVar11 = (**(code **)(*plVar10 + 0x358))(plVar10,*(undefined8 *)(*plVar10 + 0x360));
  uVar12 = DAT_083bd0a8;
  uVar8 = (uint)unaff_x20;
  if ((int)unaff_x21 < (int)unaff_w22) {
    uVar17 = unaff_x25;
    if ((uVar11 & 1) == 0) goto LAB_0685fbc4;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar18;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar12 = FUN_0683eca4(uVar12,0);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar11 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar12,1,*(undefined8 *)(*plVar10 + 0x220));
    if ((uVar11 & 1) == 0) goto LAB_0685fbc4;
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
    lVar16 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    if (lVar16 == 0) goto LAB_0685eebc;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
    if (*(uint *)(lVar16 + unaff_x20 * 4 + 0x20) != uVar8) goto LAB_0685fbc4;
  }
  else {
    if ((uVar11 & 1) == 0) goto LAB_0685f35c;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar18;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar12 = FUN_0683eca4(uVar12,0);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar11 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar12,1,*(undefined8 *)(*plVar10 + 0x220));
    if ((uVar11 & 1) == 0) {
      plVar18 = (long *)0x0;
      goto LAB_0685f360;
    }
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
    lVar16 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    if (lVar16 == 0) goto LAB_0685eebc;
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
    if (*(uint *)(lVar16 + unaff_x20 * 4 + 0x20) != uVar8) goto LAB_0685f35c;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar18;
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0))
       , unaff_x26 == 0)) goto LAB_0685eebc;
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_0685fd5c;
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar11 = (**(code **)(*plVar10 + 0x2b8))
                       (plVar10,*(undefined8 *)(unaff_x26 + unaff_x20 * 8 + 0x20),
                        *(undefined8 *)(*plVar10 + 0x2c0));
    if ((uVar11 & 1) != 0) goto LAB_0685f35c;
  }
  if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
  plVar18 = (long *)*plVar18;
joined_r0x0685f2e4:
  if ((plVar18 != (long *)0x0) &&
     (plVar18 = (long *)(**(code **)(*plVar18 + 0x1e8))(plVar18,*(undefined8 *)(*plVar18 + 0x1f0)),
     plVar18 != (long *)0x0)) {
    plVar18 = (long *)(**(code **)(*plVar18 + 0x448))(plVar18,*(undefined8 *)(*plVar18 + 0x450));
LAB_0685f360:
    do {
                    /* try { // try from 0685f364 to 0695f58f has its CatchHandler @ 0685f364
                       catch() { ... } // from try @ 0685f364 with catch @ 0685f364
                       catch() { ... } // from try @ 0685f73c with catch @ 0685f364
                       catch() { ... } // from try @ 06860158 with catch @ 0685f364
                       catch() { ... } // from try @ 06860228 with catch @ 0685f364
                       catch() { ... } // from try @ 06860320 with catch @ 0685f364 */
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if (plVar18 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
        if (*unaff_x28 == 0) break;
        uVar8 = *(uint *)(*unaff_x28 + 0x18);
      }
      else {
        if (plVar18 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
        uVar8 = *(int *)(unaff_x27 + 0x18) - 1;
      }
      if ((int)uVar8 < 1) {
        uVar20 = 0;
      }
      else {
        uVar9 = 0;
        plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        do {
          if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_0685fd5c;
          lVar16 = (long)(int)uVar9;
          plVar14 = *(long **)(unaff_x27 + lVar16 * 8 + 0x20);
          if ((plVar14 == (long *)0x0) ||
             (plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x1f0)),
             plVar14 == (long *)0x0)) goto LAB_0685eebc;
          uVar11 = (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
          if ((uVar11 & 1) != 0) {
            plVar14 = (long *)(**(code **)(*plVar14 + 0x448))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x450));
          }
          if (unaff_x23 == 0) goto LAB_0685eebc;
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
          lVar19 = *plVar10;
          if (lVar19 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0685fd5c;
          if (unaff_x26 == 0) goto LAB_0685eebc;
          uVar20 = *(uint *)(lVar19 + lVar16 * 4 + 0x20);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar20) goto LAB_0685fd5c;
          plVar22 = *(long **)(unaff_x26 + (long)(int)uVar20 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          unaff_x28 = in_stack_00000048;
          if (plVar22 != plVar14) {
            if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar19 = *plVar10;
              if (lVar19 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0685fd5c;
              lVar23 = *in_stack_00000048;
              if (lVar23 == 0) goto LAB_0685eebc;
              uVar20 = *(uint *)(lVar19 + lVar16 * 4 + 0x20);
              if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0685fd5c;
              lVar19 = *(long *)(lVar23 + (long)(int)uVar20 * 8 + 0x20);
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if (lVar19 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
            }
            uVar12 = DAT_083bd010;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar19 = *plVar10;
            if (lVar19 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0685fd5c;
            lVar23 = *in_stack_00000048;
            if (lVar23 == 0) goto LAB_0685eebc;
            uVar20 = *(uint *)(lVar19 + lVar16 * 4 + 0x20);
            if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_0685fd5c;
            if (*(long *)(lVar23 + (long)(int)uVar20 * 8 + 0x20) != 0) {
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              plVar22 = (long *)FUN_0683eca4(uVar12,0);
              if (plVar22 != plVar14) {
                if (plVar14 == (long *)0x0) goto LAB_0685eebc;
                uVar11 = (**(code **)(*plVar14 + 0x608))(plVar14,*(undefined8 *)(*plVar14 + 0x610));
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar19 = *plVar10;
                if (lVar19 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar19 + 0x18) <= uVar9) ||
                   (uVar20 = *(uint *)(lVar19 + lVar16 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar20)) goto LAB_0685fd5c;
                lVar19 = *(long *)(unaff_x26 + (long)(int)uVar20 * 8 + 0x20);
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar20 = uVar9;
                if ((uVar11 & 1) == 0) {
                  if (lVar19 != 0) {
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                    lVar19 = *plVar10;
                    if (lVar19 == 0) goto LAB_0685eebc;
                    if ((*(uint *)(lVar19 + 0x18) <= uVar9) ||
                       (uVar4 = *(uint *)(lVar19 + lVar16 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                    uVar11 = (**(code **)(*plVar14 + 0x2b8))
                                       (plVar14,*(undefined8 *)
                                                 (unaff_x26 + (long)(int)uVar4 * 8 + 0x20),
                                        *(undefined8 *)(*plVar14 + 0x2c0));
                    if ((uVar11 & 1) == 0) {
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                      lVar19 = *plVar10;
                      if (lVar19 == 0) goto LAB_0685eebc;
                      if ((*(uint *)(lVar19 + 0x18) <= uVar9) ||
                         (uVar4 = *(uint *)(lVar19 + lVar16 * 4 + 0x20),
                         *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                      plVar22 = *(long **)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
                      if (plVar22 == (long *)0x0) goto LAB_0685eebc;
                      uVar11 = (**(code **)(*plVar22 + 0x588))
                                         (plVar22,*(undefined8 *)(*plVar22 + 0x590));
                      if ((uVar11 & 1) != 0) {
                        if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                          lVar19 = *plVar10;
                          if (lVar19 != 0) {
                            if (uVar9 < *(uint *)(lVar19 + 0x18)) {
                              lVar23 = *in_stack_00000048;
                              if (lVar23 != 0) {
                                uVar4 = *(uint *)(lVar19 + lVar16 * 4 + 0x20);
                                if (uVar4 < *(uint *)(lVar23 + 0x18)) {
                                  uVar11 = (**(code **)(*plVar14 + 0x908))
                                                     (plVar14,*(undefined8 *)
                                                               (lVar23 + (long)(int)uVar4 * 8 + 0x20
                                                               ),*(undefined8 *)(*plVar14 + 0x910));
                                  goto joined_r0x0685f778;
                                }
                                goto LAB_0685fd5c;
                              }
                              goto LAB_0685eebc;
                            }
                            goto LAB_0685fd5c;
                          }
                          goto LAB_0685eebc;
                        }
                        goto LAB_0685fd5c;
                      }
                      break;
                    }
                  }
                }
                else {
                  if (lVar19 == 0) break;
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar19 = *plVar10;
                  if (lVar19 == 0) goto LAB_0685eebc;
                  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0685fd5c;
                  lVar23 = *in_stack_00000048;
                  if (lVar23 == 0) goto LAB_0685eebc;
                  uVar4 = *(uint *)(lVar19 + lVar16 * 4 + 0x20);
                  if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_0685fd5c;
                  uVar12 = *(undefined8 *)(lVar23 + (long)(int)uVar4 * 8 + 0x20);
                  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar14 + 200) +
                                (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                    FUN_033d1fec(plVar14);
                  }
                  uVar11 = FUN_06861228(uVar12,plVar14);
joined_r0x0685f778:
                  if ((uVar11 & 1) == 0) break;
                }
              }
            }
          }
LAB_0685f77c:
          uVar9 = uVar9 + 1;
          uVar20 = uVar8;
        } while (uVar8 != uVar9);
      }
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((plVar18 != (long *)0x0) && (uVar20 == *(int *)(unaff_x27 + 0x18) - 1U)) {
        lVar16 = *unaff_x28;
        if (lVar16 == 0) break;
        lVar19 = (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3) + 0x20;
        while ((int)uVar20 < *(int *)(lVar16 + 0x18)) {
          uVar11 = (**(code **)(*plVar18 + 0x608))(plVar18,*(undefined8 *)(*plVar18 + 0x610));
          if (unaff_x26 == 0) goto LAB_0685eebc;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar20) goto LAB_0685fd5c;
          lVar16 = *(long *)(unaff_x26 + lVar19);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
            if ((uVar11 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
            if (lVar16 != 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar20) goto LAB_0685fd5c;
              uVar11 = (**(code **)(*plVar18 + 0x2b8))
                                 (plVar18,*(undefined8 *)(unaff_x26 + lVar19),
                                  *(undefined8 *)(*plVar18 + 0x2c0));
              if ((uVar11 & 1) == 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar20) goto LAB_0685fd5c;
                plVar10 = *(long **)(unaff_x26 + lVar19);
                if (plVar10 == (long *)0x0) goto LAB_0685eebc;
                uVar11 = (**(code **)(*plVar10 + 0x588))(plVar10,*(undefined8 *)(*plVar10 + 0x590));
                if ((uVar11 & 1) != 0) {
                  lVar16 = *unaff_x28;
                  if (lVar16 != 0) {
                    if (uVar20 < *(uint *)(lVar16 + 0x18)) {
                      uVar11 = (**(code **)(*plVar18 + 0x908))
                                         (plVar18,*(undefined8 *)(lVar16 + lVar19),
                                          *(undefined8 *)(*plVar18 + 0x910));
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
            if (lVar16 == 0) break;
            lVar16 = *unaff_x28;
            if (lVar16 == 0) goto LAB_0685eebc;
            if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0685fd5c;
            uVar12 = *(undefined8 *)(lVar16 + lVar19);
            if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
              FUN_033b9870();
            }
            if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                         -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1fec(plVar18);
            }
            uVar11 = FUN_06861228(uVar12,plVar18);
joined_r0x0685f89c:
            if ((uVar11 & 1) == 0) break;
          }
          lVar16 = *unaff_x28;
          uVar20 = uVar20 + 1;
          lVar19 = lVar19 + 8;
          if (lVar16 == 0) goto LAB_0685eebc;
        }
      }
      if (*unaff_x28 == 0) break;
      uVar17 = unaff_x25;
      if (uVar20 == *(uint *)(*unaff_x28 + 0x18)) {
        if (unaff_x23 == 0) break;
        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)
           ) goto LAB_0685fd5c;
        lVar16 = (long)(int)unaff_w24;
        puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar16 * 8);
        *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (in_stack_00000020 == (long *)0x0) break;
        if ((plVar18 != (long *)0x0) &&
           (lVar19 = FUN_0339898c(plVar18,*(undefined8 *)(*in_stack_00000020 + 0x40)), lVar19 == 0))
        goto LAB_06860ed8;
        if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
        plVar10 = in_stack_00000020 + lVar16 + 4;
        *plVar10 = (long)plVar18;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar8 = *(uint *)(in_stack_00000028 + 3);
        if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
        lVar19 = *in_stack_00000018;
        if (lVar19 != 0) {
          lVar23 = FUN_0339898c(lVar19,*(undefined8 *)(*in_stack_00000028 + 0x40));
          if (lVar23 == 0) goto LAB_06860ed8;
          uVar8 = (uint)in_stack_00000028[3];
        }
        if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
        plVar18 = in_stack_00000028 + lVar16 + 4;
        *plVar18 = lVar19;
        unaff_w24 = unaff_w24 + 1;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
LAB_0685fbc4:
      uVar8 = *(uint *)(in_stack_00000028 + 3);
      uVar11 = (ulong)uVar8;
      unaff_x25 = uVar17 + 1;
      if ((long)(int)uVar8 <= (long)unaff_x25) {
        if (unaff_w24 != 1) {
          if (unaff_w24 == 0) {
            uVar24 = FUN_033d1ba8(&DAT_08440468);
            FUN_033d1ba8(&DAT_083cee70);
            uVar12 = thunk_FUN_03398a84();
            FUN_0683135c(uVar12,uVar24,0);
            goto LAB_06860fa0;
          }
          if ((int)unaff_w24 < 2) {
            uVar8 = 0;
            in_stack_00000048 = unaff_x28;
            goto LAB_0685fdf8;
          }
          if (uVar8 == 0) goto LAB_0685fd5c;
          if (unaff_x23 == 0) break;
          lVar16 = 0;
          uVar8 = 0;
          uVar17 = (ulong)unaff_w24;
          uVar21 = 1;
          bVar6 = false;
          goto LAB_0685fc30;
        }
        if (in_stack_00000030 == 0) goto LAB_0685ff98;
        if (unaff_x23 == 0) break;
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
        if (*(long *)(unaff_x23 + 0x20) == 0) break;
        lVar16 = FUN_03398738();
        lVar19 = *unaff_x28;
        if ((lVar19 == 0) || (in_stack_00000020 == (long *)0x0)) break;
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar23 = in_stack_00000020[4];
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar25 = FUN_03398a84(DAT_083d57e0);
        uVar12 = DAT_083c7838;
        if (lVar16 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
          if (lVar13 == 0) goto LAB_0685fe90;
        }
        uVar3 = *(undefined4 *)(lVar19 + 0x18);
        plVar18 = (long *)(lVar25 + 0x10);
        *plVar18 = lVar13;
        if (DAT_08908cd0 == 0) {
          *(undefined4 *)(lVar25 + 0x18) = uVar3;
          *(bool *)(lVar25 + 0x1c) = lVar23 != 0;
          *in_stack_00000008 = lVar25;
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(undefined4 *)(lVar25 + 0x18) = uVar3;
          *(bool *)(lVar25 + 0x1c) = lVar23 != 0;
          *in_stack_00000008 = lVar25;
          puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
        uVar12 = *(undefined8 *)(unaff_x23 + 0x20);
        lVar16 = *unaff_x28;
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_068613a0(uVar12,lVar16);
        uVar8 = (uint)in_stack_00000028[3];
LAB_0685ff98:
        if (uVar8 == 0) goto LAB_0685fd5c;
        plVar10 = in_stack_00000028 + 4;
        plVar18 = (long *)*plVar10;
        if (((plVar18 == (long *)0x0) ||
            (lVar16 = (**(code **)(*plVar18 + 1000))(plVar18,*(undefined8 *)(*plVar18 + 0x3f0)),
            lVar16 == 0)) || (*unaff_x28 == 0)) break;
        iVar7 = *(int *)(*unaff_x28 + 0x18);
        iVar15 = (int)*(ulong *)(lVar16 + 0x18);
        if (iVar15 == iVar7) {
          if (in_stack_00000020 == (long *)0x0) break;
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar19 = in_stack_00000020[4];
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar19 != 0) {
            plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
            uVar8 = *(int *)(lVar16 + 0x18) - 1;
            FUN_068537e0(*unaff_x28,0,plVar18,0,uVar8,0);
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar19 = in_stack_00000020[4];
            lVar16 = FUN_03398188(DAT_083c7838,1);
            if (lVar16 == 0) break;
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
            *(undefined4 *)(lVar16 + 0x20) = 1;
            lVar16 = FUN_06852fd0(lVar19);
            if (plVar18 == (long *)0x0) break;
            if ((lVar16 != 0) &&
               (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar18 + 3);
            if (uVar9 <= uVar8) goto LAB_0685fd5c;
            plVar14 = plVar18 + (long)(int)uVar8 + 4;
            *plVar14 = lVar16;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              uVar9 = *(uint *)(plVar18 + 3);
            }
            if (uVar9 <= uVar8) goto LAB_0685fd5c;
            lVar16 = *unaff_x28;
            if (lVar16 == 0) break;
            if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) break;
            if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 +
                         -8) != DAT_083c8a28)) goto LAB_06860fdc;
            FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
            *unaff_x28 = (long)plVar18;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
LAB_06860db0:
          if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
          goto LAB_06860eb4;
        }
        if (iVar15 <= iVar7) {
          if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
          plVar18 = (long *)*plVar10;
          if (plVar18 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar18 + 0x288))(plVar18,*(undefined8 *)(*plVar18 + 0x290));
          if ((uVar8 >> 1 & 1) == 0) {
            plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
            uVar8 = *(int *)(lVar16 + 0x18) - 1;
            FUN_068537e0(*unaff_x28,0,plVar18,0,uVar8,0);
            if (in_stack_00000020 == (long *)0x0) break;
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar19 = in_stack_00000020[4];
            lVar16 = FUN_03398188(DAT_083c7838,1);
            if ((*unaff_x28 == 0) || (lVar16 == 0)) break;
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
            *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
            lVar16 = FUN_06852fd0(lVar19);
            if (plVar18 == (long *)0x0) break;
            if ((lVar16 != 0) &&
               (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
            goto LAB_06860ed8;
            uVar9 = *(uint *)(plVar18 + 3);
            if (uVar9 <= uVar8) goto LAB_0685fd5c;
            plVar14 = plVar18 + (long)(int)uVar8 + 4;
            *plVar14 = lVar16;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              uVar9 = *(uint *)(plVar18 + 3);
            }
            if (uVar9 <= uVar8) goto LAB_0685fd5c;
            lVar16 = *unaff_x28;
            if (lVar16 == 0) break;
            plVar14 = (long *)*plVar14;
            if (plVar14 != (long *)0x0) {
              if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 +
                           -8) != DAT_083c8a28)) goto LAB_06860fdc;
            }
            FUN_068537e0(lVar16,uVar8,plVar14,0,*(int *)(lVar16 + 0x18) - uVar8,0);
            *unaff_x28 = (long)plVar18;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          goto LAB_06860db0;
        }
        plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff);
        lVar19 = *unaff_x28;
        if (lVar19 == 0) break;
        uVar11 = 0;
        while( true ) {
          if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar11) {
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)uVar11 < (int)(uVar8 - 1)) {
              do {
                uVar9 = (uint)uVar11;
                if (uVar8 <= uVar9) goto LAB_0685fd5c;
                plVar14 = *(long **)(lVar16 + (long)(int)uVar9 * 8 + 0x20);
                if ((plVar14 == (long *)0x0) ||
                   (lVar19 = (**(code **)(*plVar14 + 0x208))
                                       (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                   plVar18 == (long *)0x0)) goto LAB_0685eebc;
                if ((lVar19 != 0) &&
                   (lVar23 = FUN_0339898c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar23 == 0))
                goto LAB_06860ed8;
                if (*(uint *)(plVar18 + 3) <= uVar9) goto LAB_0685fd5c;
                plVar14 = plVar18 + (long)(int)uVar9 + 4;
                *plVar14 = lVar19;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                uVar8 = *(uint *)(lVar16 + 0x18);
                uVar11 = (ulong)(uVar9 + 1);
              } while ((int)(uVar9 + 1) < (int)(uVar8 - 1));
            }
            if (in_stack_00000020 == (long *)0x0) break;
            if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
            lVar19 = in_stack_00000020[4];
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar8 = (uint)uVar11;
            if (lVar19 == 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0685fd5c;
              plVar14 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
              if ((plVar14 == (long *)0x0) ||
                 (lVar16 = (**(code **)(*plVar14 + 0x208))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                 plVar18 == (long *)0x0)) break;
              if ((lVar16 != 0) &&
                 (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
              goto LAB_06860ed8;
              uVar9 = *(uint *)(plVar18 + 3);
            }
            else {
              if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
              lVar16 = in_stack_00000020[4];
              uVar12 = FUN_03398188(DAT_083c7838,1);
              lVar16 = FUN_06852fd0(lVar16,uVar12);
              if (plVar18 == (long *)0x0) break;
              if ((lVar16 != 0) &&
                 (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
              goto LAB_06860ed8;
              uVar9 = *(uint *)(plVar18 + 3);
            }
            if (uVar9 <= uVar8) goto LAB_0685fd5c;
            plVar14 = plVar18 + (long)(int)uVar8 + 4;
            *plVar14 = lVar16;
            if (DAT_08908cd0 == 0) {
              *unaff_x28 = (long)plVar18;
            }
            else {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
              *unaff_x28 = (long)plVar18;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            goto LAB_06860db0;
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0685fd5c;
          if (plVar18 == (long *)0x0) break;
          lVar19 = *(long *)(lVar19 + uVar11 * 8 + 0x20);
          if ((lVar19 != 0) &&
             (lVar23 = FUN_0339898c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar23 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar18 + 3) <= uVar11) goto LAB_0685fd5c;
          plVar14 = plVar18 + uVar11 + 4;
          *plVar14 = lVar19;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar19 = *unaff_x28;
          uVar11 = uVar11 + 1;
          if (lVar19 == 0) break;
        }
        break;
      }
      if (uVar11 <= unaff_x25) goto LAB_0685fd5c;
      in_stack_00000018 = in_stack_00000028 + uVar17 + 5;
      uVar11 = FUN_06740938(*in_stack_00000018,0,0);
      uVar17 = unaff_x25;
      if ((uVar11 & 1) != 0) goto LAB_0685fbc4;
      if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
      plVar18 = (long *)*in_stack_00000018;
      if ((plVar18 == (long *)0x0) ||
         (unaff_x27 = (**(code **)(*plVar18 + 1000))(plVar18,*(undefined8 *)(*plVar18 + 0x3f0)),
         unaff_x27 == 0)) break;
      unaff_x21 = *(ulong *)(unaff_x27 + 0x18);
      lVar16 = *unaff_x28;
      if (unaff_x21 == 0) {
        if (lVar16 == 0) break;
        if (*(long *)(lVar16 + 0x18) != 0) {
          if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
          plVar18 = (long *)*in_stack_00000018;
          if (plVar18 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar18 + 0x288))(plVar18,*(undefined8 *)(*plVar18 + 0x290));
          if ((uVar8 >> 1 & 1) == 0) goto LAB_0685fbc4;
        }
        if (unaff_x23 == 0) break;
        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24)
           ) goto LAB_0685fd5c;
        puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)unaff_w24 * 8);
        *puVar2 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar8 = *(uint *)(in_stack_00000028 + 3);
        if (uVar8 <= unaff_x25) goto LAB_0685fd5c;
        lVar16 = *in_stack_00000018;
        if (lVar16 != 0) {
          lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*in_stack_00000028 + 0x40));
          if (lVar19 == 0) goto LAB_06860ed8;
          uVar8 = (uint)in_stack_00000028[3];
        }
        if (uVar8 <= unaff_w24) goto LAB_0685fd5c;
        plVar18 = in_stack_00000028 + (long)(int)unaff_w24 + 4;
        *plVar18 = lVar16;
        unaff_w24 = unaff_w24 + 1;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        goto LAB_0685fbc4;
      }
      if (lVar16 == 0) break;
      unaff_w22 = *(uint *)(lVar16 + 0x18);
      iVar7 = (int)unaff_x21;
      if (iVar7 <= (int)unaff_w22) {
        if (iVar7 == 0) goto LAB_0685fd5c;
        unaff_x20 = (long)(iVar7 + -1);
        unaff_x19 = unaff_x27 + unaff_x20 * 8;
        goto code_r0x0685f118;
      }
      uVar8 = iVar7 - 1;
      if ((int)unaff_w22 < (int)uVar8) {
        plVar18 = (long *)(unaff_x27 + (long)(int)unaff_w22 * 8 + 0x20);
        do {
          if ((uint)unaff_x21 <= unaff_w22) goto LAB_0685fd5c;
          plVar10 = (long *)*plVar18;
          if (plVar10 == (long *)0x0) goto LAB_0685eebc;
          lVar16 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
          if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
            FUN_033b9870(DAT_083ca050);
          }
          if (lVar16 == **(long **)(DAT_083ca050 + 0xb8)) {
            unaff_x21 = (ulong)*(uint *)(unaff_x27 + 0x18);
            uVar8 = *(uint *)(unaff_x27 + 0x18) - 1;
            break;
          }
          unaff_x21 = *(ulong *)(unaff_x27 + 0x18);
          unaff_w22 = unaff_w22 + 1;
          plVar18 = plVar18 + 1;
          uVar8 = (int)unaff_x21 - 1;
        } while ((int)unaff_w22 < (int)uVar8);
      }
      if (unaff_w22 != uVar8) goto LAB_0685fbc4;
      if ((uint)unaff_x21 <= uVar8) goto LAB_0685fd5c;
      plVar18 = (long *)(unaff_x27 + (long)(int)uVar8 * 8 + 0x20);
      plVar10 = (long *)*plVar18;
      if (plVar10 == (long *)0x0) break;
      lVar16 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar16 == **(long **)(DAT_083ca050 + 0xb8)) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar10 = (long *)*plVar18;
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
           plVar10 == (long *)0x0)) break;
        uVar11 = (**(code **)(*plVar10 + 0x358))(plVar10,*(undefined8 *)(*plVar10 + 0x360));
        uVar12 = DAT_083bd0a8;
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
          plVar10 = (long *)*plVar18;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar12 = FUN_0683eca4(uVar12,0);
          if (plVar10 == (long *)0x0) break;
          uVar11 = (**(code **)(*plVar10 + 0x218))
                             (plVar10,uVar12,1,*(undefined8 *)(*plVar10 + 0x220));
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
            plVar18 = (long *)*plVar18;
            goto joined_r0x0685f2e4;
          }
        }
        goto LAB_0685fbc4;
      }
LAB_0685f35c:
      plVar18 = (long *)0x0;
    } while( true );
  }
  goto LAB_0685eebc;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar8) || (uVar11 <= uVar21)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar21)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar21)) goto LAB_0685fd5c;
  lVar19 = in_stack_00000020[lVar16 + 4];
  lVar23 = in_stack_00000028[lVar16 + 4];
  uVar12 = *(undefined8 *)(unaff_x23 + lVar16 * 8 + 0x20);
  lVar25 = in_stack_00000028[uVar21 + 4];
  uVar24 = *(undefined8 *)(unaff_x23 + uVar21 * 8 + 0x20);
  lVar16 = in_stack_00000020[uVar21 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar7 = FUN_06861580(lVar23,uVar12,lVar19,lVar25,uVar24,lVar16);
  if (iVar7 == 0) {
    if (uVar21 + 1 == uVar17) {
LAB_06860ef4:
      uVar24 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar12 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar12,uVar24,0);
LAB_06860fa0:
      uVar24 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar12,uVar24);
    }
    bVar6 = true;
LAB_0685fd44:
    uVar21 = uVar21 + 1;
    uVar11 = in_stack_00000028[3] & 0xffffffff;
    lVar16 = (long)(int)uVar8;
    if ((uint)in_stack_00000028[3] <= uVar8) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar7 == 2) {
    uVar8 = (uint)uVar21;
    if (uVar21 + 1 == uVar17) goto LAB_0685fdf8;
    bVar6 = false;
    goto LAB_0685fd44;
  }
  if (uVar21 + 1 != uVar17) goto LAB_0685fd44;
  if (bVar6) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar18 = (long *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20);
    if (*plVar18 == 0) goto LAB_0685eebc;
    lVar16 = FUN_03398738();
    lVar19 = *in_stack_00000048;
    if ((lVar19 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar23 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar12 = DAT_083c7838;
    if (lVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_0339898c(lVar16,DAT_083c7838);
      if (lVar13 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar16,uVar12);
      }
    }
    uVar3 = *(undefined4 *)(lVar19 + 0x18);
    plVar10 = (long *)(lVar25 + 0x10);
    *plVar10 = lVar13;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar23 != 0;
      *in_stack_00000008 = lVar25;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar23 != 0;
      *in_stack_00000008 = lVar25;
      puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_0685fd5c;
    lVar16 = *plVar18;
    lVar19 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar16,lVar19);
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
  plVar10 = in_stack_00000028 + (long)(int)uVar8 + 4;
  plVar18 = (long *)*plVar10;
  if (((plVar18 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar18 + 1000))(plVar18,*(undefined8 *)(*plVar18 + 0x3f0)),
      lVar16 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar7 = *(int *)(*in_stack_00000048 + 0x18);
  iVar15 = (int)*(ulong *)(lVar16 + 0x18);
  if (iVar15 == iVar7) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar19 = in_stack_00000020[(long)(int)uVar8 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar19 != 0) {
      plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar9 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar18,0,uVar9,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar19 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = FUN_06852fd0(lVar19);
      if (plVar18 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
      goto LAB_06860ed8;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 <= uVar9) goto LAB_0685fd5c;
      plVar14 = plVar18 + (long)(int)uVar9 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 <= uVar9) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar14);
      }
      FUN_06853274(plVar14,*(undefined8 *)(lVar16 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar18;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  else {
    if (iVar7 < iVar15) {
      plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar16 + 0x18) & 0xffffffff);
      lVar19 = *in_stack_00000048;
      if (lVar19 != 0) {
        uVar11 = 0;
        do {
          if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar11) {
            uVar9 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar9 - 1) <= (int)uVar11) goto LAB_06860c2c;
            goto LAB_06860788;
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0685fd5c;
          if (plVar18 == (long *)0x0) break;
          lVar19 = *(long *)(lVar19 + uVar11 * 8 + 0x20);
          if ((lVar19 != 0) &&
             (lVar23 = FUN_0339898c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar23 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar18 + 3) <= uVar11) goto LAB_0685fd5c;
          plVar14 = plVar18 + uVar11 + 4;
          *plVar14 = lVar19;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar19 = *in_stack_00000048;
          uVar11 = uVar11 + 1;
        } while (lVar19 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar8) goto LAB_0685fd5c;
    plVar18 = (long *)*plVar10;
    if (plVar18 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar18 + 0x288))(plVar18,*(undefined8 *)(*plVar18 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar18 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar16 + 0x18));
      uVar9 = *(int *)(lVar16 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar18,0,uVar9,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
      lVar19 = in_stack_00000020[(long)(int)uVar8 + 4];
      lVar16 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar16 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar16 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar9;
      lVar16 = FUN_06852fd0(lVar19);
      if (plVar18 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar16 != 0) &&
         (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
      goto LAB_06860ed8;
      uVar20 = *(uint *)(plVar18 + 3);
      if (uVar20 <= uVar9) goto LAB_0685fd5c;
      plVar14 = plVar18 + (long)(int)uVar9 + 4;
      *plVar14 = lVar16;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar20 = *(uint *)(plVar18 + 3);
      }
      if (uVar20 <= uVar9) goto LAB_0685fd5c;
      lVar16 = *in_stack_00000048;
      if (lVar16 == 0) goto LAB_0685eebc;
      plVar14 = (long *)*plVar14;
      if (plVar14 != (long *)0x0) {
        if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar16,uVar9,plVar14,0,*(int *)(lVar16 + 0x18) - uVar9,0);
      *in_stack_00000048 = (long)plVar18;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
  while( true ) {
    plVar14 = *(long **)(lVar16 + (long)(int)uVar20 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar18 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar19 != 0) &&
       (lVar23 = FUN_0339898c(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar23 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar18 + 3) <= uVar20) goto LAB_0685fd5c;
    plVar14 = plVar18 + (long)(int)uVar20 + 4;
    *plVar14 = lVar19;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar16 + 0x18);
    uVar11 = (ulong)(uVar20 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar20 + 1)) break;
LAB_06860788:
    uVar20 = (uint)uVar11;
    if (uVar9 <= uVar20) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
  lVar19 = in_stack_00000020[(long)(int)uVar8 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar11;
  if (lVar19 == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar14 = *(long **)(lVar16 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar14 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210)),
       plVar18 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar16 != 0) &&
       (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0))
    goto LAB_06860ed8;
    uVar20 = *(uint *)(plVar18 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar8) goto LAB_0685fd5c;
    lVar16 = in_stack_00000020[(long)(int)uVar8 + 4];
    uVar12 = FUN_03398188(DAT_083c7838,1);
    lVar16 = FUN_06852fd0(lVar16,uVar12);
    if (plVar18 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar16 != 0) &&
       (lVar19 = FUN_0339898c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0)) {
LAB_06860ed8:
      uVar12 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar12,0);
    }
    uVar20 = *(uint *)(plVar18 + 3);
  }
  if (uVar20 <= uVar9) goto LAB_0685fd5c;
  plVar14 = plVar18 + (long)(int)uVar9 + 4;
  *plVar14 = lVar16;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar18;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar18;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_06860ea8:
  if (uVar8 < *(uint *)(in_stack_00000028 + 3)) {
LAB_06860eb4:
    return *plVar10;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}



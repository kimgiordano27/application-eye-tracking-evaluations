/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0685f630
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference
               (long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong in_x9;
  uint in_w10;
  long *plVar17;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 unaff_x22;
  undefined8 uVar21;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 uVar22;
  long unaff_x26;
  long unaff_x27;
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
  
code_r0x0685f630:
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(unaff_x29);
  }
  uVar9 = FUN_06861228(unaff_x22,unaff_x29);
  uVar7 = unaff_w20;
  if ((uVar9 & 1) != 0) goto LAB_0685f77c;
LAB_0685f79c:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((in_stack_00000040 != (long *)0x0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar15 = *in_stack_00000048;
    if (lVar15 == 0) goto LAB_0685eebc;
    lVar10 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar15 + 0x18)) {
      uVar9 = (**(code **)(*in_stack_00000040 + 0x608))
                        (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x610));
      if (unaff_x26 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
      lVar15 = *(long *)(unaff_x26 + lVar10);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if ((uVar9 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
        if (lVar15 != 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
          uVar9 = (**(code **)(*in_stack_00000040 + 0x2b8))
                            (in_stack_00000040,*(undefined8 *)(unaff_x26 + lVar10),
                             *(undefined8 *)(*in_stack_00000040 + 0x2c0));
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
            plVar20 = *(long **)(unaff_x26 + lVar10);
            if (plVar20 == (long *)0x0) goto LAB_0685eebc;
            uVar9 = (**(code **)(*plVar20 + 0x588))(plVar20,*(undefined8 *)(*plVar20 + 0x590));
            if ((uVar9 & 1) != 0) {
              lVar15 = *in_stack_00000048;
              if (lVar15 != 0) {
                if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                  uVar9 = (**(code **)(*in_stack_00000040 + 0x908))
                                    (in_stack_00000040,*(undefined8 *)(lVar15 + lVar10),
                                     *(undefined8 *)(*in_stack_00000040 + 0x910));
                  goto joined_r0x0685f930;
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
        if ((uVar9 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
        if (lVar15 == 0) break;
        lVar15 = *in_stack_00000048;
        if (lVar15 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0685fd5c;
        uVar21 = *(undefined8 *)(lVar15 + lVar10);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*in_stack_00000040 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*in_stack_00000040 + 200) +
                      (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(in_stack_00000040);
        }
                    /* try { // try from 0685f894 to 0695f89b has its CatchHandler @ 06860194 */
        uVar9 = FUN_06861228(uVar21,in_stack_00000040);
joined_r0x0685f930:
        if ((uVar9 & 1) == 0) break;
      }
      lVar15 = *in_stack_00000048;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
      if (lVar15 == 0) goto LAB_0685eebc;
    }
  }
  if (*in_stack_00000048 == 0) goto LAB_0685eebc;
  uVar9 = unaff_x25;
  if (uVar7 == *(uint *)(*in_stack_00000048 + 0x18)) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
       (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000010)) goto LAB_0685fd5c;
    lVar15 = (long)(int)in_stack_00000010;
    puVar2 = (undefined8 *)(unaff_x23 + 0x20 + lVar15 * 8);
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
       (lVar10 = FUN_0339898c(in_stack_00000040,*(undefined8 *)(*in_stack_00000020 + 0x40)),
       lVar10 == 0)) goto LAB_06860ed8;
    if (*(uint *)(in_stack_00000020 + 3) <= in_stack_00000010) goto LAB_0685fd5c;
    plVar20 = in_stack_00000020 + lVar15 + 4;
    *plVar20 = (long)in_stack_00000040;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar7 = *(uint *)(in_stack_00000028 + 3);
    if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
    lVar10 = *in_stack_00000018;
    if (lVar10 != 0) {
      lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*in_stack_00000028 + 0x40));
      if (lVar11 == 0) goto LAB_06860ed8;
      uVar7 = (uint)in_stack_00000028[3];
    }
    if (uVar7 <= in_stack_00000010) goto LAB_0685fd5c;
    plVar20 = in_stack_00000028 + lVar15 + 4;
    *plVar20 = lVar10;
    in_stack_00000010 = in_stack_00000010 + 1;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
LAB_0685fbc4:
  uVar7 = *(uint *)(in_stack_00000028 + 3);
  uVar16 = (ulong)uVar7;
  unaff_x25 = uVar9 + 1;
  if ((long)unaff_x25 < (long)(int)uVar7) {
    if (uVar16 <= unaff_x25) goto LAB_0685fd5c;
    in_stack_00000018 = in_stack_00000028 + uVar9 + 5;
    uVar16 = FUN_06740938(*in_stack_00000018,0,0);
    uVar9 = unaff_x25;
    if ((uVar16 & 1) != 0) goto LAB_0685fbc4;
    if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
    plVar20 = (long *)*in_stack_00000018;
    if ((plVar20 == (long *)0x0) ||
       (unaff_x27 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
       unaff_x27 == 0)) goto LAB_0685eebc;
    uVar16 = *(ulong *)(unaff_x27 + 0x18);
    lVar15 = *in_stack_00000048;
    if (uVar16 == 0) {
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(long *)(lVar15 + 0x18) != 0) {
        if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
        plVar20 = (long *)*in_stack_00000018;
        if (plVar20 == (long *)0x0) goto LAB_0685eebc;
        uVar7 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
        if ((uVar7 >> 1 & 1) == 0) goto LAB_0685fbc4;
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
         (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000010)) goto LAB_0685fd5c;
      puVar2 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)in_stack_00000010 * 8);
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
      lVar15 = *in_stack_00000018;
      if (lVar15 != 0) {
        lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*in_stack_00000028 + 0x40));
        if (lVar10 == 0) goto LAB_06860ed8;
        uVar7 = (uint)in_stack_00000028[3];
      }
      if (uVar7 <= in_stack_00000010) goto LAB_0685fd5c;
      plVar20 = in_stack_00000028 + (long)(int)in_stack_00000010 + 4;
      *plVar20 = lVar15;
      in_stack_00000010 = in_stack_00000010 + 1;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_0685fbc4;
    }
    if (lVar15 == 0) goto LAB_0685eebc;
    uVar7 = *(uint *)(lVar15 + 0x18);
    iVar6 = (int)uVar16;
    if ((int)uVar7 < iVar6) {
      uVar8 = iVar6 - 1;
      if ((int)uVar7 < (int)uVar8) {
        plVar20 = (long *)(unaff_x27 + (long)(int)uVar7 * 8 + 0x20);
        do {
          if ((uint)uVar16 <= uVar7) goto LAB_0685fd5c;
          plVar17 = (long *)*plVar20;
          if (plVar17 == (long *)0x0) goto LAB_0685eebc;
          lVar15 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210));
          if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
            FUN_033b9870(DAT_083ca050);
          }
          if (lVar15 == **(long **)(DAT_083ca050 + 0xb8)) {
            uVar16 = (ulong)*(uint *)(unaff_x27 + 0x18);
            uVar8 = *(uint *)(unaff_x27 + 0x18) - 1;
            break;
          }
          uVar16 = *(ulong *)(unaff_x27 + 0x18);
          uVar7 = uVar7 + 1;
          plVar20 = plVar20 + 1;
          uVar8 = (int)uVar16 - 1;
        } while ((int)uVar7 < (int)uVar8);
      }
      if (uVar7 != uVar8) goto LAB_0685fbc4;
      if ((uint)uVar16 <= uVar8) goto LAB_0685fd5c;
      plVar20 = (long *)(unaff_x27 + (long)(int)uVar8 * 8 + 0x20);
      plVar17 = (long *)*plVar20;
      if (plVar17 == (long *)0x0) goto LAB_0685eebc;
      lVar15 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar15 == **(long **)(DAT_083ca050 + 0xb8)) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar17 = (long *)*plVar20;
        if ((plVar17 == (long *)0x0) ||
           (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                        (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
           plVar17 == (long *)0x0)) goto LAB_0685eebc;
        uVar16 = (**(code **)(*plVar17 + 0x358))(plVar17,*(undefined8 *)(*plVar17 + 0x360));
        uVar21 = DAT_083bd0a8;
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
          plVar17 = (long *)*plVar20;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar21 = FUN_0683eca4(uVar21,0);
          if (plVar17 == (long *)0x0) goto LAB_0685eebc;
          uVar16 = (**(code **)(*plVar17 + 0x218))
                             (plVar17,uVar21,1,*(undefined8 *)(*plVar17 + 0x220));
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
            plVar20 = (long *)*plVar20;
            goto joined_r0x0685f2e4;
          }
        }
        goto LAB_0685fbc4;
      }
    }
    else {
      if (iVar6 == 0) goto LAB_0685fd5c;
      uVar8 = iVar6 - 1;
      lVar15 = (long)(int)uVar8;
      plVar20 = (long *)(unaff_x27 + lVar15 * 8 + 0x20);
      plVar17 = (long *)*plVar20;
      if ((plVar17 == (long *)0x0) ||
         (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
         plVar17 == (long *)0x0)) goto LAB_0685eebc;
      uVar16 = (**(code **)(*plVar17 + 0x358))(plVar17,*(undefined8 *)(*plVar17 + 0x360));
      uVar21 = DAT_083bd0a8;
      if (iVar6 < (int)uVar7) {
        if ((uVar16 & 1) == 0) goto LAB_0685fbc4;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar17 = (long *)*plVar20;
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar21 = FUN_0683eca4(uVar21,0);
        if (plVar17 == (long *)0x0) goto LAB_0685eebc;
        uVar16 = (**(code **)(*plVar17 + 0x218))(plVar17,uVar21,1,*(undefined8 *)(*plVar17 + 0x220))
        ;
        if ((uVar16 & 1) == 0) goto LAB_0685fbc4;
        if (unaff_x23 == 0) goto LAB_0685eebc;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar10 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0685fd5c;
        if (*(uint *)(lVar10 + lVar15 * 4 + 0x20) == uVar8) goto LAB_0685f2d4;
        goto LAB_0685fbc4;
      }
      if ((uVar16 & 1) != 0) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar17 = (long *)*plVar20;
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar21 = FUN_0683eca4(uVar21,0);
        if (plVar17 == (long *)0x0) goto LAB_0685eebc;
        uVar9 = (**(code **)(*plVar17 + 0x218))(plVar17,uVar21,1,*(undefined8 *)(*plVar17 + 0x220));
        if ((uVar9 & 1) == 0) {
          in_stack_00000040 = (long *)0x0;
          goto LAB_0685f360;
        }
        if (unaff_x23 == 0) goto LAB_0685eebc;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar10 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0685fd5c;
        if (*(uint *)(lVar10 + lVar15 * 4 + 0x20) != uVar8) goto LAB_0685f35c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
        plVar17 = (long *)*plVar20;
        if ((plVar17 == (long *)0x0) ||
           (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                        (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)), unaff_x26 == 0)
           ) goto LAB_0685eebc;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_0685fd5c;
        if (plVar17 == (long *)0x0) goto LAB_0685eebc;
        uVar9 = (**(code **)(*plVar17 + 0x2b8))
                          (plVar17,*(undefined8 *)(unaff_x26 + lVar15 * 8 + 0x20),
                           *(undefined8 *)(*plVar17 + 0x2c0));
        if ((uVar9 & 1) == 0) goto LAB_0685f2d4;
      }
    }
LAB_0685f35c:
    in_stack_00000040 = (long *)0x0;
    goto LAB_0685f360;
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
    lVar15 = 0;
    uVar7 = 0;
    uVar9 = (ulong)in_stack_00000010;
    uVar19 = 1;
    bVar5 = false;
    goto LAB_0685fc30;
  }
  if (in_stack_00000030 == 0) goto LAB_0685ff98;
  if (unaff_x23 == 0) goto LAB_0685eebc;
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
  if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
  lVar15 = FUN_03398738();
  lVar10 = *in_stack_00000048;
  if ((lVar10 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
  if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
  lVar11 = in_stack_00000020[4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar23 = FUN_03398a84(DAT_083d57e0);
  uVar21 = DAT_083c7838;
  if (lVar15 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_0339898c(lVar15,DAT_083c7838);
    if (lVar12 == 0) goto LAB_0685fe90;
  }
  uVar3 = *(undefined4 *)(lVar10 + 0x18);
  plVar20 = (long *)(lVar23 + 0x10);
  *plVar20 = lVar12;
  if (DAT_08908cd0 == 0) {
    *(undefined4 *)(lVar23 + 0x18) = uVar3;
    *(bool *)(lVar23 + 0x1c) = lVar11 != 0;
    *in_stack_00000008 = lVar23;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar20 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar20 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(lVar23 + 0x18) = uVar3;
    *(bool *)(lVar23 + 0x1c) = lVar11 != 0;
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
  lVar15 = *in_stack_00000048;
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_068613a0(uVar21,lVar15);
  uVar7 = (uint)in_stack_00000028[3];
LAB_0685ff98:
  if (uVar7 == 0) goto LAB_0685fd5c;
  plVar17 = in_stack_00000028 + 4;
  plVar20 = (long *)*plVar17;
  if (((plVar20 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
      lVar15 == 0)) || (*in_stack_00000048 == 0)) goto LAB_0685eebc;
  iVar6 = *(int *)(*in_stack_00000048 + 0x18);
  iVar14 = (int)*(ulong *)(lVar15 + 0x18);
  if (iVar14 == iVar6) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
    lVar10 = in_stack_00000020[4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar10 != 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar7,0);
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[4];
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = FUN_06852fd0(lVar10);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar8 = *(uint *)(plVar20 + 3);
      if (uVar8 <= uVar7) goto LAB_0685fd5c;
      plVar13 = plVar20 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar8 = *(uint *)(plVar20 + 3);
      }
      if (uVar8 <= uVar7) goto LAB_0685fd5c;
      lVar15 = *in_stack_00000048;
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) goto LAB_06860fdc;
      FUN_06853274(plVar13,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar20;
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
  if (iVar14 <= iVar6) {
    if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
    plVar20 = (long *)*plVar17;
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    uVar7 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar7,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[4];
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar15 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar7;
      lVar15 = FUN_06852fd0(lVar10);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar8 = *(uint *)(plVar20 + 3);
      if (uVar8 <= uVar7) goto LAB_0685fd5c;
      plVar13 = plVar20 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar8 = *(uint *)(plVar20 + 3);
      }
      if (uVar8 <= uVar7) goto LAB_0685fd5c;
      lVar15 = *in_stack_00000048;
      if (lVar15 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar15,uVar7,plVar13,0,*(int *)(lVar15 + 0x18) - uVar7,0);
      *in_stack_00000048 = (long)plVar20;
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
  plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar15 + 0x18) & 0xffffffff);
  lVar10 = *in_stack_00000048;
  if (lVar10 == 0) goto LAB_0685eebc;
  uVar9 = 0;
  while( true ) {
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9) {
      uVar7 = *(uint *)(lVar15 + 0x18);
      if ((int)uVar9 < (int)(uVar7 - 1)) {
        do {
          uVar8 = (uint)uVar9;
          if (uVar7 <= uVar8) goto LAB_0685fd5c;
          plVar13 = *(long **)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
          if ((plVar13 == (long *)0x0) ||
             (lVar10 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
             plVar20 == (long *)0x0)) goto LAB_0685eebc;
          if ((lVar10 != 0) &&
             (lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar20 + 3) <= uVar8) goto LAB_0685fd5c;
          plVar13 = plVar20 + (long)(int)uVar8 + 4;
          *plVar13 = lVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar7 = *(uint *)(lVar15 + 0x18);
          uVar9 = (ulong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < (int)(uVar7 - 1));
      }
      if (in_stack_00000020 == (long *)0x0) break;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[4];
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar7 = (uint)uVar9;
      if (lVar10 == 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0685fd5c;
        plVar13 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (lVar15 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
           plVar20 == (long *)0x0)) break;
        if ((lVar15 != 0) &&
           (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
        goto LAB_06860ed8;
        uVar8 = *(uint *)(plVar20 + 3);
      }
      else {
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar15 = in_stack_00000020[4];
        uVar21 = FUN_03398188(DAT_083c7838,1);
        lVar15 = FUN_06852fd0(lVar15,uVar21);
        if (plVar20 == (long *)0x0) break;
        if ((lVar15 != 0) &&
           (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
        goto LAB_06860ed8;
        uVar8 = *(uint *)(plVar20 + 3);
      }
      if (uVar8 <= uVar7) goto LAB_0685fd5c;
      plVar13 = plVar20 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      if (DAT_08908cd0 == 0) {
        *in_stack_00000048 = (long)plVar20;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        *in_stack_00000048 = (long)plVar20;
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
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
    if (plVar20 == (long *)0x0) break;
    lVar10 = *(long *)(lVar10 + uVar9 * 8 + 0x20);
    if ((lVar10 != 0) &&
       (lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar11 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar20 + 3) <= uVar9) goto LAB_0685fd5c;
    plVar13 = plVar20 + uVar9 + 4;
    *plVar13 = lVar10;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = *in_stack_00000048;
    uVar9 = uVar9 + 1;
    if (lVar10 == 0) break;
  }
  goto LAB_0685eebc;
LAB_0685f2d4:
  if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_0685fd5c;
  plVar20 = (long *)*plVar20;
joined_r0x0685f2e4:
  if ((plVar20 == (long *)0x0) ||
     (plVar20 = (long *)(**(code **)(*plVar20 + 0x1e8))(plVar20,*(undefined8 *)(*plVar20 + 0x1f0)),
     plVar20 == (long *)0x0)) goto LAB_0685eebc;
  in_stack_00000040 =
       (long *)(**(code **)(*plVar20 + 0x448))(plVar20,*(undefined8 *)(*plVar20 + 0x450));
LAB_0685f360:
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
      lVar15 = (long)(int)unaff_w20;
      plVar20 = *(long **)(unaff_x27 + lVar15 * 8 + 0x20);
      if ((plVar20 == (long *)0x0) ||
         (unaff_x29 = (long *)(**(code **)(*plVar20 + 0x1e8))
                                        (plVar20,*(undefined8 *)(*plVar20 + 0x1f0)),
         unaff_x29 == (long *)0x0)) goto LAB_0685eebc;
      uVar9 = (**(code **)(*unaff_x29 + 0x378))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x380));
      if ((uVar9 & 1) != 0) {
        unaff_x29 = (long *)(**(code **)(*unaff_x29 + 0x448))
                                      (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x450));
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar10 = *unaff_x24;
      if (lVar10 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
      if (unaff_x26 == 0) goto LAB_0685eebc;
      uVar7 = *(uint *)(lVar10 + lVar15 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_0685fd5c;
      plVar20 = *(long **)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (plVar20 != unaff_x29) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
          lVar10 = *unaff_x24;
          if (lVar10 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
          lVar11 = *in_stack_00000048;
          if (lVar11 == 0) goto LAB_0685eebc;
          uVar7 = *(uint *)(lVar10 + lVar15 * 4 + 0x20);
          if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0685fd5c;
          lVar10 = *(long *)(lVar11 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar10 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar21 = DAT_083bd010;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar10 = *unaff_x24;
        if (lVar10 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
        lVar11 = *in_stack_00000048;
        if (lVar11 == 0) goto LAB_0685eebc;
        uVar7 = *(uint *)(lVar10 + lVar15 * 4 + 0x20);
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0685fd5c;
        if (*(long *)(lVar11 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar20 = (long *)FUN_0683eca4(uVar21,0);
          if (plVar20 != unaff_x29) {
            if (unaff_x29 == (long *)0x0) goto LAB_0685eebc;
            uVar9 = (**(code **)(*unaff_x29 + 0x608))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x610))
            ;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar10 = *unaff_x24;
            if (lVar10 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar10 + 0x18) <= unaff_w20) ||
               (uVar7 = *(uint *)(lVar10 + lVar15 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_0685fd5c;
            lVar10 = *(long *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                    /* try { // try from 0685f664 to 0695f66f has its CatchHandler @ 0685f73c */
              FUN_033b9870();
            }
            uVar7 = unaff_w20;
            if ((uVar9 & 1) != 0) {
              if (lVar10 != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar10 = *unaff_x24;
                if (lVar10 == 0) goto LAB_0685eebc;
                if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
                lVar11 = *in_stack_00000048;
                if (lVar11 == 0) goto LAB_0685eebc;
                uVar7 = *(uint *)(lVar10 + lVar15 * 4 + 0x20);
                if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0685fd5c;
                unaff_x22 = *(undefined8 *)(lVar11 + (long)(int)uVar7 * 8 + 0x20);
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                param_1 = *unaff_x29;
                in_w10 = (uint)*(byte *)(param_1 + 0x130);
                in_x9 = (ulong)*(byte *)(DAT_083d0c20 + 0x130);
                param_3 = DAT_083d0c20;
                goto code_r0x0685f630;
              }
              break;
            }
            if (lVar10 != 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar10 = *unaff_x24;
              if (lVar10 == 0) goto LAB_0685eebc;
              if ((*(uint *)(lVar10 + 0x18) <= unaff_w20) ||
                 (uVar8 = *(uint *)(lVar10 + lVar15 * 4 + 0x20),
                 *(uint *)(unaff_x26 + 0x18) <= uVar8)) goto LAB_0685fd5c;
              uVar9 = (**(code **)(*unaff_x29 + 0x2b8))
                                (unaff_x29,*(undefined8 *)(unaff_x26 + (long)(int)uVar8 * 8 + 0x20),
                                 *(undefined8 *)(*unaff_x29 + 0x2c0));
              if ((uVar9 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar10 = *unaff_x24;
                if (lVar10 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar10 + 0x18) <= unaff_w20) ||
                   (uVar8 = *(uint *)(lVar10 + lVar15 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar8)) goto LAB_0685fd5c;
                plVar20 = *(long **)(unaff_x26 + (long)(int)uVar8 * 8 + 0x20);
                if (plVar20 == (long *)0x0) goto LAB_0685eebc;
                uVar9 = (**(code **)(*plVar20 + 0x588))(plVar20,*(undefined8 *)(*plVar20 + 0x590));
                if ((uVar9 & 1) == 0) break;
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar10 = *unaff_x24;
                if (lVar10 == 0) goto LAB_0685eebc;
                    /* try { // try from 0685f730 to 0695f733 has its CatchHandler @ 0685f750 */
                    /* try { // try from 0685f734 to 0695f737 has its CatchHandler @ 0685f74c */
                    /* try { // try from 0685f738 to 0695f73b has its CatchHandler @ 0685f748 */
                if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0685fd5c;
                    /* catch() { ... } // from try @ 0685f664 with catch @ 0685f73c
                       try { // try from 0685f73c to 0695f893 has its CatchHandler @ 0685f364 */
                    /* catch() { ... } // from try @ 0685f5e4 with catch @ 0685f740 */
                lVar11 = *in_stack_00000048;
                    /* catch() { ... } // from try @ 0685f5a8 with catch @ 0685f744 */
                if (lVar11 == 0) goto LAB_0685eebc;
                    /* catch() { ... } // from try @ 0685f5fc with catch @ 0685f748
                       catch() { ... } // from try @ 0685f738 with catch @ 0685f748 */
                    /* catch() { ... } // from try @ 0685f5bc with catch @ 0685f74c
                       catch() { ... } // from try @ 0685f734 with catch @ 0685f74c */
                uVar8 = *(uint *)(lVar10 + lVar15 * 4 + 0x20);
                    /* catch() { ... } // from try @ 0685f730 with catch @ 0685f750 */
                    /* catch() { ... } // from try @ 0685f590 with catch @ 0685f754 */
                if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0685fd5c;
                uVar9 = (**(code **)(*unaff_x29 + 0x908))
                                  (unaff_x29,*(undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20),
                                   *(undefined8 *)(*unaff_x29 + 0x910));
                if ((uVar9 & 1) == 0) break;
              }
            }
          }
        }
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
  if (((((uint)in_stack_00000020[3] <= uVar7) || (uVar16 <= uVar19)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar19)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar19)) goto LAB_0685fd5c;
  lVar10 = in_stack_00000020[lVar15 + 4];
  lVar11 = in_stack_00000028[lVar15 + 4];
  uVar21 = *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20);
  lVar23 = in_stack_00000028[uVar19 + 4];
  uVar22 = *(undefined8 *)(unaff_x23 + uVar19 * 8 + 0x20);
  lVar15 = in_stack_00000020[uVar19 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar6 = FUN_06861580(lVar11,uVar21,lVar10,lVar23,uVar22,lVar15);
  if (iVar6 == 0) {
    if (uVar19 + 1 == uVar9) {
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
    uVar19 = uVar19 + 1;
    uVar16 = in_stack_00000028[3] & 0xffffffff;
    lVar15 = (long)(int)uVar7;
    if ((uint)in_stack_00000028[3] <= uVar7) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar6 == 2) {
    uVar7 = (uint)uVar19;
    if (uVar19 + 1 == uVar9) goto LAB_0685fdf8;
    bVar5 = false;
    goto LAB_0685fd44;
  }
  if (uVar19 + 1 != uVar9) goto LAB_0685fd44;
  if (bVar5) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    plVar20 = (long *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
    if (*plVar20 == 0) goto LAB_0685eebc;
    lVar15 = FUN_03398738();
    lVar10 = *in_stack_00000048;
    if ((lVar10 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar23 = FUN_03398a84(DAT_083d57e0);
    uVar21 = DAT_083c7838;
    if (lVar15 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_0339898c(lVar15,DAT_083c7838);
      if (lVar12 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar15,uVar21);
      }
    }
    uVar3 = *(undefined4 *)(lVar10 + 0x18);
    plVar17 = (long *)(lVar23 + 0x10);
    *plVar17 = lVar12;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar11 != 0;
      *in_stack_00000008 = lVar23;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)(lVar23 + 0x18) = uVar3;
      *(bool *)(lVar23 + 0x1c) = lVar11 != 0;
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
    lVar15 = *plVar20;
    lVar10 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar15,lVar10);
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
  plVar17 = in_stack_00000028 + (long)(int)uVar7 + 4;
  plVar20 = (long *)*plVar17;
  if (((plVar20 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar20 + 1000))(plVar20,*(undefined8 *)(*plVar20 + 0x3f0)),
      lVar15 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar6 = *(int *)(*in_stack_00000048 + 0x18);
  iVar14 = (int)*(ulong *)(lVar15 + 0x18);
  if (iVar14 == iVar6) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar10 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar10 != 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar8 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar8,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = FUN_06852fd0(lVar10);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar18 = *(uint *)(plVar20 + 3);
      if (uVar18 <= uVar8) goto LAB_0685fd5c;
      plVar13 = plVar20 + (long)(int)uVar8 + 4;
      *plVar13 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar18 = *(uint *)(plVar20 + 3);
      }
      if (uVar18 <= uVar8) goto LAB_0685fd5c;
      lVar15 = *in_stack_00000048;
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar13);
      }
      FUN_06853274(plVar13,*(undefined8 *)(lVar15 + (long)(int)uVar8 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar20;
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
    if (iVar6 < iVar14) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar15 + 0x18) & 0xffffffff);
      lVar10 = *in_stack_00000048;
      if (lVar10 != 0) {
        uVar9 = 0;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9) {
            uVar8 = *(uint *)(lVar15 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar9) goto LAB_06860c2c;
            goto LAB_06860788;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0685fd5c;
          if (plVar20 == (long *)0x0) break;
          lVar10 = *(long *)(lVar10 + uVar9 * 8 + 0x20);
          if ((lVar10 != 0) &&
             (lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar20 + 3) <= uVar9) goto LAB_0685fd5c;
          plVar13 = plVar20 + uVar9 + 4;
          *plVar13 = lVar10;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar10 = *in_stack_00000048;
          uVar9 = uVar9 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar20 = (long *)*plVar17;
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    uVar8 = (**(code **)(*plVar20 + 0x288))(plVar20,*(undefined8 *)(*plVar20 + 0x290));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar20 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar8 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar20,0,uVar8,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar10 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar15 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar8;
      lVar15 = FUN_06852fd0(lVar10);
      if (plVar20 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
      goto LAB_06860ed8;
      uVar18 = *(uint *)(plVar20 + 3);
      if (uVar18 <= uVar8) goto LAB_0685fd5c;
      plVar13 = plVar20 + (long)(int)uVar8 + 4;
      *plVar13 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar18 = *(uint *)(plVar20 + 3);
      }
      if (uVar18 <= uVar8) goto LAB_0685fd5c;
      lVar15 = *in_stack_00000048;
      if (lVar15 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar15,uVar8,plVar13,0,*(int *)(lVar15 + 0x18) - uVar8,0);
      *in_stack_00000048 = (long)plVar20;
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
    plVar13 = *(long **)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar20 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar10 != 0) &&
       (lVar11 = FUN_0339898c(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar11 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar20 + 3) <= uVar18) goto LAB_0685fd5c;
    plVar13 = plVar20 + (long)(int)uVar18 + 4;
    *plVar13 = lVar10;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar8 = *(uint *)(lVar15 + 0x18);
    uVar9 = (ulong)(uVar18 + 1);
    if ((int)(uVar8 - 1) <= (int)(uVar18 + 1)) break;
LAB_06860788:
    uVar18 = (uint)uVar9;
    if (uVar8 <= uVar18) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar10 = in_stack_00000020[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = (uint)uVar9;
  if (lVar10 == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0685fd5c;
    plVar13 = *(long **)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar20 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar15 != 0) &&
       (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0))
    goto LAB_06860ed8;
    uVar18 = *(uint *)(plVar20 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar15 = in_stack_00000020[(long)(int)uVar7 + 4];
    uVar21 = FUN_03398188(DAT_083c7838,1);
    lVar15 = FUN_06852fd0(lVar15,uVar21);
    if (plVar20 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar15 != 0) &&
       (lVar10 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0)) {
LAB_06860ed8:
      uVar21 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar21,0);
    }
    uVar18 = *(uint *)(plVar20 + 3);
  }
  if (uVar18 <= uVar8) goto LAB_0685fd5c;
  plVar13 = plVar20 + (long)(int)uVar8 + 4;
  *plVar13 = lVar15;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar20;
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
    return *plVar17;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}



/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 0685efd8
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  long *unaff_x20;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *unaff_x22;
  long lVar22;
  long unaff_x23;
  uint unaff_w24;
  undefined8 uVar23;
  ulong unaff_x25;
  undefined8 uVar24;
  long unaff_x26;
  long *unaff_x28;
  long lVar25;
  long *in_stack_00000008;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x0685efd8:
  uVar16 = unaff_x25;
  if (param_1 == 0) {
LAB_0685f008:
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24))
    goto LAB_0685fd5c;
    puVar1 = (undefined8 *)(unaff_x23 + 0x20 + (long)(int)unaff_w24 * 8);
    *puVar1 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar7 = *(uint *)(in_stack_00000028 + 3);
    if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
    lVar22 = *unaff_x20;
    if (lVar22 != 0) {
      lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*in_stack_00000028 + 0x40));
      if (lVar11 == 0) goto LAB_06860ed8;
      uVar7 = (uint)in_stack_00000028[3];
    }
    if (uVar7 <= unaff_w24) goto LAB_0685fd5c;
    plVar10 = in_stack_00000028 + (long)(int)unaff_w24 + 4;
    *plVar10 = lVar22;
    unaff_w24 = unaff_w24 + 1;
    if (DAT_08908cd0 == 0) goto LAB_0685fbb8;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
    unaff_x22 = &DAT_083d2000;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
    plVar10 = (long *)*unaff_x20;
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar7 >> 1 & 1) != 0) goto LAB_0685f008;
  }
LAB_0685fbc4:
  uVar7 = *(uint *)(in_stack_00000028 + 3);
  uVar15 = (ulong)uVar7;
  unaff_x25 = uVar16 + 1;
  if ((long)(int)uVar7 <= (long)unaff_x25) {
    if (unaff_w24 != 1) {
      if (unaff_w24 == 0) {
        uVar24 = FUN_033d1ba8(&DAT_08440468);
        FUN_033d1ba8(&DAT_083cee70);
        uVar23 = thunk_FUN_03398a84();
        FUN_0683135c(uVar23,uVar24,0);
        goto LAB_06860fa0;
      }
      if ((int)unaff_w24 < 2) {
        uVar7 = 0;
        in_stack_00000048 = unaff_x28;
        goto LAB_0685fdf8;
      }
      if (uVar7 == 0) goto LAB_0685fd5c;
      if (unaff_x23 == 0) goto LAB_0685eebc;
      lVar22 = 0;
      uVar7 = 0;
      uVar16 = (ulong)unaff_w24;
      uVar19 = 1;
      bVar6 = false;
      goto LAB_0685fc30;
    }
    if (in_stack_00000030 == 0) goto LAB_0685ff98;
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_0685eebc;
    lVar22 = FUN_03398738();
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
    lVar21 = in_stack_00000020[4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar23 = DAT_083c7838;
    if (lVar22 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_0339898c(lVar22,DAT_083c7838);
      if (lVar12 == 0) goto LAB_0685fe90;
    }
    uVar3 = *(undefined4 *)(lVar11 + 0x18);
    plVar10 = (long *)(lVar25 + 0x10);
    *plVar10 = lVar12;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
    }
    else {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
      puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
    uVar23 = *(undefined8 *)(unaff_x23 + 0x20);
    lVar22 = *unaff_x28;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(uVar23,lVar22);
    uVar7 = (uint)in_stack_00000028[3];
    unaff_x22 = &DAT_083d2000;
LAB_0685ff98:
    if (uVar7 == 0) goto LAB_0685fd5c;
    plVar17 = in_stack_00000028 + 4;
    plVar10 = (long *)*plVar17;
    if (((plVar10 == (long *)0x0) ||
        (lVar22 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
        lVar22 == 0)) || (*unaff_x28 == 0)) goto LAB_0685eebc;
    iVar8 = *(int *)(*unaff_x28 + 0x18);
    iVar14 = (int)*(ulong *)(lVar22 + 0x18);
    if (iVar14 == iVar8) {
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
      lVar11 = in_stack_00000020[4];
      if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (lVar11 != 0) {
        plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
        uVar7 = *(int *)(lVar22 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar10,0,uVar7,0);
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar11 = in_stack_00000020[4];
        lVar22 = FUN_03398188(DAT_083c7838,1);
        if (lVar22 == 0) goto LAB_0685eebc;
        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
        *(undefined4 *)(lVar22 + 0x20) = 1;
        lVar22 = FUN_06852fd0(lVar11);
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar22 != 0) &&
           (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_06860ed8;
        uVar9 = *(uint *)(plVar10 + 3);
        if (uVar9 <= uVar7) goto LAB_0685fd5c;
        plVar13 = plVar10 + (long)(int)uVar7 + 4;
        *plVar13 = lVar22;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar9 = *(uint *)(plVar10 + 3);
        }
        if (uVar9 <= uVar7) goto LAB_0685fd5c;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_0685fd5c;
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0685eebc;
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
        FUN_06853274(plVar13,*(undefined8 *)(lVar22 + (long)(int)uVar7 * 8 + 0x20),0,0);
        *unaff_x28 = (long)plVar10;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
LAB_06860db0:
      if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
      goto LAB_06860eb4;
    }
    if (iVar14 <= iVar8) {
      if ((int)in_stack_00000028[3] == 0) goto LAB_0685fd5c;
      plVar10 = (long *)*plVar17;
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      uVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
      if ((uVar7 >> 1 & 1) == 0) {
        plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
        uVar7 = *(int *)(lVar22 + 0x18) - 1;
        FUN_068537e0(*unaff_x28,0,plVar10,0,uVar7,0);
        if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar11 = in_stack_00000020[4];
        lVar22 = FUN_03398188(DAT_083c7838,1);
        if ((*unaff_x28 == 0) || (lVar22 == 0)) goto LAB_0685eebc;
        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
        *(uint *)(lVar22 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
        lVar22 = FUN_06852fd0(lVar11);
        if (plVar10 == (long *)0x0) goto LAB_0685eebc;
        if ((lVar22 != 0) &&
           (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_06860ed8;
        uVar9 = *(uint *)(plVar10 + 3);
        if (uVar9 <= uVar7) goto LAB_0685fd5c;
        plVar13 = plVar10 + (long)(int)uVar7 + 4;
        *plVar13 = lVar22;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar9 = *(uint *)(plVar10 + 3);
        }
        if (uVar9 <= uVar7) goto LAB_0685fd5c;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_0685eebc;
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
              != DAT_083c8a28)) goto LAB_06860fdc;
        }
        FUN_068537e0(lVar22,uVar7,plVar13,0,*(int *)(lVar22 + 0x18) - uVar7,0);
        *unaff_x28 = (long)plVar10;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      goto LAB_06860db0;
    }
    plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar22 + 0x18) & 0xffffffff);
    lVar11 = *unaff_x28;
    if (lVar11 == 0) goto LAB_0685eebc;
    uVar16 = 0;
    while( true ) {
      if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar16) {
        uVar7 = *(uint *)(lVar22 + 0x18);
        if ((int)uVar16 < (int)(uVar7 - 1)) {
          do {
            uVar9 = (uint)uVar16;
            if (uVar7 <= uVar9) goto LAB_0685fd5c;
            plVar13 = *(long **)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
            if ((plVar13 == (long *)0x0) ||
               (lVar11 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
               plVar10 == (long *)0x0)) goto LAB_0685eebc;
            if ((lVar11 != 0) &&
               (lVar21 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0))
            goto LAB_06860ed8;
            if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_0685fd5c;
            plVar13 = plVar10 + (long)(int)uVar9 + 4;
            *plVar13 = lVar11;
            if (DAT_08908cd0 != 0) {
              puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar7 = *(uint *)(lVar22 + 0x18);
            uVar16 = (ulong)(uVar9 + 1);
          } while ((int)(uVar9 + 1) < (int)(uVar7 - 1));
        }
        if (in_stack_00000020 == (long *)0x0) break;
        if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
        lVar11 = in_stack_00000020[4];
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar7 = (uint)uVar16;
        if (lVar11 == 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_0685fd5c;
          plVar13 = *(long **)(lVar22 + (long)(int)uVar7 * 8 + 0x20);
          if ((plVar13 == (long *)0x0) ||
             (lVar22 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
             plVar10 == (long *)0x0)) break;
          if ((lVar22 != 0) &&
             (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          uVar9 = *(uint *)(plVar10 + 3);
        }
        else {
          if ((int)in_stack_00000020[3] == 0) goto LAB_0685fd5c;
          lVar22 = in_stack_00000020[4];
          uVar23 = FUN_03398188(DAT_083c7838,1);
          lVar22 = FUN_06852fd0(lVar22,uVar23);
          if (plVar10 == (long *)0x0) break;
          if ((lVar22 != 0) &&
             (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
          goto LAB_06860ed8;
          uVar9 = *(uint *)(plVar10 + 3);
        }
        if (uVar9 <= uVar7) goto LAB_0685fd5c;
        plVar13 = plVar10 + (long)(int)uVar7 + 4;
        *plVar13 = lVar22;
        if (DAT_08908cd0 == 0) {
          *unaff_x28 = (long)plVar10;
        }
        else {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
          *unaff_x28 = (long)plVar10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        goto LAB_06860db0;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_0685fd5c;
      if (plVar10 == (long *)0x0) break;
      lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
      if ((lVar11 != 0) &&
         (lVar21 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0))
      goto LAB_06860ed8;
      if (*(uint *)(plVar10 + 3) <= uVar16) goto LAB_0685fd5c;
      plVar13 = plVar10 + uVar16 + 4;
      *plVar13 = lVar11;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar11 = *unaff_x28;
      uVar16 = uVar16 + 1;
      if (lVar11 == 0) break;
    }
    goto LAB_0685eebc;
  }
  if (uVar15 <= unaff_x25) goto LAB_0685fd5c;
  unaff_x20 = in_stack_00000028 + uVar16 + 5;
  uVar15 = FUN_06740938(*unaff_x20,0,0);
  uVar16 = unaff_x25;
  if ((uVar15 & 1) != 0) goto LAB_0685fbc4;
  if (*(uint *)(in_stack_00000028 + 3) <= unaff_x25) goto LAB_0685fd5c;
  plVar10 = (long *)*unaff_x20;
  if ((plVar10 == (long *)0x0) ||
     (lVar22 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
     lVar22 == 0)) goto LAB_0685eebc;
  uVar15 = *(ulong *)(lVar22 + 0x18);
  lVar11 = *unaff_x28;
  if (uVar15 == 0) goto LAB_0685efd0;
  if (lVar11 == 0) goto LAB_0685eebc;
  uVar7 = *(uint *)(lVar11 + 0x18);
  iVar8 = (int)uVar15;
  if ((int)uVar7 < iVar8) {
    uVar9 = iVar8 - 1;
    if ((int)uVar7 < (int)uVar9) {
      plVar10 = (long *)(lVar22 + (long)(int)uVar7 * 8 + 0x20);
      do {
        if ((uint)uVar15 <= uVar7) goto LAB_0685fd5c;
        plVar17 = (long *)*plVar10;
        if (plVar17 == (long *)0x0) goto LAB_0685eebc;
        lVar11 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210));
        if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca050);
        }
        if (lVar11 == **(long **)(DAT_083ca050 + 0xb8)) {
          uVar15 = (ulong)*(uint *)(lVar22 + 0x18);
          uVar9 = *(uint *)(lVar22 + 0x18) - 1;
          break;
        }
        uVar15 = *(ulong *)(lVar22 + 0x18);
        uVar7 = uVar7 + 1;
        plVar10 = plVar10 + 1;
        uVar9 = (int)uVar15 - 1;
      } while ((int)uVar7 < (int)uVar9);
    }
    if (uVar7 == uVar9) {
      if ((uint)uVar15 <= uVar9) goto LAB_0685fd5c;
      plVar10 = (long *)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
      plVar17 = (long *)*plVar10;
      if (plVar17 == (long *)0x0) goto LAB_0685eebc;
      lVar11 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210));
      if (*(int *)(DAT_083ca050 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca050);
      }
      if (lVar11 != **(long **)(DAT_083ca050 + 0xb8)) goto LAB_0685f35c;
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar17 = (long *)*plVar10;
      if ((plVar17 == (long *)0x0) ||
         (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
         plVar17 == (long *)0x0)) goto LAB_0685eebc;
      uVar15 = (**(code **)(*plVar17 + 0x358))(plVar17,*(undefined8 *)(*plVar17 + 0x360));
      uVar23 = DAT_083bd0a8;
      if ((uVar15 & 1) == 0) goto LAB_0685fbc0;
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar17 = (long *)*plVar10;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar23 = FUN_0683eca4(uVar23,0);
      if (plVar17 == (long *)0x0) goto LAB_0685eebc;
      uVar15 = (**(code **)(*plVar17 + 0x218))(plVar17,uVar23,1,*(undefined8 *)(*plVar17 + 0x220));
      if ((uVar15 & 1) != 0) {
        if (uVar9 < *(uint *)(lVar22 + 0x18)) {
          plVar10 = (long *)*plVar10;
          goto joined_r0x0685fb88;
        }
        goto LAB_0685fd5c;
      }
    }
    goto LAB_0685fbb8;
  }
  if (iVar8 == 0) goto LAB_0685fd5c;
  uVar9 = iVar8 - 1;
  lVar11 = (long)(int)uVar9;
  plVar10 = (long *)(lVar22 + lVar11 * 8 + 0x20);
  plVar17 = (long *)*plVar10;
  if ((plVar17 == (long *)0x0) ||
     (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
     plVar17 == (long *)0x0)) goto LAB_0685eebc;
  uVar15 = (**(code **)(*plVar17 + 0x358))(plVar17,*(undefined8 *)(*plVar17 + 0x360));
  uVar23 = DAT_083bd0a8;
  if (iVar8 < (int)uVar7) {
    if ((uVar15 & 1) != 0) {
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar17 = (long *)*plVar10;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar23 = FUN_0683eca4(uVar23,0);
      if (plVar17 == (long *)0x0) goto LAB_0685eebc;
      uVar15 = (**(code **)(*plVar17 + 0x218))(plVar17,uVar23,1,*(undefined8 *)(*plVar17 + 0x220));
      if ((uVar15 & 1) == 0) goto LAB_0685fbb8;
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar21 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (*(uint *)(lVar21 + lVar11 * 4 + 0x20) == uVar9) {
LAB_0685f2d4:
        if (uVar9 < *(uint *)(lVar22 + 0x18)) {
          plVar10 = (long *)*plVar10;
joined_r0x0685fb88:
          if ((plVar10 != (long *)0x0) &&
             (plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
             plVar10 != (long *)0x0)) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x448))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x450));
            goto LAB_0685f360;
          }
          goto LAB_0685eebc;
        }
        goto LAB_0685fd5c;
      }
    }
LAB_0685fbc0:
    unaff_x22 = &DAT_083d2000;
    goto LAB_0685fbc4;
  }
  if ((uVar15 & 1) == 0) {
LAB_0685f35c:
    plVar10 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar17 = (long *)*plVar10;
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar23 = FUN_0683eca4(uVar23,0);
    if (plVar17 == (long *)0x0) goto LAB_0685eebc;
    uVar15 = (**(code **)(*plVar17 + 0x218))(plVar17,uVar23,1,*(undefined8 *)(*plVar17 + 0x220));
    if ((uVar15 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar21 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (*(uint *)(lVar21 + lVar11 * 4 + 0x20) == uVar9) {
        if (uVar9 < *(uint *)(lVar22 + 0x18)) {
          plVar17 = (long *)*plVar10;
          if ((plVar17 != (long *)0x0) &&
             (plVar17 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                          (plVar17,*(undefined8 *)(*plVar17 + 0x1f0)),
             unaff_x26 != 0)) {
            if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
              if (plVar17 != (long *)0x0) {
                uVar15 = (**(code **)(*plVar17 + 0x2b8))
                                   (plVar17,*(undefined8 *)(unaff_x26 + lVar11 * 8 + 0x20),
                                    *(undefined8 *)(*plVar17 + 0x2c0));
                if ((uVar15 & 1) == 0) goto LAB_0685f2d4;
                goto LAB_0685f35c;
              }
              goto LAB_0685eebc;
            }
            goto LAB_0685fd5c;
          }
          goto LAB_0685eebc;
        }
        goto LAB_0685fd5c;
      }
      goto LAB_0685f35c;
    }
    plVar10 = (long *)0x0;
  }
LAB_0685f360:
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
    if (plVar10 != (long *)0x0) goto LAB_0685f370;
LAB_0685f384:
    if (*unaff_x28 == 0) goto LAB_0685eebc;
    uVar7 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    if (plVar10 == (long *)0x0) goto LAB_0685f384;
LAB_0685f370:
    uVar7 = *(int *)(lVar22 + 0x18) - 1;
  }
  if ((int)uVar7 < 1) {
    uVar18 = 0;
  }
  else {
    uVar9 = 0;
    plVar17 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      lVar11 = (long)(int)uVar9;
      plVar13 = *(long **)(lVar22 + lVar11 * 8 + 0x20);
      if ((plVar13 == (long *)0x0) ||
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
         plVar13 == (long *)0x0)) goto LAB_0685eebc;
      uVar15 = (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
      if ((uVar15 & 1) != 0) {
        plVar13 = (long *)(**(code **)(*plVar13 + 0x448))(plVar13,*(undefined8 *)(*plVar13 + 0x450))
        ;
      }
      if (unaff_x23 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
      lVar21 = *plVar17;
      if (lVar21 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
      if (unaff_x26 == 0) goto LAB_0685eebc;
      uVar18 = *(uint *)(lVar21 + lVar11 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar18) goto LAB_0685fd5c;
      plVar20 = *(long **)(unaff_x26 + (long)(int)uVar18 * 8 + 0x20);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      unaff_x28 = in_stack_00000048;
      if (plVar20 != plVar13) {
        if ((in_stack_00000038._4_4_ >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
          lVar21 = *plVar17;
          if (lVar21 == 0) goto LAB_0685eebc;
          if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
          lVar25 = *in_stack_00000048;
          if (lVar25 == 0) goto LAB_0685eebc;
          uVar18 = *(uint *)(lVar21 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_0685fd5c;
          lVar21 = *(long *)(lVar25 + (long)(int)uVar18 * 8 + 0x20);
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (lVar21 == *(long *)(*(long *)(DAT_083d23b8 + 0xb8) + 0x18)) goto LAB_0685f77c;
        }
        uVar23 = DAT_083bd010;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
        lVar21 = *plVar17;
        if (lVar21 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
        lVar25 = *in_stack_00000048;
        if (lVar25 == 0) goto LAB_0685eebc;
        uVar18 = *(uint *)(lVar21 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_0685fd5c;
        if (*(long *)(lVar25 + (long)(int)uVar18 * 8 + 0x20) != 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar20 = (long *)FUN_0683eca4(uVar23,0);
          if (plVar20 != plVar13) {
            if (plVar13 == (long *)0x0) goto LAB_0685eebc;
            uVar15 = (**(code **)(*plVar13 + 0x608))(plVar13,*(undefined8 *)(*plVar13 + 0x610));
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
            lVar21 = *plVar17;
            if (lVar21 == 0) goto LAB_0685eebc;
            if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
               (uVar18 = *(uint *)(lVar21 + lVar11 * 4 + 0x20),
               *(uint *)(unaff_x26 + 0x18) <= uVar18)) goto LAB_0685fd5c;
            lVar21 = *(long *)(unaff_x26 + (long)(int)uVar18 * 8 + 0x20);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar18 = uVar9;
            if ((uVar15 & 1) == 0) {
              if (lVar21 != 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                lVar21 = *plVar17;
                if (lVar21 == 0) goto LAB_0685eebc;
                if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
                   (uVar4 = *(uint *)(lVar21 + lVar11 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                uVar15 = (**(code **)(*plVar13 + 0x2b8))
                                   (plVar13,*(undefined8 *)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20)
                                    ,*(undefined8 *)(*plVar13 + 0x2c0));
                if ((uVar15 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
                  lVar21 = *plVar17;
                  if (lVar21 == 0) goto LAB_0685eebc;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
                     (uVar4 = *(uint *)(lVar21 + lVar11 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar4)) goto LAB_0685fd5c;
                  plVar20 = *(long **)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
                  if (plVar20 == (long *)0x0) goto LAB_0685eebc;
                  uVar15 = (**(code **)(*plVar20 + 0x588))
                                     (plVar20,*(undefined8 *)(*plVar20 + 0x590));
                  if ((uVar15 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar21 = *plVar17;
                      if (lVar21 != 0) {
                        if (uVar9 < *(uint *)(lVar21 + 0x18)) {
                          lVar25 = *in_stack_00000048;
                          if (lVar25 != 0) {
                            uVar4 = *(uint *)(lVar21 + lVar11 * 4 + 0x20);
                            if (uVar4 < *(uint *)(lVar25 + 0x18)) {
                              uVar15 = (**(code **)(*plVar13 + 0x908))
                                                 (plVar13,*(undefined8 *)
                                                           (lVar25 + (long)(int)uVar4 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar13 + 0x910));
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
              if (lVar21 == 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_0685fd5c;
              lVar21 = *plVar17;
              if (lVar21 == 0) goto LAB_0685eebc;
              if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0685fd5c;
              lVar25 = *in_stack_00000048;
              if (lVar25 == 0) goto LAB_0685eebc;
              uVar4 = *(uint *)(lVar21 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar25 + 0x18) <= uVar4) goto LAB_0685fd5c;
              uVar23 = *(undefined8 *)(lVar25 + (long)(int)uVar4 * 8 + 0x20);
              if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                FUN_033b9870();
              }
              if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 +
                           -8) != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(plVar13);
              }
              uVar15 = FUN_06861228(uVar23,plVar13);
joined_r0x0685f778:
              if ((uVar15 & 1) == 0) break;
            }
          }
        }
      }
LAB_0685f77c:
      uVar9 = uVar9 + 1;
      uVar18 = uVar7;
    } while (uVar7 != uVar9);
  }
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((plVar10 != (long *)0x0) && (uVar18 == *(int *)(lVar22 + 0x18) - 1U)) {
    lVar22 = *unaff_x28;
    if (lVar22 == 0) goto LAB_0685eebc;
    lVar11 = (-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3) + 0x20;
    while ((int)uVar18 < *(int *)(lVar22 + 0x18)) {
      uVar15 = (**(code **)(*plVar10 + 0x608))(plVar10,*(undefined8 *)(*plVar10 + 0x610));
      if (unaff_x26 == 0) goto LAB_0685eebc;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar18) goto LAB_0685fd5c;
      lVar22 = *(long *)(unaff_x26 + lVar11);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
        if ((uVar15 & 1) != 0) goto LAB_0685f828;
LAB_0685f8ac:
        if (lVar22 != 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar18) goto LAB_0685fd5c;
          uVar15 = (**(code **)(*plVar10 + 0x2b8))
                             (plVar10,*(undefined8 *)(unaff_x26 + lVar11),
                              *(undefined8 *)(*plVar10 + 0x2c0));
          if ((uVar15 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar18) goto LAB_0685fd5c;
            plVar17 = *(long **)(unaff_x26 + lVar11);
            if (plVar17 == (long *)0x0) goto LAB_0685eebc;
            uVar15 = (**(code **)(*plVar17 + 0x588))(plVar17,*(undefined8 *)(*plVar17 + 0x590));
            if ((uVar15 & 1) != 0) {
              lVar22 = *unaff_x28;
              if (lVar22 != 0) {
                if (uVar18 < *(uint *)(lVar22 + 0x18)) {
                  uVar15 = (**(code **)(*plVar10 + 0x908))
                                     (plVar10,*(undefined8 *)(lVar22 + lVar11),
                                      *(undefined8 *)(*plVar10 + 0x910));
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
        if ((uVar15 & 1) == 0) goto LAB_0685f8ac;
LAB_0685f828:
        if (lVar22 == 0) break;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_0685eebc;
        if (*(uint *)(lVar22 + 0x18) <= uVar18) goto LAB_0685fd5c;
        uVar23 = *(undefined8 *)(lVar22 + lVar11);
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8)
            != DAT_083d0c20)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar10);
        }
        uVar15 = FUN_06861228(uVar23,plVar10);
joined_r0x0685f89c:
        if ((uVar15 & 1) == 0) break;
      }
      lVar22 = *unaff_x28;
      uVar18 = uVar18 + 1;
      lVar11 = lVar11 + 8;
      if (lVar22 == 0) goto LAB_0685eebc;
    }
  }
  unaff_x22 = &DAT_083d2000;
  if (*unaff_x28 == 0) goto LAB_0685eebc;
  if (uVar18 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_0685fbc4;
  if (unaff_x23 == 0) goto LAB_0685eebc;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w24))
  goto LAB_0685fd5c;
  lVar22 = (long)(int)unaff_w24;
  puVar1 = (undefined8 *)(unaff_x23 + 0x20 + lVar22 * 8);
  *puVar1 = *(undefined8 *)(unaff_x23 + 0x20 + unaff_x25 * 8);
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if ((plVar10 != (long *)0x0) &&
     (lVar11 = FUN_0339898c(plVar10,*(undefined8 *)(*in_stack_00000020 + 0x40)), lVar11 == 0))
  goto LAB_06860ed8;
  if (*(uint *)(in_stack_00000020 + 3) <= unaff_w24) goto LAB_0685fd5c;
  plVar17 = in_stack_00000020 + lVar22 + 4;
  *plVar17 = (long)plVar10;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar7 = *(uint *)(in_stack_00000028 + 3);
  if (uVar7 <= unaff_x25) goto LAB_0685fd5c;
  lVar11 = *unaff_x20;
  if (lVar11 != 0) {
    lVar21 = FUN_0339898c(lVar11,*(undefined8 *)(*in_stack_00000028 + 0x40));
    if (lVar21 == 0) goto LAB_06860ed8;
    uVar7 = (uint)in_stack_00000028[3];
  }
  if (uVar7 <= unaff_w24) goto LAB_0685fd5c;
  plVar10 = in_stack_00000028 + lVar22 + 4;
  *plVar10 = lVar11;
  unaff_w24 = unaff_w24 + 1;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
    unaff_x22 = &DAT_083d2000;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_0685fbc4;
  }
LAB_0685fbb8:
  unaff_x22 = &DAT_083d2000;
  uVar16 = unaff_x25;
  goto LAB_0685fbc4;
LAB_0685fc30:
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (((((uint)in_stack_00000020[3] <= uVar7) || (uVar15 <= uVar19)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar19)) ||
     ((in_stack_00000020[3] & 0xffffffffU) <= uVar19)) goto LAB_0685fd5c;
  lVar11 = in_stack_00000020[lVar22 + 4];
  lVar21 = in_stack_00000028[lVar22 + 4];
  uVar23 = *(undefined8 *)(unaff_x23 + lVar22 * 8 + 0x20);
  lVar25 = in_stack_00000028[uVar19 + 4];
  uVar24 = *(undefined8 *)(unaff_x23 + uVar19 * 8 + 0x20);
  lVar22 = in_stack_00000020[uVar19 + 4];
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar8 = FUN_06861580(lVar21,uVar23,lVar11,lVar25,uVar24,lVar22);
  if (iVar8 == 0) {
    if (uVar19 + 1 == uVar16) {
LAB_06860ef4:
      uVar24 = FUN_033d1ba8(&DAT_08433710);
      FUN_033d1ba8(&DAT_083c8758);
      uVar23 = thunk_FUN_03398a84();
      FUN_0673e2f4(uVar23,uVar24,0);
LAB_06860fa0:
      uVar24 = FUN_033d1ba8(&DAT_08407df8);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar23,uVar24);
    }
    bVar6 = true;
LAB_0685fd44:
    uVar19 = uVar19 + 1;
    uVar15 = in_stack_00000028[3] & 0xffffffff;
    lVar22 = (long)(int)uVar7;
    if ((uint)in_stack_00000028[3] <= uVar7) goto LAB_0685fd5c;
    goto LAB_0685fc30;
  }
  if (iVar8 == 2) {
    unaff_x22 = &DAT_083d2000;
    uVar7 = (uint)uVar19;
    if (uVar19 + 1 == uVar16) goto LAB_0685fdf8;
    bVar6 = false;
    goto LAB_0685fd44;
  }
  unaff_x22 = &DAT_083d2000;
  if (uVar19 + 1 != uVar16) goto LAB_0685fd44;
  if (bVar6) goto LAB_06860ef4;
LAB_0685fdf8:
  if (in_stack_00000030 != 0) {
    if (unaff_x23 == 0) goto LAB_0685eebc;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
    if (*plVar10 == 0) goto LAB_0685eebc;
    lVar22 = FUN_03398738();
    lVar11 = *in_stack_00000048;
    if ((lVar11 == 0) || (in_stack_00000020 == (long *)0x0)) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar21 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar25 = FUN_03398a84(DAT_083d57e0);
    uVar23 = DAT_083c7838;
    if (lVar22 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_0339898c(lVar22,DAT_083c7838);
      if (lVar12 == 0) {
LAB_0685fe90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar22,uVar23);
      }
    }
    uVar3 = *(undefined4 *)(lVar11 + 0x18);
    plVar17 = (long *)(lVar25 + 0x10);
    *plVar17 = lVar12;
    if (DAT_08908cd0 == 0) {
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
    }
    else {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined4 *)(lVar25 + 0x18) = uVar3;
      *(bool *)(lVar25 + 0x1c) = lVar21 != 0;
      *in_stack_00000008 = lVar25;
      puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000008 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000008 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0685fd5c;
    lVar22 = *plVar10;
    lVar11 = *in_stack_00000048;
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_068613a0(lVar22,lVar11);
    unaff_x22 = &DAT_083d2000;
  }
  if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
  plVar17 = in_stack_00000028 + (long)(int)uVar7 + 4;
  plVar10 = (long *)*plVar17;
  if (((plVar10 == (long *)0x0) ||
      (lVar22 = (**(code **)(*plVar10 + 1000))(plVar10,*(undefined8 *)(*plVar10 + 0x3f0)),
      lVar22 == 0)) || (*in_stack_00000048 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar8 = *(int *)(*in_stack_00000048 + 0x18);
  iVar14 = (int)*(ulong *)(lVar22 + 0x18);
  if (iVar14 == iVar8) {
    if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
    if (*(int *)(unaff_x22[0x77] + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar11 != 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
      uVar9 = *(int *)(lVar22 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar9,0);
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar22 = FUN_03398188(DAT_083c7838,1);
      if (lVar22 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar22 + 0x20) = 1;
      lVar22 = FUN_06852fd0(lVar11);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar22 != 0) &&
         (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar18 = *(uint *)(plVar10 + 3);
      if (uVar18 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar10 + (long)(int)uVar9 + 4;
      *plVar13 = lVar22;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar18 = *(uint *)(plVar10 + 3);
      }
      if (uVar18 <= uVar9) goto LAB_0685fd5c;
      lVar22 = *in_stack_00000048;
      if (lVar22 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar13);
      }
      FUN_06853274(plVar13,*(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20),0,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  else {
    if (iVar8 < iVar14) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar22 + 0x18) & 0xffffffff);
      lVar11 = *in_stack_00000048;
      if (lVar11 != 0) {
        uVar16 = 0;
        do {
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar16) {
            uVar9 = *(uint *)(lVar22 + 0x18);
            if ((int)(uVar9 - 1) <= (int)uVar16) goto LAB_06860c2c;
            goto LAB_06860788;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_0685fd5c;
          if (plVar10 == (long *)0x0) break;
          lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
          if ((lVar11 != 0) &&
             (lVar21 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar10 + 3) <= uVar16) goto LAB_0685fd5c;
          plVar13 = plVar10 + uVar16 + 4;
          *plVar13 = lVar11;
          if (DAT_08908cd0 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar11 = *in_stack_00000048;
          uVar16 = uVar16 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(uint *)(in_stack_00000028 + 3) <= uVar7) goto LAB_0685fd5c;
    plVar10 = (long *)*plVar17;
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    uVar9 = (**(code **)(*plVar10 + 0x288))(plVar10,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar9 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar22 + 0x18));
      uVar9 = *(int *)(lVar22 + 0x18) - 1;
      FUN_068537e0(*in_stack_00000048,0,plVar10,0,uVar9,0);
      if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
      if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
      lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
      lVar22 = FUN_03398188(DAT_083c7838,1);
      if ((*in_stack_00000048 == 0) || (lVar22 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar22 + 0x20) = *(int *)(*in_stack_00000048 + 0x18) - uVar9;
      lVar22 = FUN_06852fd0(lVar11);
      if (plVar10 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar22 != 0) &&
         (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar18 = *(uint *)(plVar10 + 3);
      if (uVar18 <= uVar9) goto LAB_0685fd5c;
      plVar13 = plVar10 + (long)(int)uVar9 + 4;
      *plVar13 = lVar22;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar18 = *(uint *)(plVar10 + 3);
      }
      if (uVar18 <= uVar9) goto LAB_0685fd5c;
      lVar22 = *in_stack_00000048;
      if (lVar22 == 0) goto LAB_0685eebc;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8)
            != DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar22,uVar9,plVar13,0,*(int *)(lVar22 + 0x18) - uVar9,0);
      *in_stack_00000048 = (long)plVar10;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  goto LAB_06860ea8;
LAB_0685efd0:
  if (lVar11 == 0) goto LAB_0685eebc;
  param_1 = *(long *)(lVar11 + 0x18);
  goto code_r0x0685efd8;
  while( true ) {
    plVar13 = *(long **)(lVar22 + (long)(int)uVar18 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar11 != 0) &&
       (lVar21 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar10 + 3) <= uVar18) goto LAB_0685fd5c;
    plVar13 = plVar10 + (long)(int)uVar18 + 4;
    *plVar13 = lVar11;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = *(uint *)(lVar22 + 0x18);
    uVar16 = (ulong)(uVar18 + 1);
    if ((int)(uVar9 - 1) <= (int)(uVar18 + 1)) break;
LAB_06860788:
    uVar18 = (uint)uVar16;
    if (uVar9 <= uVar18) goto LAB_0685fd5c;
  }
LAB_06860c2c:
  if (in_stack_00000020 == (long *)0x0) goto LAB_0685eebc;
  if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
  lVar11 = in_stack_00000020[(long)(int)uVar7 + 4];
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (uint)uVar16;
  if (lVar11 == 0) {
    if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0685fd5c;
    plVar13 = *(long **)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
    if ((plVar13 == (long *)0x0) ||
       (lVar22 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210)),
       plVar10 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar22 != 0) &&
       (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_06860ed8;
    uVar18 = *(uint *)(plVar10 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000020 + 3) <= uVar7) goto LAB_0685fd5c;
    lVar22 = in_stack_00000020[(long)(int)uVar7 + 4];
    uVar23 = FUN_03398188(DAT_083c7838,1);
    lVar22 = FUN_06852fd0(lVar22,uVar23);
    if (plVar10 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar22 != 0) &&
       (lVar11 = FUN_0339898c(lVar22,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_06860ed8:
      uVar23 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar23,0);
    }
    uVar18 = *(uint *)(plVar10 + 3);
  }
  if (uVar18 <= uVar9) goto LAB_0685fd5c;
  plVar13 = plVar10 + (long)(int)uVar9 + 4;
  *plVar13 = lVar22;
  if (DAT_08908cd0 == 0) {
    *in_stack_00000048 = (long)plVar10;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar2 = &DAT_0873ccb0 + ((ulong)in_stack_00000048 >> 0x12 & 0x7fff);
    *in_stack_00000048 = (long)plVar10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1L << ((ulong)in_stack_00000048 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
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



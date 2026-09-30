/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 0685ff60
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x23;
  long *plVar16;
  long unaff_x27;
  long *unaff_x28;
  long in_stack_00000020;
  
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_0685fd5c;
  uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar15 = *unaff_x28;
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* try { // try from 0685ff88 to 0695ffb3 has its CatchHandler @ 068601b8 */
  FUN_068613a0(uVar13,lVar15);
  if ((int)*(undefined8 *)(unaff_x27 + 0x18) == 0) goto LAB_0685fd5c;
  plVar16 = (long *)(unaff_x27 + 0x20);
  plVar6 = (long *)*plVar16;
  if (((plVar6 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0)), lVar15 == 0)
      ) || (*unaff_x28 == 0)) {
LAB_0685eebc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar2 = *(int *)(*unaff_x28 + 0x18);
  iVar9 = (int)*(ulong *)(lVar15 + 0x18);
                    /* try { // try from 0685ffcc to 0695ffcf has its CatchHandler @ 068601dc */
  if (iVar9 == iVar2) {
    if (in_stack_00000020 == 0) goto LAB_0685eebc;
    if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
    lVar11 = *(long *)(in_stack_00000020 + 0x20);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar11 != 0) {
      plVar6 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x20);
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = FUN_06852fd0(uVar13);
      if (plVar6 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar11 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar10 = *(uint *)(plVar6 + 3);
      if (uVar10 <= uVar5) goto LAB_0685fd5c;
      plVar8 = plVar6 + (long)(int)uVar5 + 4;
      *plVar8 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar10 = *(uint *)(plVar6 + 3);
      }
      if (uVar10 <= uVar5) goto LAB_0685fd5c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_0685eebc;
      if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_0685fd5c;
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0685eebc;
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
          DAT_083c8a28)) {
LAB_06860fdc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar8);
      }
      FUN_06853274(plVar8,*(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20),0,0);
      *unaff_x28 = (long)plVar6;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  else {
    if (iVar2 < iVar9) {
      plVar6 = (long *)FUN_03398188(DAT_083c7a10,*(ulong *)(lVar15 + 0x18) & 0xffffffff);
      lVar11 = *unaff_x28;
      if (lVar11 != 0) {
        uVar12 = 0;
        do {
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar12) {
            uVar5 = *(uint *)(lVar15 + 0x18);
            if ((int)uVar12 < (int)(uVar5 - 1)) goto LAB_068602b4;
            goto LAB_06860ba0;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0685fd5c;
          if (plVar6 == (long *)0x0) break;
          lVar11 = *(long *)(lVar11 + uVar12 * 8 + 0x20);
          if ((lVar11 != 0) &&
             (lVar7 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_06860ed8;
          if (*(uint *)(plVar6 + 3) <= uVar12) goto LAB_0685fd5c;
          plVar8 = plVar6 + uVar12 + 4;
          *plVar8 = lVar11;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar11 = *unaff_x28;
          uVar12 = uVar12 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_0685eebc;
    }
    if (*(int *)(unaff_x27 + 0x18) == 0) goto LAB_0685fd5c;
    plVar6 = (long *)*plVar16;
    if (plVar6 == (long *)0x0) goto LAB_0685eebc;
    uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar6 = (long *)FUN_03398188(DAT_083c7a10,*(undefined4 *)(lVar15 + 0x18));
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_068537e0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (in_stack_00000020 == 0) goto LAB_0685eebc;
      if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x20);
      lVar15 = FUN_03398188(DAT_083c7838,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_0685eebc;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0685fd5c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar15 = FUN_06852fd0(uVar13);
      if (plVar6 == (long *)0x0) goto LAB_0685eebc;
      if ((lVar15 != 0) &&
         (lVar11 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
      goto LAB_06860ed8;
      uVar10 = *(uint *)(plVar6 + 3);
      if (uVar10 <= uVar5) goto LAB_0685fd5c;
      plVar8 = plVar6 + (long)(int)uVar5 + 4;
      *plVar8 = lVar15;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar10 = *(uint *)(plVar6 + 3);
      }
      if (uVar10 <= uVar5) goto LAB_0685fd5c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_0685eebc;
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_083c8a28 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_083c8a28 + 0x130) * 8 + -8) !=
            DAT_083c8a28)) goto LAB_06860fdc;
      }
      FUN_068537e0(lVar15,uVar5,plVar8,0,*(int *)(lVar15 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar6;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  goto LAB_06860db0;
  while( true ) {
    plVar8 = *(long **)(lVar15 + (long)(int)uVar10 * 8 + 0x20);
    if ((plVar8 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210)),
       plVar6 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar11 != 0) && (lVar7 = FUN_0339898c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_06860ed8;
    if (*(uint *)(plVar6 + 3) <= uVar10) goto LAB_0685fd5c;
    plVar8 = plVar6 + (long)(int)uVar10 + 4;
    *plVar8 = lVar11;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = *(uint *)(lVar15 + 0x18);
    uVar12 = (ulong)(uVar10 + 1);
    if ((int)(uVar5 - 1) <= (int)(uVar10 + 1)) break;
LAB_068602b4:
    uVar10 = (uint)uVar12;
    if (uVar5 <= uVar10) goto LAB_0685fd5c;
  }
LAB_06860ba0:
  if (in_stack_00000020 == 0) goto LAB_0685eebc;
  if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
  lVar11 = *(long *)(in_stack_00000020 + 0x20);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = (uint)uVar12;
  if (lVar11 == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_0685fd5c;
    plVar8 = *(long **)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar8 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210)),
       plVar6 == (long *)0x0)) goto LAB_0685eebc;
    if ((lVar15 != 0) &&
       (lVar11 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
    goto LAB_06860ed8;
    uVar10 = *(uint *)(plVar6 + 3);
  }
  else {
    if (*(int *)(in_stack_00000020 + 0x18) == 0) goto LAB_0685fd5c;
    uVar14 = *(undefined8 *)(in_stack_00000020 + 0x20);
    uVar13 = FUN_03398188(DAT_083c7838,1);
    lVar15 = FUN_06852fd0(uVar14,uVar13);
    if (plVar6 == (long *)0x0) goto LAB_0685eebc;
    if ((lVar15 != 0) &&
       (lVar11 = FUN_0339898c(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
LAB_06860ed8:
      uVar13 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar13,0);
    }
    uVar10 = *(uint *)(plVar6 + 3);
  }
  if (uVar10 <= uVar5) goto LAB_0685fd5c;
  plVar8 = plVar6 + (long)(int)uVar5 + 4;
  *plVar8 = lVar15;
  if (DAT_08908cd0 == 0) {
    *unaff_x28 = (long)plVar6;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x28 >> 0x12 & 0x7fff);
    *unaff_x28 = (long)plVar6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x28 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_06860db0:
  if (*(int *)(unaff_x27 + 0x18) != 0) {
    return *plVar16;
  }
LAB_0685fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}



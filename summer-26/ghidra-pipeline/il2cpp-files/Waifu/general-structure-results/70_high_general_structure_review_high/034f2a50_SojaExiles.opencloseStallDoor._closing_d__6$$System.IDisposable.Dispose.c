/*
FUNCTION_NAME: SojaExiles.opencloseStallDoor.<closing>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 034f2a50
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_4
*/


void SojaExiles_opencloseStallDoor_<closing>d__6__System_IDisposable_Dispose
               (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_4 & 1) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x70);
    if (lVar7 == 0) goto LAB_034f2cf0;
    if (*(long *)(lVar7 + 0x18) != 0) {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
LAB_034f2cec:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_034f2cf0;
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x10);
      if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x70);
        if (lVar7 == 0) goto LAB_034f2cf0;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_034f2cec;
        lVar7 = *(long *)(lVar7 + 0x20);
        goto joined_r0x034f2a18;
      }
    }
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x68);
joined_r0x034f2a18:
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_034f2cf0;
    fVar11 = (float)FUN_07a18d2c(*(long *)(lVar7 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_034f2cf0;
    fVar13 = param_2;
    fVar14 = param_3;
    fVar12 = (float)FUN_07a194cc(*(long *)(unaff_x19 + 0x50),0);
    *(float *)(unaff_x19 + 0x14) = fVar11 + fVar12 * 3.0;
    *(float *)(unaff_x19 + 0x18) = param_2 + fVar13 * 3.0;
    *(float *)(unaff_x19 + 0x1c) = param_3 + fVar14 * 3.0;
  }
  lVar7 = *(long *)(unaff_x19 + 0x60);
  if (lVar7 == 0) {
LAB_034f2cf0:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar6 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar6) {
    lVar9 = 0;
    do {
      if (uVar6 <= (uint)lVar9) goto LAB_034f2cec;
      lVar4 = *(long *)(lVar7 + 0x20 + lVar9 * 8);
      if (lVar4 == 0) goto LAB_034f2cf0;
      FUN_034f2cf4(lVar4,*(undefined8 *)(unaff_x19 + 0x50));
      uVar6 = *(uint *)(lVar7 + 0x18);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)uVar6);
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_034f2cf4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x50));
  }
  lVar7 = *(long *)(unaff_x19 + 0x70);
  if (lVar7 == 0) goto LAB_034f2cf0;
  uVar6 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar6) {
    lVar9 = 0;
    do {
      if (uVar6 <= (uint)lVar9) goto LAB_034f2cec;
      lVar4 = *(long *)(lVar7 + 0x20 + lVar9 * 8);
      if (lVar4 == 0) goto LAB_034f2cf0;
      FUN_034f2cf4(lVar4,*(undefined8 *)(unaff_x19 + 0x50));
      uVar6 = *(uint *)(lVar7 + 0x18);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)uVar6);
  }
  plVar10 = (long *)(unaff_x19 + 0xb0);
  lVar7 = *(long *)(unaff_x19 + 0x60);
  if (*plVar10 == 0) {
    if (lVar7 == 0) goto LAB_034f2cf0;
    uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
  }
  else {
    if (lVar7 == 0) goto LAB_034f2cf0;
    if (*(int *)(*plVar10 + 0x18) == (int)*(ulong *)(lVar7 + 0x18))
    goto SojaExiles_opencloseStallDoor_<closing>d__6__System_Collections_IEnumerator_get_Current;
    uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
  }
  lVar7 = FUN_03398188(DAT_083c7e20,uVar5);
  *plVar10 = lVar7;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
SojaExiles_opencloseStallDoor_<closing>d__6__System_Collections_IEnumerator_get_Current:
  plVar10 = (long *)(unaff_x19 + 0xb8);
  if (*plVar10 == 0) {
    lVar7 = FUN_03398188(DAT_083c7e20,1);
    *plVar10 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  plVar10 = (long *)(unaff_x19 + 0xc0);
  if (*plVar10 == 0) {
    lVar7 = FUN_03398188(DAT_083c7e20,1);
    *plVar10 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



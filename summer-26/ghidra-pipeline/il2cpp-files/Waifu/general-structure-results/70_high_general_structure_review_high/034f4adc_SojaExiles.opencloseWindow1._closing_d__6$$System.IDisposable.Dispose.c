/*
FUNCTION_NAME: SojaExiles.opencloseWindow1.<closing>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 034f4adc
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
SojaExiles_opencloseWindow1_<closing>d__6__System_IDisposable_Dispose
          (ulong *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong in_x9;
  ulong in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar9;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = in_x10 | in_x9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    in_x10 = *param_1;
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x10);
    if ((lVar9 != 0) && (lVar5 = FUN_0339898c(lVar9,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0)
       ) {
      uVar8 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar8,0);
    }
    if (*(uint *)(unaff_x21 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar6 = unaff_x21 + 6;
    *plVar6 = lVar9;
    if (*(int *)(unaff_x24 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x23 + ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)FUN_0341e498();
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_083d2258 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_083d2258 + 0x130) * 8 + -8) !=
          DAT_083d2258)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar6);
      }
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_07a0d2c4(plVar6,0,0);
    if ((uVar7 & 1) == 0) {
      if ((*(long *)(unaff_x20 + 0x80) != 0) &&
         (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x80) + 0x10), lVar9 != 0)) {
        fVar10 = (float)FUN_07a18d2c(lVar9,0);
        if ((*(long *)(unaff_x20 + 0x88) != 0) &&
           (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x88) + 0x10), lVar9 != 0)) {
          fVar13 = param_3;
          fVar14 = param_4;
          fVar11 = (float)FUN_07a18d2c(lVar9,0);
          fVar4 = DAT_012ed8ec;
          param_4 = param_4 - fVar14;
          fVar14 = param_4 * param_4;
          if (fVar14 + (fVar10 - fVar11) * (fVar10 - fVar11) +
                       (param_3 - fVar13) * (param_3 - fVar13) < DAT_012ed8ec) {
            *unaff_x19 = DAT_084529d0;
            if (*(int *)(unaff_x24 + 0xcd0) == 0) {
              return 0;
            }
            puVar1 = (ulong *)(unaff_x23 + ((ulong)unaff_x19 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            return 0;
          }
          if ((*(long *)(unaff_x20 + 0x88) != 0) &&
             (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x88) + 0x10), lVar9 != 0)) {
            fVar10 = (float)FUN_07a18d2c(lVar9,0);
            if ((*(long *)(unaff_x20 + 0x90) != 0) &&
               (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x10), lVar9 != 0)) {
              fVar13 = fVar14;
              fVar11 = param_4;
              fVar12 = (float)FUN_07a18d2c(lVar9,0);
              if (fVar4 <= (param_4 - fVar11) * (param_4 - fVar11) +
                           (fVar10 - fVar12) * (fVar10 - fVar12) +
                           (fVar14 - fVar13) * (fVar14 - fVar13)) {
                return 1;
              }
              *unaff_x19 = DAT_08457f40;
              if (*(int *)(unaff_x24 + 0xcd0) == 0) {
                return 0;
              }
              puVar1 = (ulong *)(unaff_x23 + ((ulong)unaff_x19 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              return 0;
            }
          }
        }
      }
    }
    else if (plVar6 != (long *)0x0) {
      uVar8 = FUN_07a11ba4(plVar6,0);
      uVar8 = FUN_06660dbc(uVar8,DAT_0842e800,0);
      *unaff_x19 = uVar8;
      if (*(int *)(unaff_x24 + 0xcd0) == 0) {
        return 0;
      }
      puVar1 = (ulong *)(unaff_x23 + ((ulong)unaff_x19 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



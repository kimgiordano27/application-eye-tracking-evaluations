/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 06863860
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long unaff_x19;
  long unaff_x20;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  
  plVar4 = (long *)FUN_03398188(*(undefined8 *)(param_1 + 0x980),*(undefined4 *)(unaff_x20 + 0x18));
  uVar14 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar14) {
    uVar11 = 0;
    uVar12 = 0;
    do {
      if (uVar14 <= uVar12) goto LAB_06863a68;
      plVar13 = (long *)(unaff_x20 + (long)(int)uVar12 * 8 + 0x20);
      plVar5 = (long *)*plVar13;
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0)), lVar6 == 0
         )) goto LAB_06863a64;
      if (*(long *)(lVar6 + 0x18) != 0) {
        if (unaff_x19 == 0) goto LAB_06863a64;
        iVar10 = *(int *)(unaff_x19 + 0x18);
        if (iVar10 < 1) {
          uVar15 = 0;
        }
        else {
          if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_06863a68;
          uVar15 = 0;
          while( true ) {
            plVar5 = *(long **)(lVar6 + 0x20 + uVar15 * 8);
            if (plVar5 == (long *)0x0) goto LAB_06863a64;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0))
            ;
            uVar14 = (uint)uVar15;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar14) goto LAB_06863a68;
            if (plVar5 == (long *)0x0) goto LAB_06863a64;
            uVar7 = (**(code **)(*plVar5 + 0x998))
                              (plVar5,*(undefined8 *)(unaff_x19 + 0x20 + uVar15 * 8),
                               *(undefined8 *)(*plVar5 + 0x9a0));
            if ((uVar7 & 1) == 0) {
              iVar10 = *(int *)(unaff_x19 + 0x18);
              goto LAB_06863950;
            }
            iVar10 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar10 <= (int)(uVar14 + 1)) break;
            uVar15 = uVar15 + 1;
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar15) goto LAB_06863a68;
          }
          uVar15 = (ulong)(uVar14 + 1);
        }
LAB_06863950:
        if (iVar10 <= (int)uVar15) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar12) goto LAB_06863a68;
          if (plVar4 == (long *)0x0) goto LAB_06863a64;
          lVar6 = *plVar13;
          if ((lVar6 != 0) &&
             (lVar8 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
            uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar9,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar11) goto LAB_06863a68;
          plVar5 = plVar4 + (long)(int)uVar11 + 4;
          *plVar5 = lVar6;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar11 = uVar11 + 1;
        }
      }
      uVar14 = *(uint *)(unaff_x20 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar14);
    if (uVar11 != 0) {
      if (uVar11 != 1) {
        if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar6 = FUN_06863ac0(plVar4,uVar11);
        return lVar6;
      }
      if (plVar4 == (long *)0x0) {
LAB_06863a64:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((int)plVar4[3] != 0) {
        return plVar4[4];
      }
LAB_06863a68:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
  }
  return 0;
}



/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseActiveStream
ENTRY_POINT: 062c2bfc
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_WitRequest__CloseActiveStream(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x22;
  long unaff_x23;
  
  plVar4 = (long *)FUN_0687ac10();
  lVar6 = *(long *)(unaff_x23 + 0xa28);
  if (plVar4 == (long *)0x0) {
    lVar7 = *(long *)(unaff_x22 + 0x6f8);
    lVar8 = *(long *)(lVar7 + 0xb8);
    plVar9 = (long *)(lVar8 + 0x10);
    *plVar9 = 0;
  }
  else {
    if (*plVar4 != lVar6) goto LAB_062c2cf8;
    lVar7 = *(long *)(unaff_x22 + 0x6f8);
    lVar8 = *(long *)(lVar7 + 0xb8);
    plVar9 = (long *)(lVar8 + 0x10);
    *plVar9 = (long)plVar4;
    if (*plVar4 != lVar6) goto LAB_062c2cf8;
  }
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(lVar7 + 0xb8);
  }
  uVar10 = *(undefined8 *)(lVar8 + 0x38);
  uVar5 = FUN_03398a84(lVar6);
  FUN_062a7d8c();
  plVar4 = (long *)FUN_0687ac10(uVar10,uVar5,0);
  if (plVar4 == (long *)0x0) {
    plVar9 = (long *)(*(long *)(*(long *)(unaff_x22 + 0x6f8) + 0xb8) + 0x38);
    *plVar9 = 0;
LAB_062c2d08:
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  lVar6 = *(long *)(unaff_x23 + 0xa28);
  if (*plVar4 == lVar6) {
    plVar9 = (long *)(*(long *)(*(long *)(unaff_x22 + 0x6f8) + 0xb8) + 0x38);
    *plVar9 = (long)plVar4;
    if (*plVar4 == lVar6) goto LAB_062c2d08;
  }
LAB_062c2cf8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1fec();
}



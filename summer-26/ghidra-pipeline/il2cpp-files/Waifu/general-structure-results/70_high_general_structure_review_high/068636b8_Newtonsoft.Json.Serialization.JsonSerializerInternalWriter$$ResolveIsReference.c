/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 068636b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  while (param_1 != 0) {
    unaff_x23 = *(undefined8 *)(unaff_x24 + 0xa10);
    lVar5 = FUN_0339898c(unaff_x22,unaff_x23);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w26) {
LAB_068637c8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)unaff_w26 * 8 + 0x20);
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0)
       ) {
      uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar7,0);
    }
    uVar8 = *(uint *)(unaff_x21 + 3);
    if (uVar8 <= (uint)unaff_x27) goto LAB_068637c8;
    plVar9 = unaff_x21 + unaff_x27 + 4;
    *plVar9 = lVar5;
    iVar2 = *(int *)(unaff_x28 + 0xcd0);
    if (iVar2 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | unaff_x25 << ((ulong)plVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar8 = *(uint *)(unaff_x21 + 3);
    }
    unaff_x27 = unaff_x27 + 1;
    unaff_w26 = unaff_w26 + 1;
    if ((int)uVar8 <= (int)unaff_x27) {
      *unaff_x19 = (long)unaff_x21;
      if (iVar2 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
    lVar5 = *unaff_x19;
    if (lVar5 == 0) {
LAB_068637cc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_068637c8;
    unaff_x22 = *(long *)(lVar5 + unaff_x29 * 8 + 0x20);
    if (unaff_x22 == 0) goto LAB_068637cc;
    unaff_x23 = *(undefined8 *)(unaff_x24 + 0xa10);
    param_1 = FUN_0339898c(unaff_x22,unaff_x23);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1fec(unaff_x22,unaff_x23);
}



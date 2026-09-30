/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 06852368
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 unaff_w21;
  long *plVar9;
  
  *(undefined1 *)(unaff_x20 + 0xe1b) = unaff_w21;
  plVar9 = (long *)(unaff_x19 + 0x28);
  lVar4 = *plVar9;
  if (lVar4 == 0) {
    puVar7 = &DAT_08440788;
    switch(*(undefined4 *)(unaff_x19 + 0x18)) {
    case 0:
      puVar7 = &DAT_08440768;
      break;
    case 1:
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_068524e4;
      if ((*(int *)(lVar4 + 0x10) < 5) &&
         ((*(int *)(lVar4 + 0x10) != 4 || (*(int *)(lVar4 + 0x14) < 1)))) {
        puVar7 = &DAT_08440770;
      }
      else {
        puVar7 = &DAT_08440778;
      }
      break;
    case 2:
      break;
    case 3:
      puVar7 = &DAT_08440780;
      break;
    case 4:
      puVar7 = &DAT_0844b568;
      break;
    case 5:
      puVar7 = &DAT_0844cc98;
      break;
    case 6:
      puVar7 = &DAT_08440080;
      break;
    default:
      puVar7 = &DAT_084328f8;
    }
    uVar8 = *puVar7;
    if ((*(long *)(unaff_x19 + 0x20) == 0) || (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x10) == 0)) {
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 == (long *)0x0) goto LAB_068524e4;
      uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar4 = FUN_06660dbc(uVar8,uVar5,0);
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_068524e4:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar5 = FUN_0684fa1c(*(long *)(unaff_x19 + 0x10),3);
      lVar4 = FUN_0666ed44(uVar8,uVar5,DAT_0842d700,*(undefined8 *)(unaff_x19 + 0x20),0);
    }
    *plVar9 = lVar4;
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
      lVar4 = *plVar9;
    }
  }
  return lVar4;
}



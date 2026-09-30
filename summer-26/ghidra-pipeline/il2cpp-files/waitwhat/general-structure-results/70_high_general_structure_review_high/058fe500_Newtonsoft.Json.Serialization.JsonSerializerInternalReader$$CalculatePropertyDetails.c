/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 058fe500
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
              (long param_1,long param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined *puVar9;
  
  if ((DAT_0754c80d & 1) == 0) {
    FUN_03188a78(PTR_DAT_07104dd0);
    FUN_03188a78(PTR_DAT_070c1940);
    FUN_03188a78(PTR_DAT_070fc020);
    FUN_03188a78(PTR_DAT_070c5cf8);
    DAT_0754c80d = 1;
  }
  plVar13 = (long *)(param_1 + 0x28);
  if (*plVar13 == 0) {
    lVar5 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c1940,0x80);
    *plVar13 = lVar5;
  }
  puVar9 = PTR_DAT_070c5cf8;
  iVar12 = param_4;
  if (0 < param_4) {
    do {
      plVar6 = *(long **)(param_1 + 0x20);
      iVar4 = iVar12;
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_DAT_070fc020 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_070fc020))
        {
          uVar2 = (**(code **)(lVar5 + 0x218))(plVar6,*(undefined8 *)(lVar5 + 0x220));
          iVar4 = iVar12 - (iVar12 != 1 & uVar2);
        }
      }
      plVar6 = *(long **)(param_1 + 0x10);
      iVar4 = iVar4 << (ulong)(*(byte *)(param_1 + 0x44) & 0x1f);
      if (0x7f < iVar4) {
        iVar4 = 0x80;
      }
      if (*(char *)(param_1 + 0x45) == '\0') {
        if (plVar6 == (long *)0x0) goto LAB_058fe778;
        uVar3 = (**(code **)(*plVar6 + 0x358))
                          (plVar6,*plVar13,0,iVar4,*(undefined8 *)(*plVar6 + 0x360));
        uVar2 = 0;
        plVar6 = plVar13;
      }
      else {
        if (plVar6 == (long *)0x0) goto LAB_058fe778;
        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9))
        goto LAB_058fe778;
        uVar2 = *(uint *)((long)plVar6 + 0x34);
        uVar3 = FUN_058e3630(plVar6,iVar4,0);
        plVar6 = plVar6 + 5;
      }
      if (uVar3 == 0) break;
      if ((int)(uVar3 | uVar2) < 0) {
LAB_058fe790:
        thunk_FUN_031edd38(PTR_DAT_070c5c08);
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        puVar9 = PTR_DAT_070fbf50;
LAB_058fe7cc:
        uVar8 = thunk_FUN_031edd38(puVar9);
        FUN_058a33fc(uVar7,uVar8,0);
        uVar8 = thunk_FUN_031edd38(PTR_DAT_07104dd0);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar7,uVar8);
      }
      if ((ulong)uVar3 + (ulong)uVar2 >> 0x1f != 0) {
LAB_058fe77c:
        uVar7 = FUN_03188ce8();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar7,*(undefined8 *)PTR_DAT_07104dd0);
      }
      lVar5 = *plVar6;
      if (lVar5 == 0) {
LAB_058fe778:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      iVar4 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar4 < (int)(uVar3 + uVar2)) goto LAB_058fe790;
      if (param_3 < 0) {
LAB_058fe7b0:
        thunk_FUN_031edd38(PTR_DAT_070c5c08);
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        puVar9 = PTR_DAT_07104dd8;
        goto LAB_058fe7cc;
      }
      if (param_3 + iVar12 < 0) goto LAB_058fe77c;
      if (param_2 == 0) goto LAB_058fe778;
      iVar10 = (int)*(ulong *)(param_2 + 0x18);
      if (iVar10 < param_3 + iVar12) goto LAB_058fe7b0;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == 0) {
        lVar5 = 0;
      }
      else {
        if (iVar4 == 0) goto LAB_058fe7f8;
        lVar5 = lVar5 + 0x20;
      }
      lVar11 = 0;
      if (((*(ulong *)(param_2 + 0x18) & 0xffffffff) != 0) && (lVar11 = param_2 + 0x20, iVar10 == 0)
         ) {
LAB_058fe7f8:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar6 = *(long **)(param_1 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_058fe778;
      iVar4 = (**(code **)(*plVar6 + 0x1d8))
                        (plVar6,lVar5 + (ulong)uVar2,(ulong)uVar3,
                         lVar11 + (ulong)(uint)(param_3 << 1),iVar12,0,
                         *(undefined8 *)(*plVar6 + 0x1e0));
      iVar12 = iVar12 - iVar4;
      param_3 = iVar4 + param_3;
    } while (0 < iVar12);
  }
  return param_4 - iVar12;
}



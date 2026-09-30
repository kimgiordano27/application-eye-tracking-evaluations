/*
FUNCTION_NAME: FUN_0670f894
ENTRY_POINT: 0670f894
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0670f894(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  
  puVar2 = VLB_RenderingMode_TypeInfo;
  if ((bRam00000000071d3c3f & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(VLB_RenderingMode_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_RequestPartyServiceRequest_TypeInfo);
    bRam00000000071d3c3f = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06693dbc(*(undefined8 *)PlayFab_MultiplayerModels_RequestPartyServiceRequest_TypeInfo,0);
      return;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_0670faa0;
    }
    plVar5 = *(long **)(lVar6 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      puVar1 = System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TypeInfo;
      lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar4 != 0) {
        plVar5 = *(long **)(lVar4 + 0x18);
        iVar3 = FUN_0669bbc4(0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar1);
        }
        if (pcRam00000000071d3e80 == (code *)0x0) {
          pcRam00000000071d3e80 =
               (code *)FUN_02f07e34("UnityEngine.GUIUtility::get_pixelsPerPoint()");
        }
        fVar7 = (float)(*pcRam00000000071d3e80)();
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x1d8))
                    (0,(float)iVar3 / fVar7,plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x18), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
            lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            if (lVar4 != 0) {
              plVar5 = *(long **)(lVar4 + 0x18);
              iVar3 = FUN_0669bbec(0);
              if (pcRam00000000071d3e80 == (code *)0x0) {
                pcRam00000000071d3e80 =
                     (code *)FUN_02f07e34("UnityEngine.GUIUtility::get_pixelsPerPoint()");
              }
              fVar7 = (float)(*pcRam00000000071d3e80)();
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x1e8))
                          (0,(float)iVar3 / fVar7,plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
                lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                if (lVar4 != 0) {
                  FUN_0670f558(*(undefined8 *)(lVar4 + 0x28));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0670faa0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



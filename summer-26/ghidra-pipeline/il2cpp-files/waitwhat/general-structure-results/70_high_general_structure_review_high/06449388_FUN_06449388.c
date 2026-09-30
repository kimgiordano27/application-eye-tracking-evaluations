/*
FUNCTION_NAME: FUN_06449388
ENTRY_POINT: 06449388
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


long FUN_06449388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar1 = FxResources_System_Text_Encodings_Web_SR_var;
  if ((DAT_0755699e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070fd930);
    FUN_03188a78(FxResources_System_Text_Encodings_Web_SR_var);
    FUN_03188a78(System_Action<AsyncGPUReadbackRequest>_TypeInfo);
    FUN_03188a78(System_Action<AsyncOperation>_TypeInfo);
    FUN_03188a78(PTR_DAT_070ca260);
    FUN_03188a78(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    FUN_03188a78(Fusion_NetworkBehaviour_ChangeDetector_Enumerator_var);
    DAT_0755699e = 1;
  }
  plVar3 = (long *)thunk_FUN_031c3cac(param_2,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06449468;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_06449468:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar6 != 0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_064494c4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_064494c4:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar10 = *(undefined8 *)System_Action<AsyncGPUReadbackRequest>_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
      }
      uVar10 = FUN_0593e698(uVar10,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06449564;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_031c0d08(plVar3,*(long *)
                                    UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var
                            ,0);
LAB_06449564:
      uVar10 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
      puVar2 = System_Action<AsyncOperation>_TypeInfo;
      plVar3 = (long *)thunk_FUN_031c3cac(uVar10,*(undefined8 *)
                                                  System_Action<AsyncOperation>_TypeInfo);
      puVar1 = Fusion_NetworkBehaviour_ChangeDetector_Enumerator_var;
      if (plVar3 != (long *)0x0) {
        lVar6 = *(long *)Fusion_NetworkBehaviour_ChangeDetector_Enumerator_var;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *(long *)puVar1;
        }
        lVar7 = *plVar3;
        lVar5 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06449614;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar3,lVar5,0);
LAB_06449614:
        uVar10 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
        lVar6 = thunk_FUN_031c3cac(uVar10,*(undefined8 *)PTR_DAT_070ca260);
        if (lVar6 != 0) {
          return lVar6;
        }
        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070fd930);
        FUN_058db70c(lVar6,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *(long *)puVar1;
        }
        FUN_02d355c4(1,*(undefined8 *)puVar2,plVar3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                     lVar6);
        return lVar6;
      }
    }
  }
  return 0;
}



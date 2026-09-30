/*
FUNCTION_NAME: FUN_06450990
ENTRY_POINT: 06450990
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06450990(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if ((DAT_075569cc & 1) == 0) {
    FUN_03188a78(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    FUN_03188a78(System_Action<HTTPRequest>_TypeInfo);
    FUN_03188a78(System_Action<HandGrabInteractor>_TypeInfo);
    FUN_03188a78(PTR_DAT_07109710);
    DAT_075569cc = 1;
  }
  puVar6 = PTR_DAT_070c1958;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_05947b18(param_2,0,0);
  puVar2 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
  if ((uVar3 & 1) == 0) {
    if (param_3 != 0) {
      if (param_4 == 0) {
        thunk_FUN_031edd38(PTR_DAT_070c2888);
        uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        puVar6 = PTR_DAT_070f5430;
        goto LAB_06450bc4;
      }
      if (*(int *)(param_3 + 0x18) != *(int *)(param_4 + 0x18)) {
        uVar10 = thunk_FUN_031edd38(System_Action<IDebugDisplaySettingsData>_TypeInfo);
        uVar10 = FUN_057a2060(uVar10,0);
        thunk_FUN_031edd38(PTR_DAT_070c3af0);
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_058a1e9c(uVar7,uVar10,0);
        uVar10 = thunk_FUN_031edd38(System_Action<IAsyncResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar7,uVar10);
      }
    }
    if (param_1 != (long *)0x0) {
                    /* try { // try from 06450a3c to 06550a4b has its CatchHandler @ 06450a4c */
                    /* catch() { ... } // from try @ 06450934 with catch @ 06450a4c
                       catch() { ... } // from try @ 06450a3c with catch @ 06450a4c */
                    /* try { // try from 06450a50 to 06550a53 has its CatchHandler @ 06450a5c */
                    /* try { // try from 06450a54 to 06550a5f has its CatchHandler @ 064508b4 */
      uVar10 = *(undefined8 *)System_Action<HTTPRequest>_TypeInfo;
      if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06450a50 with catch @ 06450a5c
                        */
        thunk_FUN_031e5338();
      }
      uVar10 = FUN_0593e698(uVar10,0);
      lVar8 = *param_1;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06450abc;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(param_1,*(long *)puVar2,0);
LAB_06450abc:
      plVar5 = (long *)(*(code *)*puVar4)(param_1,uVar10,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        bVar1 = *(byte *)(*(long *)System_Action<HandGrabInteractor>_TypeInfo + 0x130);
        if (((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
            (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)System_Action<HandGrabInteractor>_TypeInfo)) &&
           (lVar8 = (**(code **)(lVar8 + 0x178))
                              (plVar5,param_1,param_2,param_3,param_4,*(undefined8 *)(lVar8 + 0x180)
                              ), lVar8 != 0)) {
          return;
        }
      }
    }
    if (*(int *)(*(long *)PTR_DAT_07109710 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    plVar5 = (long *)FUN_06450c40(param_2);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06450b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x178))
                (plVar5,param_1,param_2,param_3,param_4,*(undefined8 *)(*plVar5 + 0x180));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  thunk_FUN_031edd38(PTR_DAT_070c2888);
  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  puVar6 = UnityEngine_UIElements_TemplateAsset_AttributeOverride_var;
LAB_06450bc4:
  uVar7 = thunk_FUN_031edd38(puVar6);
  FUN_05897880(uVar10,uVar7,0);
  uVar7 = thunk_FUN_031edd38(System_Action<IAsyncResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar10,uVar7);
}



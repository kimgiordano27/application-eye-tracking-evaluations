/*
FUNCTION_NAME: FUN_0681a304
ENTRY_POINT: 0681a304
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long * FUN_0681a304(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  
  puVar3 = Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo;
  puVar2 = PTR_DAT_070c22b0;
                    /* try { // try from 0681a328 to 0691a39f has its CatchHandler @ 0681a0ac */
  if ((DAT_07558ab3 & 1) == 0) {
    FUN_03188a78(GameEventDataAloneInLobbyShown_TypeInfo);
    FUN_03188a78(PTR_DAT_070f8510);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(Unity_Properties_Internal_Vector3IntPropertyBag_TypeInfo);
    DAT_07558ab3 = 1;
  }
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_069d78d4(lVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
                    /* try { // try from 0681a3a0 to 0691a3ab has its CatchHandler @ 0681a730 */
  uVar6 = FUN_06812b78();
  if (lVar5 != 0) {
    uVar4 = 0x3d;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0x34;
    }
    FUN_069dd4d8(lVar5,uVar4,0);
    lVar7 = FUN_069d6e00(lVar5,0);
    if ((param_1 != 0) && (uVar8 = FUN_067ebb5c(param_1,0), lVar7 != 0)) {
                    /* try { // try from 0681a3f0 to 0691a427 has its CatchHandler @ 0681a72c */
      FUN_069e7a48(lVar7,uVar8,0,0);
      lVar7 = FUN_069d6e00(lVar5,0);
      if (lVar7 != 0) {
        FUN_069e8ebc(lVar7,0);
        lVar7 = FUN_069d3b50(param_1,0);
        puVar2 = PTR_DAT_070f8510;
        if (lVar7 != 0) {
          uVar4 = FUN_069d6ed0(lVar7,0);
          FUN_069d6f84(lVar5,uVar4,0);
          lVar7 = FUN_03ac2e98(lVar5,*(undefined8 *)puVar2);
          if (DAT_0754761d == '\0') {
            FUN_03188a78(PTR_DAT_070cf448);
            DAT_0754761d = '\x01';
          }
          puVar2 = PTR_DAT_070cf448;
          if (lVar7 != 0) {
            FUN_069e5ddc(**(undefined4 **)(*(long *)PTR_DAT_070cf448 + 0xb8),
                         (*(undefined4 **)(*(long *)PTR_DAT_070cf448 + 0xb8))[1],lVar7,0);
            if (DAT_0755135f == '\0') {
              FUN_03188a78(PTR_DAT_070cf448);
              DAT_0755135f = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            FUN_069e5f70(*(undefined4 *)(lVar10 + 8),*(undefined4 *)(lVar10 + 0xc),lVar7,0);
            if (DAT_0754761d == '\0') {
              FUN_03188a78(PTR_DAT_070cf448);
              DAT_0754761d = '\x01';
            }
            puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
            FUN_069e6298(*puVar11,puVar11[1],lVar7,0);
            lVar10 = FUN_067ebbf0(param_1,0);
            puVar2 = GameEventDataAloneInLobbyShown_TypeInfo;
            if (lVar10 != 0) {
              FUN_069e6360(lVar10,0);
              FUN_069e642c(lVar7,0);
              plVar9 = (long *)FUN_03ac2e98(lVar5,*(undefined8 *)puVar2);
              puVar2 = 
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate_TypeInfo
              ;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x300));
                plVar9 = (long *)FUN_03ac2e98(lVar5,*(undefined8 *)puVar2);
                if (plVar9 != (long *)0x0) {
                  plVar9[0x23] = param_1;
                  uVar1 = *(undefined1 *)(param_1 + 0xb8);
                  *(undefined4 *)((long)plVar9 + 0x124) = *param_2;
                  plVar9[0x1b] = *(long *)(param_2 + 2);
                  plVar9[0x1c] = *(long *)(param_2 + 4);
                  *(byte *)(plVar9 + 0x21) = *(byte *)(param_2 + 8) & 1;
                  FUN_06ca1140(plVar9,uVar1,0);
                  lVar5 = *(long *)(param_2 + 6);
                  plVar9[0x1e] = lVar5;
                  plVar9[4] = lVar5;
                  uVar4 = FUN_06819f00(plVar9);
                  *(undefined4 *)((long)plVar9 + 0x10c) = uVar4;
                  (**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
                  return plVar9;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}



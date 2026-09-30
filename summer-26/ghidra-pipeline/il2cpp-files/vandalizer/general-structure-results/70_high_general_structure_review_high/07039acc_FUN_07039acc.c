/*
FUNCTION_NAME: FUN_07039acc
ENTRY_POINT: 07039acc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_07039acc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_07a5a3f1 & 1) == 0) {
    FUN_031f20f4(AnalyticsManager_<InvokeInitializedNextFrame>d__22_TypeInfo);
    FUN_031f20f4(AnalyticsManager_<KeepUpdatingSessionDuration>d__27_TypeInfo);
    DAT_07a5a3f1 = 1;
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xb8) >> 4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar2 = FUN_058137c8(*(long *)(param_1 + 0x68),param_2,
                               *(undefined8 *)
                                AnalyticsManager_<InvokeInitializedNextFrame>d__22_TypeInfo),
         lVar2 == 0)) goto LAB_07039bd4;
      plVar3 = (long *)(lVar2 + 0x18);
      lVar2 = *plVar3;
      *plVar3 = 0;
      thunk_FUN_0329bf60(plVar3,0);
      puVar1 = AnalyticsManager_<KeepUpdatingSessionDuration>d__27_TypeInfo;
      while (lVar2 != 0) {
        if (*(long *)(param_1 + 0x108) == 0) goto LAB_07039bd4;
        FUN_0703f244(*(long *)(param_1 + 0x108),*(undefined8 *)(lVar2 + 0x20),0);
        plVar3 = (long *)(lVar2 + 0x18);
        lVar4 = *plVar3;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        thunk_FUN_0329bf60(lVar2 + 0x20,0);
        *plVar3 = 0;
        thunk_FUN_0329bf60(plVar3,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_07039bd4;
        FUN_046015cc(*(long *)(param_1 + 0x58),lVar2,*(undefined8 *)puVar1);
        lVar2 = lVar4;
      }
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & 0xffffffef;
    }
    return;
  }
LAB_07039bd4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}



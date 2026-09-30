/*
FUNCTION_NAME: FUN_05dbb5ac
ENTRY_POINT: 05dbb5ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dbb5ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_06b83035 & 1) == 0) {
    FUN_02d6084c(Method_Unity_VisualScripting_Singleton<CoroutineRunner>_get_instance__);
    FUN_02d6084c(Method_Unity_VisualScripting_Singleton<GlobalMessageListener>_get_instance__);
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(Method_Unity_VisualScripting_Singleton<VariablesSaver>_Awake__);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    DAT_06b83035 = 1;
  }
  if (param_2 != 0) {
    FUN_043e4bd0(param_2,*(undefined8 *)
                          Method_Unity_VisualScripting_Singleton<VariablesSaver>_Awake__);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0676b288) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05dbb684;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0676b288,0);
LAB_05dbb684:
      lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x50);
        uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_Unity_VisualScripting_Singleton<GlobalMessageListener>_get_instance__
                                  );
        FUN_05d87e04(uVar2,param_2,param_1,0);
        if (lVar3 != 0) {
          FUN_0468373c(lVar3,uVar2,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_Singleton<CoroutineRunner>_get_instance__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



/*
FUNCTION_NAME: FUN_05d842ec
ENTRY_POINT: 05d842ec
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


undefined8 FUN_05d842ec(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar2 = Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__;
  if ((DAT_06b82d05 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06766db8);
    FUN_02d6084c(PTR_DAT_06769b58);
    FUN_02d6084c(PTR_DAT_0678ddb8);
    FUN_02d6084c(PTR_DAT_06766e10);
    FUN_02d6084c(Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__)
    ;
    FUN_02d6084c(Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    DAT_06b82d05 = 1;
  }
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0504920c(lVar3,0);
  puVar2 = PTR_DAT_06769b58;
  if (lVar3 != 0) {
    plVar8 = (long *)(lVar3 + 0x10);
    *plVar8 = param_2;
    thunk_FUN_02dd37b4(plVar8,param_2);
    puVar1 = PTR_DAT_0675e258;
    uVar9 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar4 = (long *)FUN_05015c2c(uVar9,0);
    plVar6 = (long *)*plVar8;
    if ((plVar6 != (long *)0x0) &&
       (uVar9 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250)),
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x2a0));
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      lVar10 = *plVar8;
      uVar9 = *(undefined8 *)PTR_DAT_06766db8;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_05015c2c(uVar9,0);
      uVar5 = FUN_050323c4(lVar10,uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      if (*plVar8 != 0) {
        uVar5 = FUN_04f3ae3c(*plVar8,0);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        if (param_1 != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06766e10);
          FUN_04d61e54(uVar9,lVar3,
                       *(undefined8 *)
                        Method_OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetAwaiter__
                       ,0);
          uVar5 = FUN_033952ec(uVar7,uVar9,*(undefined8 *)PTR_DAT_0678ddb8);
          if (((uVar5 & 1) == 0) && ((param_3 & 1) == 0)) {
            if (*plVar8 == 0) goto LAB_05d844f0;
            uVar5 = FUN_04f3aeac(*plVar8,0);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
LAB_05d844f0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



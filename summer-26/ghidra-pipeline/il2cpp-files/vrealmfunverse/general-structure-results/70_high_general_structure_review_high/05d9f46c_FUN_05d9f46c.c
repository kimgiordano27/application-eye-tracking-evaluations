/*
FUNCTION_NAME: FUN_05d9f46c
ENTRY_POINT: 05d9f46c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05d9f46c(uint param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [152];
  
  if ((DAT_066dbc18 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631ebf8);
    FUN_02b3c81c(Method_System_Net_WebRequestStream_CheckWriteOverflow__);
    FUN_02b3c81c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02b3c81c(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    FUN_02b3c81c(Method_System_Net_WebRequestStream_WriteAsync__);
    DAT_066dbc18 = 1;
  }
  if ((*param_2 == 0) ||
     (plVar3 = (long *)thunk_FUN_02b4c898(*param_2,0),
     puVar2 = Method_System_Net_WebRequestStream_Close_internal__, puVar1 = PTR_DAT_0631ebf8,
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  memcpy(auStack_c8,param_2 + 1,0x98);
  uVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar1,auStack_c8);
  uVar4 = FUN_04c0af28(*(undefined8 *)puVar2,uVar4,uVar5,0);
  if ((int)param_1 < 3) {
    puVar6 = (undefined8 *)Method_System_Net_WebRequestStream_WriteAsync__;
    if (param_1 != 2) goto joined_r0x05d9f5a8;
  }
  else {
    puVar6 = (undefined8 *)Method_System_Net_WebRequestStream_CheckWriteOverflow__;
    if ((param_1 != 3) &&
       (puVar6 = (undefined8 *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__,
       param_1 != 4)) {
      param_1 = param_1 - 5;
joined_r0x05d9f5a8:
      if (param_1 < 2) {
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_0631f108);
        uVar4 = FUN_04bffdac(uVar4,uVar5,0);
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar5 = thunk_FUN_02b79644();
        FUN_04d7b3f4(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02ba3594(Method_UnityEngineInternal_WebRequestUtils_MakeInitialUrl__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,uVar4);
      }
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar4 = thunk_FUN_02b79644();
      FUN_04cf6044(uVar4,0);
      uVar5 = thunk_FUN_02ba3594(Method_UnityEngineInternal_WebRequestUtils_MakeInitialUrl__);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar5);
    }
  }
  FUN_04bffdac(uVar4,*puVar6,0);
  return;
}



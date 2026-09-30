/*
FUNCTION_NAME: FUN_06358a8c
ENTRY_POINT: 06358a8c
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_06358a8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,void *param_5)

{
  void *__dest;
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_4;
  local_38 = param_3;
  if ((DAT_071cd2bf & 1) == 0) {
    FUN_02f07e70(UnityEngine_InputSystem_Controls_StickControl_var);
    FUN_02f07e70(UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var);
    FUN_02f07e70(PlayFab_ExperimentationModels_StopExperimentRequest_var);
    FUN_02f07e70(System_IO_Stream_var);
    FUN_02f07e70(System_IO_StreamReader_var);
    FUN_02f07e70(System_IO_StreamWriter_var);
    DAT_071cd2bf = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_68 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03b648f8(&local_320,param_2,*(undefined8 *)System_IO_StreamWriter_var,&local_68,
               *(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)PlayFab_ExperimentationModels_StopExperimentRequest_var);
  lVar4 = local_68;
  uStack_58 = uStack_318;
  local_60 = local_320;
  uStack_48 = uStack_308;
  uStack_50 = uStack_310;
  uVar2 = FUN_0628b3b4(&local_60,&local_38,0,0);
  lVar5 = local_68;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_0628b58c(&local_60,&local_40,1,0);
  lVar4 = local_68;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = uVar2;
    memcpy(&local_320,param_5,0x2b8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    __dest = (void *)(lVar4 + 0x20);
    memcpy(__dest,&local_320,0x2b8);
    thunk_FUN_02f411dc(__dest,0);
    if (local_68 != 0) {
      *(long *)(local_68 + 0x2d8) = param_1;
      thunk_FUN_02f411dc(local_68 + 0x2d8,param_1);
      FUN_06282c94(&local_60,0,0);
      puVar1 = System_IO_StreamReader_var;
      lVar4 = *(long *)System_IO_StreamReader_var;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar4);
        lVar4 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar5 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar4);
          lVar4 = *(long *)puVar1;
        }
        uVar2 = **(undefined8 **)(lVar4 + 0xb8);
        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_Controls_StickControl_var)
        ;
        FUN_045fdd18(lVar5,uVar2,*(undefined8 *)System_IO_Stream_var,0);
        plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar3 = lVar5;
        thunk_FUN_02f411dc(plVar3,lVar5);
      }
      FUN_03b64a64(&local_60,lVar5,
                   *(undefined8 *)UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var);
      FUN_0628be4c(&local_60,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



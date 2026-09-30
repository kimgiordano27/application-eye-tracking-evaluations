/*
FUNCTION_NAME: FUN_06357d94
ENTRY_POINT: 06357d94
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2
*/


void FUN_06357d94(long param_1,long param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_071cd2b8 & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_StaticFieldAccessor<TField>_var);
    FUN_02f07e70(Unity_VisualScripting_StaticFunctionInvoker<TResult>_var);
    FUN_02f07e70(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TResult>_var);
    FUN_02f07e70(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TResult>_var);
    FUN_02f07e70(Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TResult>_var
                );
    FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var);
    FUN_02f07e70(
                Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TResult>_var
                );
    FUN_02f07e70(Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3>_var);
    FUN_02f07e70(
                Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                );
    DAT_071cd2b8 = 1;
  }
  local_48 = 0;
  local_80 = 0;
  local_c0 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03b648f8(&local_130,param_2,
               *(undefined8 *)
                Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TResult>_var
               ,&local_48,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TResult>_var);
  uStack_68 = uStack_128;
  local_70 = local_130;
  uStack_58 = uStack_118;
  uStack_60 = local_120;
  local_80 = *(undefined4 *)(param_5 + 0x24);
  uStack_98 = param_5[0x21];
  local_a0 = param_5[0x20];
  uStack_88 = param_5[0x23];
  uStack_90 = param_5[0x22];
  uStack_a8 = param_5[0x1f];
  local_b0 = param_5[0x1e];
  uVar5 = param_5[0x2b];
  FUN_066b5b18(&local_b0,4,0);
  FUN_066b5c2c(&local_b0,0,0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = uStack_90;
  local_100 = local_80;
  uStack_128 = uStack_a8;
  local_130 = uVar5;
  local_b0 = uVar5;
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var + 0xe0) == 0)
  {
    thunk_FUN_02f12b58();
  }
  uStack_168 = uStack_128;
  local_170 = local_130;
  uStack_158 = uStack_118;
  uStack_160 = local_120;
  uStack_148 = uStack_108;
  local_150 = local_110;
  local_140 = local_100;
  uVar5 = FUN_06385084(param_2,&local_170,
                       *(undefined8 *)
                        Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3,_TParam4>_var
                       ,1,0,1,0);
  *param_4 = uVar5;
  FUN_0628b3b4(&local_70,param_4,0,0);
  local_c0 = *(undefined4 *)(param_5 + 0x24);
  uStack_d8 = param_5[0x21];
  local_e0 = param_5[0x20];
  uStack_c8 = param_5[0x23];
  uStack_d0 = param_5[0x22];
  uStack_e8 = param_5[0x1f];
  local_f0 = param_5[0x1e];
  uVar5 = param_5[0x2b];
  FUN_066b5b18(&local_f0,0,0);
  FUN_066b5c2c(&local_f0,param_3,0);
  uStack_198 = uStack_d8;
  local_1a0 = local_e0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  local_180 = local_c0;
  uStack_1a8 = uStack_e8;
  local_1b0 = uVar5;
  local_f0 = uVar5;
  local_f8 = FUN_06385084(param_2,&local_1b0,
                          *(undefined8 *)
                           Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1,_TParam2,_TParam3>_var
                          ,0,0,1,0);
  FUN_0628b58c(&local_70,&local_f8,3,0);
  if (local_48 != 0) {
    *(undefined8 *)(local_48 + 0x10) = *param_5;
    thunk_FUN_02f411dc();
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(local_48 + 0x18) = param_5[0x1b];
    thunk_FUN_02f411dc();
    puVar1 = Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TParam2,_TResult>_var;
    if (local_48 != 0) {
      *(undefined8 *)(local_48 + 0x20) = *param_4;
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar3);
        lVar3 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar4 == 0) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar3);
          lVar3 = *(long *)puVar1;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)
                                    Unity_VisualScripting_StaticFieldAccessor<TField>_var);
        FUN_045fdd18(lVar4,uVar5,
                     *(undefined8 *)
                      Unity_VisualScripting_StaticFunctionInvoker<TParam0,_TParam1,_TResult>_var,0);
        plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar2 = lVar4;
        thunk_FUN_02f411dc(plVar2,lVar4);
      }
      FUN_03b64a64(&local_70,lVar4,
                   *(undefined8 *)Unity_VisualScripting_StaticFunctionInvoker<TResult>_var);
      FUN_0628be4c(&local_70,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}



/*
FUNCTION_NAME: FUN_073f0fe0
ENTRY_POINT: 073f0fe0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void FUN_073f0fe0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_0826981c & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_Repeat_TypeInfo);
    FUN_0373b518(System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_Render2DLightingPass_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_RenderChain_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_RenderChainCommand_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_RenderEvents_TypeInfo);
    FUN_0373b518(Oculus_Platform_Request_TypeInfo);
    FUN_0373b518(System_Net_Cache_RequestCache_TypeInfo);
    FUN_0373b518(System_Net_Cache_RequestCacheBinding_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(System_Net_Cache_RequestCacheLevel_TypeInfo);
    DAT_0826981c = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uVar5 = param_2[6];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075aa744(uVar5,0,0);
  lVar4 = *(long *)(param_1 + 0x68);
  if ((uVar3 & 1) == 0) {
    if ((lVar4 != 0) &&
       (lVar4 = FUN_05b0f530(lVar4,*(undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo),
       lVar4 != 0)) {
      FUN_05667088(&local_88,lVar4,*(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo);
      puVar2 = System_Net_Cache_RequestCache_TypeInfo;
      puVar1 = UnityEngine_UIElements_Repeat_TypeInfo;
      while( true ) {
        uVar3 = FUN_05e3d9d0(&local_88,*(undefined8 *)puVar2);
        if ((uVar3 & 1) == 0) {
          FUN_05e3d9cc(&local_88,*(undefined8 *)Oculus_Platform_Request_TypeInfo);
          return;
        }
        if (local_78 == 0) break;
        local_70 = *param_2;
        uStack_68 = param_2[1];
        local_60 = param_2[2];
        uStack_58 = param_2[3];
        local_50 = param_2[4];
        uStack_48 = param_2[5];
        local_40 = param_2[6];
        FUN_052cf0f8(local_78,&local_70,*(undefined8 *)puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  else if (lVar4 != 0) {
    uVar3 = FUN_05b0f8f4(lVar4,param_2[6],
                         *(undefined8 *)UnityEngine_UIElements_UIR_RenderChain_TypeInfo);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      uVar6 = param_2[6];
      uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_Render2DLightingPass_TypeInfo);
      local_40 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      FUN_052e4314(uVar5,&local_70,1,0,0,
                   *(undefined8 *)
                    System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_TypeInfo);
      if (lVar4 == 0) goto LAB_073f1290;
      FUN_05b0f6ec(lVar4,uVar6,uVar5,*(undefined8 *)UnityEngine_UIElements_UIR_RenderEvents_TypeInfo
                  );
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar4 = FUN_05b0f680(*(long *)(param_1 + 0x68),param_2[6],
                           *(undefined8 *)UnityEngine_UIElements_UIR_RenderChainCommand_TypeInfo);
      if (lVar4 != 0) {
        local_70 = *param_2;
        uStack_68 = param_2[1];
        local_60 = param_2[2];
        uStack_58 = param_2[3];
        local_50 = param_2[4];
        uStack_48 = param_2[5];
        local_40 = param_2[6];
        FUN_052cf0f8(lVar4,&local_70,*(undefined8 *)UnityEngine_UIElements_Repeat_TypeInfo);
        return;
      }
    }
  }
LAB_073f1290:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



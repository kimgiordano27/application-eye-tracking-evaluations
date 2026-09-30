/*
FUNCTION_NAME: FUN_03171de4
ENTRY_POINT: 03171de4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_03171de4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_250 [128];
  undefined1 auStack_1d0 [128];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_0412beff == '\0') {
    FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_01ab69ac(Cysharp_Threading_Tasks_IUniTaskSource<Collider>_TypeInfo);
    FUN_01ab69ac(
                _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo
                );
    DAT_0412beff = '\x01';
  }
  FUN_03112b88(&local_150,*(undefined8 *)Cysharp_Threading_Tasks_IUniTaskSource<Collider>_TypeInfo,0
              );
  uStack_68 = uStack_128;
  local_70 = local_130;
  uStack_58 = uStack_118;
  uStack_60 = uStack_120;
  uStack_88 = uStack_148;
  local_90 = local_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  uStack_c8 = uStack_148;
  local_d0 = local_150;
  uStack_b8 = uStack_138;
  uStack_c0 = uStack_140;
  uStack_a8 = uStack_128;
  local_b0 = local_130;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  uVar3 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<VisualElementFocusChangeTarget>_TypeInfo,
                             &local_d0);
  if (param_2 != 0) {
    FUN_031b46f4(auStack_1d0,param_2 + 0x18,0);
    memcpy(&local_150,auStack_1d0,0x80);
    memcpy(auStack_1d0,&local_150,0x80);
    puVar2 = System_Func<UserRoomTaskPostData>_TypeInfo;
    uVar4 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<UserRoomTaskPostData>_TypeInfo,auStack_1d0
                              );
    memcpy(auStack_250,(void *)(param_1 + 0x70),0x80);
    uVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,auStack_250);
    uVar3 = FUN_025be8b0(*(undefined8 *)
                          _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo
                         ,uVar3,uVar4,uVar5,0);
    FUN_0311e224(uVar3,0);
    FUN_03158d84(param_1,param_2,0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



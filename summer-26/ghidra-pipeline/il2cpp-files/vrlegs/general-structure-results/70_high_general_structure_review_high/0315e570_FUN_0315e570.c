/*
FUNCTION_NAME: FUN_0315e570
ENTRY_POINT: 0315e570
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0315e570(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  puVar3 = Cysharp_Threading_Tasks_IUniTaskSource<Collider>_TypeInfo;
  puVar2 = System_Func<VisualElementFocusChangeTarget>_TypeInfo;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_0412bdec & 1) == 0) {
    FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_01ab69ac(Cysharp_Threading_Tasks_IUniTaskSource<Collider>_TypeInfo);
    FUN_01ab69ac(
                _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo
                );
    DAT_0412bdec = 1;
  }
  FUN_03112b88(&local_160,*(undefined8 *)puVar3,0);
  uStack_78 = uStack_138;
  local_80 = local_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_98 = uStack_158;
  local_a0 = local_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_d8 = uStack_158;
  local_e0 = local_160;
  uStack_c8 = uStack_148;
  uStack_d0 = uStack_150;
  uStack_b8 = uStack_138;
  local_c0 = local_140;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  uVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_e0);
  puVar3 = 
  _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo;
  puVar2 = System_Func<UserRoomTaskPostData>_TypeInfo;
  if (param_2 != 0) {
    FUN_031b46f4(auStack_1e0,param_2 + 0x18,0);
    memcpy(&local_160,auStack_1e0,0x80);
    memcpy(auStack_1e0,&local_160,0x80);
    uVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,auStack_1e0);
    memcpy(auStack_260,(void *)(param_1 + 0x70),0x80);
    uVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,auStack_260);
    uVar4 = FUN_025be8b0(*(undefined8 *)puVar3,uVar4,uVar5,uVar6,0);
    FUN_0311e224(uVar4,0);
    FUN_03158d84(param_1,param_2,0);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



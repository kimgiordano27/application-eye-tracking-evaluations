/*
FUNCTION_NAME: FUN_0345c5d8
ENTRY_POINT: 0345c5d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


void FUN_0345c5d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_0412d745 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0c10);
    FUN_01ab69ac(Unity_Services_Analytics_Internal_SessionManager_TypeInfo);
    FUN_01ab69ac(Fusion_SessionProperty_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<KeyDownEvent>_TypeInfo);
    DAT_0412d745 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = XRIF__Core_Common_PhysicsRigStateSync__Spawned(*(long *)(param_1 + 0x28),0);
  puVar1 = UnityEngine_UIElements_EventBase<KeyDownEvent>_TypeInfo;
  lVar3 = *(long *)UnityEngine_UIElements_EventBase<KeyDownEvent>_TypeInfo;
  if (lVar2 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0345cd1c(0);
    lVar2 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(lVar3,lVar2,
                 *(undefined8 *)Unity_Services_Analytics_Internal_SessionManager_TypeInfo);
    uVar4 = FUN_036c9f78(lVar2,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0c10);
      FUN_02060754(uVar5,0,*(undefined8 *)Fusion_SessionProperty_TypeInfo,0);
      UnityEngine_Yoga_YogaNode__set_Height(lVar2,uVar5,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0345cd1c(lVar2);
    }
  }
  FUN_0345c3c8(param_1,lVar2);
  return;
}



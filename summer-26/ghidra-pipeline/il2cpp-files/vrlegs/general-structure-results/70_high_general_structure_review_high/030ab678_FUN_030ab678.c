/*
FUNCTION_NAME: FUN_030ab678
ENTRY_POINT: 030ab678
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_030ab678(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0412b5bd & 1) == 0) {
    FUN_01ab69ac(System_Action<Scene>_TypeInfo);
    FUN_01ab69ac(System_Action<SetItemBatchResponseResultsInner>_TypeInfo);
    FUN_01ab69ac(System_Action<SignInCodeInfo>_TypeInfo);
    FUN_01ab69ac(System_Action<float>_TypeInfo);
    FUN_01ab69ac(System_Action<SortColumnDescription>_TypeInfo);
    FUN_01ab69ac(System_Action<Speaker>_TypeInfo);
    FUN_01ab69ac(System_Action<SpriteAtlas>_TypeInfo);
    FUN_01ab69ac(System_Action<TMP_TextInfo>_TypeInfo);
    FUN_01ab69ac(System_Action<Task>_TypeInfo);
    FUN_01ab69ac(System_Action<Texture>_TypeInfo);
    FUN_01ab69ac(System_Action<TimerState>_TypeInfo);
    FUN_01ab69ac(System_Action<RoomInfoTaskPostData>_TypeInfo);
    DAT_0412b5bd = 1;
  }
  puVar1 = System_Action<RoomInfoTaskPostData>_TypeInfo;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = *(long *)System_Action<RoomInfoTaskPostData>_TypeInfo;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = System_Action<Scene>_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<SpriteAtlas>_TypeInfo);
      FUN_021de400(lVar6,uVar7,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar4 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar6);
    }
    uVar5 = FUN_01f6d690(uVar5,lVar6,*(undefined8 *)puVar2);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar1;
    }
    puVar2 = System_Action<SignInCodeInfo>_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar3);
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<float>_TypeInfo);
      FUN_021de1ac(lVar6,uVar7,*(undefined8 *)System_Action<Task>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *plVar4 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar6);
    }
    uVar5 = FUN_01f71424(uVar5,lVar6,*(undefined8 *)puVar2);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar3);
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<SortColumnDescription>_TypeInfo);
      FUN_021de1ac(lVar6,uVar7,*(undefined8 *)System_Action<Texture>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *plVar4 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar6);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar3);
      lVar3 = *(long *)puVar1;
    }
    puVar2 = System_Action<SetItemBatchResponseResultsInner>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar3);
        lVar3 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)System_Action<Speaker>_TypeInfo);
      FUN_021de1ac(lVar8,uVar7,*(undefined8 *)System_Action<TimerState>_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      *plVar4 = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar8);
    }
    uVar5 = FUN_01f70a5c(uVar5,lVar6,lVar8,*(undefined8 *)puVar2);
    if (param_2 != 0) {
      FUN_030aa4cc(param_2,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}



/*
FUNCTION_NAME: FUN_098eeec4
ENTRY_POINT: 098eeec4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_098eeec4(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long local_58;
  undefined4 local_44;
  
  puVar4 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
  if ((DAT_0a549027 & 1) == 0) {
    FUN_04447ba8(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    FUN_04447ba8(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_04447ba8(OVRTask<Int32Enum>_TypeInfo);
    FUN_04447ba8(UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f25dc0);
    FUN_04447ba8(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f89348);
    FUN_04447ba8(PTR_DAT_09f8f648);
    DAT_0a549027 = 1;
  }
  local_44 = 0;
  local_58 = 0;
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_09908838(lVar9,param_1,param_2,0);
  puVar4 = UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo;
  if (lVar9 == 0) goto LAB_098ef1dc;
  uVar10 = FUN_09908bc4(lVar9,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar4);
  }
  lVar11 = FUN_098ef240(uVar10);
  puVar3 = PTR_DAT_09f25dc0;
  puVar15 = PTR_DAT_09f92ab0;
  if (lVar11 == 0) {
LAB_098ef200:
    uVar10 = thunk_FUN_044adef4(puVar15);
    thunk_FUN_044adef4(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
    uVar16 = thunk_FUN_0448520c();
    FUN_098ecd84(uVar16,0x57,uVar10);
    uVar10 = thunk_FUN_044adef4(
                               Unity_Netcode_NetworkList_OnListChangedDelegate<NetworkGameManager_NetworkHitResult>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar16,uVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_09f25dc0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar12 = FUN_098d105c(lVar11,0);
  puVar15 = PTR_DAT_09f92ab0;
  if ((uVar12 & 1) == 0) goto LAB_098ef200;
  uVar10 = FUN_09908bec(lVar9,0);
  uVar12 = FUN_07a3bf64(uVar10,&local_44,0);
  uVar5 = local_44;
  puVar15 = PTR_DAT_09f92ab8;
  if ((uVar12 & 1) == 0) goto LAB_098ef200;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar12 = FUN_098ce52c(uVar5,0);
  puVar15 = PTR_DAT_09f92ab8;
  if ((uVar12 & 1) == 0) goto LAB_098ef200;
  lVar13 = FUN_09908be4(lVar9,0);
  if (lVar13 == 0) goto LAB_098ef1dc;
  iVar7 = FUN_078b96cc(lVar13,0x25,0);
  puVar15 = PTR_DAT_09f92ac0;
  if ((iVar7 != -1) ||
     (iVar7 = FUN_078b9674(lVar13,*(undefined8 *)PTR_DAT_09f8f648,4,0), uVar5 = local_44,
     puVar15 = PTR_DAT_09f92ac0, iVar7 != -1)) goto LAB_098ef200;
  uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f89348);
  FUN_088378e0(uVar10,lVar11,uVar5,0);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar11 = *(long *)puVar4;
  }
  if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_098ef1dc;
  uVar12 = FUN_074444a8(**(long **)(lVar11 + 0xb8),uVar10,&local_58,
                        *(undefined8 *)
                         OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
  if ((uVar12 & 1) == 0) {
    uVar8 = FUN_09908bcc(lVar9,0);
    if (param_2 == 0) goto LAB_098ef1dc;
    uVar16 = FUN_098ef324(param_2);
    uVar14 = FUN_098ef380(param_2);
    uVar2 = *(undefined1 *)(param_2 + 0x68);
    lVar11 = thunk_FUN_0448520c(*(undefined8 *)OVRTask<Int32Enum>_TypeInfo);
    FUN_098ec504(lVar11,uVar10,uVar8 & 1,uVar16,uVar14,uVar2);
    lVar13 = *(long *)puVar4;
    local_58 = lVar11;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar13 = *(long *)puVar4;
    }
    if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_098ef1dc;
    FUN_0744298c(**(long **)(lVar13 + 0xb8),uVar10,local_58,
                 *(undefined8 *)UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
  }
  else {
    if (local_58 == 0) goto LAB_098ef1dc;
    cVar1 = *(char *)(local_58 + 0x38);
    bVar6 = FUN_09908bcc(lVar9,0);
    puVar15 = PTR_DAT_09f92aa8;
    if ((cVar1 != '\0') != (bool)(bVar6 & 1)) goto LAB_098ef200;
  }
  if (local_58 != 0) {
    FUN_098ee670(local_58,lVar9);
    return;
  }
LAB_098ef1dc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}



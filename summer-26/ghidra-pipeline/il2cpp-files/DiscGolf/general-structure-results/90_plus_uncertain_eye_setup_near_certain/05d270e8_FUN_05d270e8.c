/*
FUNCTION_NAME: FUN_05d270e8
ENTRY_POINT: 05d270e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d270e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int local_44;
  
  if ((DAT_06dc2f79 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<int>_ReadValueFromState__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_AvatarAnimationsManager_LoopbackState>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_RemoteLoopbackManagerBase_LoopbackState>_get_Key__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_RemoteLoopbackManagerBase_LoopbackState>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<OvrAvatarPrimitive,_OvrAvatarSkinnedRenderable>_get_Value__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<DataObject>>_get_Key__
                );
    FUN_02d965b8(PTR_DAT_06a0e100);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<DataObject>>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<PlayerDataObject>>_get_Key__
                );
    DAT_06dc2f79 = 1;
  }
  puVar1 = Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_05d273cc;
  lVar4 = FUN_05ccbaa0(*(long *)(param_1 + 0x18),
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__,
                       0);
  puVar3 = 
  Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_RemoteLoopbackManagerBase_LoopbackState>_get_Key__
  ;
  if (lVar4 != 0) {
                    /* try { // try from 05d271e0 to 05e271e3 has its CatchHandler @ 05d27254 */
                    /* try { // try from 05d271e4 to 05e271eb has its CatchHandler @ 05d27264 */
    uVar5 = FUN_05370114(lVar4,0x2c,0,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar4);
      lVar4 = *(long *)puVar3;
    }
    puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__;
    puVar8 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar8[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar4);
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo)
      ;
      FUN_03b7820c(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_AvatarAnimationsManager_LoopbackState>_get_Value__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar9;
      LeanTween__value(plVar6,lVar9);
    }
    puVar3 = Method_UnityEngine_InputSystem_InputControl<int>_ReadValueFromState__;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_03636bf8(uVar5,lVar9,*(undefined8 *)puVar3);
    lVar4 = *(long *)(param_1 + 0x18);
    if ((uVar7 & 1) == 0) {
      if (lVar4 == 0) goto LAB_05d273cc;
      uVar10 = *(undefined8 *)puVar1;
      uVar5 = 0;
    }
    else {
      if (lVar4 == 0) goto LAB_05d273cc;
      FUN_05ccbab0(lVar4,*(undefined8 *)puVar1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<DataObject>>_get_Value__
                   ,0);
      lVar4 = *(long *)(param_1 + 0x18);
      uVar5 = FUN_05d26600();
      if (lVar4 == 0) goto LAB_05d273cc;
      FUN_05ccbab0(lVar4,*(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<DataObject>>_get_Key__
                   ,uVar5,0);
      lVar4 = *(long *)(param_1 + 0x18);
      local_44 = *(int *)(param_1 + 0x10) + 1;
      uVar5 = *(undefined8 *)(PTR_DAT_069fb9c0 + 0x50);
      *(int *)(param_1 + 0x10) = local_44;
      uVar5 = thunk_FUN_02dd2d7c(uVar5,&local_44);
      uVar5 = FUN_0536388c(*(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<string,_ChangedOrRemovedLobbyValue<PlayerDataObject>>_get_Key__
                           ,uVar5,0);
      if (lVar4 == 0) goto LAB_05d273cc;
      uVar10 = *(undefined8 *)
                Method_System_Collections_Generic_KeyValuePair<OvrAvatarEntity,_RemoteLoopbackManagerBase_LoopbackState>_get_Value__
      ;
    }
    FUN_05ccbab0(lVar4,uVar10,uVar5,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_05ccbab0(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_06a0e100,
                 *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0);
    lVar4 = *(long *)(param_1 + 0x18);
    uVar5 = FUN_05d276d0(lVar4);
    if (lVar4 != 0) {
      FUN_05ccbab0(lVar4,*(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<OvrAvatarPrimitive,_OvrAvatarSkinnedRenderable>_get_Value__
                   ,uVar5,0);
      return;
    }
  }
LAB_05d273cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



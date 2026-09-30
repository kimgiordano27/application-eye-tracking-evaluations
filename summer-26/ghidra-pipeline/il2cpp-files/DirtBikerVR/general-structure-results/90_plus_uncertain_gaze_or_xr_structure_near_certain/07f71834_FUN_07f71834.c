/*
FUNCTION_NAME: FUN_07f71834
ENTRY_POINT: 07f71834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07f71834(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int local_24;
  
  if ((DAT_0899b4da & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo);
    FUN_03a8a718(PTR_DAT_084959c8);
    FUN_03a8a718(TextChatUI_<SendScrollRectToBottom>d__26_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                );
                    /* try { // try from 07f718a4 to 080718af has its CatchHandler @ 07f71938 */
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_XmlUrlResolver_<GetEntityAsync>d__15>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
                );
                    /* try { // try from 07f718d0 to 080718e3 has its CatchHandler @ 07f71940 */
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_SubscribeRequest>__ctor__);
    DAT_0899b4da = 1;
  }
                    /* try { // try from 07f718e4 to 08071923 has its CatchHandler @ 07f717ac */
  if (param_2 >> 0x20 == 4) {
    FUN_07f6a1c4(param_1,param_2 & 0xffffffff);
    return;
  }
  local_24 = (int)param_2;
  if (local_24 < 0x60002) {
    if (local_24 == 0x60000) {
      plVar6 = (long *)FUN_0586e8e4(param_1 + 0x20,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                                   );
      puVar2 = UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo;
      if (param_3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo + 0x130)
        ;
        if (*(byte *)(*param_3 + 0x130) < bVar1) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo) {
            plVar9 = (long *)0x0;
          }
        }
        *plVar6 = (long)plVar9;
        lVar7 = *(long *)puVar2;
        if (*(byte *)(lVar7 + 0x130) <= *(byte *)(*param_3 + 0x130)) {
          lVar3 = *(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8;
          goto LAB_07f71c5c;
        }
        goto LAB_07f71c4c;
      }
      lVar3 = *plVar6;
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar4 = FUN_07ea4bc4(0);
    }
    else {
                    /* try { // try from 07f71924 to 08071927 has its CatchHandler @ 07f7193c */
      if (local_24 != 0x60001) {
LAB_07f719c8:
        uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__,
                                   &local_24);
        uVar4 = FUN_065c412c(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_SubscribeRequest>__ctor__
                             ,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c5065c(uVar4,0);
        return;
      }
                    /* try { // try from 07f71928 to 0807195b has its CatchHandler @ 07f717ac */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07f718a4 with catch @ 07f71938
                        */
      lVar3 = FUN_0586e8e4(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                          );
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07f71924 with catch @ 07f7193c
                        */
      if (param_3 != (long *)0x0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07f718d0 with catch @ 07f71940
                        */
        lVar7 = *(long *)UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo;
        uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
                    /* try { // try from 07f7195c to 0807195f has its CatchHandler @ 07f7196c */
        if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
            plVar9 = (long *)0x0;
          }
        }
        plVar6 = (long *)(lVar3 + 8);
        *plVar6 = (long)plVar9;
        goto LAB_07f71c3c;
      }
      lVar3 = *(long *)(lVar3 + 8);
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar4 = FUN_07ea4c3c(0);
    }
    FUN_04766888(lVar3,uVar4,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
                );
  }
  else {
                    /* catch() { ... } // from try @ 07f7195c with catch @ 07f7196c */
                    /* try { // try from 07f71970 to 08071977 has its CatchHandler @ 07f71980 */
    if (local_24 == 0x60002) {
      lVar3 = FUN_0586e8e4(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                          );
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar5 = FUN_07ea4cb4(0);
        FUN_0476681c(uVar4,uVar5,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                    );
        goto LAB_07f71c6c;
      }
      lVar7 = *(long *)PTR_DAT_084959c8;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
      plVar6 = (long *)(lVar3 + 0x10);
      *plVar6 = (long)plVar9;
    }
    else {
                    /* try { // try from 07f71978 to 08071983 has its CatchHandler @ 07f717ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07f71970 with catch @ 07f71980
                        */
      if (local_24 != 0x60003) goto LAB_07f719c8;
      lVar3 = FUN_0586e8e4(param_1 + 0x20,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                          );
      if (param_3 == (long *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar5 = FUN_07ea4d2c(0);
        FUN_047667c8(uVar4,uVar5,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_XmlUrlResolver_<GetEntityAsync>d__15>__
                    );
        goto LAB_07f71c6c;
      }
      lVar7 = *(long *)TextChatUI_<SendScrollRectToBottom>d__26_TypeInfo;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x130);
      if (*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_3;
        if (*(long *)(*(long *)(*param_3 + 200) + uVar8 * 8 + -8) != lVar7) {
          plVar9 = (long *)0x0;
        }
      }
      plVar6 = (long *)(lVar3 + 0x18);
      *plVar6 = (long)plVar9;
    }
LAB_07f71c3c:
    if ((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar8) {
LAB_07f71c4c:
      param_3 = (long *)0x0;
    }
    else {
      lVar3 = *(long *)(*param_3 + 200) + uVar8 * 8;
LAB_07f71c5c:
      if (*(long *)(lVar3 + -8) != lVar7) {
        param_3 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(plVar6,param_3);
  }
LAB_07f71c6c:
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x48),0);
  return;
}



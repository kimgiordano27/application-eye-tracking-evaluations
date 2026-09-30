/*
FUNCTION_NAME: FUN_07810b98
ENTRY_POINT: 07810b98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07810b98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_07d9abb8;
  if ((DAT_08272315 & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<NetworkAnimatorStateChangeHandler_ParameterUpdate>_get_Current__
                );
    FUN_0373b518(PTR_DAT_07d9aac8);
    FUN_0373b518(PTR_DAT_07d9aba0);
    FUN_0373b518(PTR_DAT_07d9a460);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<NetworkAnimatorStateChangeHandler_TriggerUpdate>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<NetworkAnimatorStateChangeHandler_TriggerUpdate>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d9abb8);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    FUN_0373b518(PTR_DAT_07d99b98);
    FUN_0373b518(Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_Dispose__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<NetworkMessageManager_MessageWithHandler>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d99bc8);
    FUN_0373b518(Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<NetworkMessageManager_MessageWithHandler>_get_Current__
                );
    DAT_08272315 = 1;
  }
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_0775de28(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_Dispose__;
    thunk_FUN_037aeb94();
    *(long *)(param_1 + 0xa0) = lVar4;
    thunk_FUN_037aeb94((long *)(param_1 + 0xa0),lVar4);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_0775de28(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) =
           *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_MoveNext__;
      thunk_FUN_037aeb94();
      *(undefined4 *)(lVar4 + 0x40) = 10;
      *(long *)(param_1 + 0xa8) = lVar4;
      thunk_FUN_037aeb94((long *)(param_1 + 0xa8),lVar4);
      lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
      FUN_0775de28(lVar4,0);
      puVar1 = PTR_DAT_07d9a460;
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) =
             *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<NetworkMessageManager_MessageWithHandler>_MoveNext__
        ;
        thunk_FUN_037aeb94();
        *(undefined4 *)(lVar4 + 0x40) = 0;
        *(long *)(param_1 + 0xb0) = lVar4;
        thunk_FUN_037aeb94((long *)(param_1 + 0xb0),lVar4);
        lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_07751d04(lVar4,0);
        puVar3 = 
        Method_System_Collections_Generic_List_Enumerator<NetworkAnimatorStateChangeHandler_TriggerUpdate>_MoveNext__
        ;
        puVar2 = 
        Method_System_Collections_Generic_List_Enumerator<NetworkAnimatorStateChangeHandler_TriggerUpdate>_Dispose__
        ;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) =
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<NetworkMessageManager_MessageWithHandler>_get_Current__
          ;
          thunk_FUN_037aeb94();
          *(undefined1 *)(lVar4 + 0x40) = 0;
          *(long *)(param_1 + 0xb8) = lVar4;
          thunk_FUN_037aeb94((long *)(param_1 + 0xb8),lVar4);
          lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
          FUN_05625bd4(lVar4,*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07d99bc8;
            thunk_FUN_037aeb94();
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(long *)(param_1 + 0xc0) = lVar4;
            thunk_FUN_037aeb94((long *)(param_1 + 0xc0),lVar4);
            lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
            FUN_07751d04(lVar4,0);
            puVar1 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07d99b98;
              thunk_FUN_037aeb94();
              *(undefined1 *)(lVar4 + 0x40) = 0;
              *(long *)(param_1 + 200) = lVar4;
              thunk_FUN_037aeb94((long *)(param_1 + 200),lVar4);
              FUN_0562f4a8(param_1,*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}



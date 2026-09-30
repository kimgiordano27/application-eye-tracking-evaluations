/*
FUNCTION_NAME: FUN_033cb8f0
ENTRY_POINT: 033cb8f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_033cb8f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_38;
  float local_34;
  
  if ((DAT_048324c3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRNetwork_FrameHeader>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_Marshal_StructureToPtr<OVRNetwork_FrameHeader>__
                      );
    DAT_048324c3 = 1;
  }
  uVar2 = FUN_033a5d08(param_2,0,0);
  puVar6 = (undefined8 *)
           Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRNetwork_FrameHeader>__;
  if ((((uVar2 & 1) != 0) ||
      (lVar3 = FUN_0338b1cc(param_2,0),
      puVar6 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__,
      lVar3 == 0)) || (uVar2 = *(ulong *)(lVar3 + 0x18), uVar2 == 0)) {
LAB_033cba30:
    return *puVar6;
  }
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      if ((uint)uVar2 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar9 = *(long *)(lVar3 + 0x20 + lVar8 * 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_0340e364(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x20),1,0);
      puVar1 = 
      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
      if ((uVar2 & 1) != 0) {
        local_34 = *(float *)(lVar9 + 0x28);
        if (local_34 < *(float *)(param_1 + 0x38)) {
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                     ,&local_34);
          local_38 = *(undefined4 *)(param_1 + 0x38);
          uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
          uVar4 = FUN_0340f334(*(undefined8 *)
                                Method_System_Runtime_InteropServices_Marshal_StructureToPtr<OVRNetwork_FrameHeader>__
                               ,uVar7,uVar4,uVar5,0);
          return uVar4;
        }
        puVar6 = *(undefined8 **)
                  (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                  0xb8);
        goto LAB_033cba30;
      }
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)*(uint *)(lVar3 + 0x18));
  }
  uVar4 = FUN_0340ebc0(*(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__,
                       *(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                       ,0);
  return uVar4;
}



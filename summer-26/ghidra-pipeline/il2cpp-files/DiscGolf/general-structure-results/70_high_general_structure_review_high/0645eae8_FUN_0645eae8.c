/*
FUNCTION_NAME: FUN_0645eae8
ENTRY_POINT: 0645eae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_0645eae8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_06dcce38 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<Quaternion>__)
    ;
    FUN_02d965b8(Method_System_Net_Http_HttpClient_<SendAsyncWorker>d__47_MoveNext__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__);
    DAT_06dcce38 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_04ef1e2c(*(long *)(param_1 + 0x20),param_2,&local_30,
                         *(undefined8 *)
                          Method_System_Net_Http_HttpClient_<SendAsyncWorker>d__47_MoveNext__);
    if ((uVar1 & 1) != 0) {
      FUN_06460950(&local_30);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_04ef1864(*(long *)(param_1 + 0x20),param_2,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<Quaternion>__
                  );
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_03c232ec(*(long *)(param_1 + 0x28),param_2,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__)
        ;
        *(undefined1 *)(param_1 + 0x38) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



/*
FUNCTION_NAME: FUN_019fe31c
ENTRY_POINT: 019fe31c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_019fe31c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0377a8a9 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(WiltingPlant_<HealCoroutine>d__23_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5957);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<Vector2>__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<LeaderboardList>__ctor__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a8a9 = 1;
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_02681b9c(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                                );
      if ((lVar3 != 0) &&
         (FUN_011c181c(lVar3,param_1,
                       *(undefined8 *)Method_Oculus_Platform_Request<LeaderboardList>__ctor__,0),
         puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar5 != 0)) {
        FUN_01301a0c(lVar5,lVar3,*(undefined8 *)StringLiteral_5957);
        lVar5 = *(long *)(param_1 + 0x18);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar3 != 0) &&
           (FUN_016f27fc(lVar3,param_1,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<Vector2>__
                         ,0), lVar5 != 0)) {
          FUN_01301b6c(lVar5,lVar3,*(undefined8 *)WiltingPlant_<HealCoroutine>d__23_TypeInfo);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  return;
}



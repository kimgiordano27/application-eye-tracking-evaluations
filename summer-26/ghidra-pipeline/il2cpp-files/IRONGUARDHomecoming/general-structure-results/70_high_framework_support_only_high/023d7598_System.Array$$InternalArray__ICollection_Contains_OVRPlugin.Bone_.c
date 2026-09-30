/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 023d7598
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000028;
  
  if (param_1 != 0) {
    lVar1 = FUN_0390b70c(param_1,0);
    lVar2 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) =
             *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
        thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x20));
        uVar3 = FUN_0359ff90();
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28),uVar3);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) =
                 *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
            thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x30));
            in_stack_00000028._4_2_ = (undefined2)unaff_x21[7];
            uVar3 = FUN_0332bb08((long)&stack0x00000028 + 4,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                                );
            if (3 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x38) = uVar3;
              thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x38),uVar3);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) =
                     *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                thunk_FUN_01f51358();
                uVar3 = FUN_0340efe8(lVar2,0);
                if (lVar1 != 0) {
                  FUN_0390b840(lVar1,uVar3,0);
                  (**(code **)(*unaff_x21 + 0x5e8))();
                  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
                  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    lVar1 = FUN_01ecaf44();
                  }
                  uVar3 = FUN_01f08890(lVar1,0);
                  *unaff_x19 = uVar3;
                  thunk_FUN_01f51358();
                  return 0;
                }
                goto LAB_023d7810;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_023d7810:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



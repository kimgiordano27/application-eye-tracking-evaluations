/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector2f>
ENTRY_POINT: 023d7d08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector2f>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
  uStack0000000000000000 = **(undefined8 **)(param_1 + 0x760);
  uStack0000000000000010 = 0xc;
  uStack0000000000000008 = 0xffffffffffffffff;
  uVar1 = FUN_0359ff90();
  if (1 < *(uint *)(unaff_x24 + -8)) {
    *(undefined8 *)(unaff_x23 + 0x28) = uVar1;
    thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x28),uVar1);
    if (2 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x30));
      in_stack_00000028._4_2_ = (undefined2)unaff_x21[7];
      uVar1 = FUN_0332bb08((long)&stack0x00000028 + 4,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                          );
      if (3 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x38) = uVar1;
        thunk_FUN_01f51358((undefined8 *)(unaff_x23 + 0x38),uVar1);
        if (4 < *(uint *)(unaff_x23 + 0x18)) {
          *(undefined8 *)(unaff_x23 + 0x40) =
               *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
          thunk_FUN_01f51358();
          FUN_0340efe8();
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0390b840();
          (**(code **)(*unaff_x21 + 0x5e8))();
          lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01ecaf44();
          }
          uVar1 = FUN_01f08890(lVar2,0);
          *unaff_x19 = uVar1;
          thunk_FUN_01f51358();
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}



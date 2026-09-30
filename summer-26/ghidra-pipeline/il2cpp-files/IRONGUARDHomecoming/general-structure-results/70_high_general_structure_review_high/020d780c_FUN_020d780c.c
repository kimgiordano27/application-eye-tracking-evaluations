/*
FUNCTION_NAME: FUN_020d780c
ENTRY_POINT: 020d780c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020d780c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((DAT_0482fa16 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<GameObject>_GetResult__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0482fa16 = 1;
  }
  FUN_037d89dc(param_1,0);
  lVar4 = FUN_040703d4(param_1,0);
  if (lVar4 != 0) {
    uVar5 = FUN_0233642c(lVar4,*(undefined8 *)
                                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                        );
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    thunk_FUN_01f51358();
    lVar4 = FUN_040703d4(param_1,0);
    puVar3 = Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__;
    puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__;
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (lVar4 != 0) {
      uVar5 = FUN_023361c8(lVar4,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<GameObject>_GetResult__
                          );
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_023aa59c(*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      thunk_FUN_01f51358();
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_0404b8fc(uVar5,0);
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = uVar5;
      thunk_FUN_01f51358(puVar6,uVar5);
      FUN_020d7698(param_1);
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_0404c740(*(long *)(param_1 + 0x68),*puVar6,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}



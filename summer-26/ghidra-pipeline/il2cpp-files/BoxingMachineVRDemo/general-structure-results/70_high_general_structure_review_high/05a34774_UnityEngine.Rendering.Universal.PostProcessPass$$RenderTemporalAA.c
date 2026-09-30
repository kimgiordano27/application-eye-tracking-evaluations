/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$RenderTemporalAA
ENTRY_POINT: 05a34774
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_PostProcessPass__RenderTemporalAA(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_06b811e7 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__);
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<NativeArray<XREraseAnchorResult>>_SetStateMachine__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_visualInput__);
    DAT_06b811e7 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_visualInput__;
  if (param_2 != 0) {
    **(undefined4 **)
      (*(long *)
        Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<NativeArray<XREraseAnchorResult>>_SetStateMachine__
      + 0xb8) = *(undefined4 *)(param_2 + 0x20);
    lVar2 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__);
      FUN_03ef8924(lVar5,uVar6,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar5;
      thunk_FUN_02dd37b4(plVar3,lVar5);
    }
    if (((lVar4 != 0) &&
        (lVar2 = FUN_03aacafc(lVar4,lVar5,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__),
        lVar2 != 0)) && (*(long *)(lVar2 + 0x18) != 0)) {
      FUN_0424d2c0(*(long *)(lVar2 + 0x18),param_2,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



/*
FUNCTION_NAME: FUN_058b5a04
ENTRY_POINT: 058b5a04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058b5a04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
  puVar1 = Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__;
  if ((DAT_066d322d & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__);
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    DAT_066d322d = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_2);
  lVar3 = FUN_03197dbc(param_1,*(undefined8 *)puVar2);
  plVar6 = (long *)(param_1 + 0x70);
  *plVar6 = lVar3;
  thunk_FUN_02bb0e9c(plVar6,lVar3);
  uVar4 = FUN_03172a30(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  thunk_FUN_02bb0e9c();
  if (*plVar6 != 0) {
    uVar5 = FUN_0580fb98(*plVar6,0);
    if ((uVar5 & 1) == 0) {
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x058b5b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x5e8))
                  (plVar6,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30),
                   *(undefined8 *)(*plVar6 + 0x5f0));
        return;
      }
    }
    else if ((*(long *)(param_1 + 0x68) != 0) &&
            (lVar3 = FUN_05c89410(*(long *)(param_1 + 0x68),0), lVar3 != 0)) {
      FUN_05c8cb28(lVar3,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



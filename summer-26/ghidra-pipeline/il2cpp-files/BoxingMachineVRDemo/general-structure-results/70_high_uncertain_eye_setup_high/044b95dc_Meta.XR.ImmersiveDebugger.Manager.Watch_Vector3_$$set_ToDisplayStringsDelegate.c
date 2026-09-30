/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 044b95dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long *unaff_x22;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(lVar4);
  }
  lVar4 = thunk_FUN_02d9d438();
  if (lVar4 != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      FUN_02d9a2e0(lVar4);
    }
    lVar4 = thunk_FUN_02d9d438();
    if (lVar4 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0(lVar4);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_02d9d688();
        uVar3 = *puVar2;
        uVar1 = puVar2[1];
        lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02d9a2e0(lVar4);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar4 + 0x40)) {
          puVar2 = (undefined8 *)thunk_FUN_02d9d688();
                    /* WARNING: Could not recover jumptable at 0x044b96d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_2 + 0x198))
                            (param_2,uVar3,uVar1,*puVar2,puVar2[1],*(undefined8 *)(*param_2 + 0x1a0)
                            );
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
  }
  FUN_05027654(2,0);
  return 0;
}



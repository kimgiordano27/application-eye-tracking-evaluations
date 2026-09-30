/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 065565ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer
               (long param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  plVar2 = (long *)FUN_067f0150(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x98));
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x198))
                      (plVar2,*param_2,param_3 & 0xffffffff,*(undefined8 *)(*plVar2 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    plVar2 = (long *)FUN_067f0150(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb8));
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x198))
                        (plVar2,param_2[1],param_3 >> 0x20,*(undefined8 *)(*plVar2 + 0x1a0));
      if (iVar1 != 0) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      plVar2 = (long *)FUN_067f0150(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd8));
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06556678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x198))(plVar2,param_2[2],param_4,*(undefined8 *)(*plVar2 + 0x1a0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



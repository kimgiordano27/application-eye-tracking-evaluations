/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$Setup
ENTRY_POINT: 060112e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__Setup(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  iVar1 = (**(code **)(*param_1 + 0x198))
                    (param_1,*(undefined1 *)(unaff_x20 + 1),*(byte *)(unaff_x19 + 1) & 1,
                     *(undefined8 *)(*param_1 + 0x1a0));
  if (iVar1 != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  plVar3 = (long *)FUN_066d6f90(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x100));
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x198))
                      (plVar3,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x19 + 8),
                       *(undefined8 *)(*plVar3 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    plVar3 = (long *)FUN_066d6f90(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x120));
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0601137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x198))
                (plVar3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*plVar3 + 0x1a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


